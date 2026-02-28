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

void Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vminirv___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r);

void Vminirv___024root___nba_sequent__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__minirv__DOT__R__DOT__rf__v0;
    __VdlyVal__minirv__DOT__R__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__minirv__DOT__R__DOT__rf__v0;
    __VdlyDim0__minirv__DOT__R__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__minirv__DOT__R__DOT__rf__v0;
    __VdlySet__minirv__DOT__R__DOT__rf__v0 = 0;
    // Body
    if ((3U != ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                 ? 0U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                          ? 1U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                   ? 2U : 3U))))) {
        if ((0U == ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                     ? 0U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                              ? 1U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                       ? 2U : 3U))))) {
            Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.minirv__DOT__alu_result, 
                                                                      ((0U 
                                                                        == 
                                                                        ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                                                           ? 1U
                                                                           : 
                                                                          ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                                                            ? 2U
                                                                            : 3U))))
                                                                        ? vlSelfRef.minirv__DOT__R__DOT__rdata2
                                                                        : 
                                                                       VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.minirv__DOT__alu_result), 3U))), 0x0fU);
        } else if ((1U == ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                            ? 0U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                     ? 1U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                              ? 2U : 3U))))) {
            Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.minirv__DOT__alu_result, 
                                                                      ((0U 
                                                                        == 
                                                                        ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                                                           ? 1U
                                                                           : 
                                                                          ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                                                            ? 2U
                                                                            : 3U))))
                                                                        ? vlSelfRef.minirv__DOT__R__DOT__rdata2
                                                                        : 
                                                                       VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.minirv__DOT__alu_result), 3U))), 
                                                                      (0x000000ffU 
                                                                       & ((IData)(1U) 
                                                                          << 
                                                                          (3U 
                                                                           & vlSelfRef.minirv__DOT__alu_result))));
        } else if ((2U == ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                            ? 0U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                     ? 1U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                              ? 2U : 3U))))) {
            Vminirv___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.minirv__DOT__alu_result, 
                                                                      ((0U 
                                                                        == 
                                                                        ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                                                           ? 1U
                                                                           : 
                                                                          ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                                                            ? 2U
                                                                            : 3U))))
                                                                        ? vlSelfRef.minirv__DOT__R__DOT__rdata2
                                                                        : 
                                                                       VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.minirv__DOT__alu_result), 3U))), 
                                                                      (0x000000ffU 
                                                                       & ((IData)(3U) 
                                                                          << 
                                                                          (3U 
                                                                           & vlSelfRef.minirv__DOT__alu_result))));
        }
    }
    __VdlySet__minirv__DOT__R__DOT__rf__v0 = 0U;
    if (((IData)(vlSelfRef.minirv__DOT__R__DOT__wen) 
         & (0U != (IData)(vlSelfRef.minirv__DOT__R__DOT__waddr)))) {
        Vminirv___024unit____Vdpiimwrap_get_reg_TOP____024unit(vlSelfRef.minirv__DOT__R__DOT__waddr, vlSelfRef.minirv__DOT__R__DOT__wdata);
        __VdlyVal__minirv__DOT__R__DOT__rf__v0 = vlSelfRef.minirv__DOT__R__DOT__wdata;
        __VdlyDim0__minirv__DOT__R__DOT__rf__v0 = vlSelfRef.minirv__DOT__R__DOT__waddr;
        __VdlySet__minirv__DOT__R__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__minirv__DOT__R__DOT__rf__v0) {
        vlSelfRef.minirv__DOT__R__DOT__rf[__VdlyDim0__minirv__DOT__R__DOT__rf__v0] 
            = __VdlyVal__minirv__DOT__R__DOT__rf__v0;
    }
}

void Vminirv___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1);
void Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vminirv___024unit____Vdpiimwrap_get_csr_TOP____024unit(IData/*31:0*/ csr, IData/*31:0*/ data);
void Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 64> Vminirv__ConstPool__TABLE_h02dc8855_0;
void Vminirv___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

void Vminirv___024root___nba_sequent__TOP__1(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_sequent__TOP__1\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vdly__minirv__DOT__my_CSR__DOT__mc;
    __Vdly__minirv__DOT__my_CSR__DOT__mc = 0;
    // Body
    __Vdly__minirv__DOT__my_CSR__DOT__mc = vlSelfRef.minirv__DOT__my_CSR__DOT__mc;
    if ((1U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))) {
        Vminirv___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(vlSelfRef.minirv__DOT__pc, 
                                                                    (((0U 
                                                                       != (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)) 
                                                                      | (6U 
                                                                         != (IData)(vlSelfRef.minirv__DOT__b_type)))
                                                                      ? vlSelfRef.minirv__DOT__alu_result
                                                                      : 
                                                                     ((IData)(4U) 
                                                                      + vlSelfRef.minirv__DOT__pc)), 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.minirv__DOT__inst 
                                                                        >> 7U)), 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.minirv__DOT__inst 
                                                                        >> 0x0000000fU)));
    }
    if (VL_UNLIKELY(((0x00100073U == vlSelfRef.minirv__DOT__inst)))) {
        Vminirv___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_WRITEF_NX("ebreak at PC = 0x%x Inst = 0x%x\n",0,
                     32,vlSelfRef.minirv__DOT__pc,32,
                     vlSelfRef.minirv__DOT__inst);
    }
    if (vlSelfRef.rst) {
        __Vdly__minirv__DOT__my_CSR__DOT__mc = 0ULL;
        vlSelfRef.minirv__DOT__my_CSR__DOT__mstatus = 0U;
        vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec = 0U;
        vlSelfRef.minirv__DOT__my_CSR__DOT__mepc = 0U;
        vlSelfRef.minirv__DOT__my_CSR__DOT__mcause = 0U;
    } else {
        __Vdly__minirv__DOT__my_CSR__DOT__mc = (1ULL 
                                                + vlSelfRef.minirv__DOT__my_CSR__DOT__mc);
        if (vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we) {
            Vminirv___024unit____Vdpiimwrap_get_csr_TOP____024unit(
                                                                   (0x00000fffU 
                                                                    & vlSelfRef.minirv__DOT__my_IDU__DOT__imm), vlSelfRef.minirv__DOT__alu_result);
            if ((0x0300U == (0x00000fffU & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) {
                vlSelfRef.minirv__DOT__my_CSR__DOT__mstatus 
                    = vlSelfRef.minirv__DOT__alu_result;
            } else if ((0x0305U == (0x00000fffU & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) {
                vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec 
                    = vlSelfRef.minirv__DOT__alu_result;
            } else if ((0x0341U == (0x00000fffU & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) {
                vlSelfRef.minirv__DOT__my_CSR__DOT__mepc 
                    = vlSelfRef.minirv__DOT__alu_result;
            } else if ((0x0342U == (0x00000fffU & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) {
                vlSelfRef.minirv__DOT__my_CSR__DOT__mcause 
                    = vlSelfRef.minirv__DOT__alu_result;
            }
        }
        if ((2U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))) {
            vlSelfRef.minirv__DOT__my_CSR__DOT__mepc 
                = vlSelfRef.minirv__DOT__pc;
            vlSelfRef.minirv__DOT__my_CSR__DOT__mcause = 0x0000000bU;
        }
    }
    vlSelfRef.minirv__DOT__pc = ((IData)(vlSelfRef.rst)
                                  ? 0x80000000U : vlSelfRef.minirv__DOT__n_pc);
    vlSelfRef.minirv__DOT__my_CSR__DOT__mc = __Vdly__minirv__DOT__my_CSR__DOT__mc;
    vlSelfRef.cur_pc = vlSelfRef.minirv__DOT__pc;
    Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__pc, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
    vlSelfRef.minirv__DOT__inst = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    vlSelfRef.cur_inst = vlSelfRef.minirv__DOT__inst;
    vlSelfRef.minirv__DOT__my_IDU__DOT__sw = (IData)(
                                                     (0x00002023U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sb = (IData)(
                                                     (0x00000023U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sh = (IData)(
                                                     (0x00001023U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__bne = (IData)(
                                                      (0x00001063U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__beq = (IData)(
                                                      (0x00000063U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__blt = (IData)(
                                                      (0x00004063U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__bge = (IData)(
                                                      (0x00005063U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__bltu = (IData)(
                                                       (0x00006063U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu = (IData)(
                                                       (0x00007063U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__addi = (IData)(
                                                       (0x00000013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__slti = (IData)(
                                                       (0x00002013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__slli = (IData)(
                                                       (0x00001013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu = (IData)(
                                                        (0x00003013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__xori = (IData)(
                                                       (0x00004013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__ori = (IData)(
                                                      (0x00006013U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__andi = (IData)(
                                                       (0x00007013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sll = (IData)(
                                                      (0x00001033U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__slt = (IData)(
                                                      (0x00002033U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sltu = (IData)(
                                                       (0x00003033U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor = (IData)(
                                                        (0x00004033U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__r_or = (IData)(
                                                       (0x00006033U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__r_and = (IData)(
                                                        (0x00007033U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_14 
        = ((0x00000073U == vlSelfRef.minirv__DOT__inst) 
           | (0x30200073U == vlSelfRef.minirv__DOT__inst));
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
    vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw = (IData)(
                                                        (0x00001073U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs = (IData)(
                                                        (0x00002073U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U = ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.minirv__DOT__inst)) 
                                                  | (0x17U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_13 
        = ((0x6fU == (0x0000007fU & vlSelfRef.minirv__DOT__inst)) 
           | (0x67U == (0x0000007fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I = ((0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.minirv__DOT__inst)) 
                                                  | ((3U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.minirv__DOT__inst)) 
                                                     | ((0x67U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.minirv__DOT__inst)) 
                                                        | (0x73U 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.minirv__DOT__inst)))));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.minirv__DOT__inst)));
    vlSelfRef.__Vtableidx1 = ((((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu) 
                                << 5U) | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bge) 
                                           << 3U))) 
                              | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__blt) 
                                  << 2U) | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__beq) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bne))));
    vlSelfRef.minirv__DOT__b_type = Vminirv__ConstPool__TABLE_h02dc8855_0
        [vlSelfRef.__Vtableidx1];
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
    vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw) 
                                                  | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs) 
                                                     | (IData)(
                                                               (0x00003073U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.minirv__DOT__inst)))));
    vlSelfRef.minirv__DOT__my_IDU__DOT__j_type = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_13)
                                                   ? 1U
                                                   : 
                                                  ((0x00000073U 
                                                    == vlSelfRef.minirv__DOT__inst)
                                                    ? 2U
                                                    : 
                                                   ((0x30200073U 
                                                     == vlSelfRef.minirv__DOT__inst)
                                                     ? 3U
                                                     : 0U)));
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
    vlSelfRef.minirv__DOT__my_IDU__DOT__srli = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4) 
                                                & (0U 
                                                   == 
                                                   (vlSelfRef.minirv__DOT__inst 
                                                    >> 0x19U)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__srai = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelfRef.minirv__DOT__inst 
                                                    >> 0x19U)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__add = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11) 
                                               & (0U 
                                                  == 
                                                  (vlSelfRef.minirv__DOT__inst 
                                                   >> 0x19U)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sub = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelfRef.minirv__DOT__inst 
                                                   >> 0x19U)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__srl = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12) 
                                               & (0U 
                                                  == 
                                                  (vlSelfRef.minirv__DOT__inst 
                                                   >> 0x19U)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__sra = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelfRef.minirv__DOT__inst 
                                                   >> 0x19U)));
    vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_13)
                                                     ? 3U
                                                     : 0U)));
    vlSelfRef.minirv__DOT__R__DOT__wen = ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                                          | ((0x33U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst)) 
                                                | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U) 
                                                   | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we)))));
    if (VL_UNLIKELY(((2U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))))) {
        vlSelfRef.minirv__DOT__csr_result = vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec;
        VL_WRITEF_NX("--------ecall: mtvec = 0x%x\n",0,
                     32,vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec);
    } else if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))))) {
        VL_WRITEF_NX("--------mret: mepc = 0x%x\n",0,
                     32,vlSelfRef.minirv__DOT__my_CSR__DOT__mepc);
        vlSelfRef.minirv__DOT__csr_result = ((IData)(4U) 
                                             + vlSelfRef.minirv__DOT__my_CSR__DOT__mepc);
    } else {
        vlSelfRef.minirv__DOT__csr_result = (((((((
                                                   ((0x0f11U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.minirv__DOT__my_IDU__DOT__imm)) 
                                                    | (0x0f12U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) 
                                                   | (0x0b00U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) 
                                                  | (0x0b80U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) 
                                                 | (0x0300U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) 
                                                | (0x0305U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) 
                                               | (0x0341U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))) 
                                              | (0x0342U 
                                                 == 
                                                 (0x00000fffU 
                                                  & vlSelfRef.minirv__DOT__my_IDU__DOT__imm)))
                                              ? ((0x0f11U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                  ? 0x79737978U
                                                  : 
                                                 ((0x0f12U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                   ? 0x26010027U
                                                   : 
                                                  ((0x0b00U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                    ? (IData)(vlSelfRef.minirv__DOT__my_CSR__DOT__mc)
                                                    : 
                                                   ((0x0b80U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                     ? (IData)(
                                                               (vlSelfRef.minirv__DOT__my_CSR__DOT__mc 
                                                                >> 0x00000020U))
                                                     : 
                                                    ((0x0300U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                      ? vlSelfRef.minirv__DOT__my_CSR__DOT__mstatus
                                                      : 
                                                     ((0x0305U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                       ? vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec
                                                       : 
                                                      ((0x0341U 
                                                        == 
                                                        (0x00000fffU 
                                                         & vlSelfRef.minirv__DOT__my_IDU__DOT__imm))
                                                        ? vlSelfRef.minirv__DOT__my_CSR__DOT__mepc
                                                        : vlSelfRef.minirv__DOT__my_CSR__DOT__mcause)))))))
                                              : 0U);
    }
    if (((~ (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__addi) 
              | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slti) 
                 | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slli) 
                    | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srli) 
                       | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srai) 
                          | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu) 
                             | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__xori) 
                                | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ori) 
                                   | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__andi) 
                                      | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu) 
                                         | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu) 
                                            | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lw) 
                                               | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lh) 
                                                  | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lb) 
                                                     | (0x67U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.minirv__DOT__inst)))))))))))))))) 
             | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__add) 
                 | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sub) 
                    | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sll) 
                       | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slt) 
                          | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu) 
                             | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srl) 
                                | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sra) 
                                   | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor) 
                                      | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or) 
                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and)))))))))) 
                | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw) 
                    | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb) 
                       | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh))) 
                   | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bne) 
                       | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__beq) 
                          | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__blt) 
                             | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bge) 
                                | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu) 
                                   | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu)))))) 
                      | ((0x37U == (0x0000007fU & vlSelfRef.minirv__DOT__inst)) 
                         | (((0x17U == (0x0000007fU 
                                        & vlSelfRef.minirv__DOT__inst)) 
                             | (0x6fU == (0x0000007fU 
                                          & vlSelfRef.minirv__DOT__inst))) 
                            | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we) 
                                | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_14)) 
                               | (0x00100073U == vlSelfRef.minirv__DOT__inst))))))))) 
         & (0U != vlSelfRef.minirv__DOT__inst))) {
        Vminirv___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
    vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op = (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__add) 
                                                   | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__addi) 
                                                      | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type) 
                                                         | (0U 
                                                            != (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)))))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sub) 
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
                                                    (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sll) 
                                                      | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slli))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srl) 
                                                       | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srli))
                                                       ? 4U
                                                       : 
                                                      (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sra) 
                                                        | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srai))
                                                        ? 5U
                                                        : 
                                                       (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slt) 
                                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slti))
                                                         ? 6U
                                                         : 
                                                        ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu)
                                                          ? 7U
                                                          : 
                                                         ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu)
                                                           ? 8U
                                                           : 
                                                          (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor) 
                                                            | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__xori))
                                                            ? 9U
                                                            : 
                                                           (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and) 
                                                             | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__andi))
                                                             ? 0x0aU
                                                             : 
                                                            (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or) 
                                                              | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ori))
                                                              ? 0x0bU
                                                              : 
                                                             ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw)
                                                               ? 0x0cU
                                                               : 
                                                              ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs)
                                                                ? 0x0dU
                                                                : 
                                                               ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_14)
                                                                 ? 0x0eU
                                                                 : 0U)))))))))))))));
    vlSelfRef.minirv__DOT__R__DOT__waddr = ((IData)(vlSelfRef.minirv__DOT__R__DOT__wen)
                                             ? (0x0000001fU 
                                                & (vlSelfRef.minirv__DOT__inst 
                                                   >> 7U))
                                             : 0U);
}

void Vminirv___024root___nba_comb__TOP__0(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___nba_comb__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minirv__DOT__R__DOT__rdata2 = ((0U == 
                                              (0x0000001fU 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 0x00000014U)))
                                              ? 0U : 
                                             vlSelfRef.minirv__DOT__R__DOT__rf
                                             [(0x0000001fU 
                                               & (vlSelfRef.minirv__DOT__inst 
                                                  >> 0x00000014U))]);
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
        if ((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
            if ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
                vlSelfRef.minirv__DOT__alu_result = 
                    ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                      ? 0U : vlSelfRef.minirv__DOT__csr_result);
            } else if ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))) {
                vlSelfRef.minirv__DOT__alu_result = 
                    (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                     | vlSelfRef.minirv__DOT__csr_result);
                VL_WRITEF_NX("csr read: csr_addr = 0x%x, csr_wdata = 0x%x\n",0,
                             32,vlSelfRef.minirv__DOT__csr_result,
                             32,vlSelfRef.minirv__DOT__alu_result);
            } else {
                vlSelfRef.minirv__DOT__alu_result = vlSelfRef.minirv__DOT__my_EXU__DOT__rs1;
                VL_WRITEF_NX("csr write: csr_addr = 0x%x, csr_wdata = 0x%x\n",0,
                             12,(0x00000fffU & vlSelfRef.minirv__DOT__my_IDU__DOT__imm),
                             32,vlSelfRef.minirv__DOT__my_EXU__DOT__rs1);
            }
        } else {
            vlSelfRef.minirv__DOT__alu_result = ((2U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   | vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   & vlSelfRef.minirv__DOT__my_EXU__DOT__rs2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   ^ vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                   < vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)));
        }
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
                                                  ((vlSelfRef.minirv__DOT__my_EXU__DOT__rs1 
                                                    < vlSelfRef.minirv__DOT__my_EXU__DOT__rs2)
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
    vlSelfRef.minirv__DOT__n_pc = (((0U != (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)) 
                                    | (6U != (IData)(vlSelfRef.minirv__DOT__b_type)))
                                    ? vlSelfRef.minirv__DOT__alu_result
                                    : ((IData)(4U) 
                                       + vlSelfRef.minirv__DOT__pc));
    Vminirv___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.minirv__DOT__alu_result, vlSelfRef.__Vfunc_pmem_read__5__Vfuncout);
    vlSelfRef.minirv__DOT__my_LSU__DOT__rdata = vlSelfRef.__Vfunc_pmem_read__5__Vfuncout;
    vlSelfRef.minirv__DOT__my_LSU__DOT__data_s = VL_SHIFTR_III(32,32,32, vlSelfRef.minirv__DOT__my_LSU__DOT__rdata, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.minirv__DOT__alu_result), 3U));
    vlSelfRef.minirv__DOT__R__DOT__wdata = ((IData)(vlSelfRef.minirv__DOT__R__DOT__wen)
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.minirv__DOT__pc)
                                                  : vlSelfRef.minirv__DOT__csr_result)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                                     ? 0U
                                                     : 
                                                    (0x0000ffffU 
                                                     & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                                   : 
                                                  ((2U 
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
                                                     : vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                                  : vlSelfRef.minirv__DOT__alu_result))
                                             : 0U);
}

void Vminirv___024root___eval_nba(Vminirv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root___eval_nba\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminirv___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
            VL_FATAL_MT("vsrc/minirv.v", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vminirv___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/minirv.v", 4, "", "Active region did not converge after 100 tries");
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
