// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMINIRV__DPI_H_
#define VERILATED_VMINIRV__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/EXU.v:1:29
    extern int csr_read(int addr);
    // DPI import at vsrc/EXU.v:2:30
    extern void csr_write(int addr, int data);
    // DPI import at vsrc/minirv.v:1:30
    extern void ebreak();
    // DPI import at vsrc/minirv.v:2:30
    extern void ftrace_print(int pc, int target, int rd, int rs1);
    // DPI import at vsrc/GPR.v:1:30
    extern void get_reg(int waddr, int r);
    // DPI import at vsrc/IDU.v:1:30
    extern void is_illegal_inst();
    // DPI import at vsrc/EXU.v:3:29
    extern int isa_raise_intr(int NO, int epc);
    // DPI import at vsrc/IFU.v:1:29
    extern int pmem_read(int raddr);
    // DPI import at vsrc/LSU.v:1:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
