// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_26010027__DPI_H_
#define VERILATED_VYSYX_26010027__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_26010027.v:9:30
    extern void cpu_trace(int pc, int inst);
    // DPI import at vsrc/ysyx_26010027.v:1:30
    extern void finish_sim();
    // DPI import at vsrc/ysyx_26010027.v:2:30
    extern void ftrace_print(int pc, int target, int rd, int rs1);
    // DPI import at vsrc/ysyx_26010027.v:8:30
    extern void get_cpu_state(int lsu_get_data, int lsu_w_data, int exu_done, int alu_we, int csr_we, int cpu_jump, int cpu_branch, int icache_hit, int icache_miss, int icache_miss_latency);
    // DPI import at vsrc/ysyx_26010027.v:7:30
    extern void get_csr(int csr, int data);
    // DPI import at vsrc/ysyx_26010027.v:6:30
    extern void get_reg(int waddr, int r);
    // DPI import at vsrc/ysyx_26010027.v:10:30
    extern void ifu_trace(int pc, int inst);
    // DPI import at vsrc/ysyx_26010027.v:5:30
    extern void is_illegal_inst();
    // DPI import at vsrc/ysyx_26010027.v:3:30
    extern int pmem_read(int raddr);
    // DPI import at vsrc/ysyx_26010027.v:4:30
    extern void pmem_write(int waddr, int wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
