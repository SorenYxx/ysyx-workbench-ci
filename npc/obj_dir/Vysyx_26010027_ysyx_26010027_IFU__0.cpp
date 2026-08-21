// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027_IFU___nba_sequent__TOP__ysyx_26010027__my_IFU__0(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___nba_sequent__TOP__ysyx_26010027__my_IFU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__Vdly__flush_flag = vlSelfRef.__PVT__flush_flag;
vlSelfRef.__Vdly__flush_ar_sent = vlSelfRef.__PVT__flush_ar_sent;
vlSelfRef.__Vdly__ifu_idu_valid = vlSelfRef.__PVT__ifu_idu_valid;
vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
vlSelfRef.__Vdly__araddr_q = vlSelfRef.__PVT__araddr_q;
vlSelfRef.__Vdly__arvalid_q = vlSelfRef.__PVT__arvalid_q;
vlSelfRef.__Vdly__ifu_idu_inst = vlSelfRef.__PVT__ifu_idu_inst;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__flush_flag = 0U;
vlSelfRef.__Vdly__flush_ar_sent = 0U;
} else if (vlSelfRef.__PVT__exu_flush) {
vlSelfRef.__Vdly__flush_flag = 1U;
vlSelfRef.__Vdly__flush_ar_sent = 0U;
} else if (((IData)(vlSelfRef.__PVT__ar_flag) & (IData)(vlSelfRef.__PVT__flush_flag))) {
vlSelfRef.__Vdly__flush_ar_sent = 1U;
} else if (vlSelfRef.__PVT__handshake_ar) {
if (vlSelfRef.__PVT__flush_ar_sent) {
vlSelfRef.__Vdly__flush_flag = 0U;
}
vlSelfRef.__Vdly__flush_ar_sent = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__ifu_idu_valid = 0U;
} else if (((IData)(vlSelfRef.__PVT__exu_flush) | (IData)(vlSelfRef.__PVT__flush_flag))) {
vlSelfRef.__Vdly__ifu_idu_valid = 0U;
} else if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) & (IData)(vlSelfRef.__PVT__idu_ifu_ready))) {
vlSelfRef.__Vdly__ifu_idu_valid = 0U;
} else if (vlSelfRef.__PVT__handshake_r) {
vlSelfRef.__Vdly__ifu_idu_valid = 1U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__state = 0U;
} else if ((0U == (IData)(vlSelfRef.__PVT__state))) {
if (vlSelfRef.__PVT__handshake_ar) {
vlSelfRef.__Vdly__state = 1U;
}
} else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
if (vlSelfRef.__PVT__handshake_r) {
vlSelfRef.__Vdly__state = 0U;
}
} else {
vlSelfRef.__Vdly__state = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__arvalid_q = 0U;
vlSelfRef.__Vdly__araddr_q = 0U;
} else if (vlSelfRef.__PVT__handshake_ar) {
vlSelfRef.__Vdly__arvalid_q = 0U;
} else if (vlSelfRef.__PVT__ar_flag) {
vlSelfRef.__Vdly__arvalid_q = 1U;
vlSelfRef.__Vdly__araddr_q = (((IData)(vlSelfRef.__PVT__ifu_idu_valid) & (~ (IData)(vlSelfRef.__PVT__flush_flag))) ? vlSelfRef.__PVT__next_pc : vlSelfRef.__PVT__ifu_idu_pc);
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__ifu_idu_inst = 0U;
} else if (vlSelfRef.__PVT__exu_flush) {
vlSelfRef.__Vdly__ifu_idu_inst = 0U;
} else if (vlSelfRef.__PVT__handshake_r) {
vlSelfRef.__Vdly__ifu_idu_inst = vlSelfRef.__PVT__cpu_ifu_rdata;
}
vlSelfRef.__PVT__flush_ar_sent = vlSelfRef.__Vdly__flush_ar_sent;
vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
vlSelfRef.__PVT__flush_flag = vlSelfRef.__Vdly__flush_flag;
vlSelfRef.__PVT__araddr_q = vlSelfRef.__Vdly__araddr_q;
vlSelfRef.__PVT__arvalid_q = vlSelfRef.__Vdly__arvalid_q;
vlSelfRef.__Vdly__ifu_idu_pc = vlSelfRef.__PVT__ifu_idu_pc;
vlSelfRef.__PVT__ifu_idu_inst = vlSelfRef.__Vdly__ifu_idu_inst;
vlSelfRef.__PVT__ifu_cpu_rready = (1U == (IData)(vlSelfRef.__PVT__state));
vlSelfRef.__PVT__ifu_cpu_araddr = vlSelfRef.__PVT__araddr_q;
vlSelfRef.__PVT__ifu_cpu_arvalid = vlSelfRef.__PVT__arvalid_q;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__ifu_idu_pc = 0x80000000U;
} else if (vlSelfRef.__PVT__exu_flush) {
vlSelfRef.__Vdly__ifu_idu_pc = vlSelfRef.__PVT__exu_flush_pc;
} else if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) & (IData)(vlSelfRef.__PVT__idu_ifu_ready))) {
vlSelfRef.__Vdly__ifu_idu_pc = vlSelfRef.__PVT__next_pc;
}
vlSelfRef.__PVT__inst = vlSelfRef.__PVT__ifu_idu_inst;
vlSelfRef.__PVT__ifu_idu_valid = vlSelfRef.__Vdly__ifu_idu_valid;
vlSelfRef.__PVT__ifu_idu_pc = vlSelfRef.__Vdly__ifu_idu_pc;
vlSelfRef.__PVT__imm_B = VL_CONCAT_III(32,20,12, (0x000fffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x00000014U)), VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 7U)), VL_CONCAT_III(11,6,5, (0x0000003fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x19U, 6)), VL_CONCAT_III(5,4,1, (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 8U, 4)), 0U))));
vlSelfRef.__PVT__imm_J = VL_CONCAT_III(32,12,20, VL_CONCAT_III(12,11,1, (0x000007ffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x0000000bU)), (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU))), VL_CONCAT_III(20,9,11, VL_CONCAT_III(9,8,1, (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x0cU, 8)), (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x14U))), VL_CONCAT_III(11,10,1, (0x000003ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x15U, 10)), 0U)));
vlSelfRef.__PVT__opcode = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0U, 7));
vlSelfRef.__PVT__branch = (0x63U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__jump = ((0x67U == (IData)(vlSelfRef.__PVT__opcode)) | (0x6fU == (IData)(vlSelfRef.__PVT__opcode)));
vlSelfRef.__PVT__next_pc = ((IData)(vlSelfRef.__PVT__branch) ? (vlSelfRef.__PVT__ifu_idu_pc + vlSelfRef.__PVT__imm_B) : ((IData)(vlSelfRef.__PVT__jump) ? (vlSelfRef.__PVT__ifu_idu_pc + vlSelfRef.__PVT__imm_J) : ((IData)(4U) + vlSelfRef.__PVT__ifu_idu_pc)));
}

void Vysyx_26010027_ysyx_26010027_IFU___nba_comb__TOP__ysyx_26010027__my_IFU__0(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___nba_comb__TOP__ysyx_26010027__my_IFU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__handshake_ar = ((IData)(vlSelfRef.__PVT__arvalid_q) & (IData)(vlSelfRef.__PVT__cpu_ifu_arready));
}

void Vysyx_26010027_ysyx_26010027_IFU___nba_comb__TOP__ysyx_26010027__my_IFU__1(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___nba_comb__TOP__ysyx_26010027__my_IFU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__handshake_r = (((IData)(vlSelfRef.__PVT__cpu_ifu_rvalid) & (IData)(vlSelfRef.__PVT__ifu_cpu_rready)) & (0U == (IData)(vlSelfRef.__PVT__cpu_ifu_rresp)));
}

void Vysyx_26010027_ysyx_26010027_IFU___nba_comb__TOP__ysyx_26010027__my_IFU__2(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___nba_comb__TOP__ysyx_26010027__my_IFU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ar_flag = (((0U == (IData)(vlSelfRef.__PVT__state)) & (IData)(vlSelfRef.__PVT__idu_ifu_ready)) & (~ (IData)(vlSelfRef.__PVT__arvalid_q)));
}
