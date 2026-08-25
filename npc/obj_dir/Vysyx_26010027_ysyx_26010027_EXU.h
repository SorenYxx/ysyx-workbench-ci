// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_EXU_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_EXU_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_EXU final {
public:
// Anonymous structures to workaround compiler member-count bugs
struct {
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__idu_exu_valid,0,0);
VL_OUT8(__PVT__exu_idu_ready,0,0);
VL_IN8(__PVT__idu_exu_alu_op,3,0);
VL_IN8(__PVT__idu_exu_mem_w,1,0);
VL_IN8(__PVT__idu_exu_mem_r,2,0);
VL_IN8(__PVT__idu_exu_alu_arc1,0,0);
VL_IN8(__PVT__idu_exu_alu_arc2,0,0);
VL_IN8(__PVT__idu_exu_reg_w,0,0);
VL_IN8(__PVT__idu_exu_rf_res,1,0);
VL_IN8(__PVT__idu_exu_waddr,4,0);
VL_IN8(__PVT__idu_exu_jump,1,0);
VL_IN8(__PVT__idu_exu_branch,2,0);
VL_IN8(__PVT__idu_exu_fencei,0,0);
VL_IN8(__PVT__idu_exu_csr_we,0,0);
VL_IN8(__PVT__idu_exu_csr_ecall,0,0);
VL_IN8(__PVT__idu_exu_csr_mret,0,0);
VL_IN8(__PVT__lsu_exu_ready,0,0);
VL_OUT8(__PVT__exu_lsu_valid,0,0);
VL_OUT8(__PVT__exu_lsu_mem_w,1,0);
VL_OUT8(__PVT__exu_lsu_mem_r,2,0);
VL_OUT8(__PVT__exu_lsu_reg_w,0,0);
VL_OUT8(__PVT__exu_lsu_rf_res,1,0);
VL_OUT8(__PVT__exu_lsu_waddr,4,0);
VL_OUT8(__PVT__exu_lsu_csr_we,0,0);
VL_OUT8(__PVT__exu_lsu_csr_ecall,0,0);
VL_OUT8(__PVT__exu_lsu_csr_mret,0,0);
VL_OUT8(__PVT__exu_flush,0,0);
VL_IN8(__PVT__lsu_wbu_valid,0,0);
VL_IN8(__PVT__lsu_load_inflight,0,0);
VL_IN8(__PVT__lsu_wbu_reg_w,0,0);
VL_IN8(__PVT__lsu_wbu_csr_we,0,0);
VL_IN8(__PVT__lsu_wbu_rf_res,1,0);
VL_IN8(__PVT__idu_wbu_raddr1,4,0);
VL_IN8(__PVT__idu_wbu_raddr2,4,0);
VL_IN8(__PVT__lsu_wbu_waddr,4,0);
CData/*0:0*/ __PVT__eq;
CData/*0:0*/ __PVT__lts;
CData/*0:0*/ __PVT__ltu;
CData/*0:0*/ __PVT__taken;
CData/*2:0*/ __PVT__fwd_1;
CData/*2:0*/ __PVT__fwd_2;
CData/*1:0*/ __PVT__csr_fwd;
CData/*0:0*/ __PVT__load_use_stall;
CData/*0:0*/ __PVT__lsu_fwd_flag;
CData/*0:0*/ __PVT__wbu_fwd_flag;
CData/*0:0*/ __Vdly__exu_lsu_valid;
CData/*1:0*/ __Vdly__exu_lsu_mem_w;
CData/*2:0*/ __Vdly__exu_lsu_mem_r;
CData/*0:0*/ __Vdly__exu_lsu_reg_w;
CData/*1:0*/ __Vdly__exu_lsu_rf_res;
CData/*4:0*/ __Vdly__exu_lsu_waddr;
CData/*0:0*/ __Vdly__exu_lsu_csr_we;
CData/*0:0*/ __Vdly__exu_lsu_csr_ecall;
CData/*0:0*/ __Vdly__exu_lsu_csr_mret;
VL_IN16(__PVT__idu_exu_csr_waddr,11,0);
VL_OUT16(__PVT__exu_lsu_csr_waddr,11,0);
VL_IN16(__PVT__idu_wbu_csr_raddr,11,0);
VL_IN16(__PVT__lsu_wbu_csr_waddr,11,0);
SData/*11:0*/ __Vdly__exu_lsu_csr_waddr;
VL_IN(__PVT__idu_exu_pc,31,0);
VL_IN(__PVT__idu_exu_inst,31,0);
VL_IN(__PVT__idu_exu_target,31,0);
};
struct {
VL_IN(__PVT__idu_exu_imm,31,0);
VL_OUT(__PVT__exu_lsu_pc,31,0);
VL_OUT(__PVT__exu_lsu_snpc,31,0);
VL_OUT(__PVT__exu_lsu_inst,31,0);
VL_OUT(__PVT__exu_lsu_mem_addr,31,0);
VL_OUT(__PVT__exu_lsu_wdata,31,0);
VL_OUT(__PVT__exu_lsu_alu_result,31,0);
VL_OUT(__PVT__exu_lsu_csr_wdata,31,0);
VL_OUT(__PVT__exu_flush_pc,31,0);
VL_IN(__PVT__lsu_wbu_pc,31,0);
VL_IN(__PVT__lsu_wbu_snpc,31,0);
VL_IN(__PVT__lsu_wbu_alu_result,31,0);
VL_IN(__PVT__lsu_wbu_mem_result,31,0);
VL_IN(__PVT__lsu_wbu_csr_wdata,31,0);
VL_IN(__PVT__wbu_exu_rdata1,31,0);
VL_IN(__PVT__wbu_exu_rdata2,31,0);
VL_IN(__PVT__wbu_exu_csr_rdata,31,0);
VL_IN(__PVT__exu_mtvec,31,0);
VL_IN(__PVT__exu_mepc,31,0);
IData/*31:0*/ __PVT__src1;
IData/*31:0*/ __PVT__src2;
IData/*31:0*/ __PVT__rdata1;
IData/*31:0*/ __PVT__rdata2;
IData/*31:0*/ __PVT__snpc;
IData/*31:0*/ __PVT__csr_rdata;
IData/*31:0*/ __PVT__alu_result;
IData/*31:0*/ __PVT__lsu_fwd_data;
IData/*31:0*/ __PVT__wbu_fwd_data;
IData/*31:0*/ __PVT__trap_pc;
IData/*31:0*/ __Vdly__exu_lsu_pc;
IData/*31:0*/ __Vdly__exu_lsu_snpc;
IData/*31:0*/ __Vdly__exu_lsu_inst;
IData/*31:0*/ __Vdly__exu_lsu_mem_addr;
IData/*31:0*/ __Vdly__exu_lsu_alu_result;
IData/*31:0*/ __Vdly__exu_lsu_csr_wdata;
IData/*31:0*/ __Vdly__exu_lsu_wdata;
};
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_EXU() = default;
~Vysyx_26010027_ysyx_26010027_EXU() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_EXU);
void __Vconfigure(bool first);
};


#endif  // guard
