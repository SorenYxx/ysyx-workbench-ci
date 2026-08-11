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
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause),32);
        bufp->chgQData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc),64);
        bufp->chgIData(oldp+6,((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)),32);
        bufp->chgIData(oldp+7,((IData)((vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                        >> 0x00000020U))),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[4]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[5]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[6]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[7]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[8]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[9]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[10]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[11]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[12]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[13]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[14]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf[15]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__my_R__DOT__i),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+27,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgBit(oldp+29,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgCData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_26010027__DOT__pc),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+37,(vlSelfRef.ysyx_26010027__DOT__alu_result),32);
        bufp->chgIData(oldp+38,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result),32);
        bufp->chgCData(oldp+39,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+40,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+41,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 7U))),5);
        bufp->chgCData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res),2);
        bufp->chgCData(oldp+43,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op),4);
        bufp->chgCData(oldp+44,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w),2);
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r),3);
        bufp->chgBit(oldp+46,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we));
        bufp->chgBit(oldp+47,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                               | (0x17U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+48,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                               | ((0x23U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                     | (0x6fU == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))));
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type),2);
        bufp->chgCData(oldp+50,(vlSelfRef.ysyx_26010027__DOT__b_type),3);
        bufp->chgBit(oldp+51,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+52,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_0)))));
        bufp->chgIData(oldp+53,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o
                                  : vlSelfRef.ysyx_26010027__DOT__alu_result)),32);
        bufp->chgCData(oldp+54,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arid)
                                  : 0U)),4);
        bufp->chgCData(oldp+55,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arlen)
                                  : 0U)),8);
        bufp->chgCData(oldp+56,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arsize)
                                  : ((0U == (3U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                      ? 2U : ((2U == 
                                               (3U 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                               ? 1U
                                               : 0U)))),3);
        bufp->chgCData(oldp+57,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arburst)
                                  : 1U)),2);
        bufp->chgBit(oldp+58,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o)
                                : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgCData(oldp+59,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                  ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                           ? 1U : 0U))),3);
        bufp->chgIData(oldp+60,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2
                                  : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2, 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                (3U 
                                                                 & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U)))),32);
        bufp->chgCData(oldp+61,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
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
        bufp->chgBit(oldp+62,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o));
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o),32);
        bufp->chgBit(oldp+65,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o));
        bufp->chgIData(oldp+66,(vlSelfRef.ysyx_26010027__DOT__hit_count),32);
        bufp->chgIData(oldp+67,(vlSelfRef.ysyx_26010027__DOT__miss_count),32);
        bufp->chgIData(oldp+68,(vlSelfRef.ysyx_26010027__DOT__miss_latency),32);
        bufp->chgBit(oldp+69,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+70,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state)) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)))));
        bufp->chgBit(oldp+71,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o));
        bufp->chgBit(oldp+72,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgIData(oldp+73,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o),32);
        bufp->chgCData(oldp+74,(((0U == (3U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                  ? 2U : ((2U == (3U 
                                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                           ? 1U : 0U))),3);
        bufp->chgBit(oldp+75,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgCData(oldp+76,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgCData(oldp+77,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                                  : 0U)),4);
        bufp->chgBit(oldp+78,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
        bufp->chgCData(oldp+79,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_bid)
                                  : 0U)),4);
        bufp->chgCData(oldp+80,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+81,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
        bufp->chgSData(oldp+82,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)),12);
        bufp->chgIData(oldp+83,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+85,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
        bufp->chgIData(oldp+86,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)),32);
        bufp->chgCData(oldp+87,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)),7);
        bufp->chgCData(oldp+88,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+89,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                 >> 0x00000019U)),7);
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+92,((0x63U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+93,((0x23U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+94,((0x6fU == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+95,((0x33U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+96,((0x13U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+97,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+98,((0x73U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+106,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+107,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+113,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+114,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+119,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+126,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+130,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+131,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+135,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+137,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+138,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+139,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+142,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+143,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+144,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
        bufp->chgBit(oldp+145,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
        bufp->chgBit(oldp+146,((1U & (~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
        bufp->chgCData(oldp+147,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+148,((IData)(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state))))));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending));
        bufp->chgCData(oldp+150,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[0]));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[1]));
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[2]));
        bufp->chgBit(oldp+155,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[3]));
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[4]));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[5]));
        bufp->chgBit(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[6]));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[7]));
        bufp->chgBit(oldp+160,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[8]));
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[9]));
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[10]));
        bufp->chgBit(oldp+163,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[11]));
        bufp->chgBit(oldp+164,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[12]));
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[13]));
        bufp->chgBit(oldp+166,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[14]));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid[15]));
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[0]),26);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[1]),26);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[2]),26);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[3]),26);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[4]),26);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[5]),26);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[6]),26);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[7]),26);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[8]),26);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[9]),26);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[10]),26);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[11]),26);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[12]),26);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[13]),26);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[14]),26);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag[15]),26);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[0]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[1]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[2]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[3]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[4]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[5]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[6]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[7]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[8]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[9]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[10]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[11]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[12]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[13]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[14]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data[15]),32);
        bufp->chgCData(oldp+200,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state),2);
        bufp->chgCData(oldp+201,((0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__pc 
                                                 >> 2U))),4);
        bufp->chgIData(oldp+202,((vlSelfRef.ysyx_26010027__DOT__pc 
                                  >> 6U)),26);
        bufp->chgBit(oldp+203,((vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                                [(0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__pc 
                                                 >> 2U))] 
                                & (vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                                   [(0x0000000fU & 
                                     (vlSelfRef.ysyx_26010027__DOT__pc 
                                      >> 2U))] == (vlSelfRef.ysyx_26010027__DOT__pc 
                                                   >> 6U)))));
        bufp->chgIData(oldp+204,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+205,(((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                   ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
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
        bufp->chgBit(oldp+206,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+207,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+208,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+209,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
        bufp->chgBit(oldp+210,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                 & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                   & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))))));
        bufp->chgBit(oldp+211,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+212,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
        bufp->chgBit(oldp+213,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+214,(vlSelfRef.ysyx_26010027__DOT__waddr),5);
        bufp->chgBit(oldp+215,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w));
        bufp->chgIData(oldp+216,(vlSelfRef.ysyx_26010027__DOT__wdata),32);
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall));
        bufp->chgBit(oldp+218,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgBit(oldp+219,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgBit(oldp+220,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgIData(oldp+221,(vlSelfRef.ysyx_26010027__DOT__icache_rdata),32);
        bufp->chgBit(oldp+222,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgBit(oldp+224,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+226,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgBit(oldp+227,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
        bufp->chgIData(oldp+230,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+231,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+232,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+233,(vlSelfRef.clock));
    bufp->chgBit(oldp+234,(vlSelfRef.reset));
    bufp->chgBit(oldp+235,(vlSelfRef.nothing));
    bufp->chgIData(oldp+236,(((0U == (0x0000001fU & 
                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                       >> 0x0000000fU)))
                               ? 0U : vlSelfRef.ysyx_26010027__DOT__my_R__DOT__rf
                              [(0x0000000fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                               >> 0x0000000fU))])),32);
    bufp->chgBit(oldp+237,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid))));
    bufp->chgIData(oldp+238,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                               : 0U)),32);
    bufp->chgBit(oldp+239,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
    bufp->chgBit(oldp+240,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
    bufp->chgBit(oldp+241,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o))));
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
