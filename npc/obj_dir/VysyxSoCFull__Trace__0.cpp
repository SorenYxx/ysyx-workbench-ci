// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VysyxSoCFull___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[15]),8);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [0x0000000eU])))) {
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)))));
        bufp->chgBit(oldp+17,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+20,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)))));
        bufp->chgBit(oldp+25,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+26,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 9U))));
        bufp->chgBit(oldp+35,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+38,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+43,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+45,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+46,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+47,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 9U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000aU])))) {
        bufp->chgBit(oldp+48,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+51,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+52,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+53,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000bU])))) {
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
        bufp->chgBit(oldp+56,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+60,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+61,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i));
        bufp->chgBit(oldp+62,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wvalid_i));
        bufp->chgBit(oldp+64,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+65,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+66,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+67,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgBit(oldp+68,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid));
        bufp->chgBit(oldp+69,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+70,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+71,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgBit(oldp+72,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
        bufp->chgBit(oldp+73,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                  >> 2U))));
        bufp->chgBit(oldp+76,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awvalid));
        bufp->chgBit(oldp+78,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wvalid));
        bufp->chgBit(oldp+79,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arvalid));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid));
        bufp->chgBit(oldp+87,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1))));
        bufp->chgBit(oldp+88,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                  >> 1U))));
        bufp->chgBit(oldp+89,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgBit(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_flush));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+96,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000eU])))) {
        bufp->chgBit(oldp+97,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o));
        bufp->chgBit(oldp+98,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wready_o));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arready));
        bufp->chgBit(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arready));
        bufp->chgIData(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o),32);
        bufp->chgCData(oldp+126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o),4);
        bufp->chgBit(oldp+127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+133,((0x000001ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                                 >> 2U))),13);
        bufp->chgSData(oldp+134,((0x00000fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                                 >> 0x0000000dU))),13);
        bufp->chgCData(oldp+135,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                        >> 0x0000000bU))),2);
        bufp->chgCData(oldp+136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
        bufp->chgBit(oldp+138,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgIData(oldp+139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwdata),32);
        bufp->chgBit(oldp+140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr_q));
        bufp->chgIData(oldp+141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata_q),32);
        bufp->chgIData(oldp+142,((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [3U] << 0x00000018U) 
                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [2U] << 0x00000010U)) 
                                  | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [1U] << 8U) | 
                                     vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                     [0U]))),32);
        bufp->chgBit(oldp+143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready));
        bufp->chgBit(oldp+144,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+145,((0x0000000fU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+146,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+147,((0x000000ffU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+148,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+149,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+150,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+151,((0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))),4);
        bufp->chgBit(oldp+152,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgCData(oldp+153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgBit(oldp+154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready));
        bufp->chgBit(oldp+155,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+156,((0x0000000fU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+157,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+158,((0x000000ffU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+159,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+160,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgCData(oldp+161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+170,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgCData(oldp+171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid),4);
        bufp->chgCData(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awburst),2);
        bufp->chgBit(oldp+173,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+174,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+175,((0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                                                 >> 2U))),4);
        bufp->chgCData(oldp+176,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+177,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgCData(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid),4);
        bufp->chgCData(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst),2);
        bufp->chgBit(oldp+180,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+181,((0x0000000fU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x00000023U)))),4);
        bufp->chgIData(oldp+182,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+183,((3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+184,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgCData(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data),6);
        bufp->chgCData(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgQData(oldp+201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),39);
        bufp->chgQData(oldp+203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgQData(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgQData(oldp+227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgQData(oldp+240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),36);
        bufp->chgQData(oldp+242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgBit(oldp+246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+247,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+248,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
        bufp->chgCData(oldp+250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid),4);
        bufp->chgCData(oldp+251,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                        | ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                 << 6U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                   << 4U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12))) 
                                              << 0x00000018U) 
                                             | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                   << 6U) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8))) 
                                                << 0x00000010U)) 
                                            | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                   << 6U) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4))) 
                                                << 8U) 
                                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                           >> (0x0000001fU 
                                               & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid), 1U)))))),2);
        bufp->chgBit(oldp+252,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
        bufp->chgCData(oldp+254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid),4);
        bufp->chgIData(oldp+255,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 3U))
                                    : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((((0x0000ff00U 
                                                    & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                         >> 0x00000018U)
                                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 0x00000010U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
                                                  << 0x00000010U) 
                                                 | ((0x0000ff00U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 8U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                 : 0U)))),32);
        bufp->chgCData(oldp+256,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 1U))
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+257,((((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                    << 0x0000000cU) 
                                   | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast))));
        bufp->chgBit(oldp+258,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        bufp->chgCData(oldp+260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
        bufp->chgBit(oldp+261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+262,((1U & ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                         << 0x0000000cU) 
                                        | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                           << 8U)) 
                                       | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)))));
        bufp->chgBit(oldp+263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
        bufp->chgBit(oldp+264,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgBit(oldp+268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgQData(oldp+290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgCData(oldp+293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+297,(((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))) 
                                || (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
        bufp->chgQData(oldp+298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+303,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+306,(((((0x0000ff00U & 
                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                           >> 0x00000018U)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                     >> 0x00000010U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                            >> 8U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))),32);
        bufp->chgCData(oldp+307,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data),32);
        bufp->chgCData(oldp+316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgBit(oldp+319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
        bufp->chgCData(oldp+320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgCData(oldp+321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgCData(oldp+323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgCData(oldp+325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgCData(oldp+327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgCData(oldp+329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgCData(oldp+331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgCData(oldp+333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgCData(oldp+335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgCData(oldp+336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgCData(oldp+337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgCData(oldp+338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgCData(oldp+339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgCData(oldp+340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgCData(oldp+341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgCData(oldp+342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgCData(oldp+343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgCData(oldp+344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgCData(oldp+345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgCData(oldp+346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgCData(oldp+347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgCData(oldp+348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgCData(oldp+349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
        bufp->chgCData(oldp+352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgBit(oldp+357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+359,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+369,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+373,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
        bufp->chgSData(oldp+374,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
        bufp->chgSData(oldp+375,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)))),16);
        bufp->chgSData(oldp+376,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)))),16);
        bufp->chgBit(oldp+377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+437,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+447,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+451,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+455,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+459,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+463,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+467,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+471,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+475,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+479,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+483,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+487,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+491,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+495,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+499,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+503,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+507,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+511,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+515,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+519,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+523,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+527,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+531,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+535,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+539,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+543,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+547,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+551,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+555,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+559,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+563,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+567,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+571,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgSData(oldp+585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_data),16);
        bufp->chgSData(oldp+586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_data),16);
        bufp->chgIData(oldp+587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_data),32);
        bufp->chgCData(oldp+588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
        bufp->chgSData(oldp+589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
        bufp->chgCData(oldp+590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__count),4);
        bufp->chgBit(oldp+591,((IData)((4U == (6U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
        bufp->chgIData(oldp+592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__prdata),32);
        bufp->chgCData(oldp+593,((0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwdata 
                                                 >> 0x00000010U))),8);
        bufp->chgCData(oldp+594,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwdata 
                                  >> 0x00000018U)),8);
        bufp->chgCData(oldp+595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgIData(oldp+599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__req_addr),32);
        bufp->chgCData(oldp+600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgIData(oldp+633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),19);
        bufp->chgIData(oldp+634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),19);
        bufp->chgBit(oldp+635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
        bufp->chgBit(oldp+636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
        bufp->chgIData(oldp+637,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                   ? (0x0007ffffU & 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
                                       - (IData)(0x00000091U)))
                                   : 0U)),19);
        bufp->chgIData(oldp+638,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                   ? (0x0007ffffU & 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
                                       - (IData)(0x00000024U)))
                                   : 0U)),19);
        bufp->chgIData(oldp+639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_address),19);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgIData(oldp+640,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__in_psel) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwrite)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__in_penable)))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_mem
                                  [(0x0007ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                   >> 2U))]
                                   : 0U)),32);
        bufp->chgBit(oldp+641,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+642,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+643,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__in_pready)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__prdata
                                   : 0U)),32);
        bufp->chgBit(oldp+644,((IData)(((0U == (0x30000000U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgCData(oldp+645,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                   << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp))),6);
        bufp->chgIData(oldp+646,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwdata) 
                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                      << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000eU])))) {
        bufp->chgBit(oldp+647,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+648,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgBit(oldp+649,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+650,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
        bufp->chgBit(oldp+651,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+652,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+653,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+654,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+655,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+656,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+657,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+658,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)))));
        bufp->chgBit(oldp+659,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+660,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+661,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+662,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+663,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+664,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+665,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+666,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+667,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+668,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+669,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+670,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+671,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+672,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+673,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+674,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+675,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+676,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+677,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+678,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+679,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+680,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+681,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+682,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state),3);
        bufp->chgCData(oldp+683,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd),8);
        bufp->chgIData(oldp+684,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr),24);
        bufp->chgCData(oldp+685,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter),8);
        bufp->chgIData(oldp+686,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata),32);
        bufp->chgIData(oldp+687,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wbuf),32);
        bufp->chgBit(oldp+688,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__qpi_mode));
        bufp->chgCData(oldp+689,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dio_out),4);
        bufp->chgBit(oldp+690,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dio_oe));
        bufp->chgCData(oldp+691,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+692,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)))));
        bufp->chgCData(oldp+693,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter) 
                                        >> 1U))),2);
        bufp->chgIData(oldp+694,((0x00ffffffU & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr 
                                                 + 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter) 
                                                     >> 1U))))),24);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+695,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgBit(oldp+696,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))
                                 ? (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack))));
        bufp->chgIData(oldp+697,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))
                                   ? ((((0x0000ff00U 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_rdata 
                                            << 8U)) 
                                        | (0x000000ffU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_rdata 
                                              >> 8U))) 
                                       << 0x00000010U) 
                                      | ((0x0000ff00U 
                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_rdata 
                                             >> 8U)) 
                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_rdata 
                                            >> 0x00000018U)))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_rdata)),32);
        bufp->chgBit(oldp+698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rvalid_o));
        bufp->chgCData(oldp+699,((0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgIData(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+701,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                      >> 4U))));
        bufp->chgBit(oldp+702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bvalid_o));
        bufp->chgBit(oldp+703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+705,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0x0000000eU : 
                                  ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0x0000000bU : 
                                   (0x0000000fU & (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x00000014U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x00000010U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x0000000cU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
        bufp->chgBit(oldp+706,((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+709,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+710,((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
        bufp->chgCData(oldp+712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_cnt),5);
        bufp->chgBit(oldp+713,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_cnt))));
        bufp->chgCData(oldp+714,((0x000000ffU & (0x35U 
                                                 >> 
                                                 (0x0000000fU 
                                                  & ((IData)(7U) 
                                                     - 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_cnt) 
                                                      >> 1U)))))),8);
        bufp->chgCData(oldp+715,((1U & (0x35U >> (0x0000000fU 
                                                  & ((IData)(7U) 
                                                     - 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_cnt) 
                                                      >> 1U)))))),4);
        bufp->chgCData(oldp+716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgBit(oldp+717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+720,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+724,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgBit(oldp+727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+739,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+740,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+742,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U)) & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+743,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 5U))));
        bufp->chgBit(oldp+744,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+745,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+746,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+754,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgBit(oldp+763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgBit(oldp+774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgBit(oldp+775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack));
        bufp->chgIData(oldp+776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_rdata),32);
        bufp->chgCData(oldp+777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
        bufp->chgIData(oldp+778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
        bufp->chgBit(oldp+779,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))));
        bufp->chgCData(oldp+780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_wb_adr),5);
        bufp->chgIData(oldp+781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_wb_dat),32);
        bufp->chgBit(oldp+782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_wb_we));
        bufp->chgBit(oldp+783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_wb_stb));
        bufp->chgBit(oldp+784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_wb_cyc));
        bufp->chgSData(oldp+785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+792,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 9U))));
        bufp->chgBit(oldp+793,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+794,((0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+795,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 8U))));
        bufp->chgBit(oldp+796,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+797,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+798,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+802,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+804,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+805,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+807,((0x000000ffU & ((0x00000800U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                  - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U))))),8);
        bufp->chgCData(oldp+808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+809,((((0x00000200U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck)))));
        bufp->chgBit(oldp+810,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                & ((0x00000400U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
        bufp->chgBit(oldp+811,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+812,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+814,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+832,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+833,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+834,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 3U))));
        bufp->chgBit(oldp+835,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 2U))));
        bufp->chgBit(oldp+836,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 1U))));
        bufp->chgBit(oldp+837,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgCData(oldp+838,(((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                      << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                   << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+862,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [3U] 
                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U] 
                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [5U] 
                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [6U] 
                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [7U] 
                                                                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [8U] 
                                                                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [9U] 
                                                                       | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0x0aU] 
                                                                          | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0x0bU] 
                                                                             | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0cU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0dU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU]))))))))))))))))));
        bufp->chgBit(oldp+863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
        bufp->chgCData(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+869,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o));
        bufp->chgBit(oldp+873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i));
        bufp->chgCData(oldp+874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+888,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+889,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+890,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+891,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+892,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+911,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+912,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+913,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+914,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+915,((0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                                 - (IData)(1U)))),4);
        bufp->chgSData(oldp+916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+917,((0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
        bufp->chgCData(oldp+918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+935,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+936,((0x0000000fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+943,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0x0aU]),3);
        bufp->chgCData(oldp+948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0x0bU]),3);
        bufp->chgCData(oldp+949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0x0cU]),3);
        bufp->chgCData(oldp+950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0x0dU]),3);
        bufp->chgCData(oldp+951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0x0eU]),3);
        bufp->chgCData(oldp+952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0x0fU]),3);
        bufp->chgCData(oldp+953,((0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
        bufp->chgCData(oldp+954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+964,((0x0000000fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__io_slave_araddr),32);
        bufp->chgCData(oldp+966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arlen),8);
        bufp->chgCData(oldp+967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arsize),3);
        bufp->chgIData(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_addr),32);
        bufp->chgCData(oldp+969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_awsize),3);
        bufp->chgIData(oldp+970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_wdata),32);
        bufp->chgCData(oldp+971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_wstrb),4);
        bufp->chgBit(oldp+972,((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__state_w))));
        bufp->chgBit(oldp+973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rready));
        bufp->chgBit(oldp+974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
        bufp->chgCData(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgBit(oldp+979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arvalid));
        bufp->chgBit(oldp+980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rready));
        bufp->chgBit(oldp+981,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgBit(oldp+983,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__state_r))));
        bufp->chgBit(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_clint_rvalid));
        bufp->chgIData(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__rdata),32);
        bufp->chgCData(oldp+986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_clint_rresp),2);
        bufp->chgBit(oldp+987,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addr_is_clint_ar));
        bufp->chgBit(oldp+988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addr_is_clint_r));
        bufp->chgBit(oldp+989,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addr_is_clint_ar))));
        bufp->chgBit(oldp+990,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addr_is_clint_r))));
        bufp->chgBit(oldp+991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_idu_valid));
        bufp->chgBit(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__idu_ifu_ready));
        bufp->chgIData(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_idu_pc),32);
        bufp->chgIData(oldp+994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o),32);
        bufp->chgBit(oldp+995,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__arvalid_q))));
        bufp->chgIData(oldp+996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__araddr_q),32);
        bufp->chgBit(oldp+997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__arvalid_q));
        bufp->chgBit(oldp+998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rvalid_o));
        bufp->chgBit(oldp+999,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+1000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__arvalid_o));
        bufp->chgIData(oldp+1001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__araddr_o),32);
        bufp->chgCData(oldp+1002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__arlen_o),8);
        bufp->chgCData(oldp+1003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__arsize_o),3);
        bufp->chgBit(oldp+1004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rready_o));
        bufp->chgIData(oldp+1005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hit_count),32);
        bufp->chgIData(oldp+1006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__miss_count),32);
        bufp->chgIData(oldp+1007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__miss_latency),32);
        bufp->chgBit(oldp+1008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__exu_idu_ready));
        bufp->chgBit(oldp+1009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_valid));
        bufp->chgIData(oldp+1010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_pc),32);
        bufp->chgIData(oldp+1011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_inst),32);
        bufp->chgIData(oldp+1012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_imm),32);
        bufp->chgIData(oldp+1013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_target),32);
        bufp->chgCData(oldp+1014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_alu_op),4);
        bufp->chgCData(oldp+1015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_mem_w),2);
        bufp->chgCData(oldp+1016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_mem_r),3);
        bufp->chgBit(oldp+1017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_alu_arc1));
        bufp->chgBit(oldp+1018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_alu_arc2));
        bufp->chgBit(oldp+1019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_reg_w));
        bufp->chgCData(oldp+1020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_rf_res),2);
        bufp->chgCData(oldp+1021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_waddr),5);
        bufp->chgCData(oldp+1022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_jump),2);
        bufp->chgCData(oldp+1023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_branch),3);
        bufp->chgBit(oldp+1024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_fencei));
        bufp->chgIData(oldp+1025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_rdata1),32);
        bufp->chgIData(oldp+1026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_rdata2),32);
        bufp->chgCData(oldp+1027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_raddr1),5);
        bufp->chgCData(oldp+1028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_raddr2),5);
        bufp->chgSData(oldp+1029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_raddr),12);
        bufp->chgIData(oldp+1030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_rdata),32);
        bufp->chgSData(oldp+1031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_waddr),12);
        bufp->chgBit(oldp+1032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_we));
        bufp->chgBit(oldp+1033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_ecall));
        bufp->chgBit(oldp+1034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_mret));
        bufp->chgSData(oldp+1035,((0x00000fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm)),12);
        bufp->chgCData(oldp+1036,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                  >> 0x0000000fU))),5);
        bufp->chgCData(oldp+1037,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                  >> 0x00000014U))),5);
        bufp->chgBit(oldp+1038,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_busy)))));
        bufp->chgBit(oldp+1039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_valid));
        bufp->chgIData(oldp+1040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_pc),32);
        bufp->chgIData(oldp+1041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_snpc),32);
        bufp->chgIData(oldp+1042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_inst),32);
        bufp->chgCData(oldp+1043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_mem_w),2);
        bufp->chgCData(oldp+1044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_mem_r),3);
        bufp->chgIData(oldp+1045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_mem_addr),32);
        bufp->chgIData(oldp+1046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_wdata),32);
        bufp->chgBit(oldp+1047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_reg_w));
        bufp->chgCData(oldp+1048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_rf_res),2);
        bufp->chgCData(oldp+1049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_waddr),5);
        bufp->chgIData(oldp+1050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_alu_result),32);
        bufp->chgSData(oldp+1051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_csr_waddr),12);
        bufp->chgBit(oldp+1052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_csr_we));
        bufp->chgBit(oldp+1053,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_csr_ecall));
        bufp->chgBit(oldp+1054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_csr_mret));
        bufp->chgIData(oldp+1055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_csr_wdata),32);
        bufp->chgBit(oldp+1056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_wbu_valid));
        bufp->chgIData(oldp+1057,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_pc),32);
        bufp->chgIData(oldp+1058,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_snpc),32);
        bufp->chgIData(oldp+1059,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst),32);
        bufp->chgBit(oldp+1060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_reg_w));
        bufp->chgCData(oldp+1061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_rf_res),2);
        bufp->chgCData(oldp+1062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_waddr),5);
        bufp->chgIData(oldp+1063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_alu_result),32);
        bufp->chgIData(oldp+1064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_mem_result),32);
        bufp->chgBit(oldp+1065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_load_inflight));
        bufp->chgSData(oldp+1066,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_csr_waddr),12);
        bufp->chgBit(oldp+1067,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_csr_we));
        bufp->chgBit(oldp+1068,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_csr_ecall));
        bufp->chgBit(oldp+1069,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_csr_mret));
        bufp->chgIData(oldp+1070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_csr_wdata),32);
        bufp->chgBit(oldp+1071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgCData(oldp+1072,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))
                                    ? 2U : (((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r)) 
                                             | (4U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r)))
                                             ? 1U : 0U))),3);
        bufp->chgBit(oldp+1073,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__state_r))));
        bufp->chgBit(oldp+1074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgIData(oldp+1075,(((0U == (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                              >> 0x0000000fU)))
                                    ? 0U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_reg_w) 
                                             & ((0x0000000fU 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__waddr)) 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                    >> 0x0000000fU))))
                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__wdata
                                             : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                            [(0x0000000fU 
                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                 >> 0x0000000fU))]))),32);
        bufp->chgIData(oldp+1076,(((0U == (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                              >> 0x00000014U)))
                                    ? 0U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_reg_w) 
                                             & ((0x0000000fU 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__waddr)) 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                    >> 0x00000014U))))
                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__wdata
                                             : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                            [(0x0000000fU 
                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                 >> 0x00000014U))]))),32);
        bufp->chgIData(oldp+1077,(((0x0f11U == (0x00000fffU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                    ? 0x79737978U : 
                                   ((0x0f12U == (0x00000fffU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                     ? 0x018ce1abU : 
                                    ((0x0b00U == (0x00000fffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mc)
                                      : ((0x0b80U == 
                                          (0x00000fffU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                                     >> 0x00000020U))
                                          : ((0x0300U 
                                              == (0x00000fffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                              : ((0x0305U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                  : 
                                                 ((0x0341U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                   : 
                                                  ((0x0342U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                    : 0U))))))))),32);
        bufp->chgIData(oldp+1078,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mtvec),32);
        bufp->chgIData(oldp+1079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mepc),32);
        bufp->chgCData(oldp+1080,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant),2);
        bufp->chgCData(oldp+1081,((0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)),7);
        bufp->chgBit(oldp+1082,((3U == (0x0000007fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+1083,((0x23U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+1084,((0x73U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+1085,(((0x6fU == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)) 
                                 | (0x67U == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)))));
        bufp->chgBit(oldp+1086,((0x63U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+1087,(((0x33U == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)) 
                                 | ((0x13U == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)) 
                                    | ((0x17U == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)) 
                                       | (0x37U == 
                                          (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_inst)))))));
        bufp->chgIData(oldp+1088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__mtime_low),32);
        bufp->chgIData(oldp+1089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__mtime_high),32);
        bufp->chgCData(oldp+1090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__state_r),2);
        bufp->chgBit(oldp+1091,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arvalid) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addr_is_clint_ar)) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_CLINT__DOT__state_r)))));
        bufp->chgBit(oldp+1092,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rready) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addr_is_clint_r)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_clint_rvalid))));
        bufp->chgIData(oldp+1093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__src1),32);
        bufp->chgIData(oldp+1094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+1095,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_fwd_data
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__)
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__wbu_fwd_data
                                        : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_mem_result
                                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_rdata1)))),32);
        bufp->chgIData(oldp+1096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__rdata2),32);
        bufp->chgIData(oldp+1097,(((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_pc)),32);
        bufp->chgIData(oldp+1098,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_csr_wdata
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu_csr_wdata
                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_rdata))),32);
        bufp->chgIData(oldp+1099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__alu_result),32);
        bufp->chgIData(oldp+1100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_fwd_data),32);
        bufp->chgIData(oldp+1101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__wbu_fwd_data),32);
        bufp->chgBit(oldp+1102,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__src1 
                                 == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__src2)));
        bufp->chgBit(oldp+1103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lts));
        bufp->chgBit(oldp+1104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__ltu));
        bufp->chgBit(oldp+1105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__taken));
        bufp->chgCData(oldp+1106,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+1107,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__) 
                                    << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+1108,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__) 
                                    << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__))),2);
        bufp->chgBit(oldp+1109,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_raddr1)) 
                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11) 
                                     & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_rf_res)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7)))) 
                                 | (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_raddr2)) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11) 
                                        & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_lsu_rf_res)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8)))) 
                                    | (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_raddr1)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_load_inflight) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2))) 
                                       | ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_raddr2)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_load_inflight) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))))))));
        bufp->chgBit(oldp+1110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__lsu_fwd_flag));
        bufp->chgBit(oldp+1111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__wbu_fwd_flag));
        bufp->chgIData(oldp+1112,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_ecall)
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mepc)),32);
        bufp->chgCData(oldp+1113,((0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)),7);
        bufp->chgCData(oldp+1114,((7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                         >> 0x0000000cU))),3);
        bufp->chgCData(oldp+1115,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                   >> 0x00000019U)),7);
        bufp->chgBit(oldp+1116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+1117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+1118,((0x63U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1119,((0x23U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1120,((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1121,((0x33U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1122,((0x13U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1123,((3U == (0x0000007fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1124,((0x73U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1125,((IData)((0x00000013U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))));
        bufp->chgBit(oldp+1126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+1127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+1128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+1129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+1130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+1131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+1132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+1133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+1134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+1135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+1136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+1137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+1138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+1139,((0x67U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1140,(((IData)((0x00000013U 
                                          == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slti) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slli) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srli) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srai) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sltiu) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__xori) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__ori) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__andi) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lbu) 
                                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lhu) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lw) 
                                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lh) 
                                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lb) 
                                                                        | (0x67U 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))))))))))))))))));
        bufp->chgBit(oldp+1141,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lbu) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lhu) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lw) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lh) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lb)))))));
        bufp->chgBit(oldp+1142,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                 & (0U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                           >> 0x00000019U)))));
        bufp->chgBit(oldp+1143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+1144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+1145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+1146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+1147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+1148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+1149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+1150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+1151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+1152,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                  & (0U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                            >> 0x00000019U))) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sub) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sll) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slt) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sltu) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srl) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sra) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_xor) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_or) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+1153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+1154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+1155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+1156,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sw) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sb) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+1157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+1158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+1159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+1160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+1161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+1162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+1163,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bne) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__beq) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__blt) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bge) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bltu) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+1164,((0x37U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1165,((0x17U == (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))));
        bufp->chgBit(oldp+1166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+1167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+1168,((IData)((0x00003073U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))));
        bufp->chgBit(oldp+1169,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14) 
                                 | ((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o) 
                                    | (0x30200073U 
                                       == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))));
        bufp->chgBit(oldp+1170,((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)));
        bufp->chgBit(oldp+1171,((0x30200073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)));
        bufp->chgCData(oldp+1172,(((0x67U == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))
                                    ? 1U : ((0x00000073U 
                                             == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)
                                             ? 2U : 
                                            ((0x30200073U 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)
                                              ? 3U : 0U)))),2);
        bufp->chgCData(oldp+1173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__branch),3);
        bufp->chgCData(oldp+1174,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lbu) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lhu) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lw) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lh) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lb)))))
                                    ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14)
                                             ? 2U : 
                                            (((0x6fU 
                                               == (0x0000007fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                              | (0x67U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))
                                              ? 3U : 0U)))),2);
        bufp->chgCData(oldp+1175,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sub)
                                    ? 1U : ((0x37U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))
                                             ? 2U : 
                                            (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sll) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slli))
                                              ? 3U : 
                                             (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srl) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srli))
                                               ? 4U
                                               : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sra) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__srai))
                                                   ? 5U
                                                   : 
                                                  (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slt) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__slti))
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sltiu)
                                                     ? 7U
                                                     : 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sltu)
                                                      ? 8U
                                                      : 
                                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_xor) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__xori))
                                                       ? 9U
                                                       : 
                                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_and) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__andi))
                                                        ? 0x0aU
                                                        : 
                                                       (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__r_or) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__ori))
                                                         ? 0x0bU
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o))
                                                          ? 0x0cU
                                                          : 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__csrrw)
                                                           ? 0x0dU
                                                           : 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__csrrs)
                                                            ? 0x0eU
                                                            : 0U))))))))))))))),4);
        bufp->chgBit(oldp+1176,(((0x6fU == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                 | (0x17U == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))));
        bufp->chgBit(oldp+1177,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__inst_I) 
                                 | ((0x23U == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                    | ((0x17U == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                       | (0x6fU == 
                                          (0x0000007fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))))));
        bufp->chgBit(oldp+1178,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__inst_I) 
                                 | ((0x33U == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                    | ((0x6fU == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__inst_U) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__csrrw)))))));
        bufp->chgCData(oldp+1179,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sw)
                                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sb)
                                             ? 1U : 
                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__sh)
                                              ? 2U : 3U)))),2);
        bufp->chgCData(oldp+1180,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lw)
                                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lb)
                                             ? 1U : 
                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lh)
                                              ? 2U : 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lbu)
                                               ? 3U
                                               : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__lhu)
                                                   ? 4U
                                                   : 5U)))))),3);
        bufp->chgBit(oldp+1181,((0x0000100fU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)));
        bufp->chgBit(oldp+1182,((0x00100073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)));
        bufp->chgIData(oldp+1183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm),32);
        bufp->chgIData(oldp+1184,(((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__branch))
                                    ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_idu_pc 
                                            + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__imm))),32);
        bufp->chgCData(oldp+1185,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o 
                                                  >> 7U))),5);
        bufp->chgBit(oldp+1186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IDU__DOT__illegal));
        bufp->chgCData(oldp+1187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+1188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__flush_ar_sent));
        bufp->chgBit(oldp+1189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__ar_flag));
        bufp->chgBit(oldp+1190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__handshake_ar));
        bufp->chgBit(oldp+1191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__handshake_r));
        bufp->chgIData(oldp+1192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__imm_B),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__imm_J),32);
        bufp->chgBit(oldp+1194,(((0x67U == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)) 
                                 | (0x6fU == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rdata_o)))));
        bufp->chgIData(oldp+1195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__next_pc),32);
        bufp->chgBit(oldp+1196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__flush_flag));
        bufp->chgBit(oldp+1197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_busy));
        bufp->chgCData(oldp+1198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_w),2);
        bufp->chgCData(oldp+1199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r),3);
        bufp->chgIData(oldp+1200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_wdata),32);
        bufp->chgBit(oldp+1201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__mem_done));
        bufp->chgBit(oldp+1202,((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))));
        bufp->chgBit(oldp+1203,((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_w))));
        bufp->chgBit(oldp+1204,(((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r)) 
                                 | (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_w)))));
        bufp->chgCData(oldp+1205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+1206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+1207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__store_q));
        bufp->chgIData(oldp+1208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
        bufp->chgCData(oldp+1209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
        bufp->chgIData(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mcause),32);
        bufp->chgQData(oldp+1212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mc),64);
        bufp->chgIData(oldp+1214,((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mc)),32);
        bufp->chgIData(oldp+1215,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                           >> 0x00000020U))),32);
        bufp->chgIData(oldp+1216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+1217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+1218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+1219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+1220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+1221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+1222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+1223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+1224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+1225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+1226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+1227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+1228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+1229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+1230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+1231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+1232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
        bufp->chgBit(oldp+1233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [0U][0U]));
        bufp->chgBit(oldp+1234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [0U][1U]));
        bufp->chgBit(oldp+1235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [1U][0U]));
        bufp->chgBit(oldp+1236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [1U][1U]));
        bufp->chgBit(oldp+1237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [2U][0U]));
        bufp->chgBit(oldp+1238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [2U][1U]));
        bufp->chgBit(oldp+1239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [3U][0U]));
        bufp->chgBit(oldp+1240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__valid
                                [3U][1U]));
        bufp->chgIData(oldp+1241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [0U][0U]),27);
        bufp->chgIData(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [0U][1U]),27);
        bufp->chgIData(oldp+1243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [1U][0U]),27);
        bufp->chgIData(oldp+1244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [1U][1U]),27);
        bufp->chgIData(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [2U][0U]),27);
        bufp->chgIData(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [2U][1U]),27);
        bufp->chgIData(oldp+1247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [3U][0U]),27);
        bufp->chgIData(oldp+1248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__tag
                                  [3U][1U]),27);
        bufp->chgQData(oldp+1249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [0U][0U]),64);
        bufp->chgQData(oldp+1251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [0U][1U]),64);
        bufp->chgQData(oldp+1253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [1U][0U]),64);
        bufp->chgQData(oldp+1255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [1U][1U]),64);
        bufp->chgQData(oldp+1257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [2U][0U]),64);
        bufp->chgQData(oldp+1259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [2U][1U]),64);
        bufp->chgQData(oldp+1261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [3U][0U]),64);
        bufp->chgQData(oldp+1263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__data
                                  [3U][1U]),64);
        bufp->chgCData(oldp+1265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__state),2);
        bufp->chgCData(oldp+1266,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__araddr_q 
                                         >> 3U))),2);
        bufp->chgIData(oldp+1267,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__araddr_q 
                                   >> 5U)),27);
        bufp->chgBit(oldp+1268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__hit));
        bufp->chgIData(oldp+1269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__hit_way),32);
        bufp->chgIData(oldp+1270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__miss_way),32);
        bufp->chgBit(oldp+1271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__burst_count));
        bufp->chgBit(oldp+1272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__repl_cnt[0]));
        bufp->chgBit(oldp+1273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__repl_cnt[1]));
        bufp->chgBit(oldp+1274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__repl_cnt[2]));
        bufp->chgBit(oldp+1275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__repl_cnt[3]));
        bufp->chgBit(oldp+1276,((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__araddr_q 
                                       >> 2U))));
        bufp->chgIData(oldp+1277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__miss_cycle),32);
        bufp->chgIData(oldp+1278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__i),32);
        bufp->chgIData(oldp+1279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x0000000eU])))) {
        bufp->chgBit(oldp+1280,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rvalid))));
        bufp->chgCData(oldp+1281,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rresp)
                                    : 0U)),2);
        bufp->chgBit(oldp+1282,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rlast))));
        bufp->chgIData(oldp+1283,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rdata
                                    : 0U)),32);
        bufp->chgCData(oldp+1284,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rid)
                                    : 0U)),4);
        bufp->chgBit(oldp+1285,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rlast))));
        bufp->chgBit(oldp+1286,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rvalid_o) 
                                  & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__state)) 
                                     & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cpu_ifu_rresp)))) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                     & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                       & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
        bufp->chgIData(oldp+1287,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted
                                    : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted))
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted 
                                                               >> 0x0000000fU)))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted))
                                            : ((3U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))
                                                ? (0x000000ffU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__l_mem_r))
                                                    ? 
                                                   (0x0000ffffU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted)
                                                    : 0U)))))),32);
        bufp->chgBit(oldp+1288,((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rvalid)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__rready_o))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__dq_oe));
        bufp->chgSData(oldp+1290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__dq_out),16);
        bufp->chgSData(oldp+1291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__row_open),4);
        bufp->chgSData(oldp+1296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__mode_reg),13);
        bufp->chgCData(oldp+1297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__state),4);
        bufp->chgIData(oldp+1298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__read_addr),24);
        bufp->chgSData(oldp+1299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__read_buf),16);
        bufp->chgCData(oldp+1300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__read_cnt),3);
        bufp->chgIData(oldp+1301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__write_addr),24);
        bufp->chgSData(oldp+1302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__l_wdata),16);
        bufp->chgCData(oldp+1303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__l_dqm),2);
        bufp->chgCData(oldp+1304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__refresh_cnt),3);
        bufp->chgBit(oldp+1305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__dq_oe));
        bufp->chgSData(oldp+1306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__dq_out),16);
        bufp->chgSData(oldp+1307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__row_open),4);
        bufp->chgSData(oldp+1312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__mode_reg),13);
        bufp->chgCData(oldp+1313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__state),4);
        bufp->chgIData(oldp+1314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__read_addr),24);
        bufp->chgSData(oldp+1315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__read_buf),16);
        bufp->chgCData(oldp+1316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__read_cnt),3);
        bufp->chgIData(oldp+1317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__write_addr),24);
        bufp->chgSData(oldp+1318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__l_wdata),16);
        bufp->chgCData(oldp+1319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__l_dqm),2);
        bufp->chgCData(oldp+1320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__refresh_cnt),3);
        bufp->chgBit(oldp+1321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__dq_oe));
        bufp->chgSData(oldp+1322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__dq_out),16);
        bufp->chgSData(oldp+1323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__row_open),4);
        bufp->chgSData(oldp+1328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__mode_reg),13);
        bufp->chgCData(oldp+1329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__state),4);
        bufp->chgIData(oldp+1330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__read_addr),24);
        bufp->chgSData(oldp+1331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__read_buf),16);
        bufp->chgCData(oldp+1332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__read_cnt),3);
        bufp->chgIData(oldp+1333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__write_addr),24);
        bufp->chgSData(oldp+1334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__l_wdata),16);
        bufp->chgCData(oldp+1335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__l_dqm),2);
        bufp->chgCData(oldp+1336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__refresh_cnt),3);
        bufp->chgBit(oldp+1337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__dq_oe));
        bufp->chgSData(oldp+1338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__dq_out),16);
        bufp->chgSData(oldp+1339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__row_open),4);
        bufp->chgSData(oldp+1344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__mode_reg),13);
        bufp->chgCData(oldp+1345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__state),4);
        bufp->chgIData(oldp+1346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__read_addr),24);
        bufp->chgSData(oldp+1347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__read_buf),16);
        bufp->chgCData(oldp+1348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__read_cnt),3);
        bufp->chgIData(oldp+1349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__write_addr),24);
        bufp->chgSData(oldp+1350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__l_wdata),16);
        bufp->chgCData(oldp+1351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__l_dqm),2);
        bufp->chgCData(oldp+1352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__refresh_cnt),3);
        bufp->chgBit(oldp+1353,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__dq_oe));
        bufp->chgSData(oldp+1354,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__dq_out),16);
        bufp->chgSData(oldp+1355,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1356,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1357,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1358,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1359,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__row_open),4);
        bufp->chgSData(oldp+1360,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__mode_reg),13);
        bufp->chgCData(oldp+1361,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__state),4);
        bufp->chgIData(oldp+1362,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__read_addr),24);
        bufp->chgSData(oldp+1363,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__read_buf),16);
        bufp->chgCData(oldp+1364,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__read_cnt),3);
        bufp->chgIData(oldp+1365,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__write_addr),24);
        bufp->chgSData(oldp+1366,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__l_wdata),16);
        bufp->chgCData(oldp+1367,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__l_dqm),2);
        bufp->chgCData(oldp+1368,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__refresh_cnt),3);
        bufp->chgBit(oldp+1369,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__dq_oe));
        bufp->chgSData(oldp+1370,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__dq_out),16);
        bufp->chgSData(oldp+1371,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1372,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1373,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1374,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1375,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__row_open),4);
        bufp->chgSData(oldp+1376,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__mode_reg),13);
        bufp->chgCData(oldp+1377,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__state),4);
        bufp->chgIData(oldp+1378,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__read_addr),24);
        bufp->chgSData(oldp+1379,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__read_buf),16);
        bufp->chgCData(oldp+1380,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__read_cnt),3);
        bufp->chgIData(oldp+1381,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__write_addr),24);
        bufp->chgSData(oldp+1382,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__l_wdata),16);
        bufp->chgCData(oldp+1383,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__l_dqm),2);
        bufp->chgCData(oldp+1384,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__refresh_cnt),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+1385,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+1386,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1387,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1388,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+1389,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+1390,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+1391,(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso));
        bufp->chgCData(oldp+1392,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data),8);
        bufp->chgCData(oldp+1393,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt0),4);
        bufp->chgCData(oldp+1394,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt1),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+1395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
        bufp->chgBit(oldp+1396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwrite));
        bufp->chgCData(oldp+1397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pstrb),4);
        bufp->chgBit(oldp+1398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pslverr));
        bufp->chgBit(oldp+1399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__in_psel));
        bufp->chgBit(oldp+1400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__in_penable));
        bufp->chgIData(oldp+1401,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
        bufp->chgIData(oldp+1402,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
        bufp->chgBit(oldp+1403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__in_pready));
        bufp->chgBit(oldp+1404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_psel));
        bufp->chgBit(oldp+1405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_penable));
        bufp->chgBit(oldp+1406,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_psel))));
        bufp->chgBit(oldp+1407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
        bufp->chgBit(oldp+1408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel));
        bufp->chgBit(oldp+1409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable));
        bufp->chgBit(oldp+1410,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel))));
        bufp->chgBit(oldp+1411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel));
        bufp->chgBit(oldp+1412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable));
        bufp->chgBit(oldp+1413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1415,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+1416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1418,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000001cU)))));
        bufp->chgCData(oldp+1419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp),2);
        bufp->chgCData(oldp+1420,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pslverr) 
                                   << 1U)),2);
        bufp->chgIData(oldp+1421,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+1422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgIData(oldp+1427,((0x00fffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgIData(oldp+1428,((0x00ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgCData(oldp+1429,((0x000000ffU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+1430,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+1431,((0x30000000U <= (0x3fffffffU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
        bufp->chgBit(oldp+1432,(((0x30000000U <= (0x3fffffffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel) 
                                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable)) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_pwrite)))))));
        bufp->chgCData(oldp+1433,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
        bufp->chgCData(oldp+1434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i),8);
        bufp->chgIData(oldp+1436,((0x0007ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 2U))),19);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000aU]))) {
        bufp->chgBit(oldp+1437,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n));
        bufp->chgBit(oldp+1438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pready));
        bufp->chgIData(oldp+1439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata),32);
        bufp->chgBit(oldp+1440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid));
        bufp->chgBit(oldp+1441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid));
        bufp->chgBit(oldp+1442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid));
        bufp->chgCData(oldp+1445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bid),4);
        bufp->chgBit(oldp+1446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid));
        bufp->chgCData(oldp+1447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rid),4);
        bufp->chgBit(oldp+1448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast));
        bufp->chgSData(oldp+1449,((0x0000ffffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rid)))),16);
        bufp->chgSData(oldp+1450,((0x0000ffffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bid)))),16);
        bufp->chgBit(oldp+1451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+1452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+1453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+1454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+1455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+1456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+1457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+1458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+1459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+1460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+1461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+1462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+1463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+1464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+1465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+1466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
        bufp->chgCData(oldp+1467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
        bufp->chgCData(oldp+1468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
        bufp->chgCData(oldp+1469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgCData(oldp+1473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgCData(oldp+1474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i),5);
        bufp->chgIData(oldp+1475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i),32);
        bufp->chgCData(oldp+1476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i),4);
        bufp->chgBit(oldp+1477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_we_i));
        bufp->chgBit(oldp+1478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i));
        bufp->chgBit(oldp+1479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i));
        bufp->chgBit(oldp+1480,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))))));
        bufp->chgBit(oldp+1481,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))))));
        bufp->chgCData(oldp+1482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+1483,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))))));
        bufp->chgCData(oldp+1484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo),8);
        bufp->chgCData(oldp+1486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000bU]))) {
        bufp->chgIData(oldp+1487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
        bufp->chgCData(oldp+1488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
        bufp->chgIData(oldp+1489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
        bufp->chgCData(oldp+1490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
        bufp->chgIData(oldp+1491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
        bufp->chgCData(oldp+1492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
        bufp->chgQData(oldp+1493,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb)))),36);
        bufp->chgBit(oldp+1495,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))))));
        bufp->chgCData(oldp+1496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+1497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+1498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgIData(oldp+1499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+1500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgIData(oldp+1501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgIData(oldp+1502,((0x0fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)),28);
        bufp->chgIData(oldp+1503,((0x0fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),28);
        bufp->chgBit(oldp+1504,((0x7800U == (0x00007fffU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x0000000dU)))));
        bufp->chgSData(oldp+1505,((0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                  >> 2U))),11);
        bufp->chgSData(oldp+1506,((0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 2U))),11);
        bufp->chgCData(oldp+1507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits),2);
        bufp->chgIData(oldp+1508,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),30);
        bufp->chgBit(oldp+1509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+1511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+1512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1));
        bufp->chgBit(oldp+1514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgCData(oldp+1515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgCData(oldp+1516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),3);
        bufp->chgIData(oldp+1517,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000cU]))) {
        bufp->chgCData(oldp+1518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o),8);
        bufp->chgBit(oldp+1519,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+1520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1521,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1522,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1523,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1524,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+1525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgCData(oldp+1528,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
        bufp->chgCData(oldp+1529,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i));
        bufp->chgCData(oldp+1531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgCData(oldp+1532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgBit(oldp+1537,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o) 
                                       >> 7U))));
        bufp->chgBit(oldp+1538,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000dU]))) {
        bufp->chgIData(oldp+1539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i),32);
        bufp->chgSData(oldp+1540,((0x0000ffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i)),16);
        bufp->chgIData(oldp+1541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__word_addr),24);
        bufp->chgSData(oldp+1542,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i 
                                   >> 0x00000010U)),16);
        bufp->chgIData(oldp+1543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u1__DOT__word_addr),24);
        bufp->chgIData(oldp+1544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__word_addr),24);
        bufp->chgIData(oldp+1545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u1__DOT__word_addr),24);
        bufp->chgIData(oldp+1546,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u0__DOT__word_addr),24);
        bufp->chgIData(oldp+1547,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__u1__DOT__word_addr),24);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x0000000eU]))) {
        bufp->chgBit(oldp+1548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready));
        bufp->chgBit(oldp+1549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready));
        bufp->chgBit(oldp+1550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
        bufp->chgBit(oldp+1551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+1552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready));
        bufp->chgBit(oldp+1553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready));
        bufp->chgBit(oldp+1554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready));
        bufp->chgBit(oldp+1555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+1556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rvalid));
        bufp->chgIData(oldp+1557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rdata),32);
        bufp->chgCData(oldp+1558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rresp),2);
        bufp->chgCData(oldp+1559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rid),4);
        bufp->chgBit(oldp+1560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_rlast));
        bufp->chgIData(oldp+1561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_rdata),32);
        bufp->chgBit(oldp+1562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgCData(oldp+1563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgBit(oldp+1564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+1565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgBit(oldp+1566,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
        bufp->chgBit(oldp+1567,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgIData(oldp+1568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+1569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+1570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__handshake_b));
        bufp->chgBit(oldp+1571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    }
    bufp->chgBit(oldp+1572,(vlSelfRef.clock));
    bufp->chgBit(oldp+1573,(vlSelfRef.reset));
    bufp->chgSData(oldp+1574,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+1575,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+1576,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1577,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1578,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1579,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1580,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1581,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1582,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1583,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1584,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+1585,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+1586,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+1587,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+1588,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+1589,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+1590,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+1591,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+1592,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+1593,(vlSelfRef.externalPins_uart_tx));
    bufp->chgBit(oldp+1594,(((IData)(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o) 
                                | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                     ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                     : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                   >> 0x0000001fU)))));
    bufp->chgBit(oldp+1595,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_cnt)))));
    bufp->chgCData(oldp+1596,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__dio),4);
    bufp->chgBit(oldp+1597,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+1598,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->chgIData(oldp+1599,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel)
                                ? ((((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                      ? ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                          : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                              : 0U))
                                      : ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                              : (0x000000c0U 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                          : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((0x00000080U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                  >> 8U)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                              : ((0x00000080U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo))))) 
                                    << 0x00000018U) 
                                   | ((0x00ff0000U 
                                       & (((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                            ? ((2U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                            : ((2U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo))))) 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & (((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo))))) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo)))))))))
                                : 0U)),32);
    bufp->chgIData(oldp+1600,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata
                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->chgQData(oldp+1601,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x00000023U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata
                                                                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp) 
                                                                         << 1U))))))),39);
    bufp->chgQData(oldp+1603,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                << 0x0000002bU) | (
                                                   ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                                    << 0x0000000bU) 
                                                   | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize))))),47);
    bufp->chgQData(oldp+1605,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                << 0x0000002bU) | (
                                                   ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                                    << 0x0000000bU) 
                                                   | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize))))),47);
    bufp->chgBit(oldp+1607,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rready) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->chgBit(oldp+1608,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__state_w)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                    >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
    bufp->chgBit(oldp+1609,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__state_w)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->chgBit(oldp+1610,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
    bufp->chgBit(oldp+1611,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid))));
    bufp->chgCData(oldp+1612,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                ? (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                         | ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                  << 6U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                    << 4U)) 
                                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                    << 2U) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12))) 
                                               << 0x00000018U) 
                                              | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8))) 
                                                 << 0x00000010U)) 
                                             | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4))) 
                                                 << 8U) 
                                                | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                     << 6U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                            >> (0x0000001fU 
                                                & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid), 1U)))))
                                : 0U)),2);
    bufp->chgIData(oldp+1613,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                      ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                 >> 3U))
                                      : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                 : 0U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((((0x0000ff00U 
                                                      & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                           >> 0x00000018U)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                            >> 0x00000010U)
                                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                            >> 8U)
                                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                   : 0U)))
                                 : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                           : 0U))),32);
    bufp->chgCData(oldp+1614,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                ? (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 1U))
                                           : 0U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))) : 0U)),2);
    bufp->chgBit(oldp+1615,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o)))));
    bufp->chgBit(oldp+1616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->chgBit(oldp+1617,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arready))));
    bufp->chgIData(oldp+1618,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                ? 0U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_valid) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__exu_idu_ready))
                                         ? ((6U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_branch))
                                             ? ((IData)(4U) 
                                                + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_pc)
                                             : ((1U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_jump))
                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_EXU__DOT__alu_result
                                                 : 
                                                (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_ecall) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_mret))
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_csr_ecall)
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_WBU__DOT__my_csr__DOT__mepc)
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_fencei)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu_pc)
                                                   : 0U))))
                                         : 0U))),32);
    bufp->chgBit(oldp+1619,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arready))));
    bufp->chgBit(oldp+1620,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready))));
    bufp->chgBit(oldp+1621,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)))));
    bufp->chgCData(oldp+1622,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bid)
                                : 0U)),4);
    bufp->chgBit(oldp+1623,((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
    bufp->chgBit(oldp+1624,((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
    bufp->chgBit(oldp+1625,((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arready)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
    bufp->chgBit(oldp+1626,((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arb_arready)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_icache__DOT__arvalid_o))));
    bufp->chgBit(oldp+1627,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+1628,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+1629,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                              ? (0x16U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))));
    bufp->chgBit(oldp+1630,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                    ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done))
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr)))));
    bufp->chgBit(oldp+1631,(((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__req_addr 
                                 >> 0x00000019U)) & 
                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                              >> 3U))));
    bufp->chgBit(oldp+1632,((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U) & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__req_addr 
                                                >> 0x00000019U)))));
    bufp->chgCData(oldp+1633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank0__DOT__u0__DOT__cmd),4);
    bufp->chgCData(oldp+1634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_rank1__DOT__u0__DOT__cmd),4);
    bufp->chgCData(oldp+1635,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i)
                                ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i)
                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arlen)
                                         : 0U))),8);
    bufp->chgCData(oldp+1636,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o))
                                ? (0x00000020U | ((0U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arlen)) 
                                                  << 4U))
                                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o))
                                    ? 0x10U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1637,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wvalid_i))));
    bufp->chgIData(oldp+1638,(((0U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                             >> 2U)))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                : ((1U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                 >> 2U)))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                    : ((2U == (7U & 
                                               ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                >> 2U)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                        : ((3U == (7U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                      >> 2U)))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                    >> 2U)))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                        >> 2U)))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                                     : 0U)))))))),32);
    bufp->chgBit(oldp+1639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+1640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgCData(oldp+1641,((0x000000ffU & ((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo))))))),8);
    bufp->chgSData(oldp+1642,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo) 
                                << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgBit(oldp+1643,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x0000001fU)))));
    bufp->chgIData(oldp+1644,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1645,(((0x00fffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+1646,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x0000000eU] = 0U;
}
