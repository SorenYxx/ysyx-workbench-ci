// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_IFU_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_IFU_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_IFU final {
public:
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_OUT8(__PVT__ifu_idu_valid,0,0);
VL_IN8(__PVT__idu_ifu_ready,0,0);
VL_IN8(__PVT__exu_flush,0,0);
VL_IN8(__PVT__cpu_ifu_arready,0,0);
VL_OUT8(__PVT__ifu_cpu_arvalid,0,0);
VL_OUT8(__PVT__ifu_cpu_arid,3,0);
VL_OUT8(__PVT__ifu_cpu_arlen,7,0);
VL_OUT8(__PVT__ifu_cpu_arsize,2,0);
VL_OUT8(__PVT__ifu_cpu_arburst,1,0);
VL_IN8(__PVT__cpu_ifu_rvalid,0,0);
VL_OUT8(__PVT__ifu_cpu_rready,0,0);
VL_IN8(__PVT__cpu_ifu_rresp,1,0);
VL_IN8(__PVT__cpu_ifu_rid,3,0);
VL_IN8(__PVT__cpu_ifu_rlast,0,0);
CData/*1:0*/ __PVT__state;
CData/*0:0*/ __PVT__arvalid_q;
CData/*0:0*/ __PVT__flush_ar_sent;
CData/*0:0*/ __PVT__ar_flag;
CData/*0:0*/ __PVT__handshake_ar;
CData/*0:0*/ __PVT__handshake_r;
CData/*6:0*/ __PVT__opcode;
CData/*0:0*/ __PVT__branch;
CData/*0:0*/ __PVT__jump;
CData/*0:0*/ __PVT__flush_flag;
CData/*1:0*/ __Vdly__state;
CData/*0:0*/ __Vdly__arvalid_q;
CData/*0:0*/ __Vdly__flush_flag;
CData/*0:0*/ __Vdly__flush_ar_sent;
CData/*0:0*/ __Vdly__ifu_idu_valid;
VL_OUT(__PVT__ifu_idu_pc,31,0);
VL_OUT(__PVT__ifu_idu_inst,31,0);
VL_IN(__PVT__exu_flush_pc,31,0);
VL_OUT(__PVT__ifu_cpu_araddr,31,0);
VL_IN(__PVT__cpu_ifu_rdata,31,0);
IData/*31:0*/ __PVT__araddr_q;
IData/*31:0*/ __PVT__inst;
IData/*31:0*/ __PVT__imm_B;
IData/*31:0*/ __PVT__imm_J;
IData/*31:0*/ __PVT__next_pc;
IData/*31:0*/ __Vdly__araddr_q;
IData/*31:0*/ __Vdly__ifu_idu_pc;
IData/*31:0*/ __Vdly__ifu_idu_inst;
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_IFU() = default;
~Vysyx_26010027_ysyx_26010027_IFU() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_IFU);
void __Vconfigure(bool first);
};


#endif  // guard
