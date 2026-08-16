// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027___024root___eval_static(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_static\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vysyx_26010027___024root___eval_initial(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_initial\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_26010027___024root___eval_final(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_final\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_26010027___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_26010027___024root___eval_phase__stl(Vysyx_26010027___024root* vlSelf);

VL_ATTR_COLD void Vysyx_26010027___024root___eval_settle(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_settle\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_26010027___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 14, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vysyx_26010027___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vysyx_26010027___024root___eval_triggers__stl(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_triggers__stl\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_26010027___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vysyx_26010027___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_26010027___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vysyx_26010027___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vysyx_26010027___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h02dc8855_0;
void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

VL_ATTR_COLD void Vysyx_26010027___024root___stl_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___stl_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready 
        = (1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I 
        = ((0x13U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
           | ((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
              | ((0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                 | (0x73U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    if (vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr 
            = vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata 
            = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
                : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
                        ? 0U : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc))));
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
        = VL_SHIFTR_III(32,32,32, ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                    ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                    : 0U), VL_SHIFTL_III(32,32,32, 
                                                         (3U 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U));
    if ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))) {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp 
            = vlSelfRef.ysyx_26010027__DOT__arb_rresp;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp 
            = vlSelfRef.ysyx_26010027__DOT__pmem_bresp;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp = 0U;
    }
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
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump 
        = ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
           | (0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
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
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U 
        = ((0x37U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
           | (0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
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
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14 
        = (vlSelfRef.ysyx_26010027__DOT__idu_exu_imm 
           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc);
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
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
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw 
        = (IData)((0x00001073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs 
        = (IData)((0x00002073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_9 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_fwd 
        = ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res))
            ? ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc)
            : vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd 
        = ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res))
            ? ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc)
            : vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)) 
           | (3U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_5 = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                                                   & ((0U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_6 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2) 
           == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ ((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                  | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))) 
              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc 
        = ((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
            ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
               + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B)
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                   + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J)
                : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc)));
    vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
           & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))));
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
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid 
        = (((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
            | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
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
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__alu_op 
        = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
             & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                          >> 0x00000019U))) | (0x63U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
            ? 1U : ((0x37U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                     ? 2U : (((IData)((0x00001033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                              | (IData)((0x00001013U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))
                              ? 3U : ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                        & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                  >> 0x00000019U))) 
                                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                          & (0U == 
                                             (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                              >> 0x00000019U))))
                                       ? 4U : ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                     >> 0x00000019U))) 
                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                       >> 0x00000019U))))
                                                ? 5U
                                                : (
                                                   ((IData)(
                                                            (0x00002033U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                    | (IData)(
                                                              (0x00002013U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))
                                                    ? 6U
                                                    : 
                                                   ((IData)(
                                                            (0x00003013U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                                     ? 7U
                                                     : 
                                                    ((IData)(
                                                             (0x00003033U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                                      ? 8U
                                                      : 
                                                     (((IData)(
                                                               (0x00004033U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                       | (IData)(
                                                                 (0x00004013U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))
                                                       ? 9U
                                                       : 
                                                      (((IData)(
                                                                (0x00007033U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                        | (IData)(
                                                                  (0x00007013U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))
                                                        ? 0x0aU
                                                        : 
                                                       (((IData)(
                                                                 (0x00006033U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                         | (IData)(
                                                                   (0x00006013U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))
                                                         ? 0x0bU
                                                         : 
                                                        ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)
                                                          ? 0x0cU
                                                          : 
                                                         ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs)
                                                           ? 0x0dU
                                                           : 0U)))))))))))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs) 
              | (IData)((0x00003073U == (0x0000707fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_9) 
              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_5)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10) 
              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_5)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready 
        = (1U & ((~ (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                      & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                         & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_9))))) 
                     | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                         & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                            & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10))))) 
                        | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                            & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))) 
                           | ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                              & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_6))))))) 
                 & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid)) 
                    | (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
    vlSelfRef.ysyx_26010027__DOT__arb_awvalid = ((2U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
    if (((~ (((IData)((0x00000013U == (0x0000707fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
              | ((IData)((0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                 | ((IData)((0x00001013U == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                    | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                        & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 0x00000019U))) 
                       | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x00000019U))) 
                          | ((IData)((0x00003013U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                             | ((IData)((0x00004013U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                | ((IData)((0x00006013U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                   | ((IData)((0x00007013U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
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
                            >> 0x00000019U))) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                      >> 0x00000019U))) 
                                                 | ((IData)(
                                                            (0x00001033U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                    | ((IData)(
                                                               (0x00002033U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                       | ((IData)(
                                                                  (0x00003033U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                          | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                              & (0U 
                                                                 == 
                                                                 (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                                  >> 0x00000019U))) 
                                                             | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                                 & (0x20U 
                                                                    == 
                                                                    (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                                     >> 0x00000019U))) 
                                                                | ((IData)(
                                                                           (0x00004033U 
                                                                            == 
                                                                            (0x0000707fU 
                                                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                                   | ((IData)(
                                                                              (0x00006033U 
                                                                               == 
                                                                               (0x0000707fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                                      | (IData)(
                                                                                (0x00007033U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))))))))) 
                | (((IData)((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                    | ((IData)((0x00000023U == (0x0000707fU 
                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                       | (IData)((0x00001023U == (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))) 
                   | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu)))))) 
                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                         | ((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                               | ((0x00100073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                  | (0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))))))) 
         & (0U != vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) {
        Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
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
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_16 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_6) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__ 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_16) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5));
    vlSelfRef.ysyx_26010027__DOT__arb_arvalid = ((1U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid)
                                                  : (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)
            ? vlSelfRef.ysyx_26010027__DOT__idu_exu_pc
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_fwd
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__)
                    ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd
                    : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17) 
                        & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
                        ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                        : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                            ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                           [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))])))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_fwd
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd
                : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_16) 
                    & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))
                        ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                       [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))]))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)
            ? vlSelfRef.ysyx_26010027__DOT__idu_exu_imm
            : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid 
        = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
           - vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12 
        = VL_LTS_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13 
        = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
           < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result 
        = ((8U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
            ? ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? 0U : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                             ? 0U : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1))
                : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           | vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2))
                    : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           ^ vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13))))
            : ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                    ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op))
                        ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)
                        : (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12))
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
                        ? ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                            ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid
                                : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                    ? ((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                        >= vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))))
                            : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                    ? (VL_GTES_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                    : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)))
                                : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                    ? ((0U == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid)
                                        ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))
                                    : ((0U == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid)
                                        ? ((IData)(4U) 
                                           + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                        : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14))))
                        : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                           + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)))));
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
}

VL_ATTR_COLD void Vysyx_26010027___024root____Vm_traceActivitySetAll(Vysyx_26010027___024root* vlSelf);

VL_ATTR_COLD void Vysyx_26010027___024root___eval_stl(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_stl\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vysyx_26010027___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_26010027___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vysyx_26010027___024root___eval_phase__stl(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_phase__stl\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_26010027___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vysyx_26010027___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vysyx_26010027___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vysyx_26010027___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_26010027___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vysyx_26010027___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vysyx_26010027___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_26010027___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vysyx_26010027___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_26010027___024root____Vm_traceActivitySetAll(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vysyx_26010027___024root___ctor_var_reset(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___ctor_var_reset\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->nothing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17836210167517520960ull);
    vlSelf->ysyx_26010027__DOT__arb_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6304498018535779070ull);
    vlSelf->ysyx_26010027__DOT__arb_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14389975746546637669ull);
    vlSelf->ysyx_26010027__DOT__arb_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5714551573934533101ull);
    vlSelf->ysyx_26010027__DOT__arb_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2330056402693273711ull);
    vlSelf->ysyx_26010027__DOT__arb_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12769610279130290054ull);
    vlSelf->ysyx_26010027__DOT__arb_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18205674656909497599ull);
    vlSelf->ysyx_26010027__DOT__pmem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15832392103332752769ull);
    vlSelf->ysyx_26010027__DOT__pmem_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11527376546873525815ull);
    vlSelf->ysyx_26010027__DOT__pmem_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9181049948916685249ull);
    vlSelf->ysyx_26010027__DOT__pmem_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1756557055933584189ull);
    vlSelf->ysyx_26010027__DOT__pmem_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11315554739637605468ull);
    vlSelf->ysyx_26010027__DOT__pmem_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17208380949985042026ull);
    vlSelf->ysyx_26010027__DOT__ifu_idu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851374109827987108ull);
    vlSelf->ysyx_26010027__DOT__ifu_idu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10301744487378174435ull);
    vlSelf->ysyx_26010027__DOT__ifu_idu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10931056467553149345ull);
    vlSelf->ysyx_26010027__DOT__cpu_ifu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3694560635562436487ull);
    vlSelf->ysyx_26010027__DOT__cpu_ifu_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15173602326393977739ull);
    vlSelf->ysyx_26010027__DOT__cpu_ifu_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563376349663061369ull);
    vlSelf->ysyx_26010027__DOT__icache_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14733918769932103733ull);
    vlSelf->ysyx_26010027__DOT__icache_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1972436220146453659ull);
    vlSelf->ysyx_26010027__DOT__icache_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11536566011024938013ull);
    vlSelf->ysyx_26010027__DOT__icache_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15838506243504145232ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566529455734479870ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12506349250553889274ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11718105045691107783ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5387351923385480618ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 896027136089740368ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8650711452667969461ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15582491645642797490ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_alu_arc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 358674394050874534ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_alu_arc2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16747894765052829495ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18190010829913500561ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18441188597230930925ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14624961280328926223ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_jump = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3940989719338071747ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_branch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17383793050778104949ull);
    vlSelf->ysyx_26010027__DOT__idu_wbu_raddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9848301060194255953ull);
    vlSelf->ysyx_26010027__DOT__idu_wbu_raddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16324396403594343025ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 639115456424750325ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 181866840815301909ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15494859879720883054ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12998450949361384847ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9668724838811398355ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1744398237712132103ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12233847679169665696ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7614317335685670536ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9679984288020178676ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 483923670297541609ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149991372769130331ull);
    vlSelf->ysyx_26010027__DOT__exu_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786853737685700876ull);
    vlSelf->ysyx_26010027__DOT__exu_flush_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11451158630723393496ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 349300588435259707ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7928070201119749098ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5353721872572474548ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 966903520149379367ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17047922566841224750ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7346659019142420413ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16447629979515962154ull);
    vlSelf->ysyx_26010027__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11411259040134068857ull);
    vlSelf->ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2 = 0;
    vlSelf->ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3 = 0;
    vlSelf->ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4 = 0;
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10355471665306688295ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16194230361509828067ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18432804908240036338ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11740598682316774728ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__handshake_ar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14177406152932074377ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16321905017414748397ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__imm_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11162541984099358562ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__imm_J = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1423975431736054504ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812289184342210413ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7271664529521449729ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__flush_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14014016346097816516ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__inst_I = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15247171585497599022ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__inst_U = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334460097781359210ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9449846092203215476ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7815755013749082958ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4598192429558242077ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15177704567871392791ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10700265287512248186ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17445934132142407081ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12601522510561842332ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12336562693680441227ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9165203354648976411ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7289312549488901688ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3968825333891709915ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727715261695711208ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3158968540374615769ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__branch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6593982236424343311ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3670592970955439755ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13004432237062364898ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 = 0;
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 = 0;
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12712293436018043891ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11010519764104786328ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6616316944609576415ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3246003576422006975ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17793310680388889758ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1092417283068433134ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 145929544432814695ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__mid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9311826999145808718ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16990821223538347437ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__exu_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9558431255746844532ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1495845054820592522ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5564411141242557308ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047908240682102347ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14020855223323231936ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17742408611886418675ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_6 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_9 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_16 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17 = 0;
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9084188808647540750ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14446718667811383239ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18230265003538979564ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7176760792391182146ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12207413162844185934ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15657455113605302242ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1858118259353510397ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__l_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14143526003643327504ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__l_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17210717006333525180ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__l_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1413079860587182551ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16662610635500004045ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__l_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15445143995835280815ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7276484053590421046ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__state_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16717555008571931863ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__state_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12297622502261040752ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__store_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957093623801192039ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7118008542629312724ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1718726313515501214ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__handshake_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9267858361313823261ull);
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7990356817671866141ull);
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9614866106844511912ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7737001209530092025ull);
    }
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4128787228102858056ull);
    vlSelf->__VdfgRegularize_he50b618e_0_5 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__grant = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__idu_exu_jump = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__idu_exu_waddr = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__idu_exu_inst = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__idu_exu_pc = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__exu_lsu_valid = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__exu_lsu_pc = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__exu_lsu_inst = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__exu_lsu_mem_w = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__exu_lsu_mem_addr = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
