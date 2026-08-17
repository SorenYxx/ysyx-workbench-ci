#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inl(KBD_ADDR);

  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}

void __am_uart_input(AM_UART_RX_T *uart) {
  if (inb(MMIO_BASE) & 0x01) uart->data = inb(MMIO_BASE);
  else uart->data = 0xff;
}