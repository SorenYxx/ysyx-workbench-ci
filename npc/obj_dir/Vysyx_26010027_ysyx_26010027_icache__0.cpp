// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027_icache___nba_sequent__TOP__ysyx_26010027__my_icache__0(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___nba_sequent__TOP__ysyx_26010027__my_icache__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__arb_araddr = vlSelfRef.__PVT__ifu_araddr;
}

void Vysyx_26010027_ysyx_26010027_icache___nba_sequent__TOP__ysyx_26010027__my_icache__1(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___nba_sequent__TOP__ysyx_26010027__my_icache__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_rdata = vlSelfRef.__PVT__arb_rdata;
vlSelfRef.__PVT__ifu_rvalid = vlSelfRef.__PVT__arb_rvalid;
}

void Vysyx_26010027_ysyx_26010027_icache___nba_sequent__TOP__ysyx_26010027__my_icache__2(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___nba_sequent__TOP__ysyx_26010027__my_icache__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__arb_rready = vlSelfRef.__PVT__ifu_rready;
vlSelfRef.__PVT__arb_arvalid = vlSelfRef.__PVT__ifu_arvalid;
}

void Vysyx_26010027_ysyx_26010027_icache___nba_comb__TOP__ysyx_26010027__my_icache__0(Vysyx_26010027_ysyx_26010027_icache* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_icache___nba_comb__TOP__ysyx_26010027__my_icache__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__ifu_arready = vlSelfRef.__PVT__arb_arready;
}
