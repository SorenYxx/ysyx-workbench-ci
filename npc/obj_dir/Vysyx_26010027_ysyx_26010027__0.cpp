// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027___ico_sequent__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___ico_sequent__TOP__ysyx_26010027__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__clock = vlSelfRef.clock;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__clock = vlSelfRef.clock;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__clock = vlSelfRef.clock;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__clock = vlSelfRef.clock;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__clock = vlSelfRef.clock;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__clock = vlSelfRef.clock;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__reset = vlSelfRef.reset;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__reset = vlSelfRef.reset;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__reset = vlSelfRef.reset;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__reset = vlSelfRef.reset;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__reset = vlSelfRef.reset;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__reset = vlSelfRef.reset;
}

void Vysyx_26010027_ysyx_26010027___ico_sequent__TOP__ysyx_26010027__1(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___ico_sequent__TOP__ysyx_26010027__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__exu_flush_pc = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_flush_pc;
vlSelfRef.__PVT__exu_flush = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_flush;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__exu_flush_pc = vlSelfRef.__PVT__exu_flush_pc;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__exu_flush = vlSelfRef.__PVT__exu_flush;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__exu_flush = vlSelfRef.__PVT__exu_flush;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_idu_inst = vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__ifu_idu_inst;
vlSelfRef.__PVT__ifu_cpu_araddr = vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__ifu_cpu_araddr;
vlSelfRef.__PVT__ifu_idu_valid = vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__ifu_idu_valid;
vlSelfRef.__PVT__ifu_idu_pc = vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__ifu_idu_pc;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__ifu_araddr = vlSelfRef.__PVT__ifu_cpu_araddr;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__1(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__icache_araddr = vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__arb_araddr;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__2(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__lsu_wbu_csr_ecall = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_csr_ecall;
vlSelfRef.__PVT__lsu_wbu_csr_mret = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_csr_mret;
vlSelfRef.__PVT__lsu_wbu_csr_wdata = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_csr_wdata;
vlSelfRef.__PVT__lsu_wbu_csr_waddr = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_csr_waddr;
vlSelfRef.__PVT__lsu_wbu_csr_we = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_csr_we;
vlSelfRef.__PVT__lsu_wbu_mem_result = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_mem_result;
vlSelfRef.__PVT__lsu_wbu_snpc = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_snpc;
vlSelfRef.__PVT__lsu_wbu_alu_result = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_alu_result;
vlSelfRef.__PVT__lsu_wbu_reg_w = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_reg_w;
vlSelfRef.__PVT__lsu_wbu_waddr = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_waddr;
vlSelfRef.__PVT__lsu_wbu_rf_res = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_rf_res;
vlSelfRef.__PVT__lsu_cpu_bready = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_bready;
vlSelfRef.__PVT__lsu_cpu_rready = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_rready;
vlSelfRef.__PVT__lsu_exu_ready = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_exu_ready;
vlSelfRef.__PVT__lsu_cpu_awaddr = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_awaddr;
vlSelfRef.__PVT__lsu_cpu_araddr = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_araddr;
vlSelfRef.__PVT__lsu_cpu_awsize = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_awsize;
vlSelfRef.__PVT__lsu_cpu_wstrb = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_wstrb;
vlSelfRef.__PVT__lsu_cpu_arsize = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_arsize;
vlSelfRef.__PVT__lsu_cpu_wdata = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_wdata;
vlSelfRef.__PVT__lsu_load_inflight = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_load_inflight;
vlSelfRef.__PVT__lsu_cpu_wvalid = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_wvalid;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_ecall = vlSelfRef.__PVT__lsu_wbu_csr_ecall;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_mret = vlSelfRef.__PVT__lsu_wbu_csr_mret;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_wdata = vlSelfRef.__PVT__lsu_wbu_csr_wdata;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_csr_wdata = vlSelfRef.__PVT__lsu_wbu_csr_wdata;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_waddr = vlSelfRef.__PVT__lsu_wbu_csr_waddr;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_csr_waddr = vlSelfRef.__PVT__lsu_wbu_csr_waddr;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_we = vlSelfRef.__PVT__lsu_wbu_csr_we;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_csr_we = vlSelfRef.__PVT__lsu_wbu_csr_we;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_mem_result = vlSelfRef.__PVT__lsu_wbu_mem_result;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_mem_result = vlSelfRef.__PVT__lsu_wbu_mem_result;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_snpc = vlSelfRef.__PVT__lsu_wbu_snpc;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_snpc = vlSelfRef.__PVT__lsu_wbu_snpc;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_alu_result = vlSelfRef.__PVT__lsu_wbu_alu_result;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_alu_result = vlSelfRef.__PVT__lsu_wbu_alu_result;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_reg_w = vlSelfRef.__PVT__lsu_wbu_reg_w;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_reg_w = vlSelfRef.__PVT__lsu_wbu_reg_w;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_waddr = vlSelfRef.__PVT__lsu_wbu_waddr;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_waddr = vlSelfRef.__PVT__lsu_wbu_waddr;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_rf_res = vlSelfRef.__PVT__lsu_wbu_rf_res;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_rf_res = vlSelfRef.__PVT__lsu_wbu_rf_res;
vlSelfRef.__PVT__arb_awsize = vlSelfRef.__PVT__lsu_cpu_awsize;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_load_inflight = vlSelfRef.__PVT__lsu_load_inflight;
}


void Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(IData/*31:0*/ lsu_get_data, IData/*31:0*/ lsu_w_data, IData/*31:0*/ exu_done, IData/*31:0*/ alu_we, IData/*31:0*/ csr_we, IData/*31:0*/ cpu_jump, IData/*31:0*/ cpu_branch, IData/*31:0*/ icache_hit, IData/*31:0*/ icache_miss, IData/*31:0*/ icache_miss_latency);

void Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1);

void Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();

void Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__3(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__3\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__Vdly__pmem_wready = vlSelfRef.__PVT__pmem_wready;
vlSelfRef.__Vdly__pmem_rvalid = vlSelfRef.__PVT__pmem_rvalid;
vlSelfRef.__Vdly__grant = vlSelfRef.__PVT__grant;
if ((1U & (~ (IData)(vlSelfRef.reset)))) {
Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(VL_EXTEND_II(32,1, ((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_load))), VL_EXTEND_II(32,1, ((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_store))), VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__lsu_wbu_valid)), VL_EXTEND_II(32,1, ((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_alu))), VL_EXTEND_II(32,1, ((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_csr))), VL_EXTEND_II(32,1, ((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_jump))), VL_EXTEND_II(32,1, ((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_branch))), vlSelfRef.__PVT__hit_count, vlSelfRef.__PVT__miss_count, vlSelfRef.__PVT__miss_latency);
if ((((IData)(vlSelfRef.__PVT__idu_exu_valid) & (IData)(vlSelfRef.__PVT__exu_idu_ready)) & (1U == (IData)(vlSelfRef.__PVT__idu_exu_jump)))) {
Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(vlSelfRef.__PVT__idu_exu_pc, vlSelfRef.__PVT__exu_flush_pc, VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__idu_exu_waddr)), VL_EXTEND_II(32,5, (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__idu_exu_inst, 0x0fU, 5))));
}
if (VL_UNLIKELY((((0x00100073U == vlSelfRef.__PVT__lsu_wbu_inst) | (IData)(vlSelfRef.__PVT__access_fault))))) {
Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
VL_WRITEF_NX("ebreak at PC = 0x%x Inst = 0x%x\n",0,32,vlSelfRef.__PVT__lsu_wbu_pc,32,vlSelfRef.__PVT__lsu_wbu_inst);
Verilated::runFlushCallbacks();
if (VL_UNLIKELY((vlSelfRef.__PVT__access_fault))) {
VL_WRITEF_NX("![Access-FAULT]\n",0);
Verilated::runFlushCallbacks();
}
}
}
vlSelfRef.__Vdly__pmem_bvalid = vlSelfRef.__PVT__pmem_bvalid;
vlSelfRef.__Vdly__pmem_bresp = vlSelfRef.__PVT__pmem_bresp;
vlSelfRef.__Vdly__pmem_read_data = vlSelfRef.__PVT__pmem_read_data;
vlSelfRef.__Vdly__pmem_rresp = vlSelfRef.__PVT__pmem_rresp;
vlSelfRef.__Vdly__grant = ((IData)(vlSelfRef.reset) ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (((((IData)(vlSelfRef.__PVT__lsu_cpu_arvalid) | (IData)(vlSelfRef.__PVT__lsu_cpu_awvalid)) & (~ (IData)(vlSelfRef.__PVT__ifu_cpu_arvalid))) & (~ (IData)(vlSelfRef.__PVT__ifu_cpu_rready))) ? 2U : 1U) : ((2U == (IData)(vlSelfRef.__PVT__grant)) ? (((IData)(vlSelfRef.__PVT__handshake_lsu_r) | (IData)(vlSelfRef.__PVT__handshake_lsu_b)) ? 1U : 2U) : 1U)));
if (vlSelfRef.reset) {
vlSelfRef.__Vdly__pmem_rvalid = 0U;
vlSelfRef.__Vdly__pmem_wready = 0U;
vlSelfRef.__Vdly__pmem_bvalid = 0U;
} else {
if (((IData)(vlSelfRef.__PVT__arb_rvalid) & (IData)(vlSelfRef.__PVT__arb_rready))) {
vlSelfRef.__Vdly__pmem_rvalid = 0U;
}
if (((IData)(vlSelfRef.__PVT__arb_wvalid) & (IData)(vlSelfRef.__PVT__arb_wready))) {
vlSelfRef.__Vdly__pmem_wready = 0U;
}
if (((IData)(vlSelfRef.__PVT__arb_bvalid) & (IData)(vlSelfRef.__PVT__arb_bready))) {
vlSelfRef.__Vdly__pmem_bvalid = 0U;
}
if (((IData)(vlSelfRef.__PVT__arb_arvalid) & (~ (IData)(vlSelfRef.__PVT__pmem_rvalid)))) {
Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.__PVT__arb_araddr, vlSelfRef.__Vfunc_pmem_read__0__Vfuncout);
vlSelfRef.__Vdly__pmem_read_data = vlSelfRef.__Vfunc_pmem_read__0__Vfuncout;
vlSelfRef.__Vdly__pmem_rvalid = 1U;
vlSelfRef.__Vdly__pmem_rresp = 0U;
} else if (((IData)(vlSelfRef.__PVT__arb_awvalid) & (~ (IData)(vlSelfRef.__PVT__pmem_wready)))) {
Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.__PVT__arb_awaddr, vlSelfRef.__PVT__arb_wdata, VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__arb_wstrb)));
vlSelfRef.__Vdly__pmem_wready = 1U;
vlSelfRef.__Vdly__pmem_bvalid = 1U;
vlSelfRef.__Vdly__pmem_bresp = 0U;
}
}
vlSelfRef.__PVT__grant = vlSelfRef.__Vdly__grant;
vlSelfRef.__PVT__pmem_wready = vlSelfRef.__Vdly__pmem_wready;
vlSelfRef.__PVT__pmem_bvalid = vlSelfRef.__Vdly__pmem_bvalid;
vlSelfRef.__PVT__pmem_bresp = vlSelfRef.__Vdly__pmem_bresp;
vlSelfRef.__PVT__pmem_read_data = vlSelfRef.__Vdly__pmem_read_data;
vlSelfRef.__PVT__pmem_rresp = vlSelfRef.__Vdly__pmem_rresp;
vlSelfRef.__PVT__pmem_rvalid = vlSelfRef.__Vdly__pmem_rvalid;
vlSelfRef.__PVT__icache_rid = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__arb_rid) : 0U);
vlSelfRef.__PVT__icache_rlast = ((1U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_rlast));
vlSelfRef.__PVT__arb_arid = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__icache_arid) : (IData)(vlSelfRef.__PVT__lsu_cpu_arid));
vlSelfRef.__PVT__arb_arlen = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__icache_arlen) : (IData)(vlSelfRef.__PVT__lsu_cpu_arlen));
vlSelfRef.__PVT__arb_arburst = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__icache_arburst) : (IData)(vlSelfRef.__PVT__lsu_cpu_arburst));
vlSelfRef.__PVT__cpu_lsu_rid = ((2U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__arb_rid) : 0U);
vlSelfRef.__PVT__cpu_lsu_rlast = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_rlast));
vlSelfRef.__PVT__cpu_lsu_bid = ((2U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__arb_bid) : 0U);
vlSelfRef.__PVT__arb_wready = vlSelfRef.__PVT__pmem_wready;
vlSelfRef.__PVT__arb_bvalid = vlSelfRef.__PVT__pmem_bvalid;
vlSelfRef.__PVT__arb_bresp = vlSelfRef.__PVT__pmem_bresp;
vlSelfRef.__PVT__arb_rdata = vlSelfRef.__PVT__pmem_read_data;
vlSelfRef.__PVT__arb_rresp = vlSelfRef.__PVT__pmem_rresp;
vlSelfRef.__PVT__arb_rvalid = vlSelfRef.__PVT__pmem_rvalid;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_rid = vlSelfRef.__PVT__cpu_lsu_rid;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_rlast = vlSelfRef.__PVT__cpu_lsu_rlast;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_bid = vlSelfRef.__PVT__cpu_lsu_bid;
vlSelfRef.__PVT__cpu_lsu_wready = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_wready));
vlSelfRef.__PVT__cpu_lsu_bvalid = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_bvalid));
vlSelfRef.__PVT__cpu_lsu_bresp = ((2U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__arb_bresp) : 0U);
vlSelfRef.__PVT__cpu_lsu_rdata = ((2U == (IData)(vlSelfRef.__PVT__grant)) ? vlSelfRef.__PVT__arb_rdata : 0U);
vlSelfRef.__PVT__icache_rdata = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? vlSelfRef.__PVT__arb_rdata : 0U);
vlSelfRef.__PVT__icache_rresp = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__arb_rresp) : 0U);
vlSelfRef.__PVT__cpu_lsu_rresp = ((2U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__arb_rresp) : 0U);
vlSelfRef.__PVT__cpu_lsu_rvalid = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_rvalid));
vlSelfRef.__PVT__icache_rvalid = ((1U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_rvalid));
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_wready = vlSelfRef.__PVT__cpu_lsu_wready;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_bvalid = vlSelfRef.__PVT__cpu_lsu_bvalid;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_bresp = vlSelfRef.__PVT__cpu_lsu_bresp;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_rdata = vlSelfRef.__PVT__cpu_lsu_rdata;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__arb_rdata = vlSelfRef.__PVT__icache_rdata;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_rresp = vlSelfRef.__PVT__cpu_lsu_rresp;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_rvalid = vlSelfRef.__PVT__cpu_lsu_rvalid;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__arb_rvalid = vlSelfRef.__PVT__icache_rvalid;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__4(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__4\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__cpu_ifu_rdata = vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__ifu_rdata;
vlSelfRef.__PVT__cpu_ifu_rvalid = vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__ifu_rvalid;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__cpu_ifu_rdata = vlSelfRef.__PVT__cpu_ifu_rdata;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__cpu_ifu_rvalid = vlSelfRef.__PVT__cpu_ifu_rvalid;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__5(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__5\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_exu_mtvec = vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_mtvec;
vlSelfRef.__PVT__wbu_exu_mepc = vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_mepc;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_mtvec = vlSelfRef.__PVT__wbu_exu_mtvec;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_mepc = vlSelfRef.__PVT__wbu_exu_mepc;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__6(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__6\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__idu_exu_valid = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_valid;
vlSelfRef.__PVT__idu_exu_inst = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_inst;
vlSelfRef.__PVT__idu_exu_mem_w = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_mem_w;
vlSelfRef.__PVT__idu_exu_mem_r = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_mem_r;
vlSelfRef.__PVT__idu_exu_reg_w = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_reg_w;
vlSelfRef.__PVT__idu_exu_rf_res = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_rf_res;
vlSelfRef.__PVT__idu_exu_waddr = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_waddr;
vlSelfRef.__PVT__idu_exu_csr_waddr = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_csr_waddr;
vlSelfRef.__PVT__idu_exu_csr_we = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_csr_we;
vlSelfRef.__PVT__idu_exu_jump = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_jump;
vlSelfRef.__PVT__idu_exu_csr_mret = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_csr_mret;
vlSelfRef.__PVT__idu_exu_fencei = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_fencei;
vlSelfRef.__PVT__idu_exu_target = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_target;
vlSelfRef.__PVT__idu_exu_alu_op = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_alu_op;
vlSelfRef.__PVT__idu_exu_csr_ecall = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_csr_ecall;
vlSelfRef.__PVT__idu_exu_branch = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_branch;
vlSelfRef.__PVT__idu_wbu_csr_raddr = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_wbu_csr_raddr;
vlSelfRef.__PVT__idu_exu_alu_arc1 = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_alu_arc1;
vlSelfRef.__PVT__idu_exu_alu_arc2 = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_alu_arc2;
vlSelfRef.__PVT__idu_exu_imm = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_imm;
vlSelfRef.__PVT__idu_exu_pc = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_exu_pc;
vlSelfRef.__PVT__idu_wbu_raddr1 = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_wbu_raddr1;
vlSelfRef.__PVT__idu_wbu_raddr2 = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_wbu_raddr2;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_jump = vlSelfRef.__PVT__idu_exu_jump;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__flush_i = vlSelfRef.__PVT__idu_exu_fencei;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_fencei = vlSelfRef.__PVT__idu_exu_fencei;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_target = vlSelfRef.__PVT__idu_exu_target;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_alu_op = vlSelfRef.__PVT__idu_exu_alu_op;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_branch = vlSelfRef.__PVT__idu_exu_branch;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__csr_raddr = vlSelfRef.__PVT__idu_wbu_csr_raddr;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_wbu_csr_raddr = vlSelfRef.__PVT__idu_wbu_csr_raddr;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_alu_arc1 = vlSelfRef.__PVT__idu_exu_alu_arc1;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_alu_arc2 = vlSelfRef.__PVT__idu_exu_alu_arc2;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_imm = vlSelfRef.__PVT__idu_exu_imm;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__idu_wbu_raddr1 = vlSelfRef.__PVT__idu_wbu_raddr1;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_wbu_raddr1 = vlSelfRef.__PVT__idu_wbu_raddr1;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__idu_wbu_raddr2 = vlSelfRef.__PVT__idu_wbu_raddr2;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_wbu_raddr2 = vlSelfRef.__PVT__idu_wbu_raddr2;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__7(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__7\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__exu_lsu_valid = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_valid;
vlSelfRef.__PVT__exu_lsu_pc = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_pc;
vlSelfRef.__PVT__exu_lsu_inst = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_inst;
vlSelfRef.__PVT__exu_lsu_mem_w = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_mem_w;
vlSelfRef.__PVT__exu_lsu_mem_r = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_mem_r;
vlSelfRef.__PVT__exu_lsu_mem_addr = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_mem_addr;
vlSelfRef.__PVT__exu_lsu_csr_ecall = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_csr_ecall;
vlSelfRef.__PVT__exu_lsu_csr_mret = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_csr_mret;
vlSelfRef.__PVT__exu_lsu_wdata = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_wdata;
vlSelfRef.__PVT__exu_lsu_csr_wdata = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_csr_wdata;
vlSelfRef.__PVT__exu_lsu_csr_waddr = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_csr_waddr;
vlSelfRef.__PVT__exu_lsu_csr_we = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_csr_we;
vlSelfRef.__PVT__exu_lsu_snpc = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_snpc;
vlSelfRef.__PVT__exu_lsu_alu_result = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_alu_result;
vlSelfRef.__PVT__exu_lsu_waddr = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_waddr;
vlSelfRef.__PVT__exu_lsu_reg_w = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_reg_w;
vlSelfRef.__PVT__exu_lsu_rf_res = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_lsu_rf_res;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_valid = vlSelfRef.__PVT__exu_lsu_valid;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_pc = vlSelfRef.__PVT__exu_lsu_pc;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_inst = vlSelfRef.__PVT__exu_lsu_inst;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_mem_w = vlSelfRef.__PVT__exu_lsu_mem_w;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_mem_r = vlSelfRef.__PVT__exu_lsu_mem_r;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_mem_addr = vlSelfRef.__PVT__exu_lsu_mem_addr;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_csr_ecall = vlSelfRef.__PVT__exu_lsu_csr_ecall;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_csr_mret = vlSelfRef.__PVT__exu_lsu_csr_mret;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_wdata = vlSelfRef.__PVT__exu_lsu_wdata;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_csr_wdata = vlSelfRef.__PVT__exu_lsu_csr_wdata;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_csr_waddr = vlSelfRef.__PVT__exu_lsu_csr_waddr;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_csr_we = vlSelfRef.__PVT__exu_lsu_csr_we;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_snpc = vlSelfRef.__PVT__exu_lsu_snpc;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_alu_result = vlSelfRef.__PVT__exu_lsu_alu_result;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_waddr = vlSelfRef.__PVT__exu_lsu_waddr;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_reg_w = vlSelfRef.__PVT__exu_lsu_reg_w;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__exu_lsu_rf_res = vlSelfRef.__PVT__exu_lsu_rf_res;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__8(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__8\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__lsu_wbu_pc = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_pc;
vlSelfRef.__PVT__lsu_wbu_inst = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_inst;
vlSelfRef.__PVT__lsu_wbu_valid = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_wbu_valid;
vlSelfRef.__PVT__lsu_cpu_awvalid = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_awvalid;
vlSelfRef.__PVT__lsu_cpu_arvalid = vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__lsu_cpu_arvalid;
vlSelfRef.__PVT__arb_wvalid = vlSelfRef.__PVT__lsu_cpu_wvalid;
vlSelfRef.__PVT__arb_bready = vlSelfRef.__PVT__lsu_cpu_bready;
vlSelfRef.__PVT__arb_awaddr = vlSelfRef.__PVT__lsu_cpu_awaddr;
vlSelfRef.__PVT__arb_wdata = vlSelfRef.__PVT__lsu_cpu_wdata;
vlSelfRef.__PVT__arb_wstrb = vlSelfRef.__PVT__lsu_cpu_wstrb;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_exu_ready = vlSelfRef.__PVT__lsu_exu_ready;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_pc = vlSelfRef.__PVT__lsu_wbu_pc;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_pc = vlSelfRef.__PVT__lsu_wbu_pc;
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_inst = vlSelfRef.__PVT__lsu_wbu_inst;
vlSelfRef.__PVT__wbu_opcode = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.__PVT__lsu_wbu_inst, 0U, 7));
vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__lsu_wbu_valid = vlSelfRef.__PVT__lsu_wbu_valid;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__lsu_wbu_valid = vlSelfRef.__PVT__lsu_wbu_valid;
vlSelfRef.__PVT__wbu_load = (3U == (IData)(vlSelfRef.__PVT__wbu_opcode));
vlSelfRef.__PVT__wbu_store = (0x23U == (IData)(vlSelfRef.__PVT__wbu_opcode));
vlSelfRef.__PVT__wbu_csr = (0x73U == (IData)(vlSelfRef.__PVT__wbu_opcode));
vlSelfRef.__PVT__wbu_jump = ((0x6fU == (IData)(vlSelfRef.__PVT__wbu_opcode)) | (0x67U == (IData)(vlSelfRef.__PVT__wbu_opcode)));
vlSelfRef.__PVT__wbu_branch = (0x63U == (IData)(vlSelfRef.__PVT__wbu_opcode));
vlSelfRef.__PVT__wbu_alu = ((((0x33U == (IData)(vlSelfRef.__PVT__wbu_opcode)) | (0x13U == (IData)(vlSelfRef.__PVT__wbu_opcode))) | (0x17U == (IData)(vlSelfRef.__PVT__wbu_opcode))) | (0x37U == (IData)(vlSelfRef.__PVT__wbu_opcode)));
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__9(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__9\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_lsu_ready = vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__wbu_lsu_ready;
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__wbu_lsu_ready = vlSelfRef.__PVT__wbu_lsu_ready;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__10(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__10\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_cpu_rready = vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__ifu_cpu_rready;
vlSelfRef.__PVT__ifu_cpu_arvalid = vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__ifu_cpu_arvalid;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__ifu_idu_valid = vlSelfRef.__PVT__ifu_idu_valid;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__ifu_idu_pc = vlSelfRef.__PVT__ifu_idu_pc;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__ifu_idu_inst = vlSelfRef.__PVT__ifu_idu_inst;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__ifu_rready = vlSelfRef.__PVT__ifu_cpu_rready;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__ifu_arvalid = vlSelfRef.__PVT__ifu_cpu_arvalid;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__11(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__11\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__icache_rready = vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__arb_rready;
vlSelfRef.__PVT__icache_arvalid = vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__arb_arvalid;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__arb_arsize = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__icache_arsize) : (IData)(vlSelfRef.__PVT__lsu_cpu_arsize));
vlSelfRef.__PVT__handshake_lsu_b = (((IData)(vlSelfRef.__PVT__cpu_lsu_bvalid) & (IData)(vlSelfRef.__PVT__lsu_cpu_bready)) & (0U == (IData)(vlSelfRef.__PVT__cpu_lsu_bresp)));
vlSelfRef.__PVT__handshake_lsu_r = (((IData)(vlSelfRef.__PVT__cpu_lsu_rvalid) & (IData)(vlSelfRef.__PVT__lsu_cpu_rready)) & (0U == (IData)(vlSelfRef.__PVT__cpu_lsu_rresp)));
vlSelfRef.__PVT__arb_awvalid = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__lsu_cpu_awvalid));
vlSelfRef.__PVT__arb_awready = vlSelfRef.__PVT__arb_awvalid;
vlSelfRef.__PVT__cpu_lsu_awready = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_awready));
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_awready = vlSelfRef.__PVT__cpu_lsu_awready;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__1(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__arb_araddr = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? vlSelfRef.__PVT__icache_araddr : vlSelfRef.__PVT__lsu_cpu_araddr);
vlSelfRef.__PVT__access_fault = (((((IData)(vlSelfRef.__PVT__cpu_ifu_rvalid) & (IData)(vlSelfRef.__PVT__ifu_cpu_rready)) & (0U != (IData)(vlSelfRef.__PVT__cpu_ifu_rresp))) | (((IData)(vlSelfRef.__PVT__cpu_lsu_rvalid) & (IData)(vlSelfRef.__PVT__lsu_cpu_rready)) & (0U != (IData)(vlSelfRef.__PVT__cpu_lsu_rresp)))) | (((IData)(vlSelfRef.__PVT__cpu_lsu_bvalid) & (IData)(vlSelfRef.__PVT__lsu_cpu_bready)) & (0U != (IData)(vlSelfRef.__PVT__cpu_lsu_bresp))));
vlSelfRef.__PVT__arb_rready = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__icache_rready) : (IData)(vlSelfRef.__PVT__lsu_cpu_rready));
vlSelfRef.__PVT__arb_arvalid = ((1U == (IData)(vlSelfRef.__PVT__grant)) ? (IData)(vlSelfRef.__PVT__icache_arvalid) : (IData)(vlSelfRef.__PVT__lsu_cpu_arvalid));
vlSelfRef.__PVT__arb_arready = vlSelfRef.__PVT__arb_arvalid;
vlSelfRef.__PVT__cpu_lsu_arready = ((2U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_arready));
vlSelfRef.__PVT__icache_arready = ((1U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__arb_arready));
vlSymsp->TOP__ysyx_26010027__my_LSU.__PVT__cpu_lsu_arready = vlSelfRef.__PVT__cpu_lsu_arready;
vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__arb_arready = vlSelfRef.__PVT__icache_arready;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__2(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__cpu_ifu_arready = vlSymsp->TOP__ysyx_26010027__my_icache.__PVT__ifu_arready;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__cpu_ifu_arready = vlSelfRef.__PVT__cpu_ifu_arready;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__3(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__3\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_exu_csr_rdata = vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__wbu_exu_csr_rdata;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__wbu_exu_csr_rdata = vlSelfRef.__PVT__wbu_exu_csr_rdata;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__4(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__4\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_exu_rdata1 = vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__wbu_exu_rdata1;
vlSelfRef.__PVT__wbu_exu_rdata2 = vlSymsp->TOP__ysyx_26010027__my_WBU.__PVT__wbu_exu_rdata2;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__wbu_exu_rdata1 = vlSelfRef.__PVT__wbu_exu_rdata1;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__wbu_exu_rdata2 = vlSelfRef.__PVT__wbu_exu_rdata2;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__12(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__12\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_inst = vlSelfRef.__PVT__idu_exu_inst;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_mem_w = vlSelfRef.__PVT__idu_exu_mem_w;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_mem_r = vlSelfRef.__PVT__idu_exu_mem_r;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_reg_w = vlSelfRef.__PVT__idu_exu_reg_w;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_rf_res = vlSelfRef.__PVT__idu_exu_rf_res;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_waddr = vlSelfRef.__PVT__idu_exu_waddr;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_csr_waddr = vlSelfRef.__PVT__idu_exu_csr_waddr;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_csr_we = vlSelfRef.__PVT__idu_exu_csr_we;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_csr_mret = vlSelfRef.__PVT__idu_exu_csr_mret;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_valid = vlSelfRef.__PVT__idu_exu_valid;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_csr_ecall = vlSelfRef.__PVT__idu_exu_csr_ecall;
vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__idu_exu_pc = vlSelfRef.__PVT__idu_exu_pc;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__5(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__5\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__exu_idu_ready = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_idu_ready;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__exu_idu_ready = vlSelfRef.__PVT__exu_idu_ready;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__6(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__6\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__idu_ifu_ready = vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__idu_ifu_ready;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__idu_ifu_ready = vlSelfRef.__PVT__idu_ifu_ready;
}

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__7(Vysyx_26010027_ysyx_26010027* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__7\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__exu_flush_pc = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_flush_pc;
vlSelfRef.__PVT__exu_flush = vlSymsp->TOP__ysyx_26010027__my_EXU.__PVT__exu_flush;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__exu_flush_pc = vlSelfRef.__PVT__exu_flush_pc;
vlSymsp->TOP__ysyx_26010027__my_IFU.__PVT__exu_flush = vlSelfRef.__PVT__exu_flush;
vlSymsp->TOP__ysyx_26010027__my_IDU.__PVT__exu_flush = vlSelfRef.__PVT__exu_flush;
}
