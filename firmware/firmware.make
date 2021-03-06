#             __________               __   ___.
#   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
#   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
#   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
#   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
#                     \/            \/     \/    \/            \/
# $Id$
#

INCLUDES += -I$(call convpath, $(FIRMDIR)) -I$(call convpath, $(FIRMDIR)/export) -I$(call convpath, $(FIRMDIR)/drivers) \
			-I$(call convpath, $(FIRMDIR)/include) -I$(call convpath, $(FIRMDIR)/kernel/include)
ifndef APP_TYPE
INCLUDES += -I$(call convpath, $(FIRMDIR)/libc/include)
endif

include $(FIRMDIR)/asm/asm.make


FIRMLIB_SRC += $(call preprocess, $(FIRMDIR)/SOURCES)
FIRMLIB_OBJ := $(call c2obj, $(FIRMLIB_SRC))
ifeq (,$(findstring -DARCHOS_PLAYER,$(TARGET)))
    FIRMLIB_OBJ += $(BUILDDIR)/sysfont.o
endif
OTHER_SRC += $(FIRMLIB_SRC)

FIRMLIB = $(BUILDDIR)/firmware/libfirmware.a

SYSFONT = $(ROOTDIR)/fonts/08-Schumacher-Clean.bdf

CLEANOBJS += $(BUILDDIR)/sysfont.* $(BUILDDIR)/version.*

# Limits for the built-in sysfont: ASCII for bootloaders, ISO8859-1 for normal builds
ifneq (,$(findstring -DBOOTLOADER,$(EXTRA_DEFINES)))
	MAXCHAR = 127
else
	MAXCHAR = 255
endif

$(FIRMLIB): $(FIRMLIB_OBJ)
	$(SILENT)$(shell rm -f $@)
	$(call PRINTS,AR $(@F))$(AR) rcs $(call convpath, $@) $(call convpath, $^) >/dev/null

#Build sysfont.h here for cygwin
DUMMY := $(shell $(TOOLSDIR)/convbdf -l $(MAXCHAR) -h -o $(BUILDDIR)/sysfont.h $(SYSFONT))

$(BUILDDIR)/sysfont.h: $(SYSFONT) $(TOOLS) $(BUILDDIR)/firmware/common/config.o
	$(call PRINTS,CONVBDF $(subst $(ROOTDIR)/,,$<))$(TOOLSDIR)/convbdf -l $(MAXCHAR) -h -o $@ $<

$(BUILDDIR)/sysfont.o: $(SYSFONT) $(BUILDDIR)/sysfont.h
	$(call PRINTS,CONVBDF $(subst $(ROOTDIR)/,,$<))$(TOOLSDIR)/convbdf -l $(MAXCHAR) -c -o $(BUILDDIR)/sysfont.c $<
	$(call PRINTS,CC $(subst $(ROOTDIR)/,,$(BUILDDIR)/sysfont.c))$(CC) $(CFLAGS) -c $(call convpath, $(BUILDDIR)/sysfont.c) -o $(call convpath, $@)

SVNVERSION:=$(shell $(TOOLSDIR)/version.sh $(ROOTDIR))
OLDSVNVERSION:=$(shell grep 'RBVERSION' $(BUILDDIR)/rbversion.h 2>/dev/null|cut -d '"' -f 2 || echo "NOREVISION")

ifneq ($(SVNVERSION),$(OLDSVNVERSION))
.PHONY: $(BUILDDIR)/rbversion.h
endif

#Force generate rbversion.h
DUMMY := $(shell $(TOOLSDIR)/genversion.sh $(BUILDDIR) $(TOOLSDIR)/version.sh $(ROOTDIR))

$(BUILDDIR)/rbversion.h:
	$(call PRINTS,GEN $(@F))$(TOOLSDIR)/genversion.sh $(BUILDDIR) $(TOOLSDIR)/version.sh $(ROOTDIR)
