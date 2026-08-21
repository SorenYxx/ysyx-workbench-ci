// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_icache___eval_initial__TOP__ysyx_26010027__my_icache(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___eval_initial__TOP__ysyx_26010027__my_icache\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__arb_arlen = 0U;
vlSelfRef.__PVT__arb_arsize = 2U;
vlSelfRef.__PVT__hit_count = 0U;
vlSelfRef.__PVT__miss_count = 0U;
vlSelfRef.__PVT__miss_latency = 0U;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_icache___stl_sequent__TOP__ysyx_26010027__my_icache__0(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___stl_sequent__TOP__ysyx_26010027__my_icache__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_rdata = vlSelfRef.__PVT__arb_rdata;
vlSelfRef.__PVT__ifu_rvalid = vlSelfRef.__PVT__arb_rvalid;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_icache___stl_sequent__TOP__ysyx_26010027__my_icache__1(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___stl_sequent__TOP__ysyx_26010027__my_icache__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__arb_araddr = vlSelfRef.__PVT__ifu_araddr;
vlSelfRef.__PVT__arb_rready = vlSelfRef.__PVT__ifu_rready;
vlSelfRef.__PVT__arb_arvalid = vlSelfRef.__PVT__ifu_arvalid;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_icache___stl_sequent__TOP__ysyx_26010027__my_icache__2(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___stl_sequent__TOP__ysyx_26010027__my_icache__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_arready = vlSelfRef.__PVT__arb_arready;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_icache___ctor_var_reset(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___ctor_var_reset\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
vlSelf->__PVT__flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823618135036147526ull);
vlSelf->__PVT__ifu_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8972668427537912165ull);
vlSelf->__PVT__ifu_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4115755046418470527ull);
vlSelf->__PVT__ifu_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15514447091849551722ull);
vlSelf->__PVT__ifu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18323179280524970062ull);
vlSelf->__PVT__ifu_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18136454066863407069ull);
vlSelf->__PVT__ifu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5174487934210668359ull);
vlSelf->__PVT__arb_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1232570018901271965ull);
vlSelf->__PVT__arb_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16207480654425753374ull);
vlSelf->__PVT__arb_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9722039463158352236ull);
vlSelf->__PVT__arb_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8164879084404364685ull);
vlSelf->__PVT__arb_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6790914391816604216ull);
vlSelf->__PVT__arb_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6800096078308315140ull);
vlSelf->__PVT__arb_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3134507583884898236ull);
vlSelf->__PVT__arb_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10705376091210864213ull);
vlSelf->__PVT__hit_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7304462851487804693ull);
vlSelf->__PVT__miss_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 396090470891634137ull);
vlSelf->__PVT__miss_latency = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5485193450786108587ull);
}
