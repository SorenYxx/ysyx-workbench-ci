CROSS_COMPILE := riscv64-linux-gnu-
CC = $(CROSS_COMPILE)gcc
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump

CFLAGS = -march=rv32im -mabi=ilp32 -O2 -nostdlib -nostartfiles -ffreestanding
LDFLAGS = -T linker.ld -nostdlib -nostartfiles -static -Wl,--nmagic

all: char-test.bin

char-test.elf: start.o char-test.o linker.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ start.o char-test.o

start.o: start.S
	$(CC) $(CFLAGS) -c -o $@ $<

char-test.o: ../char-test.c
	$(CC) $(CFLAGS) -c -o $@ $<

char-test.bin: char-test.elf
	$(OBJCOPY) -O binary $< $@
	$(OBJDUMP) -d $< > char-test.txt

clean:
	rm -f *.o *.elf *.bin *.txt
