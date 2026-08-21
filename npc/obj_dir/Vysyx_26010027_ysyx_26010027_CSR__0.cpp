// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"


void Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(IData/*31:0*/ csr, IData/*31:0*/ data);

void Vysyx_26010027_ysyx_26010027_CSR___nba_sequent__TOP__ysyx_26010027__my_WBU__my_csr__0(Vysyx_26010027_ysyx_26010027_CSR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_CSR___nba_sequent__TOP__ysyx_26010027__my_WBU__my_csr__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__Vdly__mc = vlSelfRef.__PVT__mc;
vlSelfRef.__Vdly__mstatus = vlSelfRef.__PVT__mstatus;
vlSelfRef.__Vdly__mcause = vlSelfRef.__PVT__mcause;
vlSelfRef.__Vdly__mtvec = vlSelfRef.__PVT__mtvec;
vlSelfRef.__Vdly__mepc = vlSelfRef.__PVT__mepc;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__mc = 0ULL;
vlSelfRef.__Vdly__mstatus = 0U;
vlSelfRef.__Vdly__mtvec = 0U;
vlSelfRef.__Vdly__mepc = 0U;
vlSelfRef.__Vdly__mcause = 0U;
} else {
vlSelfRef.__Vdly__mc = (1ULL + vlSelfRef.__PVT__mc);
if (vlSelfRef.__PVT__csr_ecall) {
vlSelfRef.__Vdly__mepc = vlSelfRef.__PVT__pc;
vlSelfRef.__Vdly__mcause = 0x0000000bU;
Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(0x00000341U, vlSelfRef.__PVT__pc);
Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(0x00000342U, 0x0000000bU);
} else if ((((IData)(vlSelfRef.__PVT__csr_we) & (~ (IData)(vlSelfRef.__PVT__csr_ecall))) & (~ (IData)(vlSelfRef.__PVT__csr_mret)))) {
Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(VL_EXTEND_II(32,12, (IData)(vlSelfRef.__PVT__csr_waddr)), vlSelfRef.__PVT__csr_wdata);
if ((0x0300U == (IData)(vlSelfRef.__PVT__csr_waddr))) {
vlSelfRef.__Vdly__mstatus = vlSelfRef.__PVT__csr_wdata;
} else if ((0x0305U == (IData)(vlSelfRef.__PVT__csr_waddr))) {
vlSelfRef.__Vdly__mtvec = vlSelfRef.__PVT__csr_wdata;
} else if ((0x0341U == (IData)(vlSelfRef.__PVT__csr_waddr))) {
vlSelfRef.__Vdly__mepc = vlSelfRef.__PVT__csr_wdata;
} else if (VL_LIKELY(((0x0342U == (IData)(vlSelfRef.__PVT__csr_waddr))))) {
vlSelfRef.__Vdly__mcause = vlSelfRef.__PVT__csr_wdata;
} else {
VL_WRITEF_NX("Warning: Write to unknown CSR address %x\n",0,12,vlSelfRef.__PVT__csr_waddr);
Verilated::runFlushCallbacks();
}
}
}
vlSelfRef.__PVT__mstatus = vlSelfRef.__Vdly__mstatus;
vlSelfRef.__PVT__mcause = vlSelfRef.__Vdly__mcause;
vlSelfRef.__PVT__mtvec = vlSelfRef.__Vdly__mtvec;
vlSelfRef.__PVT__mepc = vlSelfRef.__Vdly__mepc;
vlSelfRef.__PVT__mc = vlSelfRef.__Vdly__mc;
vlSelfRef.__PVT__csr_mtvec = vlSelfRef.__PVT__mtvec;
vlSelfRef.__PVT__csr_mepc = vlSelfRef.__PVT__mepc;
vlSelfRef.__PVT__mcycle = VL_SEL_IQII(64, vlSelfRef.__PVT__mc, 0U, 32);
vlSelfRef.__PVT__mcycleh = VL_SEL_IQII(64, vlSelfRef.__PVT__mc, 0x20U, 32);
}

void Vysyx_26010027_ysyx_26010027_CSR___nba_comb__TOP__ysyx_26010027__my_WBU__my_csr__0(Vysyx_26010027_ysyx_26010027_CSR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_CSR___nba_comb__TOP__ysyx_26010027__my_WBU__my_csr__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__csr_rdata = ((0x0f11U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mvendorid : ((0x0f12U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__marchid : ((0x0b00U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mcycle : ((0x0b80U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mcycleh : ((0x0300U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mstatus : ((0x0305U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mtvec : ((0x0341U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mepc : ((0x0342U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mcause : 0U))))))));
}
