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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_26010027__DOT__exu_flush));
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1),32);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result),32);
        bufp->chgBit(oldp+4,((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                              == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)));
        bufp->chgBit(oldp+5,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts));
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q));
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc),32);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__idu_exu_inst),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__idu_exu_imm),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__idu_exu_target),32);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op),4);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r),3);
        bufp->chgBit(oldp+15,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w));
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res),2);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr),5);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump),2);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch),3);
        bufp->chgBit(oldp+22,(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei));
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata1),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata2),32);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1),5);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2),5);
        bufp->chgSData(oldp+27,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr),12);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata),32);
        bufp->chgSData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr),12);
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret));
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_snpc),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst),32);
        bufp->chgCData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r),3);
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w));
        bufp->chgCData(oldp+38,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res),2);
        bufp->chgCData(oldp+39,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr),5);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_dnpc),32);
        bufp->chgSData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr),12);
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we));
        bufp->chgBit(oldp+44,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret));
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc),32);
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc),32);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst),32);
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w));
        bufp->chgCData(oldp+51,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res),2);
        bufp->chgCData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr),5);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result),32);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_dnpc),32);
        bufp->chgIData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result),32);
        bufp->chgSData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr),12);
        bufp->chgBit(oldp+57,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret));
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata),32);
        bufp->chgBit(oldp+61,((0xffffffffU == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_dnpc)));
        bufp->chgCData(oldp+62,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                  ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                           | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                           ? 1U : 0U))),3);
        bufp->chgIData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec),32);
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc),32);
        bufp->chgCData(oldp+65,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)),7);
        bufp->chgBit(oldp+66,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+67,((0x23U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+68,((0x73U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+69,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                               | (0x67U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))));
        bufp->chgBit(oldp+70,((0x63U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+71,(((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                               | ((0x13U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                     | (0x37U == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))));
        bufp->chgBit(oldp+72,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)));
        bufp->chgIData(oldp+73,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)),32);
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q),32);
        bufp->chgIData(oldp+75,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q),32);
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc),32);
        bufp->chgCData(oldp+77,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)),7);
        bufp->chgBit(oldp+78,((0x63U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst))));
        bufp->chgBit(oldp+79,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                               | (0x67U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)))));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent));
        bufp->chgCData(oldp+81,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r),3);
        bufp->chgBit(oldp+82,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done));
        bufp->chgBit(oldp+83,((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
        bufp->chgCData(oldp+85,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+87,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause),32);
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc),32);
        bufp->chgIData(oldp+89,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgCData(oldp+106,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? 2U : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                            ? 2U : 
                                           (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                             | (4U 
                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                             ? 1U : 0U)))),3);
        bufp->chgIData(oldp+107,(((0U == (0x0000001fU 
                                          & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                             >> 0x0000000fU)))
                                   ? 0U : (((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
                                            & ((0x0000000fU 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr)) 
                                               == (0x0000000fU 
                                                   & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                      >> 0x0000000fU))))
                                            ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata
                                            : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                           [(0x0000000fU 
                                             & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                >> 0x0000000fU))]))),32);
        bufp->chgIData(oldp+108,(((0U == (0x0000001fU 
                                          & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                             >> 0x00000014U)))
                                   ? 0U : (((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w) 
                                            & ((0x0000000fU 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr)) 
                                               == (0x0000000fU 
                                                   & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                      >> 0x00000014U))))
                                            ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata
                                            : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                           [(0x0000000fU 
                                             & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                >> 0x00000014U))]))),32);
        bufp->chgIData(oldp+109,(((((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm) 
                                    == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr)) 
                                   & (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we))
                                   ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                   : ((0x0f11U == (0x00000fffU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                       ? 0x79737978U
                                       : ((0x0f12U 
                                           == (0x00000fffU 
                                               & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                           ? 0x018ce1abU
                                           : ((0x0b00U 
                                               == (0x00000fffU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                               ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc
                                               : ((0x0b80U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                   ? 0U
                                                   : 
                                                  ((0x0300U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                                    : 
                                                   ((0x0305U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                     : 
                                                    ((0x0341U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                      : 
                                                     ((0x0342U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))
                                                       ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                       : 0U)))))))))),32);
        bufp->chgIData(oldp+110,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                                   ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata
                                   : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                       ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                       : vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata))),32);
        bufp->chgBit(oldp+111,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                                & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))));
        bufp->chgBit(oldp+112,(((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))));
        bufp->chgIData(oldp+113,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgIData(oldp+115,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q
                                   : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr)),32);
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgBit(oldp+117,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                 ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                 : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgCData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__pmem_rresp),2);
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr),32);
        bufp->chgCData(oldp+122,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                            ? 1U : 0U))),3);
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgIData(oldp+125,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                   : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (3U 
                                                                  & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U)))),32);
        bufp->chgCData(oldp+126,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
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
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgBit(oldp+128,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgCData(oldp+129,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid));
        bufp->chgBit(oldp+131,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst),32);
        bufp->chgBit(oldp+134,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q),32);
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid));
        bufp->chgBit(oldp+137,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgIData(oldp+138,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                   : 0U)),32);
        bufp->chgCData(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp),2);
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
        bufp->chgCData(oldp+142,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w),2);
        bufp->chgSData(oldp+143,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm)),12);
        bufp->chgCData(oldp+144,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+145,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+146,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
        bufp->chgCData(oldp+148,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w),2);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata),32);
        bufp->chgBit(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
        bufp->chgBit(oldp+152,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgBit(oldp+155,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgIData(oldp+156,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                   : 0U)),32);
        bufp->chgCData(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgBit(oldp+158,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgBit(oldp+160,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+162,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgCData(oldp+163,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+164,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
        bufp->chgBit(oldp+165,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgBit(oldp+166,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
                                 & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp)))) 
                                | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                      & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2),32);
        bufp->chgCData(oldp+169,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+170,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+171,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__))),2);
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag));
        bufp->chgCData(oldp+176,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)),7);
        bufp->chgCData(oldp+177,((7U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+178,((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+179,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+181,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+182,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+183,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+184,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+185,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+186,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+187,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+188,((IData)((0x00000013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+194,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+195,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+198,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+200,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+202,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+203,(((IData)((0x00000013U 
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
        bufp->chgBit(oldp+204,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))));
        bufp->chgBit(oldp+205,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x00000019U)))));
        bufp->chgBit(oldp+206,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+207,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+211,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+212,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+213,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+214,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+215,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
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
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+218,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+219,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+220,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+221,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+222,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+224,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+226,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+227,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+228,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgIData(oldp+229,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm),32);
        bufp->chgBit(oldp+230,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+231,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+232,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+233,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+234,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+235,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgCData(oldp+236,(((0x67U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                   ? 1U : ((0x00000073U 
                                            == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                            ? 2U : 
                                           ((0x30200073U 
                                             == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                             ? 3U : 0U)))),2);
        bufp->chgCData(oldp+237,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch),3);
        bufp->chgCData(oldp+238,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
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
        bufp->chgCData(oldp+239,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub)
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
        bufp->chgBit(oldp+240,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                | (0x17U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+241,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x23U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | (0x6fU == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+242,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x33U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)))))));
        bufp->chgCData(oldp+243,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)
                                             ? 2U : 3U)))),2);
        bufp->chgCData(oldp+244,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                             ? 2U : 
                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                              ? 3U : 
                                             ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                               ? 4U
                                               : 5U)))))),3);
        bufp->chgBit(oldp+245,((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+246,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgIData(oldp+247,(((6U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch))
                                   ? 0U : (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                                           + vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))),32);
        bufp->chgCData(oldp+248,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+249,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__illegal));
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B),32);
        bufp->chgIData(oldp+251,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J),32);
        bufp->chgCData(oldp+252,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+253,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q));
        bufp->chgBit(oldp+254,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag));
        bufp->chgBit(oldp+255,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar));
        bufp->chgBit(oldp+256,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
        bufp->chgIData(oldp+257,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc),32);
        bufp->chgBit(oldp+258,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy));
        bufp->chgCData(oldp+259,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w),2);
        bufp->chgIData(oldp+260,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata),32);
        bufp->chgBit(oldp+261,((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
        bufp->chgCData(oldp+262,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+263,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgIData(oldp+264,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+265,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+266,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
        bufp->chgBit(oldp+267,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
        bufp->chgBit(oldp+268,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+269,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+270,(vlSelfRef.clock));
    bufp->chgBit(oldp+271,(vlSelfRef.reset));
    bufp->chgIData(oldp+272,(((IData)(vlSelfRef.reset)
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
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)
                                                     : 0U))))
                                        : 0U))),32);
    bufp->chgBit(oldp+273,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__load_q));
    bufp->chgBit(oldp+274,(((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1) 
                              | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3)) 
                             & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                                & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))) 
                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__load_q) 
                               & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
                                  | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5))))));
    bufp->chgIData(oldp+275,((((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                               | ((0x6fU == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                                  | (0x67U == (0x0000007fU 
                                               & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst))))
                               ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result
                               : (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc
                                   : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)))),32);
    bufp->chgBit(oldp+276,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    bufp->chgBit(oldp+277,(((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei) 
                            & ((IData)(vlSelfRef.clock) 
                               & (IData)(vlSelfRef.reset)))));
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
