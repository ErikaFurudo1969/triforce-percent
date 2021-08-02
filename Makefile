include toolchain/make/main.mk

CONTENTS = actor/ anim/ music/ scene/ textures/
SUBDIRS = toolchain/ $(CONTENTS) loader/ statics/ bootstrap/ rom-setup/
DUMP = build-romhack/project.zzrpl

.PHONY: default clean $(SUBDIRS)

default: $(SUBDIRS)
	@echo "Done building"

clean: $(SUBDIRS)
	@echo "Done cleaning"

actor/: toolchain/ $(DUMP) statics/ scene/

scene/: $(DUMP)

statics/: anim/ loader/ textures/

bootstrap/: loader/

rom-setup/: statics/ $(CONTENTS)

%project.zzrpl: %oot_1.0U_uncomp.z64 toolchain/zzrtl/oot_dump.rtl
	cp toolchain/zzrtl/oot_dump.rtl $*oot_dump.rtl
	$(ZZRTL) $*oot_dump.rtl
	touch $*update.txt

$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)
