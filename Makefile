PREFIX := $(DESTDIR)/usr/local
KAOS_DIR := $(PREFIX)
KAOS_BINDIR := $(KAOS_DIR)/bin

DEBUGFS_DIR := /sys/kernel/debug

INSTALL := install -c -o root -g 0
INSTALL_PROGRAM := $(INSTALL) -m 755

all: kmod kaos
clean: clean-kmod clean-kaos
distclean: clean-kmod distclean-kaos clean-dumbdump

kaos clean-kaos distclean-kaos: src/Makefile

src/Makefile: src/kaos.pro
	cd src && qmake

kmod:
	$(MAKE) -C kmod

load:
	$(MAKE) -C kmod load

unload:
	$(MAKE) -C kmod unload

clean-kmod:
	$(MAKE) -C kmod clean

kaos:
	$(MAKE) -C src

start: kaos
	src/kaos $(DEBUGFS_DIR) &

stop:
	killall kaos

clean-kaos:
	$(MAKE) -C src clean

distclean-kaos:
	$(MAKE) -C src distclean

dumbdump:
	$(MAKE) -C dumbdump

clean-dumbdump:
	$(MAKE) -C dumbdump clean

install: kaos
	$(INSTALL_PROGRAM) src/kaos $(KAOS_BINDIR)/kaos

uninstall:
	$(RM) $(KAOS_BINDIR)/kaos

.PHONY: all clean distclean kmod load unload clean-kmod kaos start stop \
        clean-kaos distclean-kaos dumbdump clean-dumbdump install uninstall
