ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

ENTRY(_start)
PHDRS {
    text PT_LOAD;
    data PT_LOAD;
    bss PT_LOAD;
}

SECTIONS {
    /* _pmem_start and _entry_offset are defined in LDFLAGS */
    . = _pmem_start + _entry_offset;

    /* 文本段 */
    .text : {
        *(entry)
        *(.text*)
    } : text

    etext = .;
    _etext = .;

    /* 只读数据段 */
    .rodata : {
        *(.rodata*)
    }

    /* RT-Thread 额外数据段 */
    .data.extra : {
        /* Finsh shell 符号表 */
        __fsymtab_start = .;
        KEEP(*(FSymTab))
        __fsymtab_end = .;
        . = ALIGN(8);

        __vsymtab_start = .;
        KEEP(*(VSymTab))
        __vsymtab_end = .;
        . = ALIGN(8);

        /* RT-Thread 初始化段 */
        __rt_init_start = .;
        KEEP(*(SORT(.rti_fn*)))
        __rt_init_end = .;
        . = ALIGN(8);

        /* 测试用例表 */
        __rt_utest_tc_tab_start = .;
        KEEP(*(UtestTcTab))
        __rt_utest_tc_tab_end = .;
        . = ALIGN(8);
        
         __am_apps_data_start = .;
        *(__am_apps.data*)
        *(__am_apps.sdata*)
        __am_apps_data_end = .;
        . = ALIGN(8);
    } : data

    /* 主数据段 */
    .data : {
        *(.data)
        *(.data*)
    } : data

    edata = .;
    _data = .;

    /* RT-Thread 额外 BSS 段 */
    .bss.extra : {
        . = ALIGN(8);
        __am_apps_bss_start = .;
        *(__am_apps.bss*)
        *(__am_apps.sbss*)
        *(__am_apps.scommon*)
        __am_apps_bss_end = .;
        . = ALIGN(8);
    } : bss

    /* 主 BSS 段 */
    .bss : {
        _bss_start = .;
        *(.bss*)
        *(.sbss*)
        *(.scommon)
        _bss_end = .;
    } : bss

    /* 栈和堆设置 */
    _stack_top = ALIGN(0x1000);
    . = _stack_top + 0x8000;
    _stack_pointer = .;

    /* 堆设置 */
    _heap_start = ALIGN(0x1000);
    end = .;
    _end = .;
}

