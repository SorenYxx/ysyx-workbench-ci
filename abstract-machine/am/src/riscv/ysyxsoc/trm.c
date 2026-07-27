#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <string.h>

extern char _heap_start;
int main(const char *args);

#define SRAM_BASE 0x0f000000
#define SRAM_SIZE 0x2000
#define SRAM_TOP  (SRAM_BASE + SRAM_SIZE)
#define UART_BASE 0x10000000

Area heap = RANGE(&_heap_start, SRAM_TOP);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

// 除数寄存器
void uart_init() {
  *(volatile uint8_t *) (UART_BASE + 3) = 0x80; // 设置 DLAB = 1
  *(volatile uint8_t *) (UART_BASE + 0) = 0x1B; // DLL
  *(volatile uint8_t *) (UART_BASE + 1) = 0x00; // DLH
  *(volatile uint8_t *) (UART_BASE + 3) = 0x03; // DLAB = 0, 8N1
  // *(volatile uint8_t *) (UART_BASE + 1) = 0x00; // 禁用中断
}

void putch(char ch) {
  // while (!(*(volatile uint8_t *) (UART_BASE + 5) & 0x20)); // 等待 TX FIFO empty
  *(volatile uint8_t *)UART_BASE = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

void _trm_init() {
  // ----- bootloader -----
  extern char _data_lma, _data_vma, _data_end;
  extern char _bss_start, _stack_top;
  size_t data_size = &_data_end - &_data_vma;
  memcpy(&_data_vma, &_data_lma, data_size);

  // 清 .bss
  for (char *p = &_bss_start; p < &_stack_top; p++) *p = 0;
  // ----------------------

  // uart_init();  // 串口初始化

  int ret = main(mainargs);
  halt(ret);
}
