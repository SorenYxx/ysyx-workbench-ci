// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vminirv__Syms.h"


void Vminirv___024root__trace_chg_0_sub_0(Vminirv___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vminirv___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_chg_0\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vminirv___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vminirv___024root__trace_chg_0_sub_0(Vminirv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_chg_0_sub_0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.minirv__DOT__my_EXU__DOT__a),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+1,(vlSelfRef.minirv__DOT__R__DOT__rf[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.minirv__DOT__R__DOT__rf[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.minirv__DOT__R__DOT__rf[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.minirv__DOT__R__DOT__rf[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.minirv__DOT__R__DOT__rf[4]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.minirv__DOT__R__DOT__rf[5]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.minirv__DOT__R__DOT__rf[6]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.minirv__DOT__R__DOT__rf[7]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.minirv__DOT__R__DOT__rf[8]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.minirv__DOT__R__DOT__rf[9]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.minirv__DOT__R__DOT__rf[10]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.minirv__DOT__R__DOT__rf[11]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.minirv__DOT__R__DOT__rf[12]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.minirv__DOT__R__DOT__rf[13]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.minirv__DOT__R__DOT__rf[14]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.minirv__DOT__R__DOT__rf[15]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.minirv__DOT__R__DOT__rf[16]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.minirv__DOT__R__DOT__rf[17]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.minirv__DOT__R__DOT__rf[18]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.minirv__DOT__R__DOT__rf[19]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.minirv__DOT__R__DOT__rf[20]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.minirv__DOT__R__DOT__rf[21]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.minirv__DOT__R__DOT__rf[22]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.minirv__DOT__R__DOT__rf[23]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.minirv__DOT__R__DOT__rf[24]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.minirv__DOT__R__DOT__rf[25]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.minirv__DOT__R__DOT__rf[26]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.minirv__DOT__R__DOT__rf[27]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.minirv__DOT__R__DOT__rf[28]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.minirv__DOT__R__DOT__rf[29]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.minirv__DOT__R__DOT__rf[30]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.minirv__DOT__R__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+33,(vlSelfRef.minirv__DOT__inst),32);
        bufp->chgIData(oldp+34,(vlSelfRef.minirv__DOT__my_IDU__DOT__imm),32);
        bufp->chgCData(oldp+35,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+36,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+37,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                                >> 7U))),5);
        bufp->chgCData(oldp+38,(vlSelfRef.minirv__DOT__waddr),5);
        bufp->chgCData(oldp+39,(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res),2);
        bufp->chgCData(oldp+40,(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op),4);
        bufp->chgCData(oldp+41,(((IData)((0x00002023U 
                                          == (0x0000707fU 
                                              & vlSelfRef.minirv__DOT__inst)))
                                  ? 0U : ((IData)((0x00000023U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.minirv__DOT__inst)))
                                           ? 1U : ((IData)(
                                                           (0x00001023U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSelfRef.minirv__DOT__inst)))
                                                    ? 2U
                                                    : 3U)))),2);
        bufp->chgCData(oldp+42,(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r),3);
        bufp->chgBit(oldp+43,(vlSelfRef.minirv__DOT__R__DOT__wen));
        bufp->chgBit(oldp+44,((0x23U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+45,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                               | ((0x23U == (0x0000007fU 
                                             & vlSelfRef.minirv__DOT__inst)) 
                                  | ((0x63U == (0x0000007fU 
                                                & vlSelfRef.minirv__DOT__inst)) 
                                     | ((0x17U == (0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__inst)) 
                                        | (0x23U == 
                                           (0x0000007fU 
                                            & vlSelfRef.minirv__DOT__inst))))))));
        bufp->chgBit(oldp+46,(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type));
        bufp->chgCData(oldp+47,(vlSelfRef.minirv__DOT__b_type),3);
        bufp->chgBit(oldp+48,((0x73U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgIData(oldp+49,(vlSelfRef.minirv__DOT__pc),32);
        bufp->chgIData(oldp+50,(((IData)(4U) + vlSelfRef.minirv__DOT__pc)),32);
        bufp->chgCData(oldp+51,((0x0000007fU & vlSelfRef.minirv__DOT__inst)),7);
        bufp->chgCData(oldp+52,((7U & (vlSelfRef.minirv__DOT__inst 
                                       >> 0x0cU))),3);
        bufp->chgCData(oldp+53,((vlSelfRef.minirv__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+54,(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+55,(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+56,((0x63U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+57,((0x13U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+58,((3U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+59,(vlSelfRef.minirv__DOT__my_IDU__DOT__addi));
        bufp->chgBit(oldp+60,(vlSelfRef.minirv__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+61,(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+62,(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+63,(vlSelfRef.minirv__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+64,(vlSelfRef.minirv__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+65,(vlSelfRef.minirv__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+66,((0x67U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+67,(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+68,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_5) 
                               & (0U == (vlSelfRef.minirv__DOT__inst 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+69,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_5) 
                               & (0x20U == (vlSelfRef.minirv__DOT__inst 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+70,((IData)((0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+71,((IData)((0x00002073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+72,((IData)((0x00003073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_8) 
                               & (0U == (vlSelfRef.minirv__DOT__inst 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_8) 
                               & (0x20U == (vlSelfRef.minirv__DOT__inst 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+75,((IData)((0x00004073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+76,((IData)((0x00006073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+77,((IData)((0x00007073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+78,((IData)((0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+79,((IData)((0x00000023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+80,((IData)((0x00001023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+81,((0x37U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+82,((0x17U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst))));
        bufp->chgBit(oldp+83,((IData)((0x00001063U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+84,((IData)((0x00000063U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+85,((IData)((0x00004063U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+86,((IData)((0x00005063U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+87,((IData)((0x00006063U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
        bufp->chgBit(oldp+88,((IData)((0x00007063U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+89,(vlSelfRef.minirv__DOT__R__DOT__rdata2),32);
        bufp->chgIData(oldp+90,(vlSelfRef.minirv__DOT__alu_result),32);
        bufp->chgIData(oldp+91,(vlSelfRef.minirv__DOT__wdata),32);
        bufp->chgIData(oldp+92,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+93,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+94,(vlSelfRef.minirv__DOT__my_EXU__DOT__result),32);
        bufp->chgIData(oldp+95,(vlSelfRef.minirv__DOT__my_LSU__DOT__rdata),32);
        bufp->chgIData(oldp+96,(vlSelfRef.minirv__DOT__my_LSU__DOT__data_s),32);
    }
    bufp->chgBit(oldp+97,(vlSelfRef.clk));
    bufp->chgBit(oldp+98,(vlSelfRef.rst));
    bufp->chgIData(oldp+99,(vlSelfRef.cur_pc),32);
    bufp->chgIData(oldp+100,(vlSelfRef.cur_inst),32);
    bufp->chgIData(oldp+101,(((0U == (0x0000001fU & 
                                      (vlSelfRef.minirv__DOT__inst 
                                       >> 0x0000000fU)))
                               ? 0U : vlSelfRef.minirv__DOT__R__DOT__rf
                              [(0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+102,(((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                               ? ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                   ? 0U : ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                            ? 0U : 
                                           (0x0000ffffU 
                                            & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                               : ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                   ? ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                       ? (0x000000ffU 
                                          & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.minirv__DOT__my_LSU__DOT__data_s 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                   : ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.minirv__DOT__my_LSU__DOT__data_s 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0x000000ffU 
                                           & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s))
                                       : vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))),32);
    bufp->chgIData(oldp+103,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)
                               ? vlSelfRef.minirv__DOT__alu_result
                               : ((IData)(4U) + vlSelfRef.minirv__DOT__pc))),32);
    bufp->chgIData(oldp+104,(((0U == ((IData)((0x00002023U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.minirv__DOT__inst)))
                                       ? 0U : ((IData)(
                                                       (0x00000023U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.minirv__DOT__inst)))
                                                ? 1U
                                                : ((IData)(
                                                           (0x00001023U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSelfRef.minirv__DOT__inst)))
                                                    ? 2U
                                                    : 3U))))
                               ? VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                               VL_SHIFTL_III(32,32,32, 
                                                             (3U 
                                                              & vlSelfRef.minirv__DOT__alu_result), 3U))
                               : vlSelfRef.minirv__DOT__R__DOT__rdata2)),32);
}

void Vminirv___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_cleanup\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
