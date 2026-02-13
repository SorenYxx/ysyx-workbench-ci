// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

VL_ATTR_COLD void Vminirv___024root___eval_static(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_static\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vminirv___024root___eval_initial(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_initial\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminirv___024root___eval_final(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_final\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vminirv___024root___eval_phase__stl(Vminirv___024root* vlSelf);

VL_ATTR_COLD void Vminirv___024root___eval_settle(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_settle\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vminirv___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/minirv.v", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vminirv___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vminirv___024root___eval_triggers__stl(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_triggers__stl\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminirv___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vminirv___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vminirv___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vminirv___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_anySet__stl\n"); );
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

void Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 64> Vminirv__ConstPool__TABLE_h02dc8855_0;

VL_ATTR_COLD void Vminirv___024root___stl_sequent__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___stl_sequent__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cur_pc = vlSelfRef.minirv__DOT__pc;
    Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__pc, vlSelfRef.__Vfunc_pmem_read__2__Vfuncout);
    vlSelfRef.minirv__DOT__inst = vlSelfRef.__Vfunc_pmem_read__2__Vfuncout;
    vlSelfRef.cur_inst = vlSelfRef.minirv__DOT__inst;
    vlSelfRef.minirv__DOT__R__DOT__rdata2 = ((0U == 
                                              (0x0000001fU 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 0x00000014U)))
                                              ? 0U : 
                                             vlSelfRef.minirv__DOT__R__DOT__rf
                                             [(0x0000001fU 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 0x00000014U))]);
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.__Vtableidx1 = ((((IData)((0x00007063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.minirv__DOT__inst))) 
                                << 5U) | (((IData)(
                                                   (0x00006063U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.minirv__DOT__inst))) 
                                           << 4U) | 
                                          ((IData)(
                                                   (0x00005063U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.minirv__DOT__inst))) 
                                           << 3U))) 
                              | (((IData)((0x00004063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.minirv__DOT__inst))) 
                                  << 2U) | (((IData)(
                                                     (0x00000063U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst))) 
                                             << 1U) 
                                            | (IData)(
                                                      (0x00001063U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst))))));
    vlSelfRef.minirv__DOT__b_type = Vminirv__ConstPool__TABLE_h02dc8855_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U = ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.minirv__DOT__inst)) 
                                                  | (0x17U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__j_type = ((0x6fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.minirv__DOT__inst)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__lbu = (IData)(
                                                      (0x00004003U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__lhu = (IData)(
                                                      (0x00005003U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__lw = (IData)(
                                                     (0x00002003U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__lh = (IData)(
                                                     (0x00001003U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__lb = (IData)(
                                                     (3U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I = ((0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.minirv__DOT__inst)) 
                                                  | ((3U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.minirv__DOT__inst)) 
                                                     | (0x67U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.minirv__DOT__inst))));
    vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lw)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lb)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lh)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu)
                                                      ? 4U
                                                      : 5U)))));
    vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu) 
                                                   | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu) 
                                                      | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lw) 
                                                         | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lh) 
                                                            | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lb)))));
    vlSelfRef.minirv__DOT__R__DOT__wen = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                                          | ((0x33U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst)) 
                                                | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U))));
    vlSelfRef.minirv__DOT__my_IDU__DOT__imm = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelfRef.minirv__DOT__inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.minirv__DOT__inst 
                                                      >> 0x00000014U))
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.minirv__DOT__inst))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.minirv__DOT__inst 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000cU) 
                                                    | ((0x00000fe0U 
                                                        & (vlSelfRef.minirv__DOT__inst 
                                                           >> 0x00000014U)) 
                                                       | (0x0000001fU 
                                                          & (vlSelfRef.minirv__DOT__inst 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.minirv__DOT__inst))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.minirv__DOT__inst 
                                                                  >> 0x0000001fU))) 
                                                      << 0x0000000cU) 
                                                     | ((0x00000800U 
                                                         & (vlSelfRef.minirv__DOT__inst 
                                                            << 4U)) 
                                                        | ((0x000007e0U 
                                                            & (vlSelfRef.minirv__DOT__inst 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001eU 
                                                              & (vlSelfRef.minirv__DOT__inst 
                                                                 >> 7U)))))
                                                     : 
                                                    ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.minirv__DOT__inst)
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.minirv__DOT__inst))
                                                       ? 
                                                      ((((0x00000ffeU 
                                                          & ((- (IData)(
                                                                        (vlSelfRef.minirv__DOT__inst 
                                                                         >> 0x0000001fU))) 
                                                             << 1U)) 
                                                         | (vlSelfRef.minirv__DOT__inst 
                                                            >> 0x0000001fU)) 
                                                        << 0x00000014U) 
                                                       | ((((0x000001feU 
                                                             & (vlSelfRef.minirv__DOT__inst 
                                                                >> 0x0000000bU)) 
                                                            | (1U 
                                                               & (vlSelfRef.minirv__DOT__inst 
                                                                  >> 0x00000014U))) 
                                                           << 0x0000000bU) 
                                                          | (0x000007feU 
                                                             & (vlSelfRef.minirv__DOT__inst 
                                                                >> 0x00000014U))))
                                                       : 0U)))));
    vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)
                                                    ? 2U
                                                    : 0U));
    vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op = ((
                                                   ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11) 
                                                    & (0U 
                                                       == 
                                                       (vlSelfRef.minirv__DOT__inst 
                                                        >> 0x19U))) 
                                                   | ((IData)(
                                                              (0x00000013U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.minirv__DOT__inst))) 
                                                      | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type) 
                                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))))
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelfRef.minirv__DOT__inst 
                                                         >> 0x19U))) 
                                                    | (0x63U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.minirv__DOT__inst)))
                                                    ? 1U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.minirv__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    (((IData)(
                                                              (0x00001033U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.minirv__DOT__inst))) 
                                                      | (IData)(
                                                                (0x00001013U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.minirv__DOT__inst))))
                                                      ? 3U
                                                      : 
                                                     ((((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12) 
                                                        & (0U 
                                                           == 
                                                           (vlSelfRef.minirv__DOT__inst 
                                                            >> 0x19U))) 
                                                       | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4) 
                                                          & (0U 
                                                             == 
                                                             (vlSelfRef.minirv__DOT__inst 
                                                              >> 0x19U))))
                                                       ? 4U
                                                       : 
                                                      ((((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12) 
                                                         & (0x20U 
                                                            == 
                                                            (vlSelfRef.minirv__DOT__inst 
                                                             >> 0x19U))) 
                                                        | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelfRef.minirv__DOT__inst 
                                                               >> 0x19U))))
                                                        ? 5U
                                                        : 
                                                       (((IData)(
                                                                 (0x00002033U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.minirv__DOT__inst))) 
                                                         | (IData)(
                                                                   (0x00002013U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSelfRef.minirv__DOT__inst))))
                                                         ? 6U
                                                         : 
                                                        ((IData)(
                                                                 (0x00003013U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.minirv__DOT__inst)))
                                                          ? 7U
                                                          : 
                                                         ((IData)(
                                                                  (0x00003033U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.minirv__DOT__inst)))
                                                           ? 8U
                                                           : 
                                                          (((IData)(
                                                                    (0x00004033U 
                                                                     == 
                                                                     (0x0000707fU 
                                                                      & vlSelfRef.minirv__DOT__inst))) 
                                                            | (IData)(
                                                                      (0x00004013U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSelfRef.minirv__DOT__inst))))
                                                            ? 9U
                                                            : 
                                                           (((IData)(
                                                                     (0x00007033U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSelfRef.minirv__DOT__inst))) 
                                                             | (IData)(
                                                                       (0x00007013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSelfRef.minirv__DOT__inst))))
                                                             ? 0x0aU
                                                             : 
                                                            (((IData)(
                                                                      (0x00006033U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSelfRef.minirv__DOT__inst))) 
                                                              | (IData)(
                                                                        (0x00006013U 
                                                                         == 
                                                                         (0x0000707fU 
                                                                          & vlSelfRef.minirv__DOT__inst))))
                                                              ? 0x0bU
                                                              : 0U))))))))))));
    vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 = (((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst)) 
                                                | (0x17U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.minirv__DOT__inst)))
                                                ? vlSelfRef.minirv__DOT__pc
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.minirv__DOT__inst 
                                                        >> 0x0000000fU)))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.minirv__DOT__R__DOT__rf
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.minirv__DOT__inst 
                                                       >> 0x0000000fU))]));
    vlSelfRef.minirv__DOT__my_EXU__DOT__rs2 = (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                                                | ((0x23U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.minirv__DOT__inst)) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.minirv__DOT__inst)) 
                                                      | (0x6fU 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.minirv__DOT__inst)))))
                                                ? vlSelfRef.minirv__DOT__my_IDU__DOT__imm
                                                : vlSelfRef.minirv__DOT__R__DOT__rdata2);
    vlSelfRef.minirv__DOT__my_EXU__DOT__result = 0U;
    if ((8U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__alu_result = ((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   | vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   & vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   ^ vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   < vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))));
    } else if ((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__alu_result = ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                  < vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                  : 
                                                 VL_LTS_III(32, vlSelfRef.minirv__DOT__my_EXU__DOT__rs1, vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelfRef.minirv__DOT__my_EXU__DOT__rs1, 
                                                                (0x0000001fU 
                                                                 & vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))
                                                  : 
                                                 (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                  >> 
                                                  (0x0000001fU 
                                                   & vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))));
    } else if ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__alu_result = ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                              ? (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                 << 
                                                 (0x0000001fU 
                                                  & vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))
                                              : vlSelfRef.minirv__DOT__my_IDU__DOT__imm);
    } else if ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
        vlSelfRef.minirv__DOT__my_EXU__DOT__result 
            = (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
               - vlSelfRef.minirv__DOT__my_EXU__DOT__rs2);
        vlSelfRef.minirv__DOT__alu_result = ((4U & (IData)(vlSelfRef.minirv__DOT__b_type))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.minirv__DOT__b_type))
                                                  ? vlSelfRef.minirv__DOT__my_EXU__DOT__result
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__b_type))
                                                   ? 
                                                  (VL_LTES_III(32, 0U, vlSelfRef.minirv__DOT__my_EXU__DOT__result)
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__pc 
                                                    + vlSelfRef.minirv__DOT__my_IDU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.minirv__DOT__pc))
                                                   : 
                                                  (VL_GTS_III(32, 0U, vlSelfRef.minirv__DOT__my_EXU__DOT__result)
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__pc 
                                                    + vlSelfRef.minirv__DOT__my_IDU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.minirv__DOT__pc))))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.minirv__DOT__b_type))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__b_type))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelfRef.minirv__DOT__my_EXU__DOT__rs1, vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__pc 
                                                    + vlSelfRef.minirv__DOT__my_IDU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.minirv__DOT__pc))
                                                   : 
                                                  (VL_LTS_III(32, vlSelfRef.minirv__DOT__my_EXU__DOT__rs1, vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__pc 
                                                    + vlSelfRef.minirv__DOT__my_IDU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.minirv__DOT__pc)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__b_type))
                                                   ? 
                                                  ((0U 
                                                    == vlSelfRef.minirv__DOT__my_EXU__DOT__result)
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__pc 
                                                    + vlSelfRef.minirv__DOT__my_IDU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.minirv__DOT__pc))
                                                   : 
                                                  ((0U 
                                                    != vlSelfRef.minirv__DOT__my_EXU__DOT__result)
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__pc 
                                                    + vlSelfRef.minirv__DOT__my_IDU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.minirv__DOT__pc)))));
    } else {
        vlSelfRef.minirv__DOT__alu_result = (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                             + vlSelfRef.minirv__DOT__my_EXU__DOT__rs2);
    }
    vlSelfRef.minirv__DOT__n_pc = (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type) 
                                    | (6U != (IData)(vlSelfRef.minirv__DOT__b_type)))
                                    ? vlSelfRef.minirv__DOT__alu_result
                                    : ((IData)(4U) 
                                       + vlSelfRef.minirv__DOT__pc));
    vlSelfRef.minirv__DOT__R__DOT__waddr = ((IData)(vlSelfRef.minirv__DOT__R__DOT__wen)
                                             ? (0x0000001fU 
                                                & (vlSelfRef.minirv__DOT__inst 
                                                   >> 7U))
                                             : 0U);
    Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__alu_result, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
    vlSelfRef.minirv__DOT__my_LSU__DOT__rdata = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    vlSelfRef.minirv__DOT__my_LSU__DOT__data_s = VL_SHIFTR_III(32,32,32, vlSelfRef.minirv__DOT__my_LSU__DOT__rdata, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.minirv__DOT__alu_result), 3U));
    if (vlSelfRef.minirv__DOT__R__DOT__wen) {
        if ((0U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res))) {
            vlSelfRef.minirv__DOT__wdata = vlSelfRef.minirv__DOT__alu_result;
        } else if ((1U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res))) {
            vlSelfRef.minirv__DOT__wdata = ((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                  ? 0U
                                                  : 
                                                 (0x0000ffffU 
                                                  & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                  ? 
                                                 (0x000000ffU 
                                                  & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.minirv__DOT__my_LSU__DOT__data_s 
                                                                  >> 0x0000000fU)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.minirv__DOT__my_LSU__DOT__data_s 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s))
                                                  : vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)));
        } else if ((2U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res))) {
            vlSelfRef.minirv__DOT__wdata = ((IData)(4U) 
                                            + vlSelfRef.minirv__DOT__pc);
        }
    }
}

VL_ATTR_COLD void Vminirv___024root____Vm_traceActivitySetAll(Vminirv___024root* vlSelf);

VL_ATTR_COLD void Vminirv___024root___eval_stl(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_stl\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vminirv___024root___stl_sequent__TOP__0(vlSelf);
        Vminirv___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vminirv___024root___eval_phase__stl(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__stl\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vminirv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vminirv___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vminirv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vminirv___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vminirv___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vminirv___024root____Vm_traceActivitySetAll(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root____Vm_traceActivitySetAll\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vminirv___024root___ctor_var_reset(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___ctor_var_reset\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->cur_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14920093658057763058ull);
    vlSelf->cur_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5584302711918894221ull);
    vlSelf->minirv__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9986465157862672572ull);
    vlSelf->minirv__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11951689444161528703ull);
    vlSelf->minirv__DOT__b_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8936444214542677347ull);
    vlSelf->minirv__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17297987942716722465ull);
    vlSelf->minirv__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13130012410628472097ull);
    vlSelf->minirv__DOT__n_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3796541715291209964ull);
    vlSelf->minirv__DOT__R__DOT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 145516464858728425ull);
    vlSelf->minirv__DOT__R__DOT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7257697435794152884ull);
    vlSelf->minirv__DOT__R__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10284453158071494890ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->minirv__DOT__R__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6283656838191798135ull);
    }
    vlSelf->minirv__DOT__my_IDU__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11613781066534815353ull);
    vlSelf->minirv__DOT__my_IDU__DOT__mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13445853517979993574ull);
    vlSelf->minirv__DOT__my_IDU__DOT__rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 493373362016603638ull);
    vlSelf->minirv__DOT__my_IDU__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1314578036340636476ull);
    vlSelf->minirv__DOT__my_IDU__DOT__j_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11257576001370444710ull);
    vlSelf->minirv__DOT__my_IDU__DOT__inst_I = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14097101292123865992ull);
    vlSelf->minirv__DOT__my_IDU__DOT__inst_U = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16524922451214839081ull);
    vlSelf->minirv__DOT__my_IDU__DOT__lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1038817721826961852ull);
    vlSelf->minirv__DOT__my_IDU__DOT__lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231718945490578680ull);
    vlSelf->minirv__DOT__my_IDU__DOT__lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1425516369445391864ull);
    vlSelf->minirv__DOT__my_IDU__DOT__lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9960455657292526792ull);
    vlSelf->minirv__DOT__my_IDU__DOT__lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18227810324608711402ull);
    vlSelf->minirv__DOT__my_IDU__DOT__ld_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3090503344045671863ull);
    vlSelf->minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4 = 0;
    vlSelf->minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11 = 0;
    vlSelf->minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12 = 0;
    vlSelf->minirv__DOT__my_EXU__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18140146489604561191ull);
    vlSelf->minirv__DOT__my_EXU__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15531375207420548208ull);
    vlSelf->minirv__DOT__my_EXU__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1961965708107912446ull);
    vlSelf->minirv__DOT__my_LSU__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12886092568970533673ull);
    vlSelf->minirv__DOT__my_LSU__DOT__data_s = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3689245023193798853ull);
    vlSelf->__Vfunc_pmem_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__3__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
