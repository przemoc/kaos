OBJS = dumbdump.o sievtypes.o keysyms.o
INCL = ../include/siev.h ../include/sievtypes.h ../include/keysyms.h
OUT = dumbdump

CFLAGS += -Wall
override CFLAGS += -I../include

all: $(OUT)

sievtypes.o: ../common/sievtypes.c
	$(CC) $(CFLAGS)   -c -o $@ $<

keysyms.o: ../common/keysyms.c
	$(CC) $(CFLAGS)   -c -o $@ $<

dumbdump.c: $(INCL)

dumbdump: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	$(RM) -rf $(OUT) $(OBJS)

.PHONY: all clean
