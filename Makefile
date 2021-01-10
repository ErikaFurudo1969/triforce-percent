ifeq ("$(wildcard local.mk)","")
    $(error You have not read README.md, please do so)
endif

include local.mk
export

ifeq ("$(and $(wildcard build-shortcut/oot_1.0U_uncomp.z64), $(wildcard build-romhack/oot_1.0U_uncomp.z64))","")
    $(error Original ROMs not found, please read README.md)
endif

CONTENTS = actor/ music/ scene/ textures/
SUBDIRS = toolchain/ $(CONTENTS) loader/ bootstrap/ rom-setup/
DUMPS = build-shortcut/project.zzrpl build-romhack/project.zzrpl

.PHONY: default clean $(SUBDIRS)

default: $(SUBDIRS)

clean: $(SUBDIRS)
	find build-romhack/ build-shortcut/ -mindepth 1 -maxdepth 1 ! -name 'oot_1.0U_uncomp.z64' -exec rm -rf {} +

actor/: $(DUMPS) loader/

scene/: $(DUMPS)

bootstrap/: loader/
    
rom-setup/: loader/ $(CONTENTS)

%project.zzrpl: %oot_1.0U_uncomp.z64 toolchain/zzrtl/oot_dump.rtl
	cp toolchain/zzrtl/oot_dump.rtl $*oot_dump.rtl
	cp toolchain/zzrtl/oot_names.tsv $*oot_names.tsv
	$(ZZRTL) $*oot_dump.rtl
	touch $*update.txt

$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)
