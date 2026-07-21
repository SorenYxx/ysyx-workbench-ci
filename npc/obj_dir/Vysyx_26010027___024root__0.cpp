// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

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

void Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1);
void Vysyx_26010027___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r);

void Vysyx_26010027___024root___nba_sequent__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__ysyx_26010027__DOT__R__DOT__rf__v0;
    __VdlyVal__ysyx_26010027__DOT__R__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_26010027__DOT__R__DOT__rf__v0;
    __VdlyDim0__ysyx_26010027__DOT__R__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_26010027__DOT__R__DOT__rf__v0;
    __VdlySet__ysyx_26010027__DOT__R__DOT__rf__v0 = 0;
    // Body
    __VdlySet__ysyx_26010027__DOT__R__DOT__rf__v0 = 0U;
    if (((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type)) 
         & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)))) {
        Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__pc, vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc, 
                                                                           (0x0000001fU 
                                                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                                               >> 7U)), 
                                                                           (0x0000001fU 
                                                                            & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                                               >> 0x0000000fU)));
    }
    if (VL_UNLIKELY((((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                      & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)))))) {
        Vysyx_26010027___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_WRITEF_NX("ebreak at PC = 0x%x Inst = 0x%x\n",0,
                     32,vlSelfRef.ysyx_26010027__DOT__pc,
                     32,vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst);
    }
    if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w) 
         & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__waddr)))) {
        Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__waddr, vlSelfRef.ysyx_26010027__DOT__wdata);
        __VdlyVal__ysyx_26010027__DOT__R__DOT__rf__v0 
            = vlSelfRef.ysyx_26010027__DOT__wdata;
        __VdlyDim0__ysyx_26010027__DOT__R__DOT__rf__v0 
            = vlSelfRef.ysyx_26010027__DOT__waddr;
        __VdlySet__ysyx_26010027__DOT__R__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__ysyx_26010027__DOT__R__DOT__rf__v0) {
        vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[__VdlyDim0__ysyx_26010027__DOT__R__DOT__rf__v0] 
            = __VdlyVal__ysyx_26010027__DOT__R__DOT__rf__v0;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_26010027__ConstPool__TABLE_h2f5f5e26_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_26010027__ConstPool__TABLE_h759c2e8b_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_26010027__ConstPool__TABLE_hd3ba8812_0;
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);
void Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(IData/*31:0*/ csr, IData/*31:0*/ data);
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h02dc8855_0;
void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

void Vysyx_26010027___024root___nba_sequent__TOP__1(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_sequent__TOP__1\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    __Vfunc_pmem_read__3__Vfuncout = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__ysyx_26010027__DOT__grant;
    __Vdly__ysyx_26010027__DOT__grant = 0;
    CData/*1:0*/ __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state;
    __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0;
    IData/*31:0*/ __Vdly__ysyx_26010027__DOT__pc;
    __Vdly__ysyx_26010027__DOT__pc = 0;
    CData/*0:0*/ __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending;
    __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending = 0;
    IData/*31:0*/ __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch;
    __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch = 0;
    CData/*1:0*/ __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r;
    __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r = 0;
    QData/*63:0*/ __Vdly__ysyx_26010027__DOT__my_CSR__DOT__mc;
    __Vdly__ysyx_26010027__DOT__my_CSR__DOT__mc = 0;
    // Body
    __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending 
        = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending;
    __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__pc;
    __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state 
        = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state;
    __Vdly__ysyx_26010027__DOT__my_CSR__DOT__mc = vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc;
    __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r 
        = vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r;
    __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch 
        = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch;
    __Vdly__ysyx_26010027__DOT__grant = vlSelfRef.ysyx_26010027__DOT__grant;
    __Vtableidx2 = ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b) 
                      << 6U) | (((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                   & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid)) 
                                 << 5U) | ((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)) 
                                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid)) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w) 
                        << 1U) | (IData)(vlSelfRef.reset)));
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w 
        = Vysyx_26010027__ConstPool__TABLE_h2f5f5e26_0
        [__Vtableidx2];
    __Vtableidx1 = ((((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b) 
                        << 4U) | ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                                    & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                                       & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp)))) 
                                   << 3U) | ((IData)(vlSelfRef.ysyx_26010027__DOT__w_pending) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid) 
                          << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid))) 
                     << 4U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_resp) 
                                << 3U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__grant) 
                                           << 1U) | (IData)(vlSelfRef.reset))));
    if (Vysyx_26010027__ConstPool__TABLE_h759c2e8b_0
        [__Vtableidx1]) {
        __Vdly__ysyx_26010027__DOT__grant = Vysyx_26010027__ConstPool__TABLE_hd3ba8812_0
            [__Vtableidx1];
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0U;
        __Vdly__ysyx_26010027__DOT__pc = 0x80000000U;
        __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending = 0U;
        __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r = 0U;
        __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch = 0U;
        __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_req) 
                 & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall)))) {
                __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__pc;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 1U;
            } else {
                __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__pc;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))) {
            if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall) {
                __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__pc;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 1U;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending = 1U;
            } else if (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_resp) {
                __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0U;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending = 0U;
            } else if (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending) 
                        & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall)))) {
                __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0U;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending = 0U;
            } else {
                __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__pc;
                __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 1U;
            }
        } else {
            __Vdly__ysyx_26010027__DOT__pc = vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc;
            __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state = 0U;
        }
        __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r 
            = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))
                ? ((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                     & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)) 
                    & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid))
                    ? 1U : 0U) : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))
                                   ? ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r)
                                       ? 0U : 1U) : 0U));
        __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch 
            = (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid) 
                & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)))
                ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata
                : vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch);
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__io_master_bvalid = 0U;
        vlSelfRef.ysyx_26010027__DOT__io_master_bresp = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_w) {
        Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch, 
                                                                         ((0U 
                                                                           == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                                                           ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2
                                                                           : 
                                                                          VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U))), 
                                                                         ((0U 
                                                                           == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                                                           ? 0x0000000fU
                                                                           : 
                                                                          (0x0000000fU 
                                                                           & ((1U 
                                                                               == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                                                               ? 
                                                                              ((IData)(1U) 
                                                                               << 
                                                                               (3U 
                                                                                & vlSelfRef.ysyx_26010027__DOT__alu_result))
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                                                                ? 
                                                                               ((IData)(3U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelfRef.ysyx_26010027__DOT__alu_result))
                                                                                : 0U)))));
        vlSelfRef.ysyx_26010027__DOT__io_master_bvalid = 1U;
        vlSelfRef.ysyx_26010027__DOT__io_master_bresp = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_b) {
        vlSelfRef.ysyx_26010027__DOT__io_master_bvalid = 0U;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_26010027__DOT__my_CSR__DOT__mc = 0ULL;
        vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause = 0U;
    } else {
        __Vdly__ysyx_26010027__DOT__my_CSR__DOT__mc 
            = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                ? vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc
                : (1ULL + vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc));
        if (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type)) 
             & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(0x00000341U, vlSelfRef.ysyx_26010027__DOT__pc);
            vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc 
                = vlSelfRef.ysyx_26010027__DOT__pc;
            vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause = 0x0000000bU;
            Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(0x00000342U, 0x0000000bU);
        } else if ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                     & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type))) 
                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_get_csr_TOP____024unit(
                                                                          (0x00000fffU 
                                                                           & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm), vlSelfRef.ysyx_26010027__DOT__alu_result);
            if ((0x0300U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))) {
                vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus 
                    = vlSelfRef.ysyx_26010027__DOT__alu_result;
            } else if ((0x0305U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))) {
                vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec 
                    = vlSelfRef.ysyx_26010027__DOT__alu_result;
            } else if ((0x0341U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))) {
                vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc 
                    = vlSelfRef.ysyx_26010027__DOT__alu_result;
            } else if ((0x0342U == (0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm))) {
                vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause 
                    = vlSelfRef.ysyx_26010027__DOT__alu_result;
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__io_master_rdata = 0U;
        vlSelfRef.ysyx_26010027__DOT__io_master_rvalid = 0U;
        vlSelfRef.ysyx_26010027__DOT__io_master_rresp = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid) {
        Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                        ((1U 
                                                                          == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                                                          ? vlSelfRef.ysyx_26010027__DOT__pc
                                                                          : vlSelfRef.ysyx_26010027__DOT__alu_result), __Vfunc_pmem_read__3__Vfuncout);
        vlSelfRef.ysyx_26010027__DOT__io_master_rdata 
            = __Vfunc_pmem_read__3__Vfuncout;
        vlSelfRef.ysyx_26010027__DOT__io_master_rvalid = 1U;
        vlSelfRef.ysyx_26010027__DOT__io_master_rresp = 0U;
    } else if (vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_r) {
        vlSelfRef.ysyx_26010027__DOT__io_master_rvalid = 0U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_26010027__DOT__w_pending = 0U;
        vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch = 0U;
    } else {
        if (vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_aw) {
            vlSelfRef.ysyx_26010027__DOT__w_pending = 1U;
            vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch 
                = vlSelfRef.ysyx_26010027__DOT__alu_result;
        }
        if (vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_w) {
            vlSelfRef.ysyx_26010027__DOT__w_pending = 0U;
        }
    }
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending 
        = __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending;
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch 
        = __Vdly__ysyx_26010027__DOT__my_IFU__DOT__inst_latch;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r 
        = __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r;
    vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc = __Vdly__ysyx_26010027__DOT__my_CSR__DOT__mc;
    vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state 
        = __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state;
    vlSelfRef.ysyx_26010027__DOT__pc = __Vdly__ysyx_26010027__DOT__pc;
    vlSelfRef.ysyx_26010027__DOT__grant = __Vdly__ysyx_26010027__DOT__grant;
    vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_4 
        = ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           | (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)));
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_b 
        = ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid));
    vlSelfRef.cur_pc = vlSelfRef.ysyx_26010027__DOT__pc;
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
    vlSelfRef.ysyx_26010027__DOT__waddr = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w)
                                            ? (0x0000001fU 
                                               & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                  >> 7U))
                                            : 0U);
    vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_aw 
        = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid) 
           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready));
}

void Vysyx_26010027___024root___nba_comb__TOP__0(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___nba_comb__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2 
        = ((0U == (0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                  >> 0x00000014U)))
            ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
           [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                            >> 0x00000014U))]);
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
    vlSelfRef.ysyx_26010027__DOT__wdata = ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w)
                                            ? ((2U 
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
                                                    : vlSelfRef.ysyx_26010027__DOT__alu_result))
                                            : 0U);
}

void Vysyx_26010027___024root___eval_nba(Vysyx_26010027___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root___eval_nba\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_26010027___024root___nba_comb__TOP__0(vlSelf);
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
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/ysyx_26010027.v", 9, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_26010027___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/ysyx_26010027.v", 9, "", "Active region did not converge after 100 tries");
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
