// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_GPR___stl_sequent__TOP__ysyx_26010027__my_WBU__my_gpr__0(Vysyx_26010027_ysyx_26010027_GPR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_GPR___stl_sequent__TOP__ysyx_26010027__my_WBU__my_gpr__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__rdata2 = ((0U == (IData)(vlSelfRef.__PVT__raddr2)) ? 0U : vlSelfRef.__PVT__rf[(0x0000000fU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raddr2), 0U, 4))]);
vlSelfRef.__PVT__rdata1 = ((0U == (IData)(vlSelfRef.__PVT__raddr1)) ? 0U : vlSelfRef.__PVT__rf[(0x0000000fU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raddr1), 0U, 4))]);
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_GPR___ctor_var_reset(Vysyx_26010027_ysyx_26010027_GPR* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_26010027_ysyx_26010027_GPR___ctor_var_reset\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
vlSelf->__PVT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15530376126285439671ull);
vlSelf->__PVT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890271867161903902ull);
vlSelf->__PVT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12409248811792671830ull);
vlSelf->__PVT__raddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4247546063843827221ull);
vlSelf->__PVT__raddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2979831153133476890ull);
vlSelf->__PVT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12169918079455006130ull);
vlSelf->__PVT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10569764147769340794ull);
for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
vlSelf->__PVT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17363488919829229760ull);
}
vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
vlSelf->__VdlySet__rf__v0 = 0;
vlSelf->__VdlySet__rf__v1 = 0;
vlSelf->__VdlySet__rf__v2 = 0;
vlSelf->__VdlySet__rf__v3 = 0;
vlSelf->__VdlySet__rf__v4 = 0;
vlSelf->__VdlySet__rf__v5 = 0;
vlSelf->__VdlySet__rf__v6 = 0;
vlSelf->__VdlySet__rf__v7 = 0;
vlSelf->__VdlySet__rf__v8 = 0;
vlSelf->__VdlySet__rf__v9 = 0;
vlSelf->__VdlySet__rf__v10 = 0;
vlSelf->__VdlySet__rf__v11 = 0;
vlSelf->__VdlySet__rf__v12 = 0;
vlSelf->__VdlySet__rf__v13 = 0;
vlSelf->__VdlySet__rf__v14 = 0;
vlSelf->__VdlySet__rf__v15 = 0;
vlSelf->__VdlyVal__rf__v16 = 0;
vlSelf->__VdlyDim0__rf__v16 = 0;
vlSelf->__VdlySet__rf__v16 = 0;
}
