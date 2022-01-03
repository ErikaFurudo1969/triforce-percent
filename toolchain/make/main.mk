SELF_PATH := $(shell echo "$(MAKEFILE_LIST)" | sed -e "s/.*Makefile //")
PROJECT_DIR := $(dir $(SELF_PATH))../..

ifeq ("$(wildcard $(PROJECT_DIR)/local.mk)","")
    $(error You have not read README.md, please do so)
endif

ifeq ("$(and $(wildcard $(PROJECT_DIR)/build-shortcut/oot_1.0U_comp.z64), $(wildcard $(PROJECT_DIR)/build-romhack/oot_1.0U_uncomp.z64))","")
    $(error Original ROMs not found, please read README.md)
endif

ifeq ("$(wildcard $(PROJECT_DIR)/toolchain/ZAP2/Makefile)","")
    $(error You did not properly set up the Git submodules (ZAP2 makefile not found))
endif

include $(PROJECT_DIR)/local.mk

ifeq ($(PYTHON3),"")
	$(error Python3 command definition missing from local.mk)
endif

# Disables built-in rules (e.g. how to make .o from .c)
.SUFFIXES:
#empty

# Paths

MAININCLUDEDIR := $(PROJECT_DIR)/include
Z64HDRMAINDIR := $(PROJECT_DIR)/include/z64hdr
Z64HDRINCLUDEDIR := $(PROJECT_DIR)/include/z64hdr/include
OOTMAINH := $(PROJECT_DIR)/include/ootmain.h
OOTMAINLD := $(PROJECT_DIR)/include/ootmain.ld
ACTORLD := $(PROJECT_DIR)/include/z64hdr/common/z64hdr_actor.ld
STATICDATADIR := $(PROJECT_DIR)/build-romhack/staticdata


# Main tools

CC = $(MIPS64PREFIX)gcc
AS = $(MIPS64PREFIX)as
LD = $(MIPS64PREFIX)ld
OC = $(MIPS64PREFIX)objcopy

# Main flags

CCOPTFLAGS := -mips3 -mabi=32 -mtune=vr4300 -mfix4300 -mno-gpopt -fomit-frame-pointer \
	-mno-check-zero-division -mno-explicit-relocs -mno-memcpy \
	-fno-toplevel-reorder -fno-reorder-blocks -fno-builtin \
	--std=gnu99 -Wall -Werror -Wno-main \
	-Wbuiltin-declaration-mismatch -Wbuiltin-macro-redefined \
	-G 0 -Os
CCFLAGS := $(CCOPTFLAGS) -I $(MAININCLUDEDIR) -I $(Z64HDRMAINDIR) -I $(Z64HDRINCLUDEDIR)
# loader and statics had -O2 instead of -Os

LDFLAGS := --emit-relocs -L $(MAININCLUDEDIR) -T $(OOTMAINLD)
OCFLAGS := -R .MIPS.abiflags -O binary

# Other tools

NOVL := $(PROJECT_DIR)/toolchain/novl/novl
ZAPD := $(PROJECT_DIR)/toolchain/ZAP2/ZAPD.out
YAZ0 := $(PROJECT_DIR)/toolchain/yaz0/yaz0_encode
CREATE_PATCH := $(PYTHON3) $(PROJECT_DIR)/toolchain/create_patch.py
