#include <am.h>
#include <klib-macros.h>
#include <stdio.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define SERIAL_PORT 0x10000000

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  *(volatile uint8_t *)SERIAL_PORT = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

void _trm_init() {
  /* int vendor_id, arch_id;
  char num[4];

  asm volatile("csrr %0, mvendorid" : "=r"(vendor_id));
  asm volatile("csrr %0, marchid"   : "=r"(arch_id));

  for (int i = 0; i < 4; i ++) num[i] = (vendor_id >> (8 * i)) & 0xFF;
  for (int i = 3; i >= 0; i --) printf("%c", num[i]);
  printf("\n");
  printf("---- NPC ID: %08x ----\n", arch_id);
  */

  int ret = main(mainargs);
  halt(ret);
}
