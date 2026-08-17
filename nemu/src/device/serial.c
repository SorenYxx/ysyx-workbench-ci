/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <utils.h>
#include <device/map.h>
#include <unistd.h>
#include <poll.h>

/* http://en.wikibooks.org/wiki/Serial_Programming/8250_UART_Programming */
// NOTE: this is compatible to 16550

#define UART_RX   0  // Receiver Buffer (read)
#define UART_TX   0  // Transmit Holding Buffer (write)
#define UART_LSR  5  // Line Status Register (read)
// LSR bits
#define LSR_DR  0x01  // Data Ready
#define LSR_THRE 0x20 // Transmit Holding Register Empty
#define LSR_TEMT 0x40 // Transmitter Empty

static uint8_t *serial_base = NULL;

static void serial_putc(char ch) {
  MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
}

// 非阻塞检查 host stdin 是否有输入
static bool serial_has_input() {
  struct pollfd pfd = { .fd = STDIN_FILENO, .events = POLLIN };
  return (poll(&pfd, 1, 0) > 0) && (pfd.revents & POLLIN);
}

// 非阻塞读一个字符, 无输入返回 0xff
static uint8_t serial_getc() {
  uint8_t ch = 0xff;
  if (serial_has_input() && read(STDIN_FILENO, &ch, 1) == 1) {
    return ch;
  }
  return 0xff;
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 1);
  if (is_write) {
    // 写 TX 输出字符; 其余写寄存器(LCR/DLL/DLM/IER...)忽略
    if (offset == UART_TX) serial_putc(serial_base[0]);
  } else {
    switch (offset) {
      case UART_RX:  // 读接收缓冲
        serial_base[offset] = serial_getc();
        break;
      case UART_LSR: // 读线路状态: bit5/6 恒 1(发送空), bit0=有接收数据
        serial_base[offset] = LSR_THRE | LSR_TEMT | (serial_has_input() ? LSR_DR : 0);
        break;
      default:       // 其余读寄存器返回 0
        serial_base[offset] = 0;
        break;
    }
  }
}

void init_serial() {
  serial_base = new_space(8);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("serial", CONFIG_SERIAL_PORT, serial_base, 8, serial_io_handler);
#else
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
#endif

}
