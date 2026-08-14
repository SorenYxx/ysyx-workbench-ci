// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_26010027___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vysyx_26010027___024root___eval_triggers__ico(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_triggers__ico\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_26010027___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vysyx_26010027___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___trigger_anySet__ico\n"); );
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

void Vysyx_26010027___024root___ico_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___ico_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_26010027__DOT__exu_flush = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
                                                   && ((0U 
                                                        != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                       | (6U 
                                                          != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))));
    vlSelfRef.ysyx_26010027__DOT__exu_flush_pc = ((IData)(vlSelfRef.reset)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))
                                                    ? 
                                                   (((0U 
                                                      != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                     | (6U 
                                                        != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))
                                                     ? 
                                                    (((0U 
                                                       != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                      | (6U 
                                                         != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                                     : 0U)
                                                    : 0U));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_flush)
            ? vlSelfRef.ysyx_26010027__DOT__exu_flush_pc
            : ((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                   + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B)
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                    ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                       + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J)
                    : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid))
            ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc
            : vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc);
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 0U;
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][0U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [0U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][1U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [1U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][2U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [2U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 0U;
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][0U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [0U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 0U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][1U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [1U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 1U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][2U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [2U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 2U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][3U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [3U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 3U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way 
        = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt
        [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                         >> 4U))];
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][0U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [0U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][0U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 0U;
        }
    }
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][1U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][1U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 1U;
        }
    }
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][2U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [2U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][2U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 2U;
        }
    }
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][3U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [3U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][3U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 3U;
        }
    }
}

void Vysyx_26010027___024root___eval_ico(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_ico\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vysyx_26010027___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool Vysyx_26010027___024root___eval_phase__ico(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_phase__ico\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_26010027___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vysyx_26010027___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vysyx_26010027___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_26010027___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vysyx_26010027___024root___eval_triggers__act(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_triggers__act\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clock) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vysyx_26010027___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_26010027__ConstPool__TABLE_hce441473_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_26010027__ConstPool__TABLE_h9a46d3c3_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_26010027__ConstPool__TABLE_h50b6148b_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_26010027__ConstPool__TABLE_h12a8eb2a_0;
void Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r);

void Vysyx_26010027___024root___nba_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vdly__ysyx_26010027__DOT__idu_exu_rf_res;
    __Vdly__ysyx_26010027__DOT__idu_exu_rf_res = 0;
    CData/*2:0*/ __Vdly__ysyx_26010027__DOT__idu_exu_mem_r;
    __Vdly__ysyx_26010027__DOT__idu_exu_mem_r = 0;
    CData/*1:0*/ __Vdly__ysyx_26010027__DOT__idu_exu_mem_w;
    __Vdly__ysyx_26010027__DOT__idu_exu_mem_w = 0;
    CData/*0:0*/ __Vdly__ysyx_26010027__DOT__idu_exu_reg_w;
    __Vdly__ysyx_26010027__DOT__idu_exu_reg_w = 0;
    IData/*31:0*/ __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result;
    __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result = 0;
    CData/*2:0*/ __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r;
    __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r = 0;
    CData/*0:0*/ __Vdly__ysyx_26010027__DOT__exu_lsu_reg_w;
    __Vdly__ysyx_26010027__DOT__exu_lsu_reg_w = 0;
    CData/*1:0*/ __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res;
    __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res = 0;
    CData/*4:0*/ __Vdly__ysyx_26010027__DOT__exu_lsu_waddr;
    __Vdly__ysyx_26010027__DOT__exu_lsu_waddr = 0;
    CData/*0:0*/ __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlyVal__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    CData/*3:0*/ __VdlyDim0__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlyDim0__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    CData/*0:0*/ __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    // Body
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid 
        = vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid;
    __Vdly__ysyx_26010027__DOT__idu_exu_rf_res = vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__grant = vlSelfRef.ysyx_26010027__DOT__grant;
    __Vdly__ysyx_26010027__DOT__idu_exu_mem_r = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_jump 
        = vlSelfRef.ysyx_26010027__DOT__idu_exu_jump;
    __Vdly__ysyx_26010027__DOT__idu_exu_mem_w = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_waddr 
        = vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_inst 
        = vlSelfRef.ysyx_26010027__DOT__idu_exu_inst;
    __Vdly__ysyx_26010027__DOT__idu_exu_reg_w = vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_w 
        = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w;
    __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_inst 
        = vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr 
        = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_pc 
        = vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_pc 
        = vlSelfRef.ysyx_26010027__DOT__idu_exu_pc;
    __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result 
        = vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result;
    __Vdly__ysyx_26010027__DOT__exu_lsu_reg_w = vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w;
    __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res = vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res;
    __Vdly__ysyx_26010027__DOT__exu_lsu_waddr = vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state 
        = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__hit_count 
        = vlSelfRef.ysyx_26010027__DOT__hit_count;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_count 
        = vlSelfRef.ysyx_26010027__DOT__miss_count;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_latency 
        = vlSelfRef.ysyx_26010027__DOT__miss_latency;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__miss_cycle 
        = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__burst_count 
        = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count;
    vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__data__v128 = 0U;
    vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__valid__v128 = 0U;
    vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__tag__v128 = 0U;
    vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__valid__v0 = 0U;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__rvalid_o 
        = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_valid 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0 = 0U;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0U;
    __Vtableidx2 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r) 
                      << 4U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid) 
                                 & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state))) 
                                << 3U)) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0
        [__Vtableidx2]) {
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state 
            = Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0
            [__Vtableidx2];
    }
    __Vtableidx3 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b) 
                      << 6U) | (((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                   & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid)) 
                                 << 5U) | ((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid)) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w) 
                        << 1U) | (IData)(vlSelfRef.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hce441473_0
        [__Vtableidx3]) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w 
            = Vysyx_26010027__ConstPool__TABLE_h9a46d3c3_0
            [__Vtableidx3];
    }
    __Vtableidx4 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r) 
                      << 4U) | ((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid)) 
                                << 3U)) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0
        [__Vtableidx4]) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r 
            = Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0
            [__Vtableidx4];
    }
    __Vtableidx1 = (((((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                         & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))) 
                        << 3U) | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                   & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                  << 2U)) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))) 
                     << 4U) | ((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                 & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))) 
                                << 3U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__grant) 
                                           << 1U) | (IData)(vlSelfRef.reset))));
    if (Vysyx_26010027__ConstPool__TABLE_h50b6148b_0
        [__Vtableidx1]) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__grant 
            = Vysyx_26010027__ConstPool__TABLE_h12a8eb2a_0
            [__Vtableidx1];
    }
    __Vdly__ysyx_26010027__DOT__idu_exu_reg_w = ((1U 
                                                  & (~ (IData)(vlSelfRef.reset))) 
                                                 && (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                                      | ((0x33U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                                         | ((0x6fU 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                                               | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we)))))
                                                      : (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w)));
    vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))
                                                    ? 
                                                   ((0x6fU 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                                    | (0x17U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                                    : (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)));
    vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                                    | ((0x23U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                                       | ((0x17U 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))
                                                    : (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)));
    __Vdly__ysyx_26010027__DOT__exu_lsu_reg_w = ((1U 
                                                  & (~ (IData)(vlSelfRef.reset))) 
                                                 && (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))
                                                      ? (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w)
                                                      : (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__j = 4U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__i = 0x00000020U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0U;
        __Vdly__ysyx_26010027__DOT__idu_exu_rf_res = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op = 0U;
        __Vdly__ysyx_26010027__DOT__idu_exu_mem_r = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_jump = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_branch = 6U;
        __Vdly__ysyx_26010027__DOT__idu_exu_mem_w = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_waddr = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_inst = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_w = 0U;
        __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_inst = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_pc = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_pc = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_imm = 0U;
        __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result = 0U;
        __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res = 0U;
        __Vdly__ysyx_26010027__DOT__exu_lsu_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1 = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2 = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_valid = 0U;
    } else {
        if ((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__j = 4U;
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__i = 0x00000020U;
        }
        if (vlSelfRef.ysyx_26010027__DOT__exu_flush) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0U;
        } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0U;
        } else if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 1U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            __Vdly__ysyx_26010027__DOT__idu_exu_rf_res 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type)
                    ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we)
                             ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                                      ? 3U : 0U)));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op 
                = vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__alu_op;
            __Vdly__ysyx_26010027__DOT__idu_exu_mem_r 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                    ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                             ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                      ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                               ? 3U
                                               : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                                   ? 4U
                                                   : 5U)))));
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_jump 
                = vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__jump;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_branch 
                = vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch;
            __Vdly__ysyx_26010027__DOT__idu_exu_mem_w 
                = ((IData)((0x00002023U == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                    ? 0U : ((IData)((0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                             ? 1U : ((IData)((0x00001023U 
                                              == (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                      ? 2U : 3U)));
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_waddr 
                = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                  >> 7U));
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_inst 
                = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_pc 
                = vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_imm 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
                    ? (((- (IData)((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                           >> 0x00000014U))
                    : ((0x23U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                        ? (((- (IData)((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000fe0U 
                                                & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                     >> 7U))))
                        : ((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                            ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B
                            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U)
                                ? (0xfffff000U & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)
                                : ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                    ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J
                                    : 0U)))));
            vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1 
                = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                  >> 0x0000000fU));
            vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2 
                = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                  >> 0x00000014U));
        } else {
            __Vdly__ysyx_26010027__DOT__idu_exu_rf_res 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op;
            __Vdly__ysyx_26010027__DOT__idu_exu_mem_r 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_jump 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_jump;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_branch 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_branch;
            __Vdly__ysyx_26010027__DOT__idu_exu_mem_w 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_waddr 
                = (0x0000001fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr));
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_inst 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_inst;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_pc 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_pc;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_imm 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_imm;
            vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1 
                = (0x0000001fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1));
            vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2 
                = (0x0000001fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2));
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_w 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w;
            __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_inst 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_inst;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr 
                = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_pc 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_pc;
            __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result 
                = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result;
            __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res;
            __Vdly__ysyx_26010027__DOT__exu_lsu_waddr 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr;
        } else {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_w 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w;
            __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_inst 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_pc 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc;
            __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result;
            __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res;
            __Vdly__ysyx_26010027__DOT__exu_lsu_waddr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_valid = 1U;
        } else if (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_valid = 0U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i = 0x00000010U;
        __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0 = 1U;
    } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
                & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr)))) {
        Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr, vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata);
        __VdlyVal__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 
            = vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata;
        __VdlyDim0__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 
            = (0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr));
        __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 1U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result = 0U;
        vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc = 0x80000000U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r = 5U;
    } else {
        if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r) {
            vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch 
                = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o;
        }
        if (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r) {
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result 
                = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                    ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted
                    : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                        ? (((- (IData)((1U & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                              >> 7U)))) 
                            << 8U) | (0x000000ffU & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                        : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                            ? (((- (IData)((1U & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                  >> 0x0000000fU)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                            : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                ? (0x000000ffU & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                : ((4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                    ? (0x0000ffffU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                    : 0U)))));
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)))) {
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done = 0U;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r;
        } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r) 
                    | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b))) {
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done = 1U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc;
        }
    }
    vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w = __Vdly__ysyx_26010027__DOT__idu_exu_mem_w;
    vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r = __Vdly__ysyx_26010027__DOT__idu_exu_mem_r;
    vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w = __Vdly__ysyx_26010027__DOT__idu_exu_reg_w;
    vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res = __Vdly__ysyx_26010027__DOT__idu_exu_rf_res;
    if (__VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0) {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0x0aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0x0bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0x0cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0x0dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0x0eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0x0fU] = 0U;
    }
    if (__VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16) {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[__VdlyDim0__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16] 
            = __VdlyVal__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    }
    vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result 
        = __Vdly__ysyx_26010027__DOT__exu_lsu_alu_result;
    vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res = __Vdly__ysyx_26010027__DOT__exu_lsu_rf_res;
    vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr = __Vdly__ysyx_26010027__DOT__exu_lsu_waddr;
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr));
    vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w = __Vdly__ysyx_26010027__DOT__exu_lsu_reg_w;
    vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r = __Vdly__ysyx_26010027__DOT__exu_lsu_mem_r;
    vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w)
            ? (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr)
            : 0U);
}

void Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(IData/*31:0*/ lsu_get_data, IData/*31:0*/ lsu_w_data, IData/*31:0*/ exu_done, IData/*31:0*/ alu_we, IData/*31:0*/ csr_we, IData/*31:0*/ cpu_jump, IData/*31:0*/ cpu_branch, IData/*31:0*/ icache_hit, IData/*31:0*/ icache_miss, IData/*31:0*/ icache_miss_latency);
void Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1);
void Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

void Vysyx_26010027___024root___nba_sequent__TOP__1(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__1\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    __Vfunc_pmem_read__0__Vfuncout = 0;
    CData/*0:0*/ __Vdly__ysyx_26010027__DOT__pmem_rvalid;
    __Vdly__ysyx_26010027__DOT__pmem_rvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_26010027__DOT__pmem_wready;
    __Vdly__ysyx_26010027__DOT__pmem_wready = 0;
    CData/*0:0*/ __Vdly__ysyx_26010027__DOT__pmem_bvalid;
    __Vdly__ysyx_26010027__DOT__pmem_bvalid = 0;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(
                                                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                                                                             & (3U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))), 
                                                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                                                                             & (0x23U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))), (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid), 
                                                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                                                                             & ((0x33U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                                                                | ((0x13U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))), 
                                                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                                                                             & (0x73U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))), 
                                                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                                                                             & ((0x6fU 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                                                                | (0x67U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))), 
                                                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                                                                             & (0x63U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))), vlSelfRef.ysyx_26010027__DOT__hit_count, vlSelfRef.ysyx_26010027__DOT__miss_count, vlSelfRef.ysyx_26010027__DOT__miss_latency);
        if ((((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
             & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc, vlSelfRef.ysyx_26010027__DOT__exu_flush_pc, (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr), 
                                                                               (0x0000001fU 
                                                                                & (vlSelfRef.ysyx_26010027__DOT__idu_exu_inst 
                                                                                >> 0x0fU)));
        }
        if (VL_UNLIKELY((((0x00100073U == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst) 
                          | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                              & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))) 
                             | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                 & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                   & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))))))))) {
            Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
            VL_WRITEF_NX("ebreak at PC = 0x%x Inst = 0x%x\n",0,
                         32,vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc,
                         32,vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst);
            if (VL_UNLIKELY(((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                               & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))) 
                              | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                  & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))))) {
                VL_WRITEF_NX("![Access-FAULT]\n",0);
            }
        }
    }
    __Vdly__ysyx_26010027__DOT__pmem_wready = vlSelfRef.ysyx_26010027__DOT__pmem_wready;
    __Vdly__ysyx_26010027__DOT__pmem_bvalid = vlSelfRef.ysyx_26010027__DOT__pmem_bvalid;
    __Vdly__ysyx_26010027__DOT__pmem_rvalid = vlSelfRef.ysyx_26010027__DOT__pmem_rvalid;
    if (vlSelfRef.reset) {
        __Vdly__ysyx_26010027__DOT__pmem_rvalid = 0U;
        __Vdly__ysyx_26010027__DOT__pmem_wready = 0U;
        __Vdly__ysyx_26010027__DOT__pmem_bvalid = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid) 
             & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                 ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o)
                 : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))))) {
            __Vdly__ysyx_26010027__DOT__pmem_rvalid = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))) {
            __Vdly__ysyx_26010027__DOT__pmem_wready = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid) 
             & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)))) {
            __Vdly__ysyx_26010027__DOT__pmem_bvalid = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                            ((1U 
                                                                              == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                                              ? vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o
                                                                              : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), __Vfunc_pmem_read__0__Vfuncout);
            vlSelfRef.ysyx_26010027__DOT__pmem_read_data 
                = __Vfunc_pmem_read__0__Vfuncout;
            __Vdly__ysyx_26010027__DOT__pmem_rvalid = 1U;
        } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid) 
                    & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr, 
                                                                             ((0U 
                                                                               == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                                               ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                                                               : 
                                                                              VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U))), 
                                                                             ((0U 
                                                                               == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                                               ? 0x0000000fU
                                                                               : 
                                                                              (0x0000000fU 
                                                                               & ((1U 
                                                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                                                 ? 
                                                                                ((IData)(3U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr))
                                                                                 : 0U)))));
            __Vdly__ysyx_26010027__DOT__pmem_wready = 1U;
            __Vdly__ysyx_26010027__DOT__pmem_bvalid = 1U;
            vlSelfRef.ysyx_26010027__DOT__pmem_bresp = 0U;
        }
    }
    vlSelfRef.ysyx_26010027__DOT__pmem_wready = __Vdly__ysyx_26010027__DOT__pmem_wready;
    vlSelfRef.ysyx_26010027__DOT__pmem_bvalid = __Vdly__ysyx_26010027__DOT__pmem_bvalid;
    vlSelfRef.ysyx_26010027__DOT__pmem_rvalid = __Vdly__ysyx_26010027__DOT__pmem_rvalid;
}

extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h02dc8855_0;
void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

void Vysyx_26010027___024root___nba_sequent__TOP__2(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__2\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__data__v128;
    __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__data__v128 = 0;
    CData/*6:0*/ __VdlyLsb__ysyx_26010027__DOT__my_icache__DOT__data__v128;
    __VdlyLsb__ysyx_26010027__DOT__my_icache__DOT__data__v128 = 0;
    CData/*1:0*/ __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__data__v128;
    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__data__v128 = 0;
    CData/*4:0*/ __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__data__v128;
    __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__data__v128 = 0;
    IData/*22:0*/ __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__tag__v128;
    __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__tag__v128 = 0;
    CData/*1:0*/ __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__tag__v128;
    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__tag__v128 = 0;
    CData/*4:0*/ __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__tag__v128;
    __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__tag__v128 = 0;
    CData/*1:0*/ __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128;
    __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128;
    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128 = 0;
    CData/*1:0*/ __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__valid__v256;
    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__valid__v256 = 0;
    CData/*4:0*/ __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__valid__v256;
    __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__valid__v256 = 0;
    // Body
    vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr = vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_waddr;
    vlSelfRef.ysyx_26010027__DOT__idu_exu_inst = vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_inst;
    vlSelfRef.ysyx_26010027__DOT__idu_exu_jump = vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_jump;
    vlSelfRef.ysyx_26010027__DOT__idu_exu_pc = vlSelfRef.__Vdly__ysyx_26010027__DOT__idu_exu_pc;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r;
    vlSelfRef.ysyx_26010027__DOT__grant = vlSelfRef.__Vdly__ysyx_26010027__DOT__grant;
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12 
        = (vlSelfRef.ysyx_26010027__DOT__idu_exu_imm 
           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc);
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
            ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rresp)
            : 0U);
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst 
            = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_inst;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_pc;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__rvalid_o = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__hit_count = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_count = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_latency = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__miss_cycle = 0U;
        vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__valid__v0 = 1U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)))) {
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc;
        }
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst 
            = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_inst;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_pc;
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_rready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__rvalid_o = 0U;
        }
        if ((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) {
            vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__valid__v128 = 1U;
        }
        if ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state))) {
            if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid) {
                if (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit) {
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__hit_count 
                        = ((IData)(1U) + vlSelfRef.ysyx_26010027__DOT__hit_count);
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__rvalid_o = 1U;
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o 
                        = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                                (3U 
                                                                 & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                                    >> 2U)), 5U)))
                             ? 0U : (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                                     [(0x0000001fU 
                                       & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                          >> 4U))][
                                     (3U & vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way)][
                                     (((IData)(0x0000001fU) 
                                       + (0x0000007fU 
                                          & VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                              >> 2U)), 5U))) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                                       >> 2U)), 5U))))) 
                           | (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                              [(3U & vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way)][
                              (3U & (VL_SHIFTL_III(7,32,32, 
                                                   (3U 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 2U)), 5U) 
                                     >> 5U))] >> (0x0000001fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                                      >> 2U)), 5U))));
                } else {
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_count 
                        = ((IData)(1U) + vlSelfRef.ysyx_26010027__DOT__miss_count);
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o 
                        = (0xfffffff0U & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr);
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o = 1U;
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o = 1U;
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arlen_o = 3U;
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arsize_o = 2U;
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state = 1U;
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__miss_cycle = 0U;
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__burst_count = 0U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__miss_cycle 
                = ((IData)(1U) + vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle);
            if (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__handshake_ar) {
                vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o = 0U;
                vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__miss_cycle 
                = ((IData)(1U) + vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle);
            if (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__handshake_r) {
                __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__data__v128 
                    = vlSelfRef.ysyx_26010027__DOT__icache_rdata;
                __VdlyLsb__ysyx_26010027__DOT__my_icache__DOT__data__v128 
                    = (0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count), 5U));
                __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__data__v128 
                    = (3U & vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way);
                __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__data__v128 
                    = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                      >> 4U));
                vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__data__v128 = 1U;
                if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count) 
                     == (3U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                               >> 2U)))) {
                    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o 
                        = vlSelfRef.ysyx_26010027__DOT__icache_rdata;
                }
                if ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count))) {
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_latency 
                        = (vlSelfRef.ysyx_26010027__DOT__miss_latency 
                           + vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle);
                    __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__tag__v128 
                        = (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                           >> 9U);
                    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__tag__v128 
                        = (3U & vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way);
                    __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__tag__v128 
                        = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                          >> 4U));
                    vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__tag__v128 = 1U;
                    __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128 
                        = (3U & ((IData)(1U) + vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way));
                    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128 
                        = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                          >> 4U));
                    __VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__valid__v256 
                        = (3U & vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way);
                    __VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__valid__v256 
                        = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                          >> 4U));
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__rvalid_o = 1U;
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state = 0U;
                } else {
                    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__burst_count 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count)));
                }
            }
        } else {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state = 0U;
        }
    }
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__miss_cycle;
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__state;
    vlSelfRef.ysyx_26010027__DOT__hit_count = vlSelfRef.__Vdly__ysyx_26010027__DOT__hit_count;
    vlSelfRef.ysyx_26010027__DOT__miss_count = vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_count;
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__burst_count;
    vlSelfRef.ysyx_26010027__DOT__miss_latency = vlSelfRef.__Vdly__ysyx_26010027__DOT__miss_latency;
    if (vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__valid__v0) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0aU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0bU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0cU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0dU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0eU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x0fU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x10U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x11U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x12U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x13U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x14U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x15U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x16U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x17U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x18U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x19U][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1aU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1bU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1cU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1dU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1eU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0x1fU][3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[4U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[4U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[4U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[4U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[5U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[5U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[5U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[5U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[6U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[6U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[6U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[6U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[7U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[7U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[7U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[7U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[8U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[8U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[8U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[8U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[9U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[9U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[9U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[9U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x0fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x10U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x10U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x10U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x10U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x11U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x11U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x11U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x11U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x12U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x12U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x12U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x12U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x13U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x13U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x13U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x13U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x14U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x14U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x14U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x14U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x15U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x15U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x15U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x15U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x16U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x16U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x16U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x16U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x17U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x17U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x17U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x17U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x18U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x18U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x18U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x18U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x19U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x19U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x19U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x19U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1aU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1bU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1cU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1dU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1eU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0x1fU] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[4U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[4U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[4U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[4U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[5U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[5U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[5U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[5U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[6U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[6U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[6U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[6U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[7U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[7U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[7U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[7U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[8U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[8U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[8U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[8U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[9U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[9U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[9U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[9U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0aU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0aU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0aU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0aU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0bU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0bU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0bU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0bU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0cU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0cU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0cU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0cU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0dU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0dU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0dU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0dU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0eU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0eU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0eU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0eU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0fU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0fU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0fU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x0fU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x10U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x10U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x10U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x10U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x11U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x11U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x11U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x11U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x12U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x12U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x12U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x12U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x13U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x13U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x13U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x13U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x14U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x14U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x14U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x14U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x15U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x15U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x15U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x15U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x16U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x16U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x16U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x16U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x17U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x17U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x17U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x17U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x18U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x18U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x18U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x18U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x19U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x19U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x19U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x19U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1aU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1aU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1aU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1aU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1bU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1bU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1bU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1bU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1cU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1cU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1cU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1cU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1dU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1dU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1dU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1dU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1eU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1eU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1eU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1eU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1fU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1fU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1fU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0x1fU][3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__data__v128) {
        VL_ASSIGNSEL_WI(128, 32, (IData)(__VdlyLsb__ysyx_26010027__DOT__my_icache__DOT__data__v128), 
                        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                        [__VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__data__v128]
                        [__VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__data__v128], __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__data__v128);
    }
    if (vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__valid__v128) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0aU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0bU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0cU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0dU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0eU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x0fU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x10U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x11U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x12U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x13U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x14U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x15U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x16U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x17U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x18U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x19U][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1aU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1bU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1cU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1dU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1eU][3U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][0U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][1U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][2U] = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0x1fU][3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__ysyx_26010027__DOT__my_icache__DOT__tag__v128) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[__VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128] 
            = __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__repl_cnt__v128;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[__VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__valid__v256][__VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__valid__v256] = 1U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[__VdlyDim1__ysyx_26010027__DOT__my_icache__DOT__tag__v128][__VdlyDim0__ysyx_26010027__DOT__my_icache__DOT__tag__v128] 
            = __VdlyVal__ysyx_26010027__DOT__my_icache__DOT__tag__v128;
    }
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_icache__DOT__rvalid_o;
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr 
            = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w = 3U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)))) {
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w;
        }
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr 
            = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr;
    }
    vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w = vlSelfRef.__Vdly__ysyx_26010027__DOT__exu_lsu_mem_w;
    vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w)
            ? ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                        ? 0U : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc))))
            : 0U);
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o)
            ? vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o
            : vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch);
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata 
                = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2;
        }
    }
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I 
        = ((0x13U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
           | ((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
              | ((0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                 | (0x73U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U 
        = ((0x37U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
           | (0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne 
        = (IData)((0x00001063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq 
        = (IData)((0x00000063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt 
        = (IData)((0x00004063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge 
        = (IData)((0x00005063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu 
        = (IData)((0x00006063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu 
        = (IData)((0x00007063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B 
        = (((- (IData)((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000800U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                              << 4U)) | ((0x000007e0U 
                                          & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                             >> 0x00000014U)) 
                                         | (0x0000001eU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                               >> 7U)))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J 
        = ((((0x00000ffeU & ((- (IData)((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                         >> 0x0000001fU))) 
                             << 1U)) | (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                        >> 0x0000001fU)) 
            << 0x00000014U) | ((((0x000001feU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x0000000bU)) 
                                 | (1U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                          >> 0x00000014U))) 
                                << 0x0000000bU) | (0x000007feU 
                                                   & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                      >> 0x00000014U))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw 
        = (IData)((0x00001073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs 
        = (IData)((0x00002073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu 
        = (IData)((0x00004003U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu 
        = (IData)((0x00005003U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw = (IData)(
                                                            (0x00002003U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh = (IData)(
                                                            (0x00001003U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb = (IData)(
                                                            (3U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump 
        = ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
           | (0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid = 0U;
    } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)))) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_valid;
    vlSelfRef.__Vtableidx5 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu) 
                                << 5U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                           << 3U))) 
                              | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch 
        = Vysyx_26010027__ConstPool__TABLE_h02dc8855_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs) 
              | (IData)((0x00003073U == (0x0000707fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                    | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__jump 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
            ? 1U : ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)
                     ? 2U : ((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)
                              ? 3U : 0U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_3 = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready 
        = (1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__req_store 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid) 
           & ((~ ((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                  | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))) 
              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__idu_exu_valid = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__exu_flush) {
        vlSelfRef.ysyx_26010027__DOT__idu_exu_valid = 0U;
    } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
        vlSelfRef.ysyx_26010027__DOT__idu_exu_valid = 1U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready) {
        vlSelfRef.ysyx_26010027__DOT__idu_exu_valid = 0U;
    }
    if (((~ (((IData)((0x00000013U == (0x0000707fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
              | ((IData)((0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                 | ((IData)((0x00001013U == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                    | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                        & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                  >> 0x00000019U))) 
                       | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                        >> 0x00000019U))) 
                          | ((IData)((0x00003013U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                             | ((IData)((0x00004013U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                | ((IData)((0x00006013U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                   | ((IData)((0x00007013U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                     | (0x67U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))))))))))))) 
             | ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                  & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                            >> 0x00000019U))) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                      >> 0x00000019U))) 
                                                 | ((IData)(
                                                            (0x00001033U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                    | ((IData)(
                                                               (0x00002033U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                       | ((IData)(
                                                                  (0x00003033U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                          | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                                  >> 0x00000019U))) 
                                                             | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                                 & (0x20U 
                                                                    == 
                                                                    (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                                     >> 0x00000019U))) 
                                                                | ((IData)(
                                                                           (0x00004033U 
                                                                            == 
                                                                            (0x0000707fU 
                                                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                                   | ((IData)(
                                                                              (0x00006033U 
                                                                               == 
                                                                               (0x0000707fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                                      | (IData)(
                                                                                (0x00007033U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))))))))) 
                | (((IData)((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                    | ((IData)((0x00000023U == (0x0000707fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                       | (IData)((0x00001023U == (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))) 
                   | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu)))))) 
                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                         | ((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                               | ((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst) 
                                  | (0x0000100fU == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))))))) 
         & (0U != vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) {
        Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__alu_op 
        = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
             & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                       >> 0x00000019U))) | ((IData)(
                                                    (0x00000013U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type) 
                                               | (1U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__jump)))))
            ? 0U : ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                      & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                   >> 0x00000019U))) 
                     | (0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                     ? 1U : ((0x37U == (0x0000007fU 
                                        & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                              ? 2U : (((IData)((0x00001033U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                       | (IData)((0x00001013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))
                                       ? 3U : ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                     >> 0x00000019U))) 
                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                       >> 0x00000019U))))
                                                ? 4U
                                                : (
                                                   (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                         >> 0x00000019U))) 
                                                    | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                       & (0x20U 
                                                          == 
                                                          (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                           >> 0x00000019U))))
                                                    ? 5U
                                                    : 
                                                   (((IData)(
                                                             (0x00002033U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                     | (IData)(
                                                               (0x00002013U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))
                                                     ? 6U
                                                     : 
                                                    ((IData)(
                                                             (0x00003013U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                                      ? 7U
                                                      : 
                                                     ((IData)(
                                                              (0x00003033U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                                       ? 8U
                                                       : 
                                                      (((IData)(
                                                                (0x00004033U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                        | (IData)(
                                                                  (0x00004013U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))
                                                        ? 9U
                                                        : 
                                                       (((IData)(
                                                                 (0x00007033U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                         | (IData)(
                                                                   (0x00007013U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))
                                                         ? 0x0aU
                                                         : 
                                                        (((IData)(
                                                                  (0x00006033U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                          | (IData)(
                                                                    (0x00006013U 
                                                                     == 
                                                                     (0x0000707fU 
                                                                      & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))
                                                          ? 0x0bU
                                                          : 
                                                         ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)
                                                           ? 0x0cU
                                                           : 
                                                          ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs)
                                                            ? 0x0dU
                                                            : 0U))))))))))))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_3)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_3)));
    vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid = vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid 
        = (((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
            | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__req_store));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__req_store));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready 
        = (1U & ((~ (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                      & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                         & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7))))) 
                     | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                         & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                            & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8))))) 
                        | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                            & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2))) 
                           | ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                              & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))))))) 
                 & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid)) 
                    | (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
    vlSelfRef.ysyx_26010027__DOT__arb_awvalid = ((2U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
    vlSelfRef.ysyx_26010027__DOT__arb_arvalid = ((1U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o)
                                                  : (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
    vlSelfRef.ysyx_26010027__DOT__exu_flush = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
                                                   && ((0U 
                                                        != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                       | (6U 
                                                          != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid)) 
                 | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)));
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__handshake_ar 
        = (((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_rready 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15) 
           & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14) 
           & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
    vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_rready));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_rready) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15) 
                    & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)
                        ? vlSelfRef.ysyx_26010027__DOT__idu_exu_pc
                        : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                            ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                           [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))])))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14) 
                    & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)
                        ? vlSelfRef.ysyx_26010027__DOT__idu_exu_imm
                        : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))
                            ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                           [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))])))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid 
        = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
           - vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 
        = VL_LTS_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11 
        = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
           < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result 
        = ((8U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
            ? ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? 0U : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                             ? 0U : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                           | vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                           & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                           ^ vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11))))
            : ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, 
                                         (0x0000001fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                           >> (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                           << (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
                        : vlSelfRef.ysyx_26010027__DOT__idu_exu_imm)
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                            ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid
                                : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                    ? ((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                                        >= vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))))
                            : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                    ? (VL_GTES_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)))
                                : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                    ? ((0U == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                    : ((0U == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid)
                                        ? ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                        : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12))))
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                           + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)))));
    vlSelfRef.ysyx_26010027__DOT__exu_flush_pc = ((IData)(vlSelfRef.reset)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))
                                                    ? 
                                                   (((0U 
                                                      != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                     | (6U 
                                                        != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))
                                                     ? 
                                                    (((0U 
                                                       != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                      | (6U 
                                                         != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                                     : 0U)
                                                    : 0U));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_flush)
            ? vlSelfRef.ysyx_26010027__DOT__exu_flush_pc
            : ((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                   + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B)
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                    ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                       + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J)
                    : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid))
            ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc
            : vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc);
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 0U;
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][0U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [0U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][1U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [1U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][2U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [2U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 0U;
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][0U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [0U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 0U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][1U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [1U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 1U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][2U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [2U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 2U;
    }
    if ((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
         [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                          >> 4U))][3U] & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                          [(0x0000001fU 
                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))]
                                          [3U] == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                   >> 9U)))) {
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit = 1U;
        vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way = 3U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way 
        = vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt
        [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                         >> 4U))];
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][0U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [0U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][0U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 0U;
        }
    }
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][1U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][1U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 1U;
        }
    }
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][2U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [2U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][2U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 2U;
        }
    }
    if ((1U & (~ (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                  [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                   >> 4U))][3U] & (
                                                   vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                       >> 4U))]
                                                   [3U] 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                                    >> 9U)))))) {
        if ((1U & (~ vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                   [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                    >> 4U))][3U]))) {
            vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way = 3U;
        }
    }
}

void Vysyx_26010027___024root___nba_comb__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_comb__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))) {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp 
            = vlSelfRef.ysyx_26010027__DOT__pmem_bresp;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid 
            = vlSelfRef.ysyx_26010027__DOT__pmem_rvalid;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid 
            = vlSelfRef.ysyx_26010027__DOT__pmem_bvalid;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__icache_rdata = ((1U 
                                                   == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                                   : 0U);
    vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__handshake_r 
        = (((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
        = VL_SHIFTR_III(32,32,32, ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                    ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                    : 0U), VL_SHIFTL_III(32,32,32, 
                                                         (3U 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U));
    vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid) 
           & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))));
    vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid) 
           & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid) 
           & ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))));
}

void Vysyx_26010027___024root___eval_nba(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_nba\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vysyx_26010027___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vysyx_26010027___024root___eval_phase__act(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_phase__act\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_26010027___024root___eval_triggers__act(vlSelf);
    Vysyx_26010027___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vysyx_26010027___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vysyx_26010027___024root___eval_phase__nba(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_phase__nba\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vysyx_26010027___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vysyx_26010027___024root___eval_nba(vlSelf);
        Vysyx_26010027___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vysyx_26010027___024root___eval(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_26010027___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 12, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vysyx_26010027___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 12, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/ysyx_26010027.v", 12, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vysyx_26010027___024root___eval_phase__act(vlSelf));
    } while (Vysyx_26010027___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vysyx_26010027___024root___eval_debug_assertions(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_debug_assertions\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
