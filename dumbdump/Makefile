OBJS = dumbdump.o eevtypes.o keysyms.o
INCL = ../include/eev.h ../include/eevtypes.h ../include/keysyms.h
OUT = dumbdump

CFLAGS += -Wall
override CFLAGS += -I../include

all: $(OUT)

eevtypes.o: ../common/eevtypes.c
	$(CC) $(CFLAGS)   -c -o $@ $<

keysyms.o: ../common/keysyms.c
	$(CC) $(CFLAGS)   -c -o $@ $<

dumbdump.c: $(INCL)

dumbdump: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	$(RM) -rf $(OUT) $(OBJS)

.PHONY: all clean
