// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_CSR_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_CSR_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_CSR final {
public:
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__csr_ecall,0,0);
VL_IN8(__PVT__csr_mret,0,0);
VL_IN8(__PVT__csr_we,0,0);
VL_IN16(__PVT__csr_raddr,11,0);
VL_IN16(__PVT__csr_waddr,11,0);
VL_IN(__PVT__csr_wdata,31,0);
VL_OUT(__PVT__csr_rdata,31,0);
VL_OUT(__PVT__csr_mtvec,31,0);
VL_OUT(__PVT__csr_mepc,31,0);
VL_IN(__PVT__pc,31,0);
IData/*31:0*/ __PVT__mvendorid;
IData/*31:0*/ __PVT__marchid;
IData/*31:0*/ __PVT__mstatus;
IData/*31:0*/ __PVT__mtvec;
IData/*31:0*/ __PVT__mepc;
IData/*31:0*/ __PVT__mcause;
IData/*31:0*/ __PVT__mcycle;
IData/*31:0*/ __PVT__mcycleh;
IData/*31:0*/ __Vdly__mstatus;
IData/*31:0*/ __Vdly__mtvec;
IData/*31:0*/ __Vdly__mepc;
IData/*31:0*/ __Vdly__mcause;
QData/*63:0*/ __PVT__mc;
QData/*63:0*/ __Vdly__mc;
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_CSR() = default;
~Vysyx_26010027_ysyx_26010027_CSR() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_CSR);
void __Vconfigure(bool first);
};


#endif  // guard
