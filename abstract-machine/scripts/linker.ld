ENTRY(_start)

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  psram : ORIGIN = 0x80000000, LENGTH = 512M
  sdram : ORIGIN = 0xa0000000, LENGTH = 512M
}

SECTIONS {
  . = _pmem_start + _entry_offset;

  .entry : {
    KEEP(*(entry))
  } > flash

  _ssbl_vma = ORIGIN(sram);
  .ssbl _ssbl_vma : {
    *(ssbl)
    _ssbl_end = .;
  } > sram AT> flash
  _ssbl_lma = LOADADDR(.ssbl);

  _copy_vma = ORIGIN(psram);
  . = _copy_vma;

  .text : {
    *(.text*)
    . = ALIGN(., 8);
  } > psram AT> flash
  _copy_lma = LOADADDR(.text);

  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(., 8);
  } > psram AT> flash

  .data : {
    *(.data*)
    *(.sdata*)
    _copy_end = .;
  } > psram AT> flash

  edata = .;
  _data = .;

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > psram

  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
