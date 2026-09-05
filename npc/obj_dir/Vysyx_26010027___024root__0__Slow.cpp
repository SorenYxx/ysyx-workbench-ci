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
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 18, "", "Settle region did not converge after 100 tries");
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
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h073bc315_0;

VL_ATTR_COLD void Vysyx_26010027___024root___stl_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___stl_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4;
    ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 = 0;
    CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12;
    ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready 
        = (1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)));
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
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
        = VL_SHIFTR_III(32,32,32, ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                    ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                    : 0U), VL_SHIFTL_III(32,32,32, 
                                                         (3U 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    if ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))) {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp 
            = vlSelfRef.ysyx_26010027__DOT__pmem_rresp;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp 
            = vlSelfRef.ysyx_26010027__DOT__pmem_bresp;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I 
        = ((0x13U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
           | ((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
              | ((0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                 | (0x73U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
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
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__load_q 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
              & (5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__ 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr)) 
           & (((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr) 
               == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr)) 
              & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                 & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we) 
                    & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res))))));
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
    ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2) 
              == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_op 
        = ((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
           | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
            ? (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rresp)
            : 0U);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: ysyx_26010027_IFU.v:152: Assertion failed in %Nysyx_26010027.my_IFU: [IFU] AXI4 rresp ERROR: rresp=%b at ifu_pc=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name(),
                     2,(IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp),
                     32,vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyx_26010027_IFU.v", 152, "", false);
    }
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
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc 
        = ((0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
            ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
               + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B)
            : ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                ? (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                   + vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J)
                : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid 
        = (((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
            | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__load_q));
    vlSelfRef.ysyx_26010027__DOT__arb_arvalid = ((1U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q)
                                                  : (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
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
    __Vtableidx6 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu) 
                      << 5U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                 << 4U) | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                        << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch 
        = Vysyx_26010027__ConstPool__TABLE_h02dc8855_0
        [__Vtableidx6];
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli 
        = ((IData)(ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai 
        = ((IData)(ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl 
        = ((IData)(ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra 
        = ((IData)(ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
           & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready 
        = (1U & ((~ ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1) 
                       | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3)) 
                      & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                         & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))) 
                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
                        & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
                           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_op))))) 
                 & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid)) 
                    | (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_op)) 
              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)));
    vlSelfRef.ysyx_26010027__DOT__arb_awvalid = ((2U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
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
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid)) 
                 | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready)));
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
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q)) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
           & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
           & (1U != (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)));
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
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu) 
            & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
            ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result
            : vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__)
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata1)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__)
            ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__)
                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data
                : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__)
                    ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                    : vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata2)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
        = (((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__)) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag))
            ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1)
                ? vlSelfRef.ysyx_26010027__DOT__idu_exu_pc
                : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
        = (((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__)) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag))
            ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q
            : ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2)
                ? vlSelfRef.ysyx_26010027__DOT__idu_exu_imm
                : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2));
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
}

VL_ATTR_COLD void Vysyx_26010027___024root___ctor_var_reset(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___ctor_var_reset\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->ysyx_26010027__DOT__arb_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6304498018535779070ull);
    vlSelf->ysyx_26010027__DOT__arb_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12769610279130290054ull);
    vlSelf->ysyx_26010027__DOT__ifu_idu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851374109827987108ull);
    vlSelf->ysyx_26010027__DOT__ifu_idu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10301744487378174435ull);
    vlSelf->ysyx_26010027__DOT__ifu_idu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10931056467553149345ull);
    vlSelf->ysyx_26010027__DOT__pmem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15832392103332752769ull);
    vlSelf->ysyx_26010027__DOT__pmem_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9181049948916685249ull);
    vlSelf->ysyx_26010027__DOT__pmem_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1756557055933584189ull);
    vlSelf->ysyx_26010027__DOT__pmem_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11315554739637605468ull);
    vlSelf->ysyx_26010027__DOT__pmem_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17208380949985042026ull);
    vlSelf->ysyx_26010027__DOT__pmem_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13484282183720737751ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566529455734479870ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12506349250553889274ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11718105045691107783ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5387351923385480618ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12302404241853968950ull);
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
    vlSelf->ysyx_26010027__DOT__idu_exu_fencei = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9933456105787219114ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10636961260900458252ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15331378448277269642ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_raddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7381895392169183645ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_raddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11950042732427425864ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_csr_raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13201543273732231890ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3001725764313674628ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17968410406333646900ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3502388183996962664ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5065913122453563065ull);
    vlSelf->ysyx_26010027__DOT__idu_exu_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15226113198004318595ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 639115456424750325ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 181866840815301909ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 121380045316170611ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15494859879720883054ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12998450949361384847ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9668724838811398355ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1744398237712132103ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12233847679169665696ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7614317335685670536ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9679984288020178676ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 483923670297541609ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149991372769130331ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16836457428040044912ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7395469748867490809ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7818992532817183256ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13834228236466706100ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17861143918613560142ull);
    vlSelf->ysyx_26010027__DOT__exu_lsu_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4679425457085253301ull);
    vlSelf->ysyx_26010027__DOT__exu_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786853737685700876ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 349300588435259707ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10838918514736906418ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7928070201119749098ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5353721872572474548ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 966903520149379367ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17047922566841224750ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7346659019142420413ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12187717124948625655ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16447629979515962154ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12595825226226248990ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7535419861089817758ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11329390531780542757ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2253393129121656160ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17958345337670178184ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17005260823602341458ull);
    vlSelf->ysyx_26010027__DOT__lsu_wbu_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4418665447302083038ull);
    vlSelf->ysyx_26010027__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11411259040134068857ull);
    vlSelf->ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2 = 0;
    vlSelf->ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3 = 0;
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10355471665306688295ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18432804908240036338ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7150985655536292833ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__imm_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11162541984099358562ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__imm_J = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1423975431736054504ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11740598682316774728ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__arvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11397819476678099890ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__araddr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12553570133506040945ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__flush_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15224059705604884360ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 112486970791561020ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__ar_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9228493883361439475ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__handshake_ar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14177406152932074377ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16321905017414748397ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7271664529521449729ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__inst_I = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15247171585497599022ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__inst_U = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334460097781359210ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17767147898043848428ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1605484724450978929ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5083835268875955449ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16418209054132019585ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16628941013071505101ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 633650719811982899ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13040391330963071131ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9769785178302841502ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9449846092203215476ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7815755013749082958ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4598192429558242077ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15177704567871392791ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10700265287512248186ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1886966405868314896ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4095504977826838422ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11375191846386490976ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13512594481457554316ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15760690684780337185ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12951697331195335974ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__r_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2149495452119184086ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__r_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15967146923043605915ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__r_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13798232282856388364ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14551206870190878973ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14281631637470898562ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6683974934794493495ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17445934132142407081ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12601522510561842332ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12336562693680441227ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9165203354648976411ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7289312549488901688ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3968825333891709915ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14558413303573885935ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727715261695711208ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3158968540374615769ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__branch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6593982236424343311ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8763646981064239078ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 = 0;
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12712293436018043891ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11010519764104786328ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6616316944609576415ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17646504381791132785ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 145929544432814695ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17793310680388889758ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1092417283068433134ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14460224423710441070ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14075324378050522737ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4718880912509982878ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10075665387856020056ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3423489570313847204ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 19814472702755765ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2572901362786158296ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16002992531402679202ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9567539919142030520ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18251530912622045516ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4517188277983280743ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10236786751548286061ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11594733733356132471ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10634274183712603528ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9384135669653450777ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__rdata2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1555493228647634939ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__latch_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5291064418447251650ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15999578196337033115ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10967149691719714306ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14906488193846269921ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__trap_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 671271909016826250ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8 = 0;
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
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__mem_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6266100669636737091ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__state_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16717555008571931863ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__state_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12297622502261040752ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__load_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8389205746163732083ull);
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
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10666911421435316569ull);
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13601367712162689418ull);
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13947810642183976495ull);
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15843491566194004735ull);
    vlSelf->ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8429126434137320316ull);
    vlSelf->__Vtableidx7 = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__pmem_read_data = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__grant = 0;
    vlSelf->__Vdly__ysyx_26010027__DOT__ifu_idu_valid = 0;
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
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
