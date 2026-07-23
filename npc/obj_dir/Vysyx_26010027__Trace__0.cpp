// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vysyx_26010027__Syms.h"


void Vysyx_26010027___024root__trace_chg_0_sub_0(Vysyx_26010027___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_26010027___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_chg_0\n"); );
    // Body
    Vysyx_26010027___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_26010027___024root*>(voidSelf);
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vysyx_26010027___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_26010027___024root__trace_chg_0_sub_0(Vysyx_26010027___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_chg_0_sub_0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rdata),32);
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rvalid));
        bufp->chgCData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rresp),2);
        bufp->chgCData(oldp+3,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                 ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_sram_bresp)
                                 : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                     ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_uart_bresp)
                                     : 0U))),2);
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_bvalid));
        bufp->chgBit(oldp+5,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgCData(oldp+6,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state),2);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_26010027__DOT__io_sram_rvalid));
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__io_sram_rdata),32);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__io_sram_rresp),2);
        bufp->chgBit(oldp+10,(vlSelfRef.ysyx_26010027__DOT__io_sram_bvalid));
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__io_sram_bresp),2);
        bufp->chgBit(oldp+12,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state))));
        bufp->chgBit(oldp+13,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state))));
        bufp->chgBit(oldp+14,(vlSelfRef.ysyx_26010027__DOT__io_uart_bvalid));
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__io_uart_bresp),2);
        bufp->chgBit(oldp+16,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__state_r))));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_26010027__DOT__io_clint_rvalid));
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__rdata),32);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__io_clint_rresp),2);
        bufp->chgBit(oldp+20,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)))));
        bufp->chgBit(oldp+21,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)))));
        bufp->chgBit(oldp+22,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)))));
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec),32);
        bufp->chgBit(oldp+25,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid));
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata),32);
        bufp->chgCData(oldp+27,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid));
        bufp->chgBit(oldp+29,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgIData(oldp+30,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rdata
                                  : 0U)),32);
        bufp->chgCData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp),2);
        bufp->chgBit(oldp+32,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_bvalid))));
        bufp->chgCData(oldp+33,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                      ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_sram_bresp)
                                      : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                          ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_uart_bresp)
                                          : 0U)) : 0U)),2);
        bufp->chgCData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+35,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                                  & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))))));
        bufp->chgBit(oldp+36,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
        bufp->chgQData(oldp+37,(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__mtime),64);
        bufp->chgCData(oldp+39,(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__state_r),2);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause),32);
        bufp->chgQData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc),64);
        bufp->chgIData(oldp+44,((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)),32);
        bufp->chgIData(oldp+45,((IData)((vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                         >> 0x00000020U))),32);
        bufp->chgBit(oldp+46,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending));
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
        bufp->chgCData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+50,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                               & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                                  & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))))));
        bufp->chgBit(oldp+51,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__io_sram_bvalid))));
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch),32);
        bufp->chgBit(oldp+53,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__w_pending));
        bufp->chgBit(oldp+54,((((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__io_uart_bvalid))));
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+56,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready)
                                : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                   && (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state))))));
        bufp->chgBit(oldp+57,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rready))));
        bufp->chgBit(oldp+58,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rready))));
        bufp->chgBit(oldp+59,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wvalid))));
        bufp->chgBit(oldp+60,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rready))));
        bufp->chgBit(oldp+61,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wvalid))));
        bufp->chgBit(oldp+62,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready)
                                   : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                      && (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state)))))));
        bufp->chgBit(oldp+63,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rready)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__io_clint_rvalid))));
        bufp->chgBit(oldp+64,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                    ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready)
                                    : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                       && (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state))))) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wvalid))));
        bufp->chgBit(oldp+65,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rready)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__io_sram_rvalid))));
        bufp->chgBit(oldp+66,((((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wvalid)) 
                               & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+67,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                 ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)
                                 : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                    && (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state)))) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__sel_matches))));
        bufp->chgBit(oldp+68,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)
                                : ((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                   && ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                       & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__state_r)))))));
        bufp->chgBit(oldp+69,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)
                                : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                   && (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state))))));
        bufp->chgIData(oldp+70,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_araddr
                                  : 0U)),32);
        bufp->chgIData(oldp+71,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__alu_result
                                  : 0U)),32);
        bufp->chgIData(oldp+72,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+73,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+74,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_arvalid))));
        bufp->chgIData(oldp+75,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_araddr
                                  : 0U)),32);
        bufp->chgBit(oldp+76,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_awvalid))));
        bufp->chgIData(oldp+77,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__alu_result
                                  : 0U)),32);
        bufp->chgIData(oldp+78,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+79,(((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+80,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_arvalid))));
        bufp->chgBit(oldp+81,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_awvalid))));
        bufp->chgIData(oldp+82,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__alu_result
                                  : 0U)),32);
        bufp->chgIData(oldp+83,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+84,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+85,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arready))));
        bufp->chgBit(oldp+86,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arready))));
        bufp->chgBit(oldp+87,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                    ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)
                                    : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                       && (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state)))) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__sel_matches)))));
        bufp->chgBit(oldp+88,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_arvalid)) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__state_r)))));
        bufp->chgBit(oldp+89,((((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_awvalid)) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[0]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[1]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[2]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[3]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[4]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[5]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[6]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[7]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[8]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[9]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[10]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[11]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[12]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[13]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[14]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[15]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[16]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[17]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[18]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[19]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[20]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[21]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[22]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[23]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[24]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[25]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[26]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[27]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[28]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[29]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[30]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arvalid));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_rready));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_awvalid));
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wvalid));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready));
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid));
        bufp->chgIData(oldp+128,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst),32);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyx_26010027__DOT__pc),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result),32);
        bufp->chgCData(oldp+132,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+133,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+134,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+135,(vlSelfRef.ysyx_26010027__DOT__waddr),5);
        bufp->chgCData(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res),2);
        bufp->chgCData(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op),4);
        bufp->chgCData(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w),2);
        bufp->chgCData(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r),3);
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w));
        bufp->chgBit(oldp+142,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                | (0x17U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+143,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x23U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                      | (0x6fU == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))));
        bufp->chgCData(oldp+144,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type),2);
        bufp->chgCData(oldp+145,(vlSelfRef.ysyx_26010027__DOT__b_type),3);
        bufp->chgBit(oldp+146,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+147,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall));
        bufp->chgBit(oldp+149,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid));
        bufp->chgBit(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_r));
        bufp->chgSData(oldp+153,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)),12);
        bufp->chgIData(oldp+154,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)),32);
        bufp->chgCData(oldp+155,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)),7);
        bufp->chgCData(oldp+156,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+157,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+160,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+161,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+162,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+163,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+164,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+165,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+166,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi));
        bufp->chgBit(oldp+168,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+177,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+178,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+179,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+181,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+182,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
                                                                           & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))))))))))))))))));
        bufp->chgBit(oldp+183,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+184,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add));
        bufp->chgBit(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+186,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+187,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+188,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+194,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+195,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+198,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+200,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+202,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+203,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+204,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+205,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+206,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+207,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+210,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+211,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+212,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+213,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+214,((1U & (~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
                                                  | ((0x37U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                                     | (((0x17U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) 
                                                        | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                                            | ((0x00000073U 
                                                                == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                                               | (0x30200073U 
                                                                  == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) 
                                                           | (0x00100073U 
                                                              == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))))))))))));
        bufp->chgCData(oldp+215,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
        bufp->chgBit(oldp+218,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready))));
        bufp->chgBit(oldp+219,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arvalid) 
                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_awvalid))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+220,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_araddr),32);
        bufp->chgBit(oldp+221,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arready));
        bufp->chgIData(oldp+222,(vlSelfRef.ysyx_26010027__DOT__alu_result),32);
        bufp->chgIData(oldp+223,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wdata),32);
        bufp->chgCData(oldp+224,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_wstrb),4);
        bufp->chgBit(oldp+225,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_arvalid));
        bufp->chgBit(oldp+226,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_slave_awvalid));
        bufp->chgBit(oldp+227,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid));
        bufp->chgIData(oldp+230,(vlSelfRef.ysyx_26010027__DOT__my_CLINT__DOT__io_slave_araddr),32);
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyx_26010027__DOT__wdata),32);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+238,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready))));
        bufp->chgBit(oldp+239,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__addr_is_uart));
        bufp->chgBit(oldp+240,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__addr_is_clint));
        bufp->chgBit(oldp+241,(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__sel_matches));
    }
    bufp->chgBit(oldp+242,(vlSelfRef.clock));
    bufp->chgBit(oldp+243,(vlSelfRef.reset));
    bufp->chgIData(oldp+244,(vlSelfRef.cur_pc),32);
    bufp->chgIData(oldp+245,(vlSelfRef.cur_inst),32);
    bufp->chgIData(oldp+246,(((0U == (0x0000001fU & 
                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                       >> 0x0000000fU)))
                               ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
                              [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+247,(((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                               ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                   ? 0U : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                            ? 0U : 
                                           (0x0000ffffU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                               : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                       ? (0x000000ffU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                                   : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0x000000ffU 
                                           & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                       : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))),32);
    bufp->chgBit(oldp+248,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arready)))));
    bufp->chgBit(oldp+249,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)
                                  : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__state)) 
                                     && (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_UART__DOT__state)))) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__sel_matches))) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid))));
    bufp->chgBit(oldp+250,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_Xbar__DOT__io_master_arready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid))));
}

void Vysyx_26010027___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_cleanup\n"); );
    // Body
    Vysyx_26010027___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_26010027___024root*>(voidSelf);
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
