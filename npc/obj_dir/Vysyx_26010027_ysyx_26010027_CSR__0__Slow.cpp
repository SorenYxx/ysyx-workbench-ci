// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_CSR___eval_static__TOP__ysyx_26010027__my_WBU__my_csr(Vysyx_26010027_ysyx_26010027_CSR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_CSR___eval_static__TOP__ysyx_26010027__my_WBU__my_csr\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__mvendorid = 0x79737978U;
vlSelfRef.__PVT__marchid = 0x018ce1abU;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_CSR___stl_sequent__TOP__ysyx_26010027__my_WBU__my_csr__0(Vysyx_26010027_ysyx_26010027_CSR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_CSR___stl_sequent__TOP__ysyx_26010027__my_WBU__my_csr__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__csr_mtvec = vlSelfRef.__PVT__mtvec;
vlSelfRef.__PVT__csr_mepc = vlSelfRef.__PVT__mepc;
vlSelfRef.__PVT__mcycle = VL_SEL_IQII(64, vlSelfRef.__PVT__mc, 0U, 32);
vlSelfRef.__PVT__mcycleh = VL_SEL_IQII(64, vlSelfRef.__PVT__mc, 0x20U, 32);
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_CSR___stl_sequent__TOP__ysyx_26010027__my_WBU__my_csr__1(Vysyx_26010027_ysyx_26010027_CSR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_CSR___stl_sequent__TOP__ysyx_26010027__my_WBU__my_csr__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__csr_rdata = ((0x0f11U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mvendorid : ((0x0f12U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__marchid : ((0x0b00U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mcycle : ((0x0b80U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mcycleh : ((0x0300U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mstatus : ((0x0305U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mtvec : ((0x0341U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mepc : ((0x0342U == (IData)(vlSelfRef.__PVT__csr_raddr)) ? vlSelfRef.__PVT__mcause : 0U))))))));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_CSR___ctor_var_reset(Vysyx_26010027_ysyx_26010027_CSR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_CSR___ctor_var_reset\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
vlSelf->__PVT__csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17810421086837207984ull);
vlSelf->__PVT__csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12840228928877068825ull);
vlSelf->__PVT__csr_raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17848086834327152458ull);
vlSelf->__PVT__csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7347808842701014756ull);
vlSelf->__PVT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6382147037310304714ull);
vlSelf->__PVT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686967141507380524ull);
vlSelf->__PVT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16711562886451133210ull);
vlSelf->__PVT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14107046366709206832ull);
vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
vlSelf->__PVT__csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17572232473588034262ull);
vlSelf->__PVT__mvendorid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2425237304222328689ull);
vlSelf->__PVT__marchid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 152733255345943133ull);
vlSelf->__PVT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9841767960740782177ull);
vlSelf->__PVT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8043781865875253518ull);
vlSelf->__PVT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1004233317896894470ull);
vlSelf->__PVT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16155705988360301293ull);
vlSelf->__PVT__mc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8160811300959409368ull);
vlSelf->__PVT__mcycle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4059750844790256659ull);
vlSelf->__PVT__mcycleh = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15021704719613474092ull);
vlSelf->__Vdly__mc = 0;
vlSelf->__Vdly__mstatus = 0;
vlSelf->__Vdly__mtvec = 0;
vlSelf->__Vdly__mepc = 0;
vlSelf->__Vdly__mcause = 0;
}
