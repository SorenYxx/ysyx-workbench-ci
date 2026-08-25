// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027_WBU___ico_sequent__TOP__ysyx_26010027__my_WBU__0(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___ico_sequent__TOP__ysyx_26010027__my_WBU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__clock = vlSelfRef.__PVT__clock;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__clock = vlSelfRef.__PVT__clock;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__reset = vlSelfRef.__PVT__reset;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__reset = vlSelfRef.__PVT__reset;
}

void Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__0(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__waddr = (0x0000001fU & VL_SEL_IIII(32, ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) ? VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__lsu_wbu_waddr)) : 0U), 0U, 5));
vlSelfRef.__PVT__wdata = ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) ? (((0U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)) | (2U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))) ? vlSelfRef.__PVT__lsu_wbu_alu_result : ((1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)) ? vlSelfRef.__PVT__lsu_wbu_mem_result : vlSelfRef.__PVT__lsu_wbu_snpc)) : 0U);
}

void Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__1(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__csr_mtvec = vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_mtvec;
vlSelfRef.__PVT__csr_mepc = vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_mepc;
}

void Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__2(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_raddr = vlSelfRef.__PVT__csr_raddr;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__raddr1 = vlSelfRef.__PVT__idu_wbu_raddr1;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__raddr2 = vlSelfRef.__PVT__idu_wbu_raddr2;
}

void Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__3(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___nba_sequent__TOP__ysyx_26010027__my_WBU__3\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_ecall = vlSelfRef.__PVT__csr_ecall;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_we = vlSelfRef.__PVT__csr_we;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_mret = vlSelfRef.__PVT__csr_mret;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_waddr = vlSelfRef.__PVT__csr_waddr;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_wdata = vlSelfRef.__PVT__csr_wdata;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__wen = vlSelfRef.__PVT__lsu_wbu_reg_w;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__waddr = vlSelfRef.__PVT__waddr;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__wdata = vlSelfRef.__PVT__wdata;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__pc = vlSelfRef.__PVT__lsu_wbu_pc;
vlSelfRef.__PVT__wbu_lsu_ready = vlSelfRef.__PVT__lsu_wbu_valid;
}

void Vysyx_26010027_ysyx_26010027_WBU___nba_comb__TOP__ysyx_26010027__my_WBU__0(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___nba_comb__TOP__ysyx_26010027__my_WBU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_exu_csr_rdata = vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_rdata;
}

void Vysyx_26010027_ysyx_26010027_WBU___nba_comb__TOP__ysyx_26010027__my_WBU__1(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___nba_comb__TOP__ysyx_26010027__my_WBU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_exu_rdata1 = vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__rdata1;
vlSelfRef.__PVT__wbu_exu_rdata2 = vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__rdata2;
}
