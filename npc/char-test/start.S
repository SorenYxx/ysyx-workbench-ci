# SRAM base 0x0f000000, size 0x2000, top = 0x0f002000
.equ SRAM_TOP, 0x0f002000

.section .text.entry, "ax"
.globl _start
.type _start, @function

_start:
  la sp, SRAM_TOP
  call main
  j .

.size _start, . - _start
