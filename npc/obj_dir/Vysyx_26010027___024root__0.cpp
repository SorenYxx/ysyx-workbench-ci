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

extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h073bc315_0;

void Vysyx_26010027___024root___ico_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___ico_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag) {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
            = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q;
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
            = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
            = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)
                ? vlSelfRef.ysyx_26010027__DOT__idu_exu_pc
                : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1);
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
            = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)
                ? vlSelfRef.ysyx_26010027__DOT__idu_exu_imm
                : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2);
    }
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts 
        = VL_LTS_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu 
        = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
           < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.__Vtableidx7 = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu) 
                               << 5U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts) 
                                          << 4U) | 
                                         (((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                            == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2) 
                                           << 3U) | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken 
        = Vysyx_26010027__ConstPool__TABLE_h073bc315_0
        [vlSelfRef.__Vtableidx7];
    vlSelfRef.ysyx_26010027__DOT__exu_flush = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
                                                   && (1U 
                                                       & ((6U 
                                                           != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                                           ? 
                                                          (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                           || (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                                                | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret)) 
                                                               || (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei)))))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
            ? ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? 0U : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                                    ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata
                                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                        ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                        : vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata))))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1
                        : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken)
                            ? vlSelfRef.ysyx_26010027__DOT__idu_exu_target
                            : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           | vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           ^ vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu))))
            : ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1, 
                                         (0x0000001fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           >> (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           << (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                        : vlSelfRef.ysyx_26010027__DOT__idu_exu_imm)
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           - vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)))));
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

void Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(IData/*31:0*/ lsu_get_data, IData/*31:0*/ lsu_w_data, IData/*31:0*/ exu_done, IData/*31:0*/ alu_we, IData/*31:0*/ csr_we, IData/*31:0*/ cpu_jump, IData/*31:0*/ cpu_branch, IData/*31:0*/ icache_hit, IData/*31:0*/ icache_miss, IData/*31:0*/ icache_miss_latency);
void Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1);
void Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h7153552e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h123afc4f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_26010027__ConstPool__TABLE_he37972eb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_26010027__ConstPool__TABLE_hce441473_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_26010027__ConstPool__TABLE_h9a46d3c3_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_26010027__ConstPool__TABLE_h9dae69b9_0;
void Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r);
void Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(IData/*31:0*/ csr, IData/*31:0*/ data);

void Vysyx_26010027___024root___nba_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    IData/*31:0*/ __Vdly__ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc;
    __Vdly__ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc = 0;
    CData/*0:0*/ __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlyVal__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    CData/*3:0*/ __VdlyDim0__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlyDim0__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    CData/*0:0*/ __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    // Body
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__state 
        = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__flush_q 
        = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid 
        = vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__grant = vlSelfRef.ysyx_26010027__DOT__grant;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_busy 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_wready 
        = vlSelfRef.ysyx_26010027__DOT__pmem_wready;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_bvalid 
        = vlSelfRef.ysyx_26010027__DOT__pmem_bvalid;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_rvalid 
        = vlSelfRef.ysyx_26010027__DOT__pmem_rvalid;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v0 = 0U;
    __VdlySet__ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0U;
    __Vdly__ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
        = vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc;
    vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_pc 
        = vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc;
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
                                                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))), 0U, 0U, 0U);
        if ((((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
             & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc, 
                                                                               ((IData)(vlSelfRef.reset)
                                                                                 ? 0U
                                                                                 : 
                                                                                (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))
                                                                                 ? 
                                                                                ((6U 
                                                                                != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                                                                 ? 
                                                                                ((IData)(4U) 
                                                                                + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump))
                                                                                 ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result
                                                                                 : 
                                                                                (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret))
                                                                                 ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc
                                                                                 : 
                                                                                ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei)
                                                                                 ? 
                                                                                ((IData)(4U) 
                                                                                + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                                                                 : 0U))))
                                                                                 : 0U)), (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr), 
                                                                               (0x0000001fU 
                                                                                & (vlSelfRef.ysyx_26010027__DOT__idu_exu_inst 
                                                                                >> 0x0fU)));
        }
        if (((0x00100073U == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst) 
             | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
                 & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp)))) 
                | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                   | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                      & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))))))) {
            Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
            if (VL_UNLIKELY(((0x00100073U == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))) {
                VL_WRITEF_NX("ebreak at PC = 0x%x Inst = 0x%x\n",0,
                             32,vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc,
                             32,vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst);
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                  & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp)))) 
                              | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                  & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: ysyx_26010027.v:915: Assertion failed in %Nysyx_26010027: ![Access-FAULT]\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -9,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("vsrc/ysyx_26010027.v", 915, "", false);
            }
        }
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r) 
                      << 4U) | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar) 
                                << 3U)) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0
        [__Vtableidx2]) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__state 
            = Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0
            [__Vtableidx2];
    }
    __Vtableidx3 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent) 
                      << 5U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar) 
                                 << 4U) | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag) 
                        << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_flush) 
                                   << 1U) | (IData)(vlSelfRef.reset))));
    if ((1U & Vysyx_26010027__ConstPool__TABLE_h7153552e_0
         [__Vtableidx3])) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__flush_q 
            = Vysyx_26010027__ConstPool__TABLE_h123afc4f_0
            [__Vtableidx3];
    }
    if ((2U & Vysyx_26010027__ConstPool__TABLE_h7153552e_0
         [__Vtableidx3])) {
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent 
            = Vysyx_26010027__ConstPool__TABLE_he37972eb_0
            [__Vtableidx3];
    }
    __Vtableidx4 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b) 
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
        [__Vtableidx4]) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w 
            = Vysyx_26010027__ConstPool__TABLE_h9a46d3c3_0
            [__Vtableidx4];
    }
    __Vtableidx5 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r) 
                      << 4U) | ((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid)) 
                                << 3U)) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0
        [__Vtableidx5]) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r 
            = Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0
            [__Vtableidx5];
    }
    __Vtableidx1 = (((((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                         & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))) 
                        << 4U) | ((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                    & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                   << 3U) | ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q) 
                          << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))) 
                     << 4U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid) 
                                << 3U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__grant) 
                                           << 1U) | (IData)(vlSelfRef.reset))));
    vlSelfRef.__Vdly__ysyx_26010027__DOT__grant = Vysyx_26010027__ConstPool__TABLE_h9dae69b9_0
        [__Vtableidx1];
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_busy = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_flush) 
             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0U;
        } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0U;
        } else if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 1U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_busy = 1U;
        } else if (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_busy = 0U;
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
        vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_pc = 0x80000000U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_target = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1 = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2 = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata1 = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata2 = 0U;
    } else {
        if (vlSelfRef.ysyx_26010027__DOT__exu_flush) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_pc 
                = ((IData)(vlSelfRef.reset) ? 0U : 
                   (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                     & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))
                     ? ((6U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                         ? ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                         : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump))
                             ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result
                             : (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                 | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret))
                                 ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc
                                 : ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei)
                                     ? ((IData)(4U) 
                                        + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                     : 0U)))) : 0U));
        } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_pc 
                = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__idu_exu_target 
                = ((6U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch))
                    ? 0U : (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                            + vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr 
                = (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm);
            vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub)
                    ? 1U : ((0x37U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                             ? 2U : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                      | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli))
                                      ? 3U : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                               | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli))
                                               ? 4U
                                               : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai))
                                                   ? 5U
                                                   : 
                                                  (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                                    | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti))
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu)
                                                     ? 7U
                                                     : 
                                                    ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu)
                                                      ? 8U
                                                      : 
                                                     (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                       | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori))
                                                       ? 9U
                                                       : 
                                                      (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi))
                                                        ? 0x0aU
                                                        : 
                                                       (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori))
                                                         ? 0x0bU
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                                          ? 0x0cU
                                                          : 
                                                         ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)
                                                           ? 0x0dU
                                                           : 
                                                          ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs)
                                                            ? 0x0eU
                                                            : 0U))))))))))))));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1 
                = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 0x0000000fU));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2 
                = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 0x00000014U));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata1 
                = ((0U == (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x0000000fU)))
                    ? 0U : (((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
                             & ((0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr)) 
                                == (0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                   >> 0x0000000fU))))
                             ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata
                             : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                            [(0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                             >> 0x0000000fU))]));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata2 
                = ((0U == (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x00000014U)))
                    ? 0U : (((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
                             & ((0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr)) 
                                == (0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                   >> 0x00000014U))))
                             ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata
                             : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                            [(0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                             >> 0x00000014U))]));
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))) {
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done = 0U;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_snpc;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr;
        } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r) 
                    | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b))) {
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done = 1U;
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
        if (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag) {
            vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)
                    ? vlSelfRef.ysyx_26010027__DOT__idu_exu_pc
                    : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1);
            vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)
                    ? vlSelfRef.ysyx_26010027__DOT__idu_exu_imm
                    : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2);
        }
    }
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
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_dnpc = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_branch = 6U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_jump = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_snpc = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r = 5U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1 = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_imm = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2 = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_dnpc = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))) {
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_dnpc 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_dnpc;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata 
                = ((((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm) 
                     == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr)) 
                    & (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                    : ((0x0f11U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                        ? 0x79737978U : ((0x0f12U == 
                                          (0x00000fffU 
                                           & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                          ? 0x018ce1abU
                                          : ((0x0b00U 
                                              == (0x00000fffU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                              ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc
                                              : ((0x0b80U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                  ? 0U
                                                  : 
                                                 ((0x0300U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                   ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                                   : 
                                                  ((0x0305U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                      : 0U)))))))));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_branch 
                = vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_jump 
                = ((0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                    ? 1U : ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                             ? 2U : ((0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                      ? 3U : 0U)));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei 
                = (0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst);
            vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1 
                = ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                   | (0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_imm 
                = vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                   | ((0x23U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                      | ((0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                         | (0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        }
        if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar) {
            vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q = 0U;
        } else if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag) {
            vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q = 1U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_snpc 
                = ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc);
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result 
                = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_dnpc 
                = (((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                    | ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                       | (0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst))))
                    ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result
                    : (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                        | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret))
                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc
                        : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)));
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause = 0U;
    } else {
        __Vdly__ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
            = ((IData)(1U) + vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc);
        if (vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall) {
            Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(0x00000341U, vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc);
            vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc 
                = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc;
            vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause = 0x0000000bU;
            Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(0x00000342U, 0x0000000bU);
        } else if ((((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we) 
                     & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall))) 
                    & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr, vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata);
            if ((0x0300U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr))) {
                vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus 
                    = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata;
            } else if ((0x0305U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr))) {
                vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec 
                    = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata;
            } else if ((0x0341U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr))) {
                vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc 
                    = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata;
            } else if (VL_LIKELY(((0x0342U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr))))) {
                vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause 
                    = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata;
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: ysyx_26010027_CSR.v:63: Assertion failed in %Nysyx_26010027.my_WBU.my_csr: Warning: Write to unknown CSR address %x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -9,vlSymsp->name(),12,
                             (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("vsrc/ysyx_26010027_CSR.v", 63, "", false);
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret = 0U;
        vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_inst = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_pc = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret = 0U;
        vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_inst;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))) {
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret;
            vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata 
                = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_pc;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret;
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall 
                = vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res 
                = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                    | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))
                    ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14)
                             ? 2U : (((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | (0x67U == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                      ? 3U : 0U)));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr 
                = (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 7U));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_inst 
                = vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                    ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                             ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                      ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                               ? 3U
                                               : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                                   ? 4U
                                                   : 5U)))));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w 
                = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                   | ((0x33U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                      | ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)))));
            vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr 
                = (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm);
            vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we 
                = vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_pc 
                = vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc;
            vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret 
                = (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst);
            vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall 
                = (0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst);
        }
    }
    vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
        = __Vdly__ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc;
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2)));
    if (vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr 
            = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata 
            = (((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)) 
                | (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc));
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall)
            ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
            : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc);
}

void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

void Vysyx_26010027___024root___nba_sequent__TOP__1(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__1\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready)) 
           & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__exu_flush))) 
          & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__illegal)) 
         & (0U != vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) {
        Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
}

void Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);
extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h02dc8855_0;

void Vysyx_26010027___024root___nba_sequent__TOP__2(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__2\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    __Vfunc_pmem_read__0__Vfuncout = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__exu_flush) {
        vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r) {
        vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
            = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                : 0U);
    }
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I 
        = ((0x13U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
           | ((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
              | ((0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                 | (0x73U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B 
        = (((- (IData)((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000800U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                              << 4U)) | ((0x000007e0U 
                                          & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                             >> 0x00000014U)) 
                                         | (0x0000001eU 
                                            & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                               >> 7U)))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J 
        = ((((0x00000ffeU & ((- (IData)((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                         >> 0x0000001fU))) 
                             << 1U)) | (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x0000001fU)) 
            << 0x00000014U) | ((((0x000001feU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x0000000bU)) 
                                 | (1U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x00000014U))) 
                                << 0x0000000bU) | (0x000007feU 
                                                   & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                      >> 0x00000014U))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti 
        = (IData)((0x00002013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli 
        = (IData)((0x00001013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu 
        = (IData)((0x00003013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori 
        = (IData)((0x00004013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori 
        = (IData)((0x00006013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi 
        = (IData)((0x00007013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu 
        = (IData)((0x00004003U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu 
        = (IData)((0x00005003U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw = (IData)(
                                                            (0x00002003U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh = (IData)(
                                                            (0x00001003U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb = (IData)(
                                                            (3U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll 
        = (IData)((0x00001033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt 
        = (IData)((0x00002033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu 
        = (IData)((0x00003033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor 
        = (IData)((0x00004033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or 
        = (IData)((0x00006033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and 
        = (IData)((0x00007033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw 
        = (IData)((0x00001073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs 
        = (IData)((0x00002073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U 
        = ((0x37U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
           | (0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne 
        = (IData)((0x00001063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq 
        = (IData)((0x00000063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt 
        = (IData)((0x00004063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge 
        = (IData)((0x00005063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu 
        = (IData)((0x00006063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu 
        = (IData)((0x00007063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_rvalid = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_wready = 0U;
        vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_bvalid = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid) 
             & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                 ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                 : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_rvalid = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_wready = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid) 
             & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)))) {
            vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_bvalid = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                            ((1U 
                                                                              == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                                              ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q
                                                                              : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), __Vfunc_pmem_read__0__Vfuncout);
            vlSelfRef.ysyx_26010027__DOT__pmem_read_data 
                = __Vfunc_pmem_read__0__Vfuncout;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_rvalid = 1U;
            vlSelfRef.ysyx_26010027__DOT__pmem_rresp = 0U;
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
            vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_wready = 1U;
            vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_bvalid = 1U;
            vlSelfRef.ysyx_26010027__DOT__pmem_bresp = 0U;
        }
    }
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs) 
              | (IData)((0x00003073U == (0x0000707fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
            ? (((- (IData)((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                            >> 0x0000001fU))) << 0x0000000cU) 
               | (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                  >> 0x00000014U)) : ((0x23U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                       ? (((- (IData)(
                                                      (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                       >> 0x0000001fU))) 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                   >> 7U))))
                                       : ((0x63U == 
                                           (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                           ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B
                                           : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U)
                                               ? (0xfffff000U 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                               : ((0x6fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J
                                                   : 0U)))));
    vlSelfRef.__Vtableidx6 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu) 
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
        [vlSelfRef.__Vtableidx6];
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__pmem_wready = vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_wready;
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__state;
    vlSelfRef.ysyx_26010027__DOT__pmem_bvalid = vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_bvalid;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w;
    vlSelfRef.ysyx_26010027__DOT__pmem_rvalid = vlSelfRef.__Vdly__ysyx_26010027__DOT__pmem_rvalid;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r;
    vlSelfRef.ysyx_26010027__DOT__grant = vlSelfRef.__Vdly__ysyx_26010027__DOT__grant;
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    if ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))) {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp 
            = vlSelfRef.ysyx_26010027__DOT__pmem_rresp;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp 
            = vlSelfRef.ysyx_26010027__DOT__pmem_bresp;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid 
            = vlSelfRef.ysyx_26010027__DOT__pmem_rvalid;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid 
            = vlSelfRef.ysyx_26010027__DOT__pmem_bvalid;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
            ? (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rresp)
            : 0U);
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))));
    vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid) 
           & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))));
    vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid) 
           & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid) 
           & ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q 
            = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__flush_q;
        vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc = vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_pc;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w = 3U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar)))) {
            if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag) {
                vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q 
                    = (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                        & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q)))
                        ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc
                        : vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc);
            }
        }
        vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q 
            = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_IFU__DOT__flush_q;
        vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc = vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_pc;
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))) {
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata;
            vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w 
                = vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w;
        }
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: ysyx_26010027_IFU.v:152: Assertion failed in %Nysyx_26010027.my_IFU: [IFU] AXI4 rresp ERROR: rresp=%b at ifu_pc=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name(),
                     2,(IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp),
                     32,vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyx_26010027_IFU.v", 152, "", false);
    }
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc 
        = ((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
            ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
               + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B)
            : ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                   + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J)
                : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
        = VL_SHIFTR_III(32,32,32, ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                    ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                    : 0U), VL_SHIFTL_III(32,32,32, 
                                                         (3U 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U));
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata 
                = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w = 0U;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid = 0U;
    } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr 
            = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w 
            = vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w;
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))) {
        vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy 
        = vlSelfRef.__Vdly__ysyx_26010027__DOT__my_LSU__DOT__l_busy;
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr)) 
           & (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr) 
               == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr)) 
              & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                 & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we) 
                    & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res))))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready 
        = (1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ ((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                  | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))) 
              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w = 0U;
    } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready))) {
        vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w 
            = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw)
                ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb)
                         ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)
                                  ? 2U : 3U)));
    }
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw = (IData)(
                                                            (0x00002023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb = (IData)(
                                                            (0x00000023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh = (IData)(
                                                            (0x00001023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
           & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)));
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
    vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid = vlSelfRef.__Vdly__ysyx_26010027__DOT__ifu_idu_valid;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid 
        = (((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
            | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
    vlSelfRef.ysyx_26010027__DOT__arb_arvalid = ((1U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q)
                                                  : (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready 
        = (1U & ((~ ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1) 
                       | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3)) 
                      & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                         & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))) 
                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                        & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
                           | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5))))) 
                 & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid)) 
                    | (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr)) 
           & (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr) 
               == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr)) 
              & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid) 
                 & ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we) 
                    & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__illegal 
        = (1U & (~ (((IData)((0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti) 
                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli) 
                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli) 
                              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai) 
                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu) 
                                    | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori) 
                                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori) 
                                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi) 
                                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                            | (0x67U 
                                                               == 
                                                               (0x0000007fU 
                                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))))))))))))) 
                    | ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                         & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                   >> 0x00000019U))) 
                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                    | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and)))))))))) 
                       | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh))) 
                          | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                    | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                          | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu)))))) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                | ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14) 
                                       | ((0x00000073U 
                                           == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                          | (0x30200073U 
                                             == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                      | ((0x00100073U 
                                          == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                         | (0x0000100fU 
                                            == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))))))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu));
    vlSelfRef.ysyx_26010027__DOT__arb_awvalid = ((2U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid)) 
                 | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag 
        = ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
           & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
           & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q)) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__)
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata1)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__)
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata2)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag) {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
            = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q;
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
            = vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
            = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)
                ? vlSelfRef.ysyx_26010027__DOT__idu_exu_pc
                : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1);
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
            = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)
                ? vlSelfRef.ysyx_26010027__DOT__idu_exu_imm
                : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2);
    }
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts 
        = VL_LTS_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu 
        = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
           < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.__Vtableidx7 = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu) 
                               << 5U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts) 
                                          << 4U) | 
                                         (((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                            == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2) 
                                           << 3U) | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken 
        = Vysyx_26010027__ConstPool__TABLE_h073bc315_0
        [vlSelfRef.__Vtableidx7];
    vlSelfRef.ysyx_26010027__DOT__exu_flush = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)) 
                                                   && (1U 
                                                       & ((6U 
                                                           != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                                           ? 
                                                          (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                                           || (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                                                | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret)) 
                                                               || (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei)))))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
            ? ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? 0U : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                                    ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata
                                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                        ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                        : vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata))))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1
                        : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken)
                            ? vlSelfRef.ysyx_26010027__DOT__idu_exu_target
                            : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           | vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           ^ vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu))))
            : ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1, 
                                         (0x0000001fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           >> (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           << (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                        : vlSelfRef.ysyx_26010027__DOT__idu_exu_imm)
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           - vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)))));
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
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 18, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vysyx_26010027___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 18, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/ysyx_26010027.v", 18, "", "Active region did not converge after 100 tries");
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
