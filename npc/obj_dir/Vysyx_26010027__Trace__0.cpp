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
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc),32);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec),32);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[4]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[5]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[6]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[7]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[8]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[9]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[10]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[11]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[12]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[13]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[14]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[15]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[16]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[17]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[18]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[19]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[20]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[21]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[22]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[23]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[24]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[25]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[26]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[27]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[28]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[29]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[30]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[31]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__R__DOT__i),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause),32);
        bufp->chgQData(oldp+37,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc),64);
        bufp->chgIData(oldp+39,((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)),32);
        bufp->chgIData(oldp+40,((IData)((vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                         >> 0x00000020U))),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+42,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgBit(oldp+44,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgCData(oldp+46,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__pc),32);
        bufp->chgBit(oldp+48,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgBit(oldp+49,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgBit(oldp+50,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+51,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgCData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp),2);
        bufp->chgCData(oldp+53,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                                  : 0U)),4);
        bufp->chgBit(oldp+54,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
        bufp->chgBit(oldp+55,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgCData(oldp+57,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                                  : 0U)),4);
        bufp->chgBit(oldp+58,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
        bufp->chgCData(oldp+59,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_bid)
                                  : 0U)),4);
        bufp->chgCData(oldp+60,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgIData(oldp+61,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)),32);
        bufp->chgCData(oldp+62,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending));
        bufp->chgCData(oldp+64,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+65,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+66,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? vlSelfRef.ysyx_26010027__DOT__pc
                                  : vlSelfRef.ysyx_26010027__DOT__alu_result)),32);
        bufp->chgCData(oldp+67,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? 2U : ((0U == (3U 
                                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                           ? 2U : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                                    ? 1U
                                                    : 0U)))),3);
        bufp->chgBit(oldp+68,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+69,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+70,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+71,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp)))));
        bufp->chgBit(oldp+72,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
        bufp->chgBit(oldp+73,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))) 
                               | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                   & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                     & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
        bufp->chgBit(oldp+74,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)))));
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                  & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))))));
        bufp->chgBit(oldp+76,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+77,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst),32);
        bufp->chgIData(oldp+79,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc),32);
        bufp->chgIData(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm),32);
        bufp->chgIData(oldp+81,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_26010027__DOT__alu_result),32);
        bufp->chgIData(oldp+83,(((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                  ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                      ? 0U : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                               ? 0U
                                               : (0x0000ffffU 
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
                                              << 8U) 
                                             | (0x000000ffU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                          : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))),32);
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result),32);
        bufp->chgCData(oldp+85,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+86,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+87,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 7U))),5);
        bufp->chgCData(oldp+88,(vlSelfRef.ysyx_26010027__DOT__waddr),5);
        bufp->chgCData(oldp+89,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res),2);
        bufp->chgCData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op),4);
        bufp->chgCData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w),2);
        bufp->chgCData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r),3);
        bufp->chgBit(oldp+93,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we));
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w));
        bufp->chgBit(oldp+95,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                               | (0x17U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                               | ((0x23U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                     | (0x6fU == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))));
        bufp->chgCData(oldp+97,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type),2);
        bufp->chgCData(oldp+98,(vlSelfRef.ysyx_26010027__DOT__b_type),3);
        bufp->chgIData(oldp+99,(vlSelfRef.ysyx_26010027__DOT__wdata),32);
        bufp->chgBit(oldp+100,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+101,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_0)))));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgCData(oldp+105,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                   ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                            ? 1U : 0U))),3);
        bufp->chgBit(oldp+106,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgIData(oldp+107,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2
                                   : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2, 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (3U 
                                                                  & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U)))),32);
        bufp->chgCData(oldp+108,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                   ? 0x0000000fU : 
                                  (0x0000000fU & ((1U 
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
                                                    : 0U))))),4);
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid));
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rdata),32);
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgCData(oldp+112,(((0U == (3U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                   ? 2U : ((2U == (3U 
                                                   & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                            ? 1U : 0U))),3);
        bufp->chgBit(oldp+113,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+116,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgBit(oldp+117,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgSData(oldp+118,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)),12);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
        bufp->chgCData(oldp+122,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)),7);
        bufp->chgCData(oldp+123,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+124,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+127,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+128,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+129,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+130,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+131,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+132,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+133,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi));
        bufp->chgBit(oldp+135,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+142,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+144,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+145,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+148,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+149,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+155,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+160,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+161,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+163,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+164,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+165,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+166,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+168,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+172,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+173,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+174,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+177,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+178,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+179,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+180,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+181,((1U & (~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
        bufp->chgBit(oldp+182,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
        bufp->chgBit(oldp+183,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+186,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+187,(vlSelfRef.clock));
    bufp->chgBit(oldp+188,(vlSelfRef.reset));
    bufp->chgBit(oldp+189,(vlSelfRef.nothing));
    bufp->chgIData(oldp+190,(((0U == (0x0000001fU & 
                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                       >> 0x0000000fU)))
                               ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
                              [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+191,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                               : 0U)),32);
    bufp->chgBit(oldp+192,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
    bufp->chgBit(oldp+193,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
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
