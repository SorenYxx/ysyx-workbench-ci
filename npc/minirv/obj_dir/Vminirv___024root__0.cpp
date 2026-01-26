// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminirv.h for the primary calling header

#include "Vminirv__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminirv___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vminirv___024root___eval_triggers__act(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_triggers__act\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.rst) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminirv___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vminirv___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_anySet__act\n"); );
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

void Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit();

void Vminirv___024root___nba_sequent__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x80001220U == vlSelfRef.minirv__DOT__pc)) {
        Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
}

void Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

void Vminirv___024root___nba_sequent__TOP__1(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__1\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    IData/*31:0*/ __VdlyVal__minirv__DOT__R__DOT__rf__v0;
    __VdlyVal__minirv__DOT__R__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__minirv__DOT__R__DOT__rf__v0;
    __VdlyDim0__minirv__DOT__R__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__minirv__DOT__R__DOT__rf__v0;
    __VdlySet__minirv__DOT__R__DOT__rf__v0 = 0;
    // Body
    __VdlySet__minirv__DOT__R__DOT__rf__v0 = 0U;
    if (((IData)(vlSelfRef.minirv__DOT__reg_w) & (0U 
                                                  != (IData)(vlSelfRef.minirv__DOT__waddr)))) {
        __VdlyVal__minirv__DOT__R__DOT__rf__v0 = vlSelfRef.minirv__DOT__wdata;
        __VdlyDim0__minirv__DOT__R__DOT__rf__v0 = vlSelfRef.minirv__DOT__waddr;
        __VdlySet__minirv__DOT__R__DOT__rf__v0 = 1U;
    }
    Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__pc, __Vfunc_pmem_read__2__Vfuncout);
    vlSelfRef.minirv__DOT__inst = __Vfunc_pmem_read__2__Vfuncout;
    if (__VdlySet__minirv__DOT__R__DOT__rf__v0) {
        vlSelfRef.minirv__DOT__R__DOT__rf[__VdlyDim0__minirv__DOT__R__DOT__rf__v0] 
            = __VdlyVal__minirv__DOT__R__DOT__rf__v0;
    }
    vlSelfRef.cur_inst = vlSelfRef.minirv__DOT__inst;
    vlSelfRef.minirv__DOT__my_EXU__DOT__src1 = ((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.minirv__DOT__inst 
                                                     >> 0x0000000fU)))
                                                 ? 0U
                                                 : 
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
    vlSelfRef.minirv__DOT__waddr = (0x0000001fU & (
                                                   (3U 
                                                    == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                    ? 
                                                   (vlSelfRef.minirv__DOT__inst 
                                                    >> 7U)
                                                    : 
                                                   ((4U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.minirv__DOT__my_EXU__DOT__src1 
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
                                                    (vlSelfRef.minirv__DOT__my_EXU__DOT__src1 
                                                     + 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.minirv__DOT__inst 
                                                           >> 0x00000014U)))
                                                       ? 0U
                                                       : 
                                                      vlSelfRef.minirv__DOT__R__DOT__rf
                                                      [
                                                      (0x0000001fU 
                                                       & (vlSelfRef.minirv__DOT__inst 
                                                          >> 0x00000014U))]))
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
    if (vlSelfRef.minirv__DOT__mem_w) {
        Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.minirv__DOT__my_EXU__DOT__result, 
                                                                  ((0U 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.minirv__DOT__inst 
                                                                        >> 0x00000014U)))
                                                                    ? 0U
                                                                    : 
                                                                   vlSelfRef.minirv__DOT__R__DOT__rf
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.minirv__DOT__inst 
                                                                       >> 0x00000014U))]), 
                                                                  (0x0000000fU 
                                                                   & vlSelfRef.minirv__DOT__imm));
    }
    vlSelfRef.minirv__DOT__m_result = ((IData)(vlSelfRef.minirv__DOT__mem_r)
                                        ? ([&]() {
                Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__my_EXU__DOT__result, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
            }(), vlSelfRef.__Vfunc_pmem_read__3__Vfuncout)
                                        : 0U);
}

void Vminirv___024root___nba_sequent__TOP__2(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__2\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minirv__DOT__pc = ((IData)(vlSelfRef.rst)
                                  ? 0x80000000U : vlSelfRef.minirv__DOT__my_WBU__DOT__n_pc);
    vlSelfRef.cur_pc = vlSelfRef.minirv__DOT__pc;
}

void Vminirv___024root___nba_comb__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_comb__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minirv__DOT__my_WBU__DOT__n_pc = ((7U 
                                                 == (IData)(vlSelfRef.minirv__DOT__op_type))
                                                 ? vlSelfRef.minirv__DOT__my_EXU__DOT__result
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.minirv__DOT__pc));
    vlSelfRef.minirv__DOT__wdata = ((3U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                     ? vlSelfRef.minirv__DOT__m_result
                                     : ((4U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                         ? vlSelfRef.minirv__DOT__m_result
                                         : ((7U == (IData)(vlSelfRef.minirv__DOT__op_type))
                                             ? ((IData)(4U) 
                                                + vlSelfRef.minirv__DOT__pc)
                                             : ((IData)(vlSelfRef.minirv__DOT__reg_w)
                                                 ? vlSelfRef.minirv__DOT__my_EXU__DOT__result
                                                 : 0U))));
}

void Vminirv___024root___eval_nba(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_nba\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vminirv___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vminirv___024root___eval_phase__act(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__act\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminirv___024root___eval_triggers__act(vlSelf);
    Vminirv___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vminirv___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vminirv___024root___eval_phase__nba(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_phase__nba\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vminirv___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vminirv___024root___eval_nba(vlSelf);
        Vminirv___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vminirv___024root___eval(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vminirv___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("minirv.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vminirv___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("minirv.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vminirv___024root___eval_phase__act(vlSelf));
    } while (Vminirv___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vminirv___024root___eval_debug_assertions(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_debug_assertions\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
