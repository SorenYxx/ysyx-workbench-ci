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
    vlSelfRef.minirv__DOT__R__DOT__rdata1 = ((0U == 
                                              (0x0000001fU 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 0x0000000fU)))
                                              ? 0U : 
                                             vlSelfRef.minirv__DOT__R__DOT__rf
                                             [(0x0000001fU 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 0x0000000fU))]);
    vlSelfRef.minirv__DOT__my_IDU__DOT__opcode = (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst);
    vlSelfRef.minirv__DOT__my_IDU__DOT__funct3 = (7U 
                                                  & (vlSelfRef.minirv__DOT__inst 
                                                     >> 0x0cU));
    vlSelfRef.minirv__DOT__imm = 0U;
    vlSelfRef.minirv__DOT__op_type = 0U;
    vlSelfRef.minirv__DOT__reg_w = 0U;
    vlSelfRef.minirv__DOT__mem_w = 0U;
    vlSelfRef.minirv__DOT__mem_r = 0U;
    if ((0x0098U == (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__opcode) 
                      << 3U) | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3)))) {
        vlSelfRef.minirv__DOT__imm = (((- (IData)((vlSelfRef.minirv__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.minirv__DOT__inst 
                                         >> 0x14U));
        vlSelfRef.minirv__DOT__reg_w = 1U;
        vlSelfRef.minirv__DOT__op_type = 0U;
    } else if ((0x0198U == (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__opcode) 
                             << 3U) | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3)))) {
        vlSelfRef.minirv__DOT__reg_w = 1U;
        vlSelfRef.minirv__DOT__op_type = 1U;
    } else if ((0x01b8U == (0x03f8U & (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__opcode) 
                                        << 3U) | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3))))) {
        vlSelfRef.minirv__DOT__imm = (0xfffff000U & vlSelfRef.minirv__DOT__inst);
        vlSelfRef.minirv__DOT__reg_w = 1U;
        vlSelfRef.minirv__DOT__op_type = 2U;
    } else if ((0x0118U == (0x03f8U & (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__opcode) 
                                        << 3U) | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3))))) {
        vlSelfRef.minirv__DOT__imm = (((- (IData)((vlSelfRef.minirv__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0x0000000cU) 
                                      | ((0x00000fe0U 
                                          & (vlSelfRef.minirv__DOT__inst 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.minirv__DOT__inst 
                                               >> 7U))));
        vlSelfRef.minirv__DOT__mem_w = 1U;
        vlSelfRef.minirv__DOT__op_type = ((2U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3))
                                           ? 3U : 4U);
    } else if ((0x0018U == (0x03f8U & (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__opcode) 
                                        << 3U) | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3))))) {
        vlSelfRef.minirv__DOT__imm = (((- (IData)((vlSelfRef.minirv__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.minirv__DOT__inst 
                                         >> 0x14U));
        vlSelfRef.minirv__DOT__reg_w = 1U;
        vlSelfRef.minirv__DOT__mem_r = 1U;
        vlSelfRef.minirv__DOT__op_type = ((4U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3))
                                           ? 5U : 6U);
    } else if ((0x0338U == (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__opcode) 
                             << 3U) | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__funct3)))) {
        vlSelfRef.minirv__DOT__imm = (((- (IData)((vlSelfRef.minirv__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.minirv__DOT__inst 
                                         >> 0x14U));
        vlSelfRef.minirv__DOT__reg_w = 1U;
        vlSelfRef.minirv__DOT__op_type = 7U;
    } else {
        vlSelfRef.minirv__DOT__imm = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.minirv__DOT__R__DOT__rdata1 
                                                + vlSelfRef.minirv__DOT__imm);
    vlSelfRef.minirv__DOT__my_EXU__DOT__result = ((
                                                   ((0U 
                                                     == (IData)(vlSelfRef.minirv__DOT__op_type)) 
                                                    | (1U 
                                                       == (IData)(vlSelfRef.minirv__DOT__op_type))) 
                                                   | (((2U 
                                                        == (IData)(vlSelfRef.minirv__DOT__op_type)) 
                                                       | (3U 
                                                          == (IData)(vlSelfRef.minirv__DOT__op_type))) 
                                                      | ((4U 
                                                          == (IData)(vlSelfRef.minirv__DOT__op_type)) 
                                                         | ((5U 
                                                             == (IData)(vlSelfRef.minirv__DOT__op_type)) 
                                                            | ((6U 
                                                                == (IData)(vlSelfRef.minirv__DOT__op_type)) 
                                                               | (7U 
                                                                  == (IData)(vlSelfRef.minirv__DOT__op_type)))))))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                     ? 
                                                    (vlSelfRef.minirv__DOT__R__DOT__rdata1 
                                                     + vlSelfRef.minirv__DOT__R__DOT__rdata2)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                      ? vlSelfRef.minirv__DOT__imm
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                         ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                          ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
                                                          : 
                                                         (0xfffffffeU 
                                                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))))))
                                                   : 0U);
    vlSelfRef.minirv__DOT__n_pc = ((7U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                    ? vlSelfRef.minirv__DOT__my_EXU__DOT__result
                                    : ((IData)(4U) 
                                       + vlSelfRef.minirv__DOT__pc));
    vlSelfRef.minirv__DOT__waddr = (0x0000001fU & (
                                                   (5U 
                                                    == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__inst 
                                                    >> 7U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                     ? 
                                                    (vlSelfRef.minirv__DOT__inst 
                                                     >> 7U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                      ? 
                                                     (vlSelfRef.minirv__DOT__inst 
                                                      >> 7U)
                                                      : 
                                                     ((IData)(vlSelfRef.minirv__DOT__reg_w)
                                                       ? 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.minirv__DOT__inst 
                                                          >> 7U))
                                                       : 0U)))));
    Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__my_EXU__DOT__result, vlSelfRef.__Vfunc_pmem_read__6__Vfuncout);
    vlSelfRef.minirv__DOT__my_LSU__DOT____VdfgExtracted_hc5e5ffbe__0 
        = vlSelfRef.__Vfunc_pmem_read__6__Vfuncout;
    vlSelfRef.minirv__DOT__m_result = 0U;
    if (vlSelfRef.minirv__DOT__mem_r) {
        vlSelfRef.minirv__DOT__m_result = ((5U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                            ? (0x000000ffU 
                                               & VL_SHIFTR_III(32,32,32, 
                                                               ([&]() {
                            Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__my_EXU__DOT__result, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
                        }(), vlSelfRef.__Vfunc_pmem_read__3__Vfuncout), 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.minirv__DOT__my_EXU__DOT__result), 3U)))
                                            : ((6U 
                                                == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                ? vlSelfRef.minirv__DOT__my_LSU__DOT____VdfgExtracted_hc5e5ffbe__0
                                                : 0U));
    }
    vlSelfRef.minirv__DOT__wdata = ((5U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                     ? vlSelfRef.minirv__DOT__m_result
                                     : ((6U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                         ? vlSelfRef.minirv__DOT__m_result
                                         : ((7U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                             ? ((IData)(4U) 
                                                + vlSelfRef.minirv__DOT__pc)
                                             : ((IData)(vlSelfRef.minirv__DOT__reg_w)
                                                 ? vlSelfRef.minirv__DOT__my_EXU__DOT__result
                                                 : 0U))));
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
    vlSelf->minirv__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13130012410628472097ull);
    vlSelf->minirv__DOT__n_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3796541715291209964ull);
    vlSelf->minirv__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8977093025134773022ull);
    vlSelf->minirv__DOT__m_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11359537476613942739ull);
    vlSelf->minirv__DOT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3397278920543329391ull);
    vlSelf->minirv__DOT__op_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8440365358081314011ull);
    vlSelf->minirv__DOT__reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4316849801646779481ull);
    vlSelf->minirv__DOT__mem_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12155000797299145300ull);
    vlSelf->minirv__DOT__mem_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854733350753777083ull);
    vlSelf->minirv__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17297987942716722465ull);
    vlSelf->minirv__DOT__R__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6902507889330200594ull);
    vlSelf->minirv__DOT__R__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10284453158071494890ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->minirv__DOT__R__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6283656838191798135ull);
    }
    vlSelf->minirv__DOT__my_IDU__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15744638667338740333ull);
    vlSelf->minirv__DOT__my_IDU__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12744822068766360466ull);
    vlSelf->minirv__DOT__my_EXU__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1961965708107912446ull);
    vlSelf->minirv__DOT__my_LSU__DOT____VdfgExtracted_hc5e5ffbe__0 = 0;
    vlSelf->__Vfunc_pmem_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__3__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__6__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
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
