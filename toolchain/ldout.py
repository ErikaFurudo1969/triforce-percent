import sys
import os
from shutil import copyfile

def find_symbol(map, sym):
    map.seek(0)
    for l in map:
        l = l.strip()
        toks = [t for t in l.split(' ') if t]
        if len(toks) != 2:
            continue
        if toks[1] != sym:
            continue
        print('Found symbol ' + sym + ' at address ' + toks[0])
        return int(toks[0], 16)
    print('Could not find token ' + sym + ' in map file')
    return None

def find_start_end(map, find_end):
    map.seek(0)
    ret = None
    for l in map:
        l = l.strip()
        toks = [t for t in l.split(' ') if t]
        if len(toks) != 3:
            continue
        def end_of_section(toks):
            return ((int(toks[1], 16) + int(toks[2], 16)) + 15) & 0xFFFFFFFFFFFFFFF0
        if find_end:
            if toks[0] == '.bss':
                print('Found end of BSS at ' + toks[1] + ' length ' + toks[2])
                ret = end_of_section(toks)
            elif toks[0] == '.scommon':
                print('Found end of SCommon at ' + toks[1] + ' length ' + toks[2])
                return end_of_section(toks)
        else:
            if toks[0] != '.start':
                continue
            print('Found start at ' + toks[1] + ' length (unused) ' + toks[2])
            return int(toks[1], 16)
    if ret is not None:
        print('Did not find SCommon, giving end of BSS')
        return ret
    print('Could not find', 'end of BSS' if find_end else 'start')
    return None

def ldout(map, outin, out):
    for l in outin:
        l = l.strip()
        if not l:
            continue
        assert(l[-1] == ';')
        l = l[:-1]
        toks = l.split(' ')
        assert(len(toks) == 3)
        assert(toks[1] == '=')
        a = None
        if toks[0].endswith('_START'):
            a = find_start_end(map, False)
        elif toks[0].endswith('_END'):
            a = find_start_end(map, True)
        else:
            a = find_symbol(map, toks[0])
        if not a:
            raise RuntimeError
        out.write(toks[0] + ' = ' + hex(a) + ';\n')

if __name__ == '__main__':
    assert(sys.argv[1].endswith('.map'))
    assert(sys.argv[2].endswith('.out.ld'))
    with open(sys.argv[1], 'r') as map, open(sys.argv[2], 'r') as outin, open(sys.argv[2] + '.tmp', 'w') as out:
        ldout(map, outin, out)
    os.remove(sys.argv[2])
    copyfile(sys.argv[2] + '.tmp', sys.argv[2])
    os.remove(sys.argv[2] + '.tmp')
