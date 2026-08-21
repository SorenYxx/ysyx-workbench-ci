// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"


void Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r);

void Vysyx_26010027_ysyx_26010027_GPR___nba_sequent__TOP__ysyx_26010027__my_WBU__my_gpr__0(Vysyx_26010027_ysyx_26010027_GPR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_GPR___nba_sequent__TOP__ysyx_26010027__my_WBU__my_gpr__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__VdlySet__rf__v0 = 0U;
vlSelfRef.__VdlySet__rf__v1 = 0U;
vlSelfRef.__VdlySet__rf__v2 = 0U;
vlSelfRef.__VdlySet__rf__v3 = 0U;
vlSelfRef.__VdlySet__rf__v4 = 0U;
vlSelfRef.__VdlySet__rf__v5 = 0U;
vlSelfRef.__VdlySet__rf__v6 = 0U;
vlSelfRef.__VdlySet__rf__v7 = 0U;
vlSelfRef.__VdlySet__rf__v8 = 0U;
vlSelfRef.__VdlySet__rf__v9 = 0U;
vlSelfRef.__VdlySet__rf__v10 = 0U;
vlSelfRef.__VdlySet__rf__v11 = 0U;
vlSelfRef.__VdlySet__rf__v12 = 0U;
vlSelfRef.__VdlySet__rf__v13 = 0U;
vlSelfRef.__VdlySet__rf__v14 = 0U;
vlSelfRef.__VdlySet__rf__v15 = 0U;
vlSelfRef.__VdlySet__rf__v16 = 0U;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__PVT__i = 0U;
vlSelfRef.__VdlySet__rf__v0 = 1U;
vlSelfRef.__PVT__i = 1U;
vlSelfRef.__VdlySet__rf__v1 = 1U;
vlSelfRef.__PVT__i = 2U;
vlSelfRef.__VdlySet__rf__v2 = 1U;
vlSelfRef.__PVT__i = 3U;
vlSelfRef.__VdlySet__rf__v3 = 1U;
vlSelfRef.__PVT__i = 4U;
vlSelfRef.__VdlySet__rf__v4 = 1U;
vlSelfRef.__PVT__i = 5U;
vlSelfRef.__VdlySet__rf__v5 = 1U;
vlSelfRef.__PVT__i = 6U;
vlSelfRef.__VdlySet__rf__v6 = 1U;
vlSelfRef.__PVT__i = 7U;
vlSelfRef.__VdlySet__rf__v7 = 1U;
vlSelfRef.__PVT__i = 8U;
vlSelfRef.__VdlySet__rf__v8 = 1U;
vlSelfRef.__PVT__i = 9U;
vlSelfRef.__VdlySet__rf__v9 = 1U;
vlSelfRef.__PVT__i = 0x0000000aU;
vlSelfRef.__VdlySet__rf__v10 = 1U;
vlSelfRef.__PVT__i = 0x0000000bU;
vlSelfRef.__VdlySet__rf__v11 = 1U;
vlSelfRef.__PVT__i = 0x0000000cU;
vlSelfRef.__VdlySet__rf__v12 = 1U;
vlSelfRef.__PVT__i = 0x0000000dU;
vlSelfRef.__VdlySet__rf__v13 = 1U;
vlSelfRef.__PVT__i = 0x0000000eU;
vlSelfRef.__VdlySet__rf__v14 = 1U;
vlSelfRef.__PVT__i = 0x0000000fU;
vlSelfRef.__VdlySet__rf__v15 = 1U;
vlSelfRef.__PVT__i = 0x00000010U;
} else if (((IData)(vlSelfRef.__PVT__wen) & (0U != (IData)(vlSelfRef.__PVT__waddr)))) {
vlSelfRef.__VdlyVal__rf__v16 = vlSelfRef.__PVT__wdata;
vlSelfRef.__VdlyDim0__rf__v16 = (0x0000000fU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__waddr), 0U, 4));
vlSelfRef.__VdlySet__rf__v16 = 1U;
Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__waddr)), vlSelfRef.__PVT__wdata);
}
if (vlSelfRef.__VdlySet__rf__v0) {
vlSelfRef.__PVT__rf[0U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v1) {
vlSelfRef.__PVT__rf[1U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v2) {
vlSelfRef.__PVT__rf[2U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v3) {
vlSelfRef.__PVT__rf[3U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v4) {
vlSelfRef.__PVT__rf[4U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v5) {
vlSelfRef.__PVT__rf[5U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v6) {
vlSelfRef.__PVT__rf[6U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v7) {
vlSelfRef.__PVT__rf[7U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v8) {
vlSelfRef.__PVT__rf[8U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v9) {
vlSelfRef.__PVT__rf[9U] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v10) {
vlSelfRef.__PVT__rf[0x0aU] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v11) {
vlSelfRef.__PVT__rf[0x0bU] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v12) {
vlSelfRef.__PVT__rf[0x0cU] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v13) {
vlSelfRef.__PVT__rf[0x0dU] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v14) {
vlSelfRef.__PVT__rf[0x0eU] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v15) {
vlSelfRef.__PVT__rf[0x0fU] = 0U;
}
if (vlSelfRef.__VdlySet__rf__v16) {
vlSelfRef.__PVT__rf[vlSelfRef.__VdlyDim0__rf__v16] = vlSelfRef.__VdlyVal__rf__v16;
}
}

void Vysyx_26010027_ysyx_26010027_GPR___nba_comb__TOP__ysyx_26010027__my_WBU__my_gpr__0(Vysyx_26010027_ysyx_26010027_GPR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_GPR___nba_comb__TOP__ysyx_26010027__my_WBU__my_gpr__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__rdata1 = ((0U == (IData)(vlSelfRef.__PVT__raddr1)) ? 0U : vlSelfRef.__PVT__rf[(0x0000000fU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raddr1), 0U, 4))]);
vlSelfRef.__PVT__rdata2 = ((0U == (IData)(vlSelfRef.__PVT__raddr2)) ? 0U : vlSelfRef.__PVT__rf[(0x0000000fU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raddr2), 0U, 4))]);
}
