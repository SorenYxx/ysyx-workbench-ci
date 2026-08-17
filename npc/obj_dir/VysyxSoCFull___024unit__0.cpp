// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void finish_sim();

void VysyxSoCFull___024unit____Vdpiimwrap_finish_sim_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_finish_sim_TOP____024unit\n"); );
    // Body
    finish_sim();
}

extern "C" void ftrace_print(int pc, int target, int rd, int rs1);

void VysyxSoCFull___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ftrace_print_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int target__Vcvt;
    target__Vcvt = target;
    int rd__Vcvt;
    rd__Vcvt = rd;
    int rs1__Vcvt;
    rs1__Vcvt = rs1;
    ftrace_print(pc__Vcvt, target__Vcvt, rd__Vcvt, rs1__Vcvt);
}

extern "C" int pmem_read(int raddr);

void VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, int wmask);

void VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    int wmask__Vcvt;
    wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void is_illegal_inst();

void VysyxSoCFull___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit\n"); );
    // Body
    is_illegal_inst();
}

extern "C" void get_reg(int waddr, int r);

void VysyxSoCFull___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_get_reg_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int r__Vcvt;
    r__Vcvt = r;
    get_reg(waddr__Vcvt, r__Vcvt);
}

extern "C" void get_csr(int csr, int data);

void VysyxSoCFull___024unit____Vdpiimwrap_get_csr_TOP____024unit(IData/*31:0*/ csr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_get_csr_TOP____024unit\n"); );
    // Body
    int csr__Vcvt;
    csr__Vcvt = csr;
    int data__Vcvt;
    data__Vcvt = data;
    get_csr(csr__Vcvt, data__Vcvt);
}

extern "C" void get_cpu_state(int lsu_get_data, int lsu_w_data, int exu_done, int alu_we, int csr_we, int cpu_jump, int cpu_branch, int icache_hit, int icache_miss, int icache_miss_latency);

void VysyxSoCFull___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(IData/*31:0*/ lsu_get_data, IData/*31:0*/ lsu_w_data, IData/*31:0*/ exu_done, IData/*31:0*/ alu_we, IData/*31:0*/ csr_we, IData/*31:0*/ cpu_jump, IData/*31:0*/ cpu_branch, IData/*31:0*/ icache_hit, IData/*31:0*/ icache_miss, IData/*31:0*/ icache_miss_latency) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit\n"); );
    // Body
    int lsu_get_data__Vcvt;
    lsu_get_data__Vcvt = lsu_get_data;
    int lsu_w_data__Vcvt;
    lsu_w_data__Vcvt = lsu_w_data;
    int exu_done__Vcvt;
    exu_done__Vcvt = exu_done;
    int alu_we__Vcvt;
    alu_we__Vcvt = alu_we;
    int csr_we__Vcvt;
    csr_we__Vcvt = csr_we;
    int cpu_jump__Vcvt;
    cpu_jump__Vcvt = cpu_jump;
    int cpu_branch__Vcvt;
    cpu_branch__Vcvt = cpu_branch;
    int icache_hit__Vcvt;
    icache_hit__Vcvt = icache_hit;
    int icache_miss__Vcvt;
    icache_miss__Vcvt = icache_miss;
    int icache_miss_latency__Vcvt;
    icache_miss_latency__Vcvt = icache_miss_latency;
    get_cpu_state(lsu_get_data__Vcvt, lsu_w_data__Vcvt, exu_done__Vcvt, alu_we__Vcvt, csr_we__Vcvt, cpu_jump__Vcvt, cpu_branch__Vcvt, icache_hit__Vcvt, icache_miss__Vcvt, icache_miss_latency__Vcvt);
}

extern "C" void cpu_trace(int pc, int inst);

void VysyxSoCFull___024unit____Vdpiimwrap_cpu_trace_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_cpu_trace_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int inst__Vcvt;
    inst__Vcvt = inst;
    cpu_trace(pc__Vcvt, inst__Vcvt);
}

extern "C" void ifu_trace(int pc, int inst);

void VysyxSoCFull___024unit____Vdpiimwrap_ifu_trace_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ifu_trace_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int inst__Vcvt;
    inst__Vcvt = inst;
    ifu_trace(pc__Vcvt, inst__Vcvt);
}

extern "C" void sdram_trace(int addr, int data, int is_write);

void VysyxSoCFull___024unit____Vdpiimwrap_sdram_trace_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ is_write) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sdram_trace_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int is_write__Vcvt;
    is_write__Vcvt = is_write;
    sdram_trace(addr__Vcvt, data__Vcvt, is_write__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = (data__Vcvt);
}
