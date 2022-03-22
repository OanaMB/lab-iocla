 CFLAGS = -fno-PIC -m32 -g
 LDFLAGS = -nostdinc -nostdlib -no-pie -m32
AS = nasm
ASFLAGS = -f elf32

.DEFAULT_GOAL: all

.PHONY: all clean

all: hello

hello: hello.o start.o puts.o

hello.o: hello.c
	#ld -static -m elf_i386 -L/usr/lib/gcc/x86_64-linux-gnu/7/32/ -o $@ /usr/lib32/crt1.o /usr/lib32/crti.o $^ --start-group -lc -lgcc -lgcc_eh --end-group /usr/lib32/crtn.o
	ld -static -m elf_i386 -o hello ~/Desktop/iocla/laborator/lab-03/01-one-tut/c-standalone/start.o ~/Desktop/iocla/laborator/lab-03/01-one-tut/c-standalone/puts.o hello.o 
start.o: start.asm
	$(AS) $(ASFLAGS) -o $@ $<

puts.o: puts.asm
	$(AS) $(ASFLAGS) -o $@ $<

clean:
	-rm -f hello hello.o start.o puts.o
	-rm -f *~
