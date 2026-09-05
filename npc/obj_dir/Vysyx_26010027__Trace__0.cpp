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
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgCData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__pmem_rresp),2);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr),32);
        bufp->chgCData(oldp+3,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                 ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                          ? 1U : 0U))),3);
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgBit(oldp+5,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgIData(oldp+6,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                 ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                 : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                 VL_SHIFTL_III(32,32,32, 
                                                               (3U 
                                                                & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U)))),32);
        bufp->chgCData(oldp+7,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                 ? 0x0000000fU : (0x0000000fU 
                                                  & ((1U 
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
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgBit(oldp+9,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q),32);
        bufp->chgBit(oldp+13,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q));
        bufp->chgBit(oldp+14,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
        bufp->chgBit(oldp+15,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__idu_exu_inst),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__idu_exu_imm),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__idu_exu_target),32);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op),4);
        bufp->chgCData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w),2);
        bufp->chgCData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r),3);
        bufp->chgBit(oldp+24,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1));
        bufp->chgBit(oldp+25,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2));
        bufp->chgBit(oldp+26,(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w));
        bufp->chgCData(oldp+27,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res),2);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr),5);
        bufp->chgCData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump),2);
        bufp->chgCData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch),3);
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei));
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata1),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rdata2),32);
        bufp->chgCData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr1),5);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__idu_exu_raddr2),5);
        bufp->chgSData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_raddr),12);
        bufp->chgIData(oldp+37,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata),32);
        bufp->chgSData(oldp+38,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr),12);
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we));
        bufp->chgBit(oldp+40,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall));
        bufp->chgBit(oldp+41,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret));
        bufp->chgBit(oldp+42,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_snpc),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst),32);
        bufp->chgCData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w),2);
        bufp->chgCData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r),3);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr),32);
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata),32);
        bufp->chgBit(oldp+51,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w));
        bufp->chgCData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res),2);
        bufp->chgCData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr),5);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result),32);
        bufp->chgIData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_dnpc),32);
        bufp->chgSData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr),12);
        bufp->chgBit(oldp+57,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret));
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata),32);
        bufp->chgBit(oldp+61,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc),32);
        bufp->chgIData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_snpc),32);
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst),32);
        bufp->chgBit(oldp+65,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w));
        bufp->chgCData(oldp+66,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res),2);
        bufp->chgCData(oldp+67,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr),5);
        bufp->chgIData(oldp+68,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result),32);
        bufp->chgIData(oldp+69,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_dnpc),32);
        bufp->chgIData(oldp+70,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result),32);
        bufp->chgIData(oldp+71,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_addr),32);
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_en));
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy) 
                               & ((~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done)) 
                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_op)))));
        bufp->chgSData(oldp+74,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr),12);
        bufp->chgBit(oldp+75,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we));
        bufp->chgBit(oldp+76,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret));
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata),32);
        bufp->chgBit(oldp+79,(((0xffffffffU == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_dnpc) 
                               & ((IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_en) 
                                  & (0xffffffffU == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_addr)))));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgCData(oldp+81,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                  ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                           | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                           ? 1U : 0U))),3);
        bufp->chgBit(oldp+82,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec),32);
        bufp->chgIData(oldp+85,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc),32);
        bufp->chgCData(oldp+86,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)),7);
        bufp->chgBit(oldp+87,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+88,((0x23U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+89,((0x73U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+90,(((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                               | (0x67U == (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))));
        bufp->chgBit(oldp+91,((0x63U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+92,(((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                               | ((0x13U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                     | (0x37U == (0x0000007fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))));
        bufp->chgBit(oldp+93,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)));
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata1),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2),32);
        bufp->chgIData(oldp+96,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)),32);
        bufp->chgIData(oldp+97,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                                  ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata
                                  : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                      ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                      : vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_rdata))),32);
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1),32);
        bufp->chgIData(oldp+99,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result),32);
        bufp->chgCData(oldp+101,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+102,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__) 
                                   << 2U) | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__)))),3);
        bufp->chgCData(oldp+103,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__))),2);
        bufp->chgBit(oldp+104,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_1) 
                                 | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3)) 
                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                                   & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res))))));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_alu));
        bufp->chgBit(oldp+106,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_alu));
        bufp->chgBit(oldp+107,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                                & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)))));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_mem));
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_data),32);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1_q),32);
        bufp->chgIData(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2_q),32);
        bufp->chgIData(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2_q),32);
        bufp->chgBit(oldp+113,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__latch_flag));
        bufp->chgBit(oldp+114,((vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1 
                                == vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2)));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lts));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__ltu));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__taken));
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc),32);
        bufp->chgIData(oldp+119,((((0x63U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                                   | ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                                      | (0x67U == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst))))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_result
                                   : (((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall) 
                                       | (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret))
                                       ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__trap_pc
                                       : ((IData)(4U) 
                                          + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)))),32);
        bufp->chgCData(oldp+120,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)),7);
        bufp->chgBit(oldp+121,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst))));
        bufp->chgBit(oldp+122,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)) 
                                | (0x67U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__idu_exu_inst)))));
        bufp->chgCData(oldp+123,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_q));
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy));
        bufp->chgCData(oldp+127,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w),2);
        bufp->chgCData(oldp+128,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r),3);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata),32);
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done));
        bufp->chgBit(oldp+131,((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
        bufp->chgBit(oldp+132,((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_op));
        bufp->chgCData(oldp+134,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+135,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
        bufp->chgCData(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+158,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q
                                   : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr)),32);
        bufp->chgCData(oldp+159,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? 2U : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                            ? 2U : 
                                           (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                             | (4U 
                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                             ? 1U : 0U)))),3);
        bufp->chgBit(oldp+160,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                 ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                                 : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgBit(oldp+161,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
        bufp->chgIData(oldp+162,(((0U == (0x0000001fU 
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
        bufp->chgIData(oldp+163,(((0U == (0x0000001fU 
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
        bufp->chgIData(oldp+164,(((((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm) 
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
        bufp->chgBit(oldp+165,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
                                 & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp)))) 
                                | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                    & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                      & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
        bufp->chgIData(oldp+166,(((6U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch))
                                   ? 0U : (vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc 
                                           + vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm))),32);
        bufp->chgBit(oldp+167,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+168,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
        bufp->chgBit(oldp+169,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
        bufp->chgIData(oldp+170,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
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
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst),32);
        bufp->chgBit(oldp+177,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+178,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid));
        bufp->chgIData(oldp+179,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                   : 0U)),32);
        bufp->chgCData(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp),2);
        bufp->chgSData(oldp+181,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm)),12);
        bufp->chgCData(oldp+182,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+183,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+184,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgIData(oldp+186,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                   : 0U)),32);
        bufp->chgCData(oldp+187,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgBit(oldp+188,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgCData(oldp+191,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+192,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
        bufp->chgBit(oldp+193,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgCData(oldp+194,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)),7);
        bufp->chgCData(oldp+195,((7U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+196,((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+198,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+199,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+200,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+201,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+202,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+203,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+204,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+205,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+206,((IData)((0x00000013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+207,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
        bufp->chgBit(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
        bufp->chgBit(oldp+211,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
        bufp->chgBit(oldp+212,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
        bufp->chgBit(oldp+213,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
        bufp->chgBit(oldp+214,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
        bufp->chgBit(oldp+215,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+218,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+219,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+220,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+221,(((IData)((0x00000013U 
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
        bufp->chgBit(oldp+222,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))));
        bufp->chgBit(oldp+223,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                          >> 0x00000019U)))));
        bufp->chgBit(oldp+224,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
        bufp->chgBit(oldp+226,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
        bufp->chgBit(oldp+227,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
        bufp->chgBit(oldp+230,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
        bufp->chgBit(oldp+231,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
        bufp->chgBit(oldp+232,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
        bufp->chgBit(oldp+233,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
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
        bufp->chgBit(oldp+234,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
        bufp->chgBit(oldp+235,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
        bufp->chgBit(oldp+236,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
        bufp->chgBit(oldp+237,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
        bufp->chgBit(oldp+238,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+239,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+240,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+241,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+242,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+243,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+244,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+245,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+246,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
        bufp->chgIData(oldp+247,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm),32);
        bufp->chgBit(oldp+248,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+249,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+250,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+251,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+252,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+253,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgCData(oldp+254,(((0x67U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                   ? 1U : ((0x00000073U 
                                            == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                            ? 2U : 
                                           ((0x30200073U 
                                             == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                             ? 3U : 0U)))),2);
        bufp->chgCData(oldp+255,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch),3);
        bufp->chgCData(oldp+256,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
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
        bufp->chgCData(oldp+257,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub)
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
        bufp->chgBit(oldp+258,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                | (0x17U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+259,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x23U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | (0x6fU == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+260,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x33U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)))))));
        bufp->chgCData(oldp+261,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)
                                             ? 2U : 3U)))),2);
        bufp->chgCData(oldp+262,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                             ? 2U : 
                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                              ? 3U : 
                                             ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                               ? 4U
                                               : 5U)))))),3);
        bufp->chgBit(oldp+263,((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+264,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
        bufp->chgCData(oldp+265,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+266,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__illegal));
        bufp->chgIData(oldp+267,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B),32);
        bufp->chgIData(oldp+268,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J),32);
        bufp->chgBit(oldp+269,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag));
        bufp->chgBit(oldp+270,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar));
        bufp->chgBit(oldp+271,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
        bufp->chgIData(oldp+272,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc),32);
        bufp->chgIData(oldp+273,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+274,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+275,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+276,(vlSelfRef.clock));
    bufp->chgBit(oldp+277,(vlSelfRef.reset));
    bufp->chgBit(oldp+278,(vlSelfRef.ysyx_26010027__DOT__exu_flush));
    bufp->chgIData(oldp+279,(((IData)(vlSelfRef.reset)
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
    bufp->chgBit(oldp+280,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__load_q));
    bufp->chgBit(oldp+281,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    bufp->chgBit(oldp+282,(((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_fencei) 
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
}
