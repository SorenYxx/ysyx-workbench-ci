// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

extern "C" void get_reg(int waddr, int r);

void Vminirv___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_get_reg_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int r__Vcvt;
    r__Vcvt = r;
    get_reg(waddr__Vcvt, r__Vcvt);
}

extern "C" void is_illegal_inst();

void Vminirv___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit\n"); );
    // Body
    is_illegal_inst();
}

extern "C" int csr_read(int addr);

void Vminirv___024unit____Vdpiimwrap_csr_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &csr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_csr_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int csr_read__Vfuncrtn__Vcvt;
    csr_read__Vfuncrtn__Vcvt = csr_read(addr__Vcvt);
    csr_read__Vfuncrtn = (csr_read__Vfuncrtn__Vcvt);
}

extern "C" void csr_write(int addr, int data);

void Vminirv___024unit____Vdpiimwrap_csr_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_csr_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    csr_write(addr__Vcvt, data__Vcvt);
}

extern "C" int isa_raise_intr(int NO, int epc);

void Vminirv___024unit____Vdpiimwrap_isa_raise_intr_TOP____024unit(IData/*31:0*/ NO, IData/*31:0*/ epc, IData/*31:0*/ &isa_raise_intr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_isa_raise_intr_TOP____024unit\n"); );
    // Body
    int NO__Vcvt;
    NO__Vcvt = NO;
    int epc__Vcvt;
    epc__Vcvt = epc;
    int isa_raise_intr__Vfuncrtn__Vcvt;
    isa_raise_intr__Vfuncrtn__Vcvt = isa_raise_intr(NO__Vcvt, epc__Vcvt);
    isa_raise_intr__Vfuncrtn = (isa_raise_intr__Vfuncrtn__Vcvt);
}

extern "C" void ebreak();

void Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void ftrace_print(int pc, int target, int rd, int rs1);

void Vminirv___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_ftrace_print_TOP____024unit\n"); );
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

void Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

void Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wmask__Vcvt;
    wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
