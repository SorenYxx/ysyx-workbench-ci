// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027_LSU___nba_sequent__TOP__ysyx_26010027__my_LSU__0(Vysyx_26010027_ysyx_26010027_LSU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_LSU___nba_sequent__TOP__ysyx_26010027__my_LSU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__Vdly__state_w = vlSelfRef.__PVT__state_w;
vlSelfRef.__Vdly__state_r = vlSelfRef.__PVT__state_r;
vlSelfRef.__Vdly__mem_done = vlSelfRef.__PVT__mem_done;
vlSelfRef.__Vdly__l_busy = vlSelfRef.__PVT__l_busy;
vlSelfRef.__Vdly__lsu_wbu_csr_ecall = vlSelfRef.__PVT__lsu_wbu_csr_ecall;
vlSelfRef.__Vdly__lsu_wbu_csr_mret = vlSelfRef.__PVT__lsu_wbu_csr_mret;
vlSelfRef.__Vdly__lsu_wbu_pc = vlSelfRef.__PVT__lsu_wbu_pc;
vlSelfRef.__Vdly__l_wdata = vlSelfRef.__PVT__l_wdata;
vlSelfRef.__Vdly__lsu_wbu_inst = vlSelfRef.__PVT__lsu_wbu_inst;
vlSelfRef.__Vdly__l_mem_addr = vlSelfRef.__PVT__l_mem_addr;
vlSelfRef.__Vdly__lsu_wbu_csr_wdata = vlSelfRef.__PVT__lsu_wbu_csr_wdata;
vlSelfRef.__Vdly__lsu_wbu_csr_waddr = vlSelfRef.__PVT__lsu_wbu_csr_waddr;
vlSelfRef.__Vdly__lsu_wbu_csr_we = vlSelfRef.__PVT__lsu_wbu_csr_we;
vlSelfRef.__Vdly__lsu_wbu_mem_result = vlSelfRef.__PVT__lsu_wbu_mem_result;
vlSelfRef.__Vdly__lsu_wbu_snpc = vlSelfRef.__PVT__lsu_wbu_snpc;
vlSelfRef.__Vdly__lsu_wbu_alu_result = vlSelfRef.__PVT__lsu_wbu_alu_result;
vlSelfRef.__Vdly__lsu_wbu_reg_w = vlSelfRef.__PVT__lsu_wbu_reg_w;
vlSelfRef.__Vdly__lsu_wbu_waddr = vlSelfRef.__PVT__lsu_wbu_waddr;
vlSelfRef.__Vdly__l_mem_w = vlSelfRef.__PVT__l_mem_w;
vlSelfRef.__Vdly__l_mem_r = vlSelfRef.__PVT__l_mem_r;
vlSelfRef.__Vdly__lsu_wbu_rf_res = vlSelfRef.__PVT__lsu_wbu_rf_res;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__state_w = 0U;
} else if ((0U == (IData)(vlSelfRef.__PVT__state_w))) {
if (((IData)(vlSelfRef.__PVT__handshake_aw) & (IData)(vlSelfRef.__PVT__handshake_w))) {
vlSelfRef.__Vdly__state_w = 2U;
} else if (vlSelfRef.__PVT__handshake_aw) {
vlSelfRef.__Vdly__state_w = 1U;
}
} else if ((1U == (IData)(vlSelfRef.__PVT__state_w))) {
if (vlSelfRef.__PVT__handshake_w) {
vlSelfRef.__Vdly__state_w = 2U;
}
} else if ((2U == (IData)(vlSelfRef.__PVT__state_w))) {
if (vlSelfRef.__PVT__handshake_b) {
vlSelfRef.__Vdly__state_w = 0U;
}
} else {
vlSelfRef.__Vdly__state_w = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__state_r = 0U;
} else if ((0U == (IData)(vlSelfRef.__PVT__state_r))) {
if (vlSelfRef.__PVT__handshake_ar) {
vlSelfRef.__Vdly__state_r = 1U;
}
} else if ((1U == (IData)(vlSelfRef.__PVT__state_r))) {
if (vlSelfRef.__PVT__handshake_r) {
vlSelfRef.__Vdly__state_r = 0U;
}
} else {
vlSelfRef.__Vdly__state_r = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__mem_done = 0U;
} else if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) & (IData)(vlSelfRef.__PVT__lsu_exu_ready))) {
vlSelfRef.__Vdly__mem_done = 0U;
} else if (((IData)(vlSelfRef.__PVT__handshake_r) | (IData)(vlSelfRef.__PVT__handshake_b))) {
vlSelfRef.__Vdly__mem_done = 1U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__l_busy = 0U;
} else if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) & (IData)(vlSelfRef.__PVT__lsu_exu_ready))) {
vlSelfRef.__Vdly__l_busy = 1U;
} else if (((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__wbu_lsu_ready))) {
vlSelfRef.__Vdly__l_busy = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__lsu_wbu_pc = 0U;
vlSelfRef.__Vdly__lsu_wbu_snpc = 0U;
vlSelfRef.__Vdly__lsu_wbu_inst = 0U;
vlSelfRef.__Vdly__lsu_wbu_reg_w = 0U;
vlSelfRef.__Vdly__lsu_wbu_rf_res = 0U;
vlSelfRef.__Vdly__lsu_wbu_waddr = 0U;
vlSelfRef.__Vdly__lsu_wbu_alu_result = 0U;
vlSelfRef.__Vdly__lsu_wbu_mem_result = 0U;
vlSelfRef.__Vdly__lsu_wbu_csr_waddr = 0U;
vlSelfRef.__Vdly__lsu_wbu_csr_we = 0U;
vlSelfRef.__Vdly__lsu_wbu_csr_ecall = 0U;
vlSelfRef.__Vdly__lsu_wbu_csr_mret = 0U;
vlSelfRef.__Vdly__lsu_wbu_csr_wdata = 0U;
vlSelfRef.__Vdly__l_mem_w = 3U;
vlSelfRef.__Vdly__l_mem_r = 5U;
vlSelfRef.__Vdly__l_mem_addr = 0U;
vlSelfRef.__Vdly__l_wdata = 0U;
} else {
if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) & (IData)(vlSelfRef.__PVT__lsu_exu_ready))) {
vlSelfRef.__Vdly__lsu_wbu_pc = vlSelfRef.__PVT__exu_lsu_pc;
vlSelfRef.__Vdly__lsu_wbu_snpc = vlSelfRef.__PVT__exu_lsu_snpc;
vlSelfRef.__Vdly__lsu_wbu_inst = vlSelfRef.__PVT__exu_lsu_inst;
vlSelfRef.__Vdly__lsu_wbu_reg_w = vlSelfRef.__PVT__exu_lsu_reg_w;
vlSelfRef.__Vdly__lsu_wbu_rf_res = vlSelfRef.__PVT__exu_lsu_rf_res;
vlSelfRef.__Vdly__lsu_wbu_waddr = vlSelfRef.__PVT__exu_lsu_waddr;
vlSelfRef.__Vdly__lsu_wbu_alu_result = vlSelfRef.__PVT__exu_lsu_alu_result;
vlSelfRef.__Vdly__lsu_wbu_csr_waddr = vlSelfRef.__PVT__exu_lsu_csr_waddr;
vlSelfRef.__Vdly__lsu_wbu_csr_we = vlSelfRef.__PVT__exu_lsu_csr_we;
vlSelfRef.__Vdly__lsu_wbu_csr_ecall = vlSelfRef.__PVT__exu_lsu_csr_ecall;
vlSelfRef.__Vdly__lsu_wbu_csr_mret = vlSelfRef.__PVT__exu_lsu_csr_mret;
vlSelfRef.__Vdly__lsu_wbu_csr_wdata = vlSelfRef.__PVT__exu_lsu_csr_wdata;
vlSelfRef.__Vdly__l_mem_w = vlSelfRef.__PVT__exu_lsu_mem_w;
vlSelfRef.__Vdly__l_mem_r = vlSelfRef.__PVT__exu_lsu_mem_r;
vlSelfRef.__Vdly__l_mem_addr = vlSelfRef.__PVT__exu_lsu_mem_addr;
vlSelfRef.__Vdly__l_wdata = vlSelfRef.__PVT__exu_lsu_wdata;
}
if (vlSelfRef.__PVT__handshake_r) {
vlSelfRef.__Vdly__lsu_wbu_mem_result = vlSelfRef.__PVT__mem_rdata;
}
}
vlSelfRef.__PVT__state_w = vlSelfRef.__Vdly__state_w;
vlSelfRef.__PVT__state_r = vlSelfRef.__Vdly__state_r;
vlSelfRef.__PVT__mem_done = vlSelfRef.__Vdly__mem_done;
vlSelfRef.__PVT__l_busy = vlSelfRef.__Vdly__l_busy;
vlSelfRef.__PVT__lsu_wbu_csr_ecall = vlSelfRef.__Vdly__lsu_wbu_csr_ecall;
vlSelfRef.__PVT__lsu_wbu_csr_mret = vlSelfRef.__Vdly__lsu_wbu_csr_mret;
vlSelfRef.__PVT__lsu_wbu_pc = vlSelfRef.__Vdly__lsu_wbu_pc;
vlSelfRef.__PVT__l_wdata = vlSelfRef.__Vdly__l_wdata;
vlSelfRef.__PVT__lsu_wbu_inst = vlSelfRef.__Vdly__lsu_wbu_inst;
vlSelfRef.__PVT__l_mem_addr = vlSelfRef.__Vdly__l_mem_addr;
vlSelfRef.__PVT__lsu_wbu_csr_wdata = vlSelfRef.__Vdly__lsu_wbu_csr_wdata;
vlSelfRef.__PVT__lsu_wbu_csr_waddr = vlSelfRef.__Vdly__lsu_wbu_csr_waddr;
vlSelfRef.__PVT__lsu_wbu_csr_we = vlSelfRef.__Vdly__lsu_wbu_csr_we;
vlSelfRef.__PVT__lsu_wbu_mem_result = vlSelfRef.__Vdly__lsu_wbu_mem_result;
vlSelfRef.__PVT__lsu_wbu_snpc = vlSelfRef.__Vdly__lsu_wbu_snpc;
vlSelfRef.__PVT__lsu_wbu_alu_result = vlSelfRef.__Vdly__lsu_wbu_alu_result;
vlSelfRef.__PVT__lsu_wbu_reg_w = vlSelfRef.__Vdly__lsu_wbu_reg_w;
vlSelfRef.__PVT__lsu_wbu_waddr = vlSelfRef.__Vdly__lsu_wbu_waddr;
vlSelfRef.__PVT__l_mem_w = vlSelfRef.__Vdly__l_mem_w;
vlSelfRef.__PVT__l_mem_r = vlSelfRef.__Vdly__l_mem_r;
vlSelfRef.__PVT__lsu_wbu_rf_res = vlSelfRef.__Vdly__lsu_wbu_rf_res;
vlSelfRef.__PVT__lsu_cpu_bready = (2U == (IData)(vlSelfRef.__PVT__state_w));
vlSelfRef.__PVT__lsu_cpu_rready = (1U == (IData)(vlSelfRef.__PVT__state_r));
vlSelfRef.__PVT__lsu_exu_ready = (1U & (~ (IData)(vlSelfRef.__PVT__l_busy)));
vlSelfRef.__PVT__lsu_cpu_awaddr = vlSelfRef.__PVT__l_mem_addr;
vlSelfRef.__PVT__lsu_cpu_araddr = vlSelfRef.__PVT__l_mem_addr;
vlSelfRef.__PVT__lsu_cpu_awsize = ((0U == (IData)(vlSelfRef.__PVT__l_mem_w)) ? 2U : ((2U == (IData)(vlSelfRef.__PVT__l_mem_w)) ? 1U : 0U));
vlSelfRef.__PVT__lsu_cpu_wstrb = (0x0000000fU & ((0U == (IData)(vlSelfRef.__PVT__l_mem_w)) ? 0x0fU : ((1U == (IData)(vlSelfRef.__PVT__l_mem_w)) ? ((IData)(1U) << (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__l_mem_addr, 0U, 2))) : ((2U == (IData)(vlSelfRef.__PVT__l_mem_w)) ? ((IData)(3U) << (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__l_mem_addr, 0U, 2))) : 0U))));
vlSelfRef.__PVT__wdata_shifted = ((0U == (IData)(vlSelfRef.__PVT__l_mem_w)) ? vlSelfRef.__PVT__l_wdata : VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__l_wdata, VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,2, (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__l_mem_addr, 0U, 2))), 3U)));
vlSelfRef.__PVT__is_store = (3U != (IData)(vlSelfRef.__PVT__l_mem_w));
vlSelfRef.__PVT__lsu_cpu_arsize = ((0U == (IData)(vlSelfRef.__PVT__l_mem_r)) ? 2U : (((2U == (IData)(vlSelfRef.__PVT__l_mem_r)) | (4U == (IData)(vlSelfRef.__PVT__l_mem_r))) ? 1U : 0U));
vlSelfRef.__PVT__is_load = (5U != (IData)(vlSelfRef.__PVT__l_mem_r));
vlSelfRef.__PVT__lsu_cpu_wdata = vlSelfRef.__PVT__wdata_shifted;
vlSelfRef.__PVT__store_q = (((IData)(vlSelfRef.__PVT__l_busy) & (IData)(vlSelfRef.__PVT__is_store)) & (~ (IData)(vlSelfRef.__PVT__mem_done)));
vlSelfRef.__PVT__load_q = (((IData)(vlSelfRef.__PVT__l_busy) & (IData)(vlSelfRef.__PVT__is_load)) & (~ (IData)(vlSelfRef.__PVT__mem_done)));
vlSelfRef.__PVT__lsu_load_inflight = (((IData)(vlSelfRef.__PVT__l_busy) & (IData)(vlSelfRef.__PVT__is_load)) & (~ (IData)(vlSelfRef.__PVT__mem_done)));
vlSelfRef.__PVT__mem_op = ((IData)(vlSelfRef.__PVT__is_load) | (IData)(vlSelfRef.__PVT__is_store));
vlSelfRef.__PVT__lsu_cpu_wvalid = (((0U == (IData)(vlSelfRef.__PVT__state_w)) | (1U == (IData)(vlSelfRef.__PVT__state_w))) & (IData)(vlSelfRef.__PVT__store_q));
vlSelfRef.__PVT__lsu_cpu_awvalid = ((0U == (IData)(vlSelfRef.__PVT__state_w)) & (IData)(vlSelfRef.__PVT__store_q));
vlSelfRef.__PVT__lsu_cpu_arvalid = ((0U == (IData)(vlSelfRef.__PVT__state_r)) & (IData)(vlSelfRef.__PVT__load_q));
vlSelfRef.__PVT__lsu_wbu_valid = ((IData)(vlSelfRef.__PVT__l_busy) & ((~ (IData)(vlSelfRef.__PVT__mem_op)) | (IData)(vlSelfRef.__PVT__mem_done)));
}

void Vysyx_26010027_ysyx_26010027_LSU___nba_comb__TOP__ysyx_26010027__my_LSU__0(Vysyx_26010027_ysyx_26010027_LSU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_LSU___nba_comb__TOP__ysyx_26010027__my_LSU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__handshake_w = ((IData)(vlSelfRef.__PVT__cpu_lsu_wready) & (IData)(vlSelfRef.__PVT__lsu_cpu_wvalid));
vlSelfRef.__PVT__handshake_b = (((IData)(vlSelfRef.__PVT__cpu_lsu_bvalid) & (IData)(vlSelfRef.__PVT__lsu_cpu_bready)) & (0U == (IData)(vlSelfRef.__PVT__cpu_lsu_bresp)));
vlSelfRef.__PVT__rdata_shifted = VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__cpu_lsu_rdata, VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,2, (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__l_mem_addr, 0U, 2))), 3U));
vlSelfRef.__PVT__handshake_r = (((IData)(vlSelfRef.__PVT__lsu_cpu_rready) & (IData)(vlSelfRef.__PVT__cpu_lsu_rvalid)) & (0U == (IData)(vlSelfRef.__PVT__cpu_lsu_rresp)));
vlSelfRef.__PVT__handshake_aw = ((IData)(vlSelfRef.__PVT__cpu_lsu_awready) & (IData)(vlSelfRef.__PVT__lsu_cpu_awvalid));
vlSelfRef.__PVT__mem_rdata = ((0U == (IData)(vlSelfRef.__PVT__l_mem_r)) ? vlSelfRef.__PVT__rdata_shifted : ((1U == (IData)(vlSelfRef.__PVT__l_mem_r)) ? VL_CONCAT_III(32,24,8, (0x00ffffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rdata_shifted, 7U)), 0x00000018U)), (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rdata_shifted, 0U, 8))) : ((2U == (IData)(vlSelfRef.__PVT__l_mem_r)) ? VL_CONCAT_III(32,16,16, (0x0000ffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rdata_shifted, 0x0fU)), 0x00000010U)), (0x0000ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rdata_shifted, 0U, 16))) : ((3U == (IData)(vlSelfRef.__PVT__l_mem_r)) ? VL_EXTEND_II(32,8, (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rdata_shifted, 0U, 8))) : ((4U == (IData)(vlSelfRef.__PVT__l_mem_r)) ? VL_EXTEND_II(32,16, (0x0000ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rdata_shifted, 0U, 16))) : 0U)))));
}

void Vysyx_26010027_ysyx_26010027_LSU___nba_comb__TOP__ysyx_26010027__my_LSU__1(Vysyx_26010027_ysyx_26010027_LSU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_LSU___nba_comb__TOP__ysyx_26010027__my_LSU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__handshake_ar = ((IData)(vlSelfRef.__PVT__cpu_lsu_arready) & (IData)(vlSelfRef.__PVT__lsu_cpu_arvalid));
}
