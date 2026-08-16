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
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst),32);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__idu_exu_imm),32);
        bufp->chgCData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op),4);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w),2);
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r),3);
        bufp->chgBit(oldp+5,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1));
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w));
        bufp->chgCData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res),2);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch),3);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1),5);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2),5);
        bufp->chgBit(oldp+12,((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r),3);
        bufp->chgBit(oldp+14,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w));
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res),2);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr),5);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result),32);
        bufp->chgBit(oldp+18,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w));
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res),2);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr),5);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result),32);
        bufp->chgCData(oldp+23,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                  ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                           | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                           ? 1U : 0U))),3);
        bufp->chgIData(oldp+24,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                                  ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                 [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))])),32);
        bufp->chgIData(oldp+25,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))
                                  ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                 [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))])),32);
        bufp->chgCData(oldp+26,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)),7);
        bufp->chgCData(oldp+27,((7U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+28,((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                 >> 0x00000019U)),7);
        bufp->chgBit(oldp+29,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+31,((0x63U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+32,((0x23U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+33,((0x6fU == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+34,((0x33U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+35,((0x13U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+36,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+37,((0x73U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+38,((IData)((0x00000013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+39,((IData)((0x00002013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+40,((IData)((0x00001013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                               & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                         >> 0x00000019U)))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                               & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                            >> 0x00000019U)))));
        bufp->chgBit(oldp+43,((IData)((0x00003013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+44,((IData)((0x00004013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+45,((IData)((0x00006013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+46,((IData)((0x00007013U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+51,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+52,((0x67U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+53,(((IData)((0x00000013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                               | ((IData)((0x00002013U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                  | ((IData)((0x00001013U 
                                              == (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                     | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                         & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                   >> 0x00000019U))) 
                                        | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                            & (0x20U 
                                               == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                   >> 0x00000019U))) 
                                           | ((IData)(
                                                      (0x00003013U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                              | ((IData)(
                                                         (0x00004013U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                 | ((IData)(
                                                            (0x00006013U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                    | ((IData)(
                                                               (0x00007013U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                                      | (0x67U 
                                                                         == 
                                                                         (0x0000007fU 
                                                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))))))))))))))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                               & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                         >> 0x00000019U)))));
        bufp->chgBit(oldp+56,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                               & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                            >> 0x00000019U)))));
        bufp->chgBit(oldp+57,((IData)((0x00001033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+58,((IData)((0x00002033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+59,((IData)((0x00003033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                               & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                         >> 0x00000019U)))));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                               & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                            >> 0x00000019U)))));
        bufp->chgBit(oldp+62,((IData)((0x00004033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+63,((IData)((0x00006033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+64,((IData)((0x00007033U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+65,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x00000019U))) 
                               | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                   & (0x20U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                >> 0x00000019U))) 
                                  | ((IData)((0x00001033U 
                                              == (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                     | ((IData)((0x00002033U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                        | ((IData)(
                                                   (0x00003033U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                           | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                               & (0U 
                                                  == 
                                                  (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                   >> 0x00000019U))) 
                                              | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                      >> 0x00000019U))) 
                                                 | ((IData)(
                                                            (0x00004033U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                    | ((IData)(
                                                               (0x00006033U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                       | (IData)(
                                                                 (0x00007033U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))))))))))));
        bufp->chgBit(oldp+66,((IData)((0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+67,((IData)((0x00000023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+68,((IData)((0x00001023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+69,(((IData)((0x00002023U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                               | ((IData)((0x00000023U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                  | (IData)((0x00001023U 
                                             == (0x0000707fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+70,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+71,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+73,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+75,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+76,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                           | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+77,((0x37U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+78,((0x17U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+79,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+81,((IData)((0x00003073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+82,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we) 
                               | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                  | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+83,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+84,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgSData(oldp+85,((0x00000fffU & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                    >> 0x00000014U))
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                               >> 0x0000001fU))) 
                                                   << 0x0000000cU) 
                                                  | ((0x00000fe0U 
                                                      & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                           >> 7U))))
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B
                                                   : 
                                                  ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J
                                                     : 0U))))))),12);
        bufp->chgBit(oldp+86,((1U & (~ (((IData)((0x00000013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                         | ((IData)(
                                                    (0x00002013U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                            | ((IData)(
                                                       (0x00001013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                               | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                       >> 0x00000019U))) 
                                                  | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                      & (0x20U 
                                                         == 
                                                         (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                          >> 0x00000019U))) 
                                                     | ((IData)(
                                                                (0x00003013U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                        | ((IData)(
                                                                   (0x00004013U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                           | ((IData)(
                                                                      (0x00006013U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                              | ((IData)(
                                                                         (0x00007013U 
                                                                          == 
                                                                          (0x0000707fU 
                                                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
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
                                             & (0U 
                                                == 
                                                (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x00000019U))) 
                                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                    >> 0x00000019U))) 
                                               | ((IData)(
                                                          (0x00001033U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                  | ((IData)(
                                                             (0x00002033U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                     | ((IData)(
                                                                (0x00003033U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                        | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                            & (0U 
                                                               == 
                                                               (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                                >> 0x00000019U))) 
                                                           | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                               & (0x20U 
                                                                  == 
                                                                  (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                                   >> 0x00000019U))) 
                                                              | ((IData)(
                                                                         (0x00004033U 
                                                                          == 
                                                                          (0x0000707fU 
                                                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                                 | ((IData)(
                                                                            (0x00006033U 
                                                                             == 
                                                                             (0x0000707fU 
                                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                                    | (IData)(
                                                                              (0x00007033U 
                                                                               == 
                                                                               (0x0000707fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))))))))) 
                                           | (((IData)(
                                                       (0x00002023U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                               | ((IData)(
                                                          (0x00000023U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                  | (IData)(
                                                            (0x00001023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))) 
                                              | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                                              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu)))))) 
                                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                                    | ((0x6fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                                       | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we) 
                                                           | ((0x00000073U 
                                                               == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                                              | (0x30200073U 
                                                                 == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
                                                          | ((0x00100073U 
                                                              == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                                             | (0x0000100fU 
                                                                == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))))))))));
        bufp->chgCData(oldp+87,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                                  ? 1U : ((0x00000073U 
                                           == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                           ? 2U : (
                                                   (0x30200073U 
                                                    == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                                    ? 3U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+88,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch),3);
        bufp->chgCData(oldp+89,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                           | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))
                                  ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we)
                                           ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                                                    ? 3U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__alu_op),4);
        bufp->chgBit(oldp+91,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                               | (0x17U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+92,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                               | ((0x23U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                     | (0x6fU == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+93,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                               | ((0x33U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                  | ((0x6fU == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we)))))));
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we));
        bufp->chgCData(oldp+95,(((IData)((0x00002023U 
                                          == (0x0000707fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                  ? 0U : ((IData)((0x00000023U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                           ? 1U : ((IData)(
                                                           (0x00001023U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                                    ? 2U
                                                    : 3U)))),2);
        bufp->chgCData(oldp+96,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                                  ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                                           ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                                      ? 4U
                                                      : 5U)))))),3);
        bufp->chgCData(oldp+97,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                >> 7U))),5);
        bufp->chgBit(oldp+98,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgIData(oldp+99,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
                                  ? (((- (IData)((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x00000014U))
                                  : ((0x23U == (0x0000007fU 
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
                                                  : 0U)))))),32);
        bufp->chgCData(oldp+100,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+101,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B),32);
        bufp->chgIData(oldp+103,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J),32);
        bufp->chgBit(oldp+104,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump));
        bufp->chgCData(oldp+105,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r),3);
        bufp->chgBit(oldp+106,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done));
        bufp->chgBit(oldp+107,((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
        bufp->chgCData(oldp+108,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgCData(oldp+126,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? 2U : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                            ? 2U : 
                                           (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                             | (4U 
                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                             ? 1U : 0U)))),3);
        bufp->chgIData(oldp+127,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__)
                                   ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_fwd
                                   : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__)
                                       ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd
                                       : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17) 
                                           & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))
                                           ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                                           : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                                               ? 0U
                                               : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                              [(0x0000000fU 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))]))))),32);
        bufp->chgBit(oldp+128,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17) 
                                & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))));
        bufp->chgBit(oldp+129,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_16) 
                                & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))));
        bufp->chgBit(oldp+130,((((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                                 & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                                    & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                                       & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                          & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_9))))) 
                                | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                                    & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                                       & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                                          & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10))))) 
                                   | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                                       & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                          & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))) 
                                      | ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                                         & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_6))))))));
        bufp->chgIData(oldp+131,((((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                   | (6U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result
                                   : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))),32);
        bufp->chgBit(oldp+132,(((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgBit(oldp+135,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgCData(oldp+137,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc),32);
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgIData(oldp+142,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                                       & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_flag)) 
                                          & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready)))
                                       ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc
                                       : vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc)
                                   : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr)),32);
        bufp->chgCData(oldp+143,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arid)
                                   : 0U)),4);
        bufp->chgBit(oldp+144,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                 ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                 : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgBit(oldp+145,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr),32);
        bufp->chgCData(oldp+147,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                            ? 1U : 0U))),3);
        bufp->chgBit(oldp+148,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgIData(oldp+149,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                   : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (3U 
                                                                  & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U)))),32);
        bufp->chgCData(oldp+150,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? 0x0000000fU : 
                                  (0x0000000fU & ((1U 
                                                   == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                    ? 
                                                   ((IData)(3U) 
                                                    << 
                                                    (3U 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr))
                                                    : 0U))))),4);
        bufp->chgBit(oldp+151,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
        bufp->chgBit(oldp+154,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgIData(oldp+155,((((IData)(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid) 
                                   & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_flag)) 
                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready)))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc
                                   : vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc)),32);
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid));
        bufp->chgBit(oldp+157,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_26010027__DOT__idu_exu_inst),32);
        bufp->chgCData(oldp+162,(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr),5);
        bufp->chgCData(oldp+163,(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump),2);
        bufp->chgBit(oldp+164,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst),32);
        bufp->chgCData(oldp+168,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w),2);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata),32);
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
        bufp->chgBit(oldp+173,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgBit(oldp+175,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgCData(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgCData(oldp+177,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                                   : 0U)),4);
        bufp->chgBit(oldp+178,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
        bufp->chgBit(oldp+179,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgCData(oldp+181,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_bid)
                                   : 0U)),4);
        bufp->chgCData(oldp+182,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgCData(oldp+183,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)),7);
        bufp->chgBit(oldp+184,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+185,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+186,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+187,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                | (0x67U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))));
        bufp->chgBit(oldp+188,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+189,(((0x33U == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                | ((0x13U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                      | (0x37U == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))));
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2),32);
        bufp->chgIData(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid),32);
        bufp->chgIData(oldp+194,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_fwd),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd),32);
        bufp->chgCData(oldp+198,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__))),2);
        bufp->chgCData(oldp+199,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__))),2);
        bufp->chgCData(oldp+200,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+201,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar));
        bufp->chgIData(oldp+202,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc),32);
        bufp->chgBit(oldp+203,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_flag));
        bufp->chgBit(oldp+204,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy));
        bufp->chgCData(oldp+205,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w),2);
        bufp->chgIData(oldp+206,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata),32);
        bufp->chgBit(oldp+207,((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
        bufp->chgCData(oldp+208,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
        bufp->chgBit(oldp+211,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+212,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+214,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid));
        bufp->chgBit(oldp+215,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgBit(oldp+218,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp)))));
        bufp->chgBit(oldp+219,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgBit(oldp+220,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
        bufp->chgIData(oldp+221,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+222,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+224,(vlSelfRef.clock));
    bufp->chgBit(oldp+225,(vlSelfRef.reset));
    bufp->chgBit(oldp+226,(vlSelfRef.nothing));
    bufp->chgIData(oldp+227,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                               : 0U)),32);
    bufp->chgBit(oldp+228,(vlSelfRef.ysyx_26010027__DOT__exu_flush));
    bufp->chgIData(oldp+229,(vlSelfRef.ysyx_26010027__DOT__exu_flush_pc),32);
    bufp->chgIData(oldp+230,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                               : 0U)),32);
    bufp->chgBit(oldp+231,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
    bufp->chgBit(oldp+232,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                            & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
    bufp->chgBit(oldp+233,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                             & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))) 
                            | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                               | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                  & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
    bufp->chgBit(oldp+234,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
    bufp->chgIData(oldp+235,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                               ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted
                               : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                   ? (((- (IData)((1U 
                                                   & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                      >> 7U)))) 
                                       << 8U) | (0x000000ffU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                   : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                       : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                           ? (0x000000ffU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                           : ((4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                               ? (0x0000ffffU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                               : 0U)))))),32);
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
