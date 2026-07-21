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
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid));
        bufp->chgBit(oldp+33,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__io_master_rdata),32);
        bufp->chgBit(oldp+35,(vlSelfRef.ysyx_26010027__DOT__io_master_rvalid));
        bufp->chgCData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__io_master_rresp),2);
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid));
        bufp->chgBit(oldp+38,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready));
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid));
        bufp->chgBit(oldp+40,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready));
        bufp->chgCData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__io_master_bresp),2);
        bufp->chgBit(oldp+42,(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid));
        bufp->chgBit(oldp+43,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_26010027__DOT__pc),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result),32);
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc),32);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec),32);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+51,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+52,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 7U))),5);
        bufp->chgCData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__waddr),5);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res),2);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op),4);
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w),2);
        bufp->chgCData(oldp+57,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r),3);
        bufp->chgBit(oldp+58,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w));
        bufp->chgBit(oldp+60,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                               | (0x17U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                               | ((0x23U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                     | (0x6fU == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))));
        bufp->chgCData(oldp+62,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type),2);
        bufp->chgCData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__b_type),3);
        bufp->chgBit(oldp+64,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+65,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+66,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall));
        bufp->chgBit(oldp+67,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid))));
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid));
        bufp->chgBit(oldp+69,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgIData(oldp+70,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata),32);
        bufp->chgCData(oldp+71,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid));
        bufp->chgBit(oldp+73,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid))));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid));
        bufp->chgBit(oldp+75,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgIData(oldp+76,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? vlSelfRef.ysyx_26010027__DOT__io_master_rdata
                                  : 0U)),32);
        bufp->chgCData(oldp+77,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp),2);
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid));
        bufp->chgBit(oldp+79,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready))));
        bufp->chgBit(oldp+80,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready))));
        bufp->chgBit(oldp+81,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid))));
        bufp->chgCData(oldp+82,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bresp)
                                  : 0U)),2);
        bufp->chgCData(oldp+83,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_26010027__DOT__w_pending));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_resp));
        bufp->chgBit(oldp+86,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                               & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                                  & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))))));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
        bufp->chgSData(oldp+88,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)),12);
        bufp->chgIData(oldp+89,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause),32);
        bufp->chgQData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc),64);
        bufp->chgIData(oldp+93,((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)),32);
        bufp->chgIData(oldp+94,((IData)((vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                         >> 0x00000020U))),32);
        bufp->chgIData(oldp+95,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)),32);
        bufp->chgCData(oldp+96,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)),7);
        bufp->chgCData(oldp+97,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+98,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                 >> 0x00000019U)),7);
        bufp->chgBit(oldp+99,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+101,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+102,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+103,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+104,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+105,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+106,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+107,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+113,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+119,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+122,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+123,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+131,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+135,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+139,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+142,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+144,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+145,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+146,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+147,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+148,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+151,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+152,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+153,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+154,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+155,((1U & (~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
        bufp->chgCData(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
        bufp->chgBit(oldp+158,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                   & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)))));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending));
        bufp->chgCData(oldp+160,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+161,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
        bufp->chgBit(oldp+163,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
        bufp->chgBit(oldp+164,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid))));
        bufp->chgBit(oldp+165,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid))));
        bufp->chgBit(oldp+166,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid))));
        bufp->chgBit(oldp+167,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                                   & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))))));
        bufp->chgBit(oldp+168,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                  : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rvalid))));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_aw));
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__handshake_w));
        bufp->chgBit(oldp+171,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid))));
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_26010027__DOT__alu_result),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_26010027__DOT__wdata),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
    }
    bufp->chgBit(oldp+181,(vlSelfRef.clock));
    bufp->chgBit(oldp+182,(vlSelfRef.reset));
    bufp->chgIData(oldp+183,(vlSelfRef.cur_pc),32);
    bufp->chgIData(oldp+184,(vlSelfRef.cur_inst),32);
    bufp->chgIData(oldp+185,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pc
                               : vlSelfRef.ysyx_26010027__DOT__alu_result)),32);
    bufp->chgIData(oldp+186,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                               ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2
                               : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2, 
                                               VL_SHIFTL_III(32,32,32, 
                                                             (3U 
                                                              & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U)))),32);
    bufp->chgCData(oldp+187,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                               ? 0x0000000fU : (0x0000000fU 
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
                                                     : 0U))))),4);
    bufp->chgIData(oldp+188,(((0U == (0x0000001fU & 
                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                       >> 0x0000000fU)))
                               ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
                              [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+189,(((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
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
}
