ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } > flash AT> flash : text

  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > flash AT> flash

  .data : {
    _data_lma = LOADADDR(.data);
    _data_vma = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } > sram AT> flash : data

  edata = .;
  _data = .;

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > sram

  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
