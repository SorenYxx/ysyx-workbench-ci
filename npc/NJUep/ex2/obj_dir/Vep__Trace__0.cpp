// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vep__Syms.h"


void Vep___024root__trace_chg_0_sub_0(Vep___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vep___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root__trace_chg_0\n"); );
    // Body
    Vep___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vep___024root*>(voidSelf);
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vep___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vep___024root__trace_chg_0_sub_0(Vep___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root__trace_chg_0_sub_0\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgCData(oldp+0,(vlSelfRef.x),2);
    bufp->chgBit(oldp+1,(vlSelfRef.en));
    bufp->chgCData(oldp+2,(vlSelfRef.y),4);
}

void Vep___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vep___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vep___024root*>(voidSelf);
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
