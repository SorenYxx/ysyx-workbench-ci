// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_IFU___eval_initial__TOP__ysyx_26010027__my_IFU(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___eval_initial__TOP__ysyx_26010027__my_IFU\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_cpu_arid = 0U;
vlSelfRef.__PVT__ifu_cpu_arlen = 0U;
vlSelfRef.__PVT__ifu_cpu_arsize = 2U;
vlSelfRef.__PVT__ifu_cpu_arburst = 1U;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_IFU___stl_sequent__TOP__ysyx_26010027__my_IFU__0(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___stl_sequent__TOP__ysyx_26010027__my_IFU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_cpu_araddr = vlSelfRef.__PVT__araddr_q;
vlSelfRef.__PVT__ifu_cpu_rready = (1U == (IData)(vlSelfRef.__PVT__state));
vlSelfRef.__PVT__inst = vlSelfRef.__PVT__ifu_idu_inst;
vlSelfRef.__PVT__ifu_cpu_arvalid = vlSelfRef.__PVT__arvalid_q;
vlSelfRef.__PVT__imm_B = VL_CONCAT_III(32,20,12, (0x000fffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x00000014U)), VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 7U)), VL_CONCAT_III(11,6,5, (0x0000003fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x19U, 6)), VL_CONCAT_III(5,4,1, (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 8U, 4)), 0U))));
vlSelfRef.__PVT__imm_J = VL_CONCAT_III(32,12,20, VL_CONCAT_III(12,11,1, (0x000007ffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x0000000bU)), (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU))), VL_CONCAT_III(20,9,11, VL_CONCAT_III(9,8,1, (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x0cU, 8)), (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x14U))), VL_CONCAT_III(11,10,1, (0x000003ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x15U, 10)), 0U)));
vlSelfRef.__PVT__opcode = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0U, 7));
vlSelfRef.__PVT__branch = (0x63U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__jump = ((0x67U == (IData)(vlSelfRef.__PVT__opcode)) | (0x6fU == (IData)(vlSelfRef.__PVT__opcode)));
vlSelfRef.__PVT__next_pc = ((IData)(vlSelfRef.__PVT__branch) ? (vlSelfRef.__PVT__ifu_idu_pc + vlSelfRef.__PVT__imm_B) : ((IData)(vlSelfRef.__PVT__jump) ? (vlSelfRef.__PVT__ifu_idu_pc + vlSelfRef.__PVT__imm_J) : ((IData)(4U) + vlSelfRef.__PVT__ifu_idu_pc)));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_IFU___stl_sequent__TOP__ysyx_26010027__my_IFU__1(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___stl_sequent__TOP__ysyx_26010027__my_IFU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__handshake_r = (((IData)(vlSelfRef.__PVT__cpu_ifu_rvalid) & (IData)(vlSelfRef.__PVT__ifu_cpu_rready)) & (0U == (IData)(vlSelfRef.__PVT__cpu_ifu_rresp)));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_IFU___stl_sequent__TOP__ysyx_26010027__my_IFU__2(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___stl_sequent__TOP__ysyx_26010027__my_IFU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ar_flag = (((0U == (IData)(vlSelfRef.__PVT__state)) & (IData)(vlSelfRef.__PVT__idu_ifu_ready)) & (~ (IData)(vlSelfRef.__PVT__arvalid_q)));
vlSelfRef.__PVT__handshake_ar = ((IData)(vlSelfRef.__PVT__arvalid_q) & (IData)(vlSelfRef.__PVT__cpu_ifu_arready));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_IFU___ctor_var_reset(Vysyx_26010027_ysyx_26010027_IFU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IFU___ctor_var_reset\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
vlSelf->__PVT__ifu_idu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14371617750656682084ull);
vlSelf->__PVT__idu_ifu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17611891060339652812ull);
vlSelf->__PVT__ifu_idu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686918125687587890ull);
vlSelf->__PVT__ifu_idu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16791534929436577523ull);
vlSelf->__PVT__exu_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9574981724881550454ull);
vlSelf->__PVT__exu_flush_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11763334058525865209ull);
vlSelf->__PVT__cpu_ifu_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150964740011641255ull);
vlSelf->__PVT__ifu_cpu_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14131355737940330965ull);
vlSelf->__PVT__ifu_cpu_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8492400115727642086ull);
vlSelf->__PVT__ifu_cpu_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6255655309221134931ull);
vlSelf->__PVT__ifu_cpu_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10304585938759179210ull);
vlSelf->__PVT__ifu_cpu_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15604724595759835975ull);
vlSelf->__PVT__ifu_cpu_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 846635613697177846ull);
vlSelf->__PVT__cpu_ifu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7285217286592322185ull);
vlSelf->__PVT__ifu_cpu_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12166715731237910311ull);
vlSelf->__PVT__cpu_ifu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4834727392465339802ull);
vlSelf->__PVT__cpu_ifu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11000008308430698012ull);
vlSelf->__PVT__cpu_ifu_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11192571458016751655ull);
vlSelf->__PVT__cpu_ifu_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 574719463867346499ull);
vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
vlSelf->__PVT__arvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225851964094051305ull);
vlSelf->__PVT__araddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9480929739945656330ull);
vlSelf->__PVT__flush_ar_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150108299310634718ull);
vlSelf->__PVT__ar_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15695655809616085224ull);
vlSelf->__PVT__handshake_ar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1787388246070772955ull);
vlSelf->__PVT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4849477317213942569ull);
vlSelf->__PVT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
vlSelf->__PVT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
vlSelf->__PVT__imm_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17009729719983125968ull);
vlSelf->__PVT__imm_J = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7730688582125926729ull);
vlSelf->__PVT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
vlSelf->__PVT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906078629849262824ull);
vlSelf->__PVT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13592750897586193959ull);
vlSelf->__PVT__flush_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8892939902674879602ull);
vlSelf->__Vdly__state = 0;
vlSelf->__Vdly__arvalid_q = 0;
vlSelf->__Vdly__araddr_q = 0;
vlSelf->__Vdly__ifu_idu_pc = 0;
vlSelf->__Vdly__ifu_idu_inst = 0;
vlSelf->__Vdly__flush_flag = 0;
vlSelf->__Vdly__flush_ar_sent = 0;
vlSelf->__Vdly__ifu_idu_valid = 0;
}
