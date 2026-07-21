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
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 9, "", "Settle region did not converge after 100 tries");
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
    vlSelfRef.cur_pc = vlSelfRef.ysyx_26010027__DOT__pc;
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_b 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b 
        = (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
            & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid)) 
           & ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
              & (0U == ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                         ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bresp)
                         : 0U))));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_r 
        = (((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
             ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
             : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rvalid));
    if ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))) {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid 
            = vlSelfRef.ysyx_26010027__DOT__io_master_rvalid;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp 
            = vlSelfRef.ysyx_26010027__DOT__io_master_rresp;
    } else {
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_4 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rvalid));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
              & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_resp 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
              & (0U == ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                         ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rresp)
                         : 0U))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
            ? vlSelfRef.ysyx_26010027__DOT__io_master_rdata
            : 0U);
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid)
            ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata
            : vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch);
    vlSelfRef.cur_inst = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst;
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
        = ((0U == (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                  >> 0x00000014U)))
            ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
           [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                            >> 0x00000014U))]);
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_13 
        = ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
           | (0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne 
        = (IData)((0x00001063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq 
        = (IData)((0x00000063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt 
        = (IData)((0x00004063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge 
        = (IData)((0x00005063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu 
        = (IData)((0x00006063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu 
        = (IData)((0x00007063U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw = (IData)(
                                                            (0x00002023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb = (IData)(
                                                            (0x00000023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh = (IData)(
                                                            (0x00001023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi 
        = (IData)((0x00000013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti 
        = (IData)((0x00002013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli 
        = (IData)((0x00001013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu 
        = (IData)((0x00003013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori 
        = (IData)((0x00004013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori 
        = (IData)((0x00006013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi 
        = (IData)((0x00007013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll 
        = (IData)((0x00001033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt 
        = (IData)((0x00002033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu 
        = (IData)((0x00003033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor 
        = (IData)((0x00004033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or 
        = (IData)((0x00006033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and 
        = (IData)((0x00007033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U 
        = ((0x37U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
           | (0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw 
        = (IData)((0x00001073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs 
        = (IData)((0x00002073U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I 
        = ((0x13U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
           | ((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
              | ((0x67U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                 | (0x73U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu 
        = (IData)((0x00004003U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu 
        = (IData)((0x00005003U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw = (IData)(
                                                            (0x00002003U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh = (IData)(
                                                            (0x00001003U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb = (IData)(
                                                            (3U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_13)
            ? 1U : ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)
                     ? 2U : ((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)
                              ? 3U : 0U)));
    vlSelfRef.__Vtableidx3 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu) 
                                << 5U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                           << 3U))) 
                              | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne))));
    vlSelfRef.ysyx_26010027__DOT__b_type = Vysyx_26010027__ConstPool__TABLE_h02dc8855_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw)
            ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb)
                     ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)
                              ? 2U : 3U)));
    vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs) 
              | (IData)((0x00003073U == (0x0000707fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
            ? (((- (IData)((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                            >> 0x0000001fU))) << 0x0000000cU) 
               | (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                  >> 0x00000014U)) : ((0x23U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))
                                       ? (((- (IData)(
                                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                       >> 0x0000001fU))) 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                   >> 7U))))
                                       : ((0x63U == 
                                           (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))
                                           ? (((- (IData)(
                                                          (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000800U 
                                                  & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                     << 4U)) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                          >> 7U)))))
                                           : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U)
                                               ? (0xfffff000U 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)
                                               : ((0x6fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))
                                                   ? 
                                                  ((((0x00000ffeU 
                                                      & ((- (IData)(
                                                                    (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                                     >> 0x0000001fU))) 
                                                         << 1U)) 
                                                     | (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                        >> 0x0000001fU)) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                            >> 0x00000014U))))
                                                   : 0U)))));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
            ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                     ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                              ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                       ? 3U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                                ? 4U
                                                : 5U)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                    | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
           & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                     >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
           & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                        >> 0x00000019U)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result 
        = ((((0x0f11U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)) 
             | (0x0f12U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))) 
            | (((0x0b00U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)) 
                | (0x0b80U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))) 
               | ((0x0300U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)) 
                  | ((0x0305U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)) 
                     | ((0x0341U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)) 
                        | (0x0342U == (0x00000fffU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)))))))
            ? ((0x0f11U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                ? 0x79737978U : ((0x0f12U == (0x00000fffU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                                  ? 0x26010027U : (
                                                   (0x0b00U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                                                    ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)
                                                    : 
                                                   ((0x0b80U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                                                     ? (IData)(
                                                               (vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                                                >> 0x00000020U))
                                                     : 
                                                    ((0x0300U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus
                                                      : 
                                                     ((0x0305U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                                                       ? vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec
                                                       : 
                                                      ((0x0341U 
                                                        == 
                                                        (0x00000fffU 
                                                         & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))
                                                        ? vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc
                                                        : vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause)))))))
            : 0U);
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren 
        = ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & (5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type)
            ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we)
                     ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_13)
                              ? 3U : 0U)));
    if (((~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
                                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))))))))))))) 
             | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
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
                      | ((0x37U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                         | (((0x17U == (0x0000007fU 
                                        & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                             | (0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) 
                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) 
                               | (0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))))))))) 
         & (0U != vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) {
        Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type) 
                  | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type)))))
            ? 0U : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                     | (0x63U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))
                     ? 1U : ((0x37U == (0x0000007fU 
                                        & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))
                              ? 2U : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                       | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli))
                                       ? 3U : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli))
                                                ? 4U
                                                : (
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
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
                                                         ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)
                                                           ? 0x0cU
                                                           : 
                                                          ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs)
                                                            ? 0x0dU
                                                            : 0U))))))))))))));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_4) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
            ? (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
            : (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren) 
            & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))) 
           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_4)));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
        = (((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
            | (0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))
            ? vlSelfRef.ysyx_26010027__DOT__pc : ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                       >> 0x0000000fU)))
                                                   ? 0U
                                                   : 
                                                  vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                      >> 0x0000000fU))]));
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
            | ((0x23U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
               | ((0x17U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                  | (0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))
            ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm
            : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2);
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result = 0U;
    if ((8U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))) {
        vlSelfRef.ysyx_26010027__DOT__alu_result = 
            ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
              ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                  ? 0U : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                           ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                              | vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result)
                           : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1))
              : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                  ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                      ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                         | vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                      : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                         & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
                  : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                      ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                         ^ vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                      : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                         < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))));
    } else if ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))) {
        vlSelfRef.ysyx_26010027__DOT__alu_result = 
            ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
              ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                  ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                     < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                  : VL_LTS_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
              : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
                  ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, 
                                   (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
                  : (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                     >> (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))));
    } else if ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))) {
        vlSelfRef.ysyx_26010027__DOT__alu_result = 
            ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))
              ? (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                 << (0x0000001fU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2))
              : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm);
    } else if ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op))) {
        vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result 
            = (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
               - vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2);
        vlSelfRef.ysyx_26010027__DOT__alu_result = 
            ((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__b_type))
              ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__b_type))
                  ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result
                  : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__b_type))
                      ? ((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                          >= vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                          ? (vlSelfRef.ysyx_26010027__DOT__pc 
                             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)
                          : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc))
                      : ((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
                          < vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                          ? (vlSelfRef.ysyx_26010027__DOT__pc 
                             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)
                          : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc))))
              : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__b_type))
                  ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__b_type))
                      ? (VL_GTES_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                          ? (vlSelfRef.ysyx_26010027__DOT__pc 
                             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)
                          : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc))
                      : (VL_LTS_III(32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2)
                          ? (vlSelfRef.ysyx_26010027__DOT__pc 
                             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)
                          : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)))
                  : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__b_type))
                      ? ((0U == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result)
                          ? (vlSelfRef.ysyx_26010027__DOT__pc 
                             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)
                          : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc))
                      : ((0U != vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result)
                          ? (vlSelfRef.ysyx_26010027__DOT__pc 
                             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)
                          : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)))));
    } else {
        vlSelfRef.ysyx_26010027__DOT__alu_result = 
            (vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1 
             + vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2);
    }
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__w_pending));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid));
    vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w 
        = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
            | ((0x33U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
               | ((0x6fU == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                     | (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we))))) 
           & ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
              & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall))));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type))
            ? vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec
            : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type))
                ? vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc
                : (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type)) 
                    | (6U != (IData)(vlSelfRef.ysyx_26010027__DOT__b_type)))
                    ? vlSelfRef.ysyx_26010027__DOT__alu_result
                    : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc))));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
        = VL_SHIFTR_III(32,32,32, ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                    ? vlSelfRef.ysyx_26010027__DOT__io_master_rdata
                                    : 0U), VL_SHIFTL_III(32,32,32, 
                                                         (3U 
                                                          & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_w 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready 
        = ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__w_pending)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid));
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_req 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
              & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)));
    if (vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w) {
        vlSelfRef.ysyx_26010027__DOT__waddr = (0x0000001fU 
                                               & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                  >> 7U));
        vlSelfRef.ysyx_26010027__DOT__wdata = ((2U 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_26010027__DOT__pc)
                                                    : vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                                       ? 0U
                                                       : 
                                                      (0x0000ffffU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                                       ? 
                                                      (0x000000ffU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                                       : 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                                       >> 0x0000000fU)))) 
                                                        << 0x00000010U) 
                                                       | (0x0000ffffU 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0x000000ffU 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                                       : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                                                    : vlSelfRef.ysyx_26010027__DOT__alu_result));
    } else {
        vlSelfRef.ysyx_26010027__DOT__waddr = 0U;
        vlSelfRef.ysyx_26010027__DOT__wdata = 0U;
    }
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_aw 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready));
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
}

VL_ATTR_COLD void Vysyx_26010027___024root___ctor_var_reset(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___ctor_var_reset\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->cur_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14920093658057763058ull);
    vlSelf->cur_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5584302711918894221ull);
    vlSelf->ysyx_26010027__DOT__io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5270644959401992268ull);
    vlSelf->ysyx_26010027__DOT__io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5262232701765319627ull);
    vlSelf->ysyx_26010027__DOT__io_master_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17741811944605500139ull);
    vlSelf->ysyx_26010027__DOT__io_master_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6807900877941122040ull);
    vlSelf->ysyx_26010027__DOT__io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16160522790616052487ull);
    vlSelf->ysyx_26010027__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 437182451512512390ull);
    vlSelf->ysyx_26010027__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7431814980535696411ull);
    vlSelf->ysyx_26010027__DOT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12283821101977895796ull);
    vlSelf->ysyx_26010027__DOT__b_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12720278700575803741ull);
    vlSelf->ysyx_26010027__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5591609478436969647ull);
    vlSelf->ysyx_26010027__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11411259040134068857ull);
    vlSelf->ysyx_26010027__DOT__w_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377642282850106115ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_26010027__DOT__R__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3634039482960640743ull);
    }
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14148313973135540684ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9883248977097304140ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10588814645869420426ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6430393909238579436ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9177052144451042947ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18368724395594349572ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__handshake_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14723136329943626313ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__handshake_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460016030066216254ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__handshake_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074187996206889608ull);
    vlSelf->ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9426246127099885767ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__n_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13924264589104514169ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8871769994566390823ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1221963214919578542ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13622642356798218377ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__lsu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3405587863470757532ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11740598682316774728ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__inst_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16329239401115251932ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12133696578117898559ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5681426976036419801ull);
    vlSelf->ysyx_26010027__DOT__my_IFU__DOT__lsu_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10877951996423858566ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14674312259867768703ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4048707784408662729ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__inst_I = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15247171585497599022ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__inst_U = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334460097781359210ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18094122454830774133ull);
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
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__ld_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12025728141689812124ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10439654104960214166ull);
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
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727715261695711208ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT__csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3158968540374615769ull);
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 = 0;
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 = 0;
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 = 0;
    vlSelf->ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_13 = 0;
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17633061146508754995ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1092417283068433134ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12468719360655380272ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__csr_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 368214076314678625ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6181443897951543726ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1945835486459456083ull);
    vlSelf->ysyx_26010027__DOT__my_EXU__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16990821223538347437ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10512511291218461680ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16733821755406494984ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12696890490952572523ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12669468363513739022ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12014235334022177853ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3147875442299195802ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__state_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16717555008571931863ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__state_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12297622502261040752ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8917712504575123928ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2905505874107855689ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7118008542629312724ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1718726313515501214ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT__handshake_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9267858361313823261ull);
    vlSelf->ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_4 = 0;
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__j_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 358262244898308106ull);
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011435488625949420ull);
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7393244282860947944ull);
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6952072396876350364ull);
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10158267464734943697ull);
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11679112872097646119ull);
    vlSelf->ysyx_26010027__DOT__my_CSR__DOT__mc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8954086624924562486ull);
    vlSelf->__Vtableidx3 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
