// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_LSU_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_LSU_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_LSU final {
public:
// Anonymous structures to workaround compiler member-count bugs
struct {
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__exu_lsu_mem_w,1,0);
VL_IN8(__PVT__exu_lsu_mem_r,2,0);
VL_IN8(__PVT__exu_lsu_valid,0,0);
VL_OUT8(__PVT__lsu_exu_ready,0,0);
VL_IN8(__PVT__exu_lsu_reg_w,0,0);
VL_IN8(__PVT__exu_lsu_rf_res,1,0);
VL_IN8(__PVT__exu_lsu_waddr,4,0);
VL_IN8(__PVT__exu_lsu_csr_we,0,0);
VL_IN8(__PVT__exu_lsu_csr_ecall,0,0);
VL_IN8(__PVT__exu_lsu_csr_mret,0,0);
VL_IN8(__PVT__wbu_lsu_ready,0,0);
VL_OUT8(__PVT__lsu_wbu_valid,0,0);
VL_OUT8(__PVT__lsu_wbu_reg_w,0,0);
VL_OUT8(__PVT__lsu_wbu_rf_res,1,0);
VL_OUT8(__PVT__lsu_wbu_waddr,4,0);
VL_OUT8(__PVT__lsu_wbu_csr_we,0,0);
VL_OUT8(__PVT__lsu_wbu_csr_ecall,0,0);
VL_OUT8(__PVT__lsu_wbu_csr_mret,0,0);
VL_OUT8(__PVT__lsu_load_inflight,0,0);
VL_IN8(__PVT__cpu_lsu_arready,0,0);
VL_OUT8(__PVT__lsu_cpu_arvalid,0,0);
VL_OUT8(__PVT__lsu_cpu_arid,3,0);
VL_OUT8(__PVT__lsu_cpu_arlen,7,0);
VL_OUT8(__PVT__lsu_cpu_arsize,2,0);
VL_OUT8(__PVT__lsu_cpu_arburst,1,0);
VL_OUT8(__PVT__lsu_cpu_rready,0,0);
VL_IN8(__PVT__cpu_lsu_rvalid,0,0);
VL_IN8(__PVT__cpu_lsu_rresp,1,0);
VL_IN8(__PVT__cpu_lsu_rid,3,0);
VL_IN8(__PVT__cpu_lsu_rlast,0,0);
VL_OUT8(__PVT__lsu_cpu_awvalid,0,0);
VL_OUT8(__PVT__lsu_cpu_awid,3,0);
VL_OUT8(__PVT__lsu_cpu_awlen,7,0);
VL_OUT8(__PVT__lsu_cpu_awsize,2,0);
VL_OUT8(__PVT__lsu_cpu_awburst,1,0);
VL_IN8(__PVT__cpu_lsu_awready,0,0);
VL_OUT8(__PVT__lsu_cpu_wstrb,3,0);
VL_OUT8(__PVT__lsu_cpu_wvalid,0,0);
VL_OUT8(__PVT__lsu_cpu_wlast,0,0);
VL_IN8(__PVT__cpu_lsu_wready,0,0);
VL_IN8(__PVT__cpu_lsu_bresp,1,0);
VL_IN8(__PVT__cpu_lsu_bvalid,0,0);
VL_OUT8(__PVT__lsu_cpu_bready,0,0);
VL_IN8(__PVT__cpu_lsu_bid,3,0);
CData/*0:0*/ __PVT__l_busy;
CData/*1:0*/ __PVT__l_mem_w;
CData/*2:0*/ __PVT__l_mem_r;
CData/*0:0*/ __PVT__mem_done;
CData/*0:0*/ __PVT__is_load;
CData/*0:0*/ __PVT__is_store;
CData/*0:0*/ __PVT__mem_op;
CData/*2:0*/ __PVT__state_w;
CData/*1:0*/ __PVT__state_r;
CData/*0:0*/ __PVT__load_q;
CData/*0:0*/ __PVT__store_q;
CData/*0:0*/ __PVT__handshake_aw;
CData/*0:0*/ __PVT__handshake_w;
CData/*0:0*/ __PVT__handshake_ar;
CData/*0:0*/ __PVT__handshake_r;
CData/*0:0*/ __PVT__handshake_b;
CData/*2:0*/ __Vdly__state_w;
CData/*1:0*/ __Vdly__state_r;
};
struct {
CData/*0:0*/ __Vdly__l_busy;
CData/*0:0*/ __Vdly__mem_done;
CData/*0:0*/ __Vdly__lsu_wbu_reg_w;
CData/*1:0*/ __Vdly__lsu_wbu_rf_res;
CData/*4:0*/ __Vdly__lsu_wbu_waddr;
CData/*0:0*/ __Vdly__lsu_wbu_csr_we;
CData/*0:0*/ __Vdly__lsu_wbu_csr_ecall;
CData/*0:0*/ __Vdly__lsu_wbu_csr_mret;
CData/*1:0*/ __Vdly__l_mem_w;
CData/*2:0*/ __Vdly__l_mem_r;
VL_IN16(__PVT__exu_lsu_csr_waddr,11,0);
VL_OUT16(__PVT__lsu_wbu_csr_waddr,11,0);
SData/*11:0*/ __Vdly__lsu_wbu_csr_waddr;
VL_IN(__PVT__exu_lsu_mem_addr,31,0);
VL_IN(__PVT__exu_lsu_wdata,31,0);
VL_IN(__PVT__exu_lsu_pc,31,0);
VL_IN(__PVT__exu_lsu_snpc,31,0);
VL_IN(__PVT__exu_lsu_inst,31,0);
VL_IN(__PVT__exu_lsu_alu_result,31,0);
VL_IN(__PVT__exu_lsu_csr_wdata,31,0);
VL_OUT(__PVT__lsu_wbu_pc,31,0);
VL_OUT(__PVT__lsu_wbu_snpc,31,0);
VL_OUT(__PVT__lsu_wbu_inst,31,0);
VL_OUT(__PVT__lsu_wbu_alu_result,31,0);
VL_OUT(__PVT__lsu_wbu_mem_result,31,0);
VL_OUT(__PVT__lsu_wbu_csr_wdata,31,0);
VL_OUT(__PVT__lsu_cpu_araddr,31,0);
VL_IN(__PVT__cpu_lsu_rdata,31,0);
VL_OUT(__PVT__lsu_cpu_awaddr,31,0);
VL_OUT(__PVT__lsu_cpu_wdata,31,0);
IData/*31:0*/ __PVT__l_mem_addr;
IData/*31:0*/ __PVT__l_wdata;
IData/*31:0*/ __PVT__wdata_shifted;
IData/*31:0*/ __PVT__rdata_shifted;
IData/*31:0*/ __PVT__mem_rdata;
IData/*31:0*/ __Vdly__lsu_wbu_pc;
IData/*31:0*/ __Vdly__lsu_wbu_snpc;
IData/*31:0*/ __Vdly__lsu_wbu_inst;
IData/*31:0*/ __Vdly__lsu_wbu_alu_result;
IData/*31:0*/ __Vdly__lsu_wbu_mem_result;
IData/*31:0*/ __Vdly__lsu_wbu_csr_wdata;
IData/*31:0*/ __Vdly__l_mem_addr;
IData/*31:0*/ __Vdly__l_wdata;
};
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_LSU() = default;
~Vysyx_26010027_ysyx_26010027_LSU() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_LSU);
void __Vconfigure(bool first);
};


#endif  // guard
