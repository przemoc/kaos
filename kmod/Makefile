KDIR := /lib/modules/$(shell uname -r)/build
CWD := $(shell pwd)

all: module

module:
	$(MAKE) -C $(KDIR) M=$(CWD)/src modules

clean:
	$(MAKE) -C $(KDIR) M=$(CWD)/src clean

load: module
	insmod ./src/siev.ko

unload:
	rmmod siev

.PHONY: all module clean load unload
