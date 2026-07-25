#include <am.h>
#include <klib-macros.h>
#include <stdio.h>

extern char _heap_start;
int main(const char *args);

#define SRAM_BASE 0x0f000000
#define SRAM_SIZE 0x2000
#define SRAM_TOP  (SRAM_BASE + SRAM_SIZE)
#define SERIAL_PORT 0x10000000

Area heap = RANGE(&_heap_start, SRAM_TOP);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  *(uint8_t *)SERIAL_PORT = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
