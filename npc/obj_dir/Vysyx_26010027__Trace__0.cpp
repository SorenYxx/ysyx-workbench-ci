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
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q));
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc),32);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__idu_exu_inst),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__idu_exu_imm),32);
        bufp->chgIData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__idu_exu_target),32);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op),4);
        bufp->chgCData(oldp+6,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r),3);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2));
        bufp->chgBit(oldp+9,(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w));
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res),2);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr),5);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump),2);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch),3);
        bufp->chgBit(oldp+14,(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei));
        bufp->chgSData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr),12);
        bufp->chgSData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr),12);
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we));
        bufp->chgBit(oldp+18,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall));
        bufp->chgBit(oldp+19,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret));
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1),5);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2),5);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_snpc),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst),32);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r),3);
        bufp->chgBit(oldp+26,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w));
        bufp->chgCData(oldp+27,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res),2);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr),5);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result),32);
        bufp->chgSData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr),12);
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall));
        bufp->chgBit(oldp+33,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret));
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc),32);
        bufp->chgIData(oldp+37,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst),32);
        bufp->chgBit(oldp+38,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w));
        bufp->chgCData(oldp+39,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res),2);
        bufp->chgCData(oldp+40,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr),5);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result),32);
        bufp->chgSData(oldp+43,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr),12);
        bufp->chgBit(oldp+44,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall));
        bufp->chgBit(oldp+46,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret));
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata),32);
        bufp->chgCData(oldp+48,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                  ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                           | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                           ? 1U : 0U))),3);
        bufp->chgIData(oldp+49,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                                  ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                 [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))])),32);
        bufp->chgIData(oldp+50,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))
                                  ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                 [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))])),32);
        bufp->chgIData(oldp+51,(((0x0f11U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                  ? 0x79737978U : (
                                                   (0x0f12U 
                                                    == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                    ? 0x018ce1abU
                                                    : 
                                                   ((0x0b00U 
                                                     == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                     ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc)
                                                     : 
                                                    ((0x0b80U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                      ? (IData)(
                                                                (vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                                                 >> 0x00000020U))
                                                      : 
                                                     ((0x0300U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                       ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                                       : 
                                                      ((0x0305U 
                                                        == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                        ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                        : 
                                                       ((0x0341U 
                                                         == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                         ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                         : 
                                                        ((0x0342U 
                                                          == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                          ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                          : 0U))))))))),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc),32);
        bufp->chgCData(oldp+54,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)),7);
        bufp->chgBit(oldp+55,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+56,((0x23U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+57,((0x73U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+58,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                               | (0x67U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))));
        bufp->chgBit(oldp+59,((0x63U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+60,(((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                               | ((0x13U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                     | (0x37U == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))));
        bufp->chgIData(oldp+61,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)),32);
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_data),32);
        bufp->chgIData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data),32);
        bufp->chgIData(oldp+64,(((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall)
                                  ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                  : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc)),32);
        bufp->chgBit(oldp+65,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent));
        bufp->chgCData(oldp+66,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r),3);
        bufp->chgBit(oldp+67,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done));
        bufp->chgBit(oldp+68,((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
        bufp->chgIData(oldp+69,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
        bufp->chgCData(oldp+70,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
        bufp->chgIData(oldp+71,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause),32);
        bufp->chgQData(oldp+73,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc),64);
        bufp->chgIData(oldp+75,((IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc)),32);
        bufp->chgIData(oldp+76,((IData)((vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                         >> 0x00000020U))),32);
        bufp->chgIData(oldp+77,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+94,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? 2U : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                           ? 2U : (
                                                   ((2U 
                                                     == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                                    | (4U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                                    ? 1U
                                                    : 0U)))),3);
        bufp->chgIData(oldp+95,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)
                                  ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_data
                                  : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__)
                                      ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data
                                      : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__)
                                          ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                                          : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                                              ? 0U : 
                                             vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                             [(0x0000000fU 
                                               & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))]))))),32);
        bufp->chgIData(oldp+96,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                                  ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata
                                  : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                      ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                      : ((0x0f11U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                          ? 0x79737978U
                                          : ((0x0f12U 
                                              == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                              ? 0x018ce1abU
                                              : ((0x0b00U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc)
                                                  : 
                                                 ((0x0b80U 
                                                   == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                   ? (IData)(
                                                             (vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                                              >> 0x00000020U))
                                                   : 
                                                  ((0x0300U 
                                                    == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                                    : 
                                                   ((0x0305U 
                                                     == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                     : 
                                                    ((0x0341U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                      : 
                                                     ((0x0342U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                       ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                       : 0U))))))))))),32);
        bufp->chgBit(oldp+97,(((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1) 
                                 | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3)) 
                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                                   & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))) 
                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                  & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
                                     | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5))))));
        bufp->chgBit(oldp+98,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                               & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))));
        bufp->chgBit(oldp+99,(((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                               | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))));
        bufp->chgIData(oldp+100,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted
                                   : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0x000000ffU 
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
                                               : ((4U 
                                                   == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                                   ? 
                                                  (0x0000ffffU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                                   : 0U)))))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+101,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgIData(oldp+102,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q
                                   : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr)),32);
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgBit(oldp+104,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                 ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                 : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgIData(oldp+105,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgCData(oldp+106,(vlSelfRef.ysyx_26010027__DOT__pmem_rresp),2);
        bufp->chgBit(oldp+107,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgIData(oldp+108,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr),32);
        bufp->chgCData(oldp+109,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                            ? 1U : 0U))),3);
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgIData(oldp+112,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                   : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (3U 
                                                                  & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U)))),32);
        bufp->chgCData(oldp+113,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
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
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgBit(oldp+115,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgCData(oldp+116,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst),32);
        bufp->chgBit(oldp+121,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q),32);
        bufp->chgBit(oldp+123,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid))));
        bufp->chgBit(oldp+124,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgIData(oldp+125,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                   : 0U)),32);
        bufp->chgCData(oldp+126,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rresp)
                                   : 0U)),2);
        bufp->chgBit(oldp+127,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
        bufp->chgCData(oldp+130,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w),2);
        bufp->chgBit(oldp+131,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
        bufp->chgCData(oldp+133,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w),2);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata),32);
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
        bufp->chgBit(oldp+138,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgBit(oldp+141,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgIData(oldp+142,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                   : 0U)),32);
        bufp->chgCData(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgBit(oldp+144,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))));
        bufp->chgBit(oldp+145,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgBit(oldp+147,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+149,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgCData(oldp+150,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+151,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_0) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
        bufp->chgBit(oldp+152,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_1) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgBit(oldp+153,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_0) 
                                 & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_1) 
                                   & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp))))));
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result),32);
        bufp->chgBit(oldp+158,((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts));
        bufp->chgBit(oldp+160,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu));
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken));
        bufp->chgCData(oldp+162,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+163,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+164,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__))),2);
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu));
        bufp->chgBit(oldp+166,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem));
        bufp->chgCData(oldp+168,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)),7);
        bufp->chgCData(oldp+169,((7U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+170,((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+173,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+174,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+175,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+176,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+177,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+178,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+179,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+180,((IData)((0x00000013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+181,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+182,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+183,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+184,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+186,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+187,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+188,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+194,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+195,(((IData)((0x00000013U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
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
                                                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))))))))))))))));
        bufp->chgBit(oldp+196,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))));
        bufp->chgBit(oldp+197,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x00000019U)))));
        bufp->chgBit(oldp+198,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+200,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+202,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+203,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+204,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+205,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+206,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+207,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                 & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                           >> 0x00000019U))) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+211,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+212,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+213,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+214,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+215,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+218,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+219,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+220,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+221,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+222,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+223,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+224,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+225,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+226,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgSData(oldp+227,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm)),12);
        bufp->chgCData(oldp+228,(((0x67U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                   ? 1U : ((0x00000073U 
                                            == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                            ? 2U : 
                                           ((0x30200073U 
                                             == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                             ? 3U : 0U)))),2);
        bufp->chgCData(oldp+229,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch),3);
        bufp->chgCData(oldp+230,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))
                                   ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14)
                                            ? 2U : 
                                           (((0x6fU 
                                              == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                             | (0x67U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                             ? 3U : 0U)))),2);
        bufp->chgCData(oldp+231,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub)
                                   ? 1U : ((0x37U == 
                                            (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                            ? 2U : 
                                           (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli))
                                             ? 3U : 
                                            (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli))
                                              ? 4U : 
                                             (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                               | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai))
                                               ? 5U
                                               : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
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
                                                       ((0x63U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                                         ? 0x0cU
                                                         : 
                                                        ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)
                                                          ? 0x0dU
                                                          : 
                                                         ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs)
                                                           ? 0x0eU
                                                           : 0U))))))))))))))),4);
        bufp->chgBit(oldp+232,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                | (0x17U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+233,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x23U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | (0x6fU == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+234,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x33U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)))))));
        bufp->chgCData(oldp+235,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)
                                             ? 2U : 3U)))),2);
        bufp->chgCData(oldp+236,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                             ? 2U : 
                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                              ? 3U : 
                                             ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                               ? 4U
                                               : 5U)))))),3);
        bufp->chgBit(oldp+237,((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+238,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm),32);
        bufp->chgIData(oldp+240,(((6U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch))
                                   ? 0U : (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                                           + vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))),32);
        bufp->chgCData(oldp+241,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+242,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+243,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+244,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__illegal));
        bufp->chgCData(oldp+245,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+246,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag));
        bufp->chgBit(oldp+247,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar));
        bufp->chgBit(oldp+248,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
        bufp->chgIData(oldp+249,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J),32);
        bufp->chgBit(oldp+251,(((0x67U == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                | (0x6fU == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgIData(oldp+252,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc),32);
        bufp->chgBit(oldp+253,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_flag));
        bufp->chgBit(oldp+254,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy));
        bufp->chgCData(oldp+255,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w),2);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata),32);
        bufp->chgBit(oldp+257,((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
        bufp->chgCData(oldp+258,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+259,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+260,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
        bufp->chgIData(oldp+261,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+262,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+263,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
        bufp->chgBit(oldp+264,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
        bufp->chgBit(oldp+265,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+266,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+267,(vlSelfRef.clock));
    bufp->chgBit(oldp+268,(vlSelfRef.reset));
    bufp->chgBit(oldp+269,(vlSelfRef.ysyx_26010027__DOT__exu_flush));
    bufp->chgIData(oldp+270,(((IData)(vlSelfRef.reset)
                               ? 0U : (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid) 
                                        & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready))
                                        ? ((6U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch))
                                            ? ((IData)(4U) 
                                               + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump))
                                                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result
                                                : (
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                                    | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall)
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                     : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc)
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                                     : 0U))))
                                        : 0U))),32);
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
}
