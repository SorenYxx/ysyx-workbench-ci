# SRAM 0x0f000000, size 0x2000, top = 0x0f002000
.equ SRAM_TOP, 0x0f002000

.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, SRAM_TOP
  call _trm_init

.size _start, . - _start
