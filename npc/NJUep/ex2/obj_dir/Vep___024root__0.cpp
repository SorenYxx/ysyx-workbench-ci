// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vep.h for the primary calling header

#include "Vep__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vep___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vep___024root___eval_triggers__ico(Vep___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___eval_triggers__ico\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vep___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vep___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 8> Vep__ConstPool__TABLE_hced699b5_0;

void Vep___024root___ico_sequent__TOP__0(Vep___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___ico_sequent__TOP__0\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.x) << 1U) | (IData)(vlSelfRef.en));
    vlSelfRef.y = Vep__ConstPool__TABLE_hced699b5_0
        [__Vtableidx1];
}

void Vep___024root___eval_ico(Vep___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___eval_ico\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vep___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vep___024root___eval_phase__ico(Vep___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___eval_phase__ico\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vep___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vep___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vep___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vep___024root___eval(Vep___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___eval\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vep___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("decode24.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vep___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void Vep___024root___eval_debug_assertions(Vep___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vep___024root___eval_debug_assertions\n"); );
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.x & 0xfcU)))) {
        Verilated::overWidthError("x");
    }
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");
    }
}
#endif  // VL_DEBUG
