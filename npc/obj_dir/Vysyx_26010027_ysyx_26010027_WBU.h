// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_WBU_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_WBU_H_  // guard

#include "verilated.h"
class Vysyx_26010027_ysyx_26010027_CSR;
class Vysyx_26010027_ysyx_26010027_GPR;


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_WBU final {
public:
Vysyx_26010027_ysyx_26010027_GPR* __PVT__my_gpr;
Vysyx_26010027_ysyx_26010027_CSR* __PVT__my_csr;
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__idu_wbu_raddr1,4,0);
VL_IN8(__PVT__idu_wbu_raddr2,4,0);
VL_IN8(__PVT__lsu_wbu_rf_res,1,0);
VL_IN8(__PVT__lsu_wbu_valid,0,0);
VL_OUT8(__PVT__wbu_lsu_ready,0,0);
VL_IN8(__PVT__lsu_wbu_reg_w,0,0);
VL_IN8(__PVT__lsu_wbu_waddr,4,0);
VL_IN8(__PVT__csr_we,0,0);
VL_IN8(__PVT__csr_ecall,0,0);
VL_IN8(__PVT__csr_mret,0,0);
CData/*4:0*/ __PVT__waddr;
VL_IN16(__PVT__csr_raddr,11,0);
VL_IN16(__PVT__csr_waddr,11,0);
VL_OUT(__PVT__wbu_exu_rdata1,31,0);
VL_OUT(__PVT__wbu_exu_rdata2,31,0);
VL_OUT(__PVT__wbu_exu_csr_rdata,31,0);
VL_OUT(__PVT__csr_mtvec,31,0);
VL_OUT(__PVT__csr_mepc,31,0);
VL_IN(__PVT__lsu_wbu_pc,31,0);
VL_IN(__PVT__lsu_wbu_snpc,31,0);
VL_IN(__PVT__lsu_wbu_inst,31,0);
VL_IN(__PVT__lsu_wbu_alu_result,31,0);
VL_IN(__PVT__lsu_wbu_mem_result,31,0);
VL_IN(__PVT__csr_wdata,31,0);
IData/*31:0*/ __PVT__wdata;
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_WBU() = default;
~Vysyx_26010027_ysyx_26010027_WBU() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_WBU);
void __Vconfigure(bool first);
};


#endif  // guard
