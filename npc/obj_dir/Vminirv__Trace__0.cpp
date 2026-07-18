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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.minirv__DOT__ifu_respValid));
        bufp->chgBit(oldp+1,(vlSelfRef.minirv__DOT__lsu_respValid));
        bufp->chgIData(oldp+2,(vlSelfRef.minirv__DOT__ifu_rdata),32);
        bufp->chgIData(oldp+3,(vlSelfRef.minirv__DOT__lsu_rdata),32);
        bufp->chgIData(oldp+4,(((0U == (0x0000001fU 
                                        & (vlSelfRef.minirv__DOT__ifu_rdata 
                                           >> 0x0000000fU)))
                                 ? 0U : vlSelfRef.minirv__DOT__R__DOT__rf
                                [(0x0000001fU & (vlSelfRef.minirv__DOT__ifu_rdata 
                                                 >> 0x0000000fU))])),32);
        bufp->chgIData(oldp+5,(vlSelfRef.minirv__DOT__R__DOT__rdata2),32);
        bufp->chgCData(oldp+6,((0x0000001fU & (vlSelfRef.minirv__DOT__ifu_rdata 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+7,((0x0000001fU & (vlSelfRef.minirv__DOT__ifu_rdata 
                                               >> 0x00000014U))),5);
        bufp->chgCData(oldp+8,((0x0000001fU & (vlSelfRef.minirv__DOT__ifu_rdata 
                                               >> 7U))),5);
        bufp->chgCData(oldp+9,(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_w),2);
        bufp->chgCData(oldp+10,(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r),3);
        bufp->chgBit(oldp+11,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.minirv__DOT__ifu_rdata)) 
                               | (0x17U == (0x0000007fU 
                                            & vlSelfRef.minirv__DOT__ifu_rdata)))));
        bufp->chgBit(oldp+12,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                               | ((0x23U == (0x0000007fU 
                                             & vlSelfRef.minirv__DOT__ifu_rdata)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.minirv__DOT__ifu_rdata)) 
                                     | (0x6fU == (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__ifu_rdata)))))));
        bufp->chgCData(oldp+13,(vlSelfRef.minirv__DOT__b_type),3);
        bufp->chgBit(oldp+14,((0x00100073U == vlSelfRef.minirv__DOT__ifu_rdata)));
        bufp->chgIData(oldp+15,(vlSelfRef.minirv__DOT__R__DOT__rf[0]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.minirv__DOT__R__DOT__rf[1]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.minirv__DOT__R__DOT__rf[2]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.minirv__DOT__R__DOT__rf[3]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.minirv__DOT__R__DOT__rf[4]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.minirv__DOT__R__DOT__rf[5]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.minirv__DOT__R__DOT__rf[6]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.minirv__DOT__R__DOT__rf[7]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.minirv__DOT__R__DOT__rf[8]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.minirv__DOT__R__DOT__rf[9]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.minirv__DOT__R__DOT__rf[10]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.minirv__DOT__R__DOT__rf[11]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.minirv__DOT__R__DOT__rf[12]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.minirv__DOT__R__DOT__rf[13]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.minirv__DOT__R__DOT__rf[14]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.minirv__DOT__R__DOT__rf[15]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.minirv__DOT__R__DOT__rf[16]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.minirv__DOT__R__DOT__rf[17]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.minirv__DOT__R__DOT__rf[18]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.minirv__DOT__R__DOT__rf[19]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.minirv__DOT__R__DOT__rf[20]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.minirv__DOT__R__DOT__rf[21]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.minirv__DOT__R__DOT__rf[22]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.minirv__DOT__R__DOT__rf[23]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.minirv__DOT__R__DOT__rf[24]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.minirv__DOT__R__DOT__rf[25]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.minirv__DOT__R__DOT__rf[26]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.minirv__DOT__R__DOT__rf[27]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.minirv__DOT__R__DOT__rf[28]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.minirv__DOT__R__DOT__rf[29]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.minirv__DOT__R__DOT__rf[30]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.minirv__DOT__R__DOT__rf[31]),32);
        bufp->chgCData(oldp+47,((0x0000007fU & vlSelfRef.minirv__DOT__ifu_rdata)),7);
        bufp->chgCData(oldp+48,((7U & (vlSelfRef.minirv__DOT__ifu_rdata 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+49,((vlSelfRef.minirv__DOT__ifu_rdata 
                                 >> 0x00000019U)),7);
        bufp->chgBit(oldp+50,(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+51,(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+52,((0x63U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+53,((0x23U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+54,((0x6fU == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+55,((0x33U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+56,((0x13U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+57,((3U == (0x0000007fU & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+58,((0x73U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+59,(vlSelfRef.minirv__DOT__my_IDU__DOT__addi));
        bufp->chgBit(oldp+60,(vlSelfRef.minirv__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+61,(vlSelfRef.minirv__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+62,(vlSelfRef.minirv__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+63,(vlSelfRef.minirv__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+64,(vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+65,(vlSelfRef.minirv__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+66,(vlSelfRef.minirv__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+67,(vlSelfRef.minirv__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+68,(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+69,(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+70,(vlSelfRef.minirv__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+71,(vlSelfRef.minirv__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+72,(vlSelfRef.minirv__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+73,((0x67U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__addi) 
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
                                                                          & vlSelfRef.minirv__DOT__ifu_rdata))))))))))))))))));
        bufp->chgBit(oldp+75,(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+76,(vlSelfRef.minirv__DOT__my_IDU__DOT__add));
        bufp->chgBit(oldp+77,(vlSelfRef.minirv__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+78,(vlSelfRef.minirv__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+79,(vlSelfRef.minirv__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+80,(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+81,(vlSelfRef.minirv__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+82,(vlSelfRef.minirv__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+83,(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+84,(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+85,(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+86,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__add) 
                               | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sub) 
                                  | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sll) 
                                     | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slt) 
                                        | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu) 
                                           | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srl) 
                                              | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sra) 
                                                 | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor) 
                                                    | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or) 
                                                       | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+87,(vlSelfRef.minirv__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+88,(vlSelfRef.minirv__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+89,(vlSelfRef.minirv__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+90,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw) 
                               | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb) 
                                  | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+91,(vlSelfRef.minirv__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+92,(vlSelfRef.minirv__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+93,(vlSelfRef.minirv__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+94,(vlSelfRef.minirv__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+95,(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+96,(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bne) 
                               | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__beq) 
                                  | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__blt) 
                                     | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bge) 
                                        | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu) 
                                           | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+98,((0x37U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+99,((0x17U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__ifu_rdata))));
        bufp->chgBit(oldp+100,(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+101,(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+102,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.minirv__DOT__ifu_rdata)))));
        bufp->chgBit(oldp+103,((0x00000073U == vlSelfRef.minirv__DOT__ifu_rdata)));
        bufp->chgBit(oldp+104,((0x30200073U == vlSelfRef.minirv__DOT__ifu_rdata)));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+105,(vlSelfRef.minirv__DOT__ifu_reqValid));
        bufp->chgIData(oldp+106,(vlSelfRef.minirv__DOT__pc),32);
        bufp->chgIData(oldp+107,(vlSelfRef.minirv__DOT__my_CSR__DOT__mepc),32);
        bufp->chgIData(oldp+108,(vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec),32);
        bufp->chgBit(oldp+109,((0U == (IData)(vlSelfRef.minirv__DOT__my_IFU__DOT__state))));
        bufp->chgIData(oldp+110,(vlSelfRef.minirv__DOT__my_CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+111,(vlSelfRef.minirv__DOT__my_CSR__DOT__mcause),32);
        bufp->chgQData(oldp+112,(vlSelfRef.minirv__DOT__my_CSR__DOT__mc),64);
        bufp->chgIData(oldp+114,((IData)(vlSelfRef.minirv__DOT__my_CSR__DOT__mc)),32);
        bufp->chgIData(oldp+115,((IData)((vlSelfRef.minirv__DOT__my_CSR__DOT__mc 
                                          >> 0x00000020U))),32);
        bufp->chgIData(oldp+116,(((IData)(4U) + vlSelfRef.minirv__DOT__pc)),32);
        bufp->chgCData(oldp+117,(vlSelfRef.minirv__DOT__my_IFU__DOT__state),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+118,(vlSelfRef.minirv__DOT__my_IDU__DOT__imm),32);
        bufp->chgCData(oldp+119,(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res),2);
        bufp->chgCData(oldp+120,(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op),4);
        bufp->chgBit(oldp+121,(vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we));
        bufp->chgCData(oldp+122,(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type),2);
        bufp->chgSData(oldp+123,((0x00000fffU & vlSelfRef.minirv__DOT__my_IDU__DOT__imm)),12);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+124,(vlSelfRef.minirv__DOT__my_RegisterFile__DOT__lsu_reqValid));
        bufp->chgIData(oldp+125,(vlSelfRef.minirv__DOT__alu_result),32);
        bufp->chgBit(oldp+126,(vlSelfRef.minirv__DOT__my_RegisterFile__DOT__lsu_wen));
        bufp->chgIData(oldp+127,(vlSelfRef.minirv__DOT__my_CSR__DOT__csr_rdata),32);
        bufp->chgCData(oldp+128,(vlSelfRef.minirv__DOT__R__DOT__waddr),5);
        bufp->chgBit(oldp+129,(vlSelfRef.minirv__DOT__R__DOT__wen));
        bufp->chgIData(oldp+130,(vlSelfRef.minirv__DOT__R__DOT__wdata),32);
        bufp->chgBit(oldp+131,(vlSelfRef.minirv__DOT__my_IDU__DOT__lsu_stall));
        bufp->chgIData(oldp+132,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+133,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+134,(vlSelfRef.minirv__DOT__my_EXU__DOT__result),32);
        bufp->chgIData(oldp+135,(vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted),32);
    }
    bufp->chgBit(oldp+136,(vlSelfRef.clk));
    bufp->chgBit(oldp+137,(vlSelfRef.rst));
    bufp->chgIData(oldp+138,(vlSelfRef.cur_pc),32);
    bufp->chgIData(oldp+139,(vlSelfRef.cur_inst),32);
    bufp->chgIData(oldp+140,(((2U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))
                               ? vlSelfRef.minirv__DOT__my_CSR__DOT__mtvec
                               : ((3U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type))
                                   ? vlSelfRef.minirv__DOT__my_CSR__DOT__mepc
                                   : (((0U != (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)) 
                                       | (6U != (IData)(vlSelfRef.minirv__DOT__b_type)))
                                       ? vlSelfRef.minirv__DOT__alu_result
                                       : ((IData)(4U) 
                                          + vlSelfRef.minirv__DOT__pc))))),32);
    bufp->chgIData(oldp+141,(((0U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_w))
                               ? vlSelfRef.minirv__DOT__R__DOT__rdata2
                               : VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                               VL_SHIFTL_III(32,32,32, 
                                                             (3U 
                                                              & vlSelfRef.minirv__DOT__alu_result), 3U)))),32);
    bufp->chgCData(oldp+142,(((0U == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_w))
                               ? 0x0000000fU : (0x0000000fU 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_w))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelfRef.minirv__DOT__alu_result))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_w))
                                                     ? 
                                                    ((IData)(3U) 
                                                     << 
                                                     (3U 
                                                      & vlSelfRef.minirv__DOT__alu_result))
                                                     : 0U))))),4);
    bufp->chgIData(oldp+143,(((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                               ? ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                   ? 0U : ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                            ? 0U : 
                                           (0x0000ffffU 
                                            & vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted)))
                               : ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                   ? ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                       ? (0x000000ffU 
                                          & vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted)
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted)))
                                   : ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0x000000ffU 
                                           & vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted))
                                       : vlSelfRef.minirv__DOT__my_LSU__DOT__rdata_shifted)))),32);
    bufp->chgBit(oldp+144,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we) 
                            | ((0x00000073U == vlSelfRef.minirv__DOT__ifu_rdata) 
                               | (0x30200073U == vlSelfRef.minirv__DOT__ifu_rdata)))));
    bufp->chgBit(oldp+145,((1U & (~ (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__addi) 
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
                                                                                & vlSelfRef.minirv__DOT__ifu_rdata)))))))))))))))) 
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
                                              | ((0x37U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__ifu_rdata)) 
                                                 | (((0x17U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.minirv__DOT__ifu_rdata)) 
                                                     | (0x6fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.minirv__DOT__ifu_rdata))) 
                                                    | (((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csr_we) 
                                                        | ((0x00000073U 
                                                            == vlSelfRef.minirv__DOT__ifu_rdata) 
                                                           | (0x30200073U 
                                                              == vlSelfRef.minirv__DOT__ifu_rdata))) 
                                                       | (0x00100073U 
                                                          == vlSelfRef.minirv__DOT__ifu_rdata))))))))))));
    bufp->chgCData(oldp+146,(vlSelfRef.minirv__DOT__my_LSU__DOT__state),2);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
