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
                      [4U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr),32);
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_26010027__DOT__exu_flush));
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__exu_flush_pc),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc),32);
        bufp->chgCData(oldp+4,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                               >> 4U))),5);
        bufp->chgIData(oldp+5,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                >> 9U)),23);
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit));
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way),32);
        bufp->chgCData(oldp+9,((3U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_araddr 
                                      >> 2U))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__idu_exu_imm),32);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op),4);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w),2);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r),3);
        bufp->chgBit(oldp+15,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w));
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res),2);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch),3);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1),5);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2),5);
        bufp->chgCData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r),3);
        bufp->chgBit(oldp+23,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w));
        bufp->chgCData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res),2);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr),5);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result),32);
        bufp->chgBit(oldp+27,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w));
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res),2);
        bufp->chgCData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr),5);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result),32);
        bufp->chgCData(oldp+32,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                  ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                           | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                           ? 1U : 0U))),3);
        bufp->chgIData(oldp+33,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                                  ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                 [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))])),32);
        bufp->chgIData(oldp+34,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))
                                  ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                 [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))])),32);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done));
        bufp->chgCData(oldp+38,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r),3);
        bufp->chgBit(oldp+39,((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
        bufp->chgCData(oldp+40,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__i),32);
        bufp->chgIData(oldp+59,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgCData(oldp+60,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arsize_o)
                                  : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                      ? 2U : (((2U 
                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                               | (4U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                               ? 1U
                                               : 0U)))),3);
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15) 
                               & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14) 
                               & (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res)))));
        bufp->chgBit(oldp+63,((((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                                   & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                                      & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                         & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7))))) 
                               | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                                   & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w) 
                                      & ((IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid) 
                                         & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8))))) 
                                  | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                                      & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                         & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2))) 
                                     | ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                                        & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                           & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))))))));
        bufp->chgIData(oldp+64,((((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump)) 
                                  | (6U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch)))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result
                                  : ((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc))),32);
        bufp->chgBit(oldp+65,(((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                               | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+66,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
        bufp->chgIData(oldp+67,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
        bufp->chgBit(oldp+69,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
        bufp->chgCData(oldp+70,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+71,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid))));
        bufp->chgIData(oldp+72,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                  : 0U)),32);
        bufp->chgBit(oldp+73,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
        bufp->chgBit(oldp+74,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
        bufp->chgBit(oldp+75,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc),32);
        bufp->chgIData(oldp+77,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst),32);
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
        bufp->chgIData(oldp+79,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o
                                  : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr)),32);
        bufp->chgCData(oldp+80,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arid)
                                  : 0U)),4);
        bufp->chgCData(oldp+81,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arlen_o)
                                  : 0U)),8);
        bufp->chgBit(oldp+82,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o)
                                : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr),32);
        bufp->chgCData(oldp+85,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                  ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                           ? 1U : 0U))),3);
        bufp->chgBit(oldp+86,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
        bufp->chgIData(oldp+87,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                  ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                  : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                (3U 
                                                                 & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U)))),32);
        bufp->chgCData(oldp+88,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
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
        bufp->chgBit(oldp+89,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst),32);
        bufp->chgBit(oldp+93,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid))));
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_rready));
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o),32);
        bufp->chgBit(oldp+98,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o));
        bufp->chgBit(oldp+99,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o),32);
        bufp->chgCData(oldp+101,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arlen_o),8);
        bufp->chgCData(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arsize_o),3);
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o));
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_26010027__DOT__hit_count),32);
        bufp->chgIData(oldp+105,(vlSelfRef.ysyx_26010027__DOT__miss_count),32);
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_26010027__DOT__miss_latency),32);
        bufp->chgBit(oldp+107,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc),32);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_26010027__DOT__idu_exu_inst),32);
        bufp->chgCData(oldp+111,(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr),5);
        bufp->chgCData(oldp+112,(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump),2);
        bufp->chgBit(oldp+113,((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+114,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid)))));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc),32);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst),32);
        bufp->chgCData(oldp+118,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w),2);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata),32);
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
        bufp->chgBit(oldp+123,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
        bufp->chgBit(oldp+125,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
        bufp->chgCData(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
        bufp->chgCData(oldp+127,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                                   : 0U)),4);
        bufp->chgBit(oldp+128,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
        bufp->chgBit(oldp+129,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
        bufp->chgCData(oldp+131,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                   ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_bid)
                                   : 0U)),4);
        bufp->chgCData(oldp+132,(vlSelfRef.ysyx_26010027__DOT__grant),2);
        bufp->chgBit(oldp+133,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp)))));
        bufp->chgCData(oldp+134,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)),7);
        bufp->chgBit(oldp+135,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+136,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+137,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+138,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                | (0x67U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))));
        bufp->chgBit(oldp+139,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
        bufp->chgBit(oldp+140,(((0x33U == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                | ((0x13U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                      | (0x37U == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))));
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid),32);
        bufp->chgIData(oldp+144,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
        bufp->chgCData(oldp+146,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__))),2);
        bufp->chgCData(oldp+147,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__))),2);
        bufp->chgCData(oldp+148,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)),7);
        bufp->chgCData(oldp+149,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+150,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
        bufp->chgBit(oldp+153,((0x63U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+154,((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+155,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+156,((0x33U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+157,((0x13U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+158,((3U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+159,((0x73U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+160,((IData)((0x00000013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+161,((IData)((0x00002013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+162,((IData)((0x00001013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+163,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                          >> 0x00000019U)))));
        bufp->chgBit(oldp+164,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                             >> 0x00000019U)))));
        bufp->chgBit(oldp+165,((IData)((0x00003013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+166,((IData)((0x00004013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+167,((IData)((0x00006013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+168,((IData)((0x00007013U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
        bufp->chgBit(oldp+174,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+175,(((IData)((0x00000013U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                | ((IData)((0x00002013U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                   | ((IData)((0x00001013U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                      | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                          & (0U == 
                                             (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                              >> 0x00000019U))) 
                                         | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                             & (0x20U 
                                                == 
                                                (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x00000019U))) 
                                            | ((IData)(
                                                       (0x00003013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                               | ((IData)(
                                                          (0x00004013U 
                                                           == 
                                                           (0x0000707fU 
                                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                  | ((IData)(
                                                             (0x00006013U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                     | ((IData)(
                                                                (0x00007013U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                                              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                                       | (0x67U 
                                                                          == 
                                                                          (0x0000007fU 
                                                                           & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))))))))))))))));
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
        bufp->chgBit(oldp+177,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                          >> 0x00000019U)))));
        bufp->chgBit(oldp+178,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                             >> 0x00000019U)))));
        bufp->chgBit(oldp+179,((IData)((0x00001033U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+180,((IData)((0x00002033U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+181,((IData)((0x00003033U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+182,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                          >> 0x00000019U)))));
        bufp->chgBit(oldp+183,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                             >> 0x00000019U)))));
        bufp->chgBit(oldp+184,((IData)((0x00004033U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+185,((IData)((0x00006033U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+186,((IData)((0x00007033U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+187,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                 & (0U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                           >> 0x00000019U))) 
                                | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                    & (0x20U == (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x00000019U))) 
                                   | ((IData)((0x00001033U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                      | ((IData)((0x00002033U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                         | ((IData)(
                                                    (0x00003033U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                & (0U 
                                                   == 
                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                    >> 0x00000019U))) 
                                               | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                       >> 0x00000019U))) 
                                                  | ((IData)(
                                                             (0x00004033U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                     | ((IData)(
                                                                (0x00006033U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                        | (IData)(
                                                                  (0x00007033U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))))))))))));
        bufp->chgBit(oldp+188,((IData)((0x00002023U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+189,((IData)((0x00000023U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+190,((IData)((0x00001023U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+191,(((IData)((0x00002023U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                | ((IData)((0x00000023U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                   | (IData)((0x00001023U 
                                              == (0x0000707fU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
        bufp->chgBit(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
        bufp->chgBit(oldp+194,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
        bufp->chgBit(oldp+195,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
        bufp->chgBit(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
        bufp->chgBit(oldp+198,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
        bufp->chgBit(oldp+199,((0x37U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+200,((0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
        bufp->chgBit(oldp+202,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
        bufp->chgBit(oldp+203,((IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+204,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we) 
                                | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst) 
                                   | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+205,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
        bufp->chgBit(oldp+206,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
        bufp->chgSData(oldp+207,((0x00000fffU & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                               >> 0x0000001fU))) 
                                                   << 0x0000000cU) 
                                                  | (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                     >> 0x00000014U))
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000fe0U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001fU 
                                                         & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                            >> 7U))))
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J
                                                      : 0U))))))),12);
        bufp->chgBit(oldp+208,((1U & (~ (((IData)((0x00000013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                          | ((IData)(
                                                     (0x00002013U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                             | ((IData)(
                                                        (0x00001013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                    & (0U 
                                                       == 
                                                       (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                        >> 0x00000019U))) 
                                                   | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                                       & (0x20U 
                                                          == 
                                                          (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                           >> 0x00000019U))) 
                                                      | ((IData)(
                                                                 (0x00003013U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                         | ((IData)(
                                                                    (0x00004013U 
                                                                     == 
                                                                     (0x0000707fU 
                                                                      & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                            | ((IData)(
                                                                       (0x00006013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                               | ((IData)(
                                                                          (0x00007013U 
                                                                           == 
                                                                           (0x0000707fU 
                                                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                                                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                                              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                                                | (0x67U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))))))))))))) 
                                         | ((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                              & (0U 
                                                 == 
                                                 (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                  >> 0x00000019U))) 
                                             | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                     >> 0x00000019U))) 
                                                | ((IData)(
                                                           (0x00001033U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                   | ((IData)(
                                                              (0x00002033U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                      | ((IData)(
                                                                 (0x00003033U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                         | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                             & (0U 
                                                                == 
                                                                (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                                 >> 0x00000019U))) 
                                                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                                                & (0x20U 
                                                                   == 
                                                                   (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                                    >> 0x00000019U))) 
                                                               | ((IData)(
                                                                          (0x00004033U 
                                                                           == 
                                                                           (0x0000707fU 
                                                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                                  | ((IData)(
                                                                             (0x00006033U 
                                                                              == 
                                                                              (0x0000707fU 
                                                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                                     | (IData)(
                                                                               (0x00007033U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))))))))) 
                                            | (((IData)(
                                                        (0x00002023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                | ((IData)(
                                                           (0x00000023U 
                                                            == 
                                                            (0x0000707fU 
                                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                   | (IData)(
                                                             (0x00001023U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))))) 
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
                                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                                        | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we) 
                                                            | ((0x00000073U 
                                                                == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst) 
                                                               | (0x30200073U 
                                                                  == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))) 
                                                           | ((0x00100073U 
                                                               == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst) 
                                                              | (0x0000100fU 
                                                                 == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))))))))));
        bufp->chgCData(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__jump),2);
        bufp->chgCData(oldp+210,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch),3);
        bufp->chgCData(oldp+211,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type)
                                   ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we)
                                            ? 2U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                                             ? 3U : 0U)))),2);
        bufp->chgCData(oldp+212,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__alu_op),4);
        bufp->chgBit(oldp+213,(((0x6fU == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                | (0x17U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))));
        bufp->chgBit(oldp+214,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x23U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                   | ((0x17U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                      | (0x6fU == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))))));
        bufp->chgBit(oldp+215,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                                | ((0x33U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                   | ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we)))))));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csr_we));
        bufp->chgCData(oldp+217,(((IData)((0x00002023U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                   ? 0U : ((IData)(
                                                   (0x00000023U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                            ? 1U : 
                                           ((IData)(
                                                    (0x00001023U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)))
                                             ? 2U : 3U)))),2);
        bufp->chgCData(oldp+218,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                                   ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                             ? 2U : 
                                            ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                              ? 3U : 
                                             ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                               ? 4U
                                               : 5U)))))),3);
        bufp->chgCData(oldp+219,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+220,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)));
        bufp->chgIData(oldp+221,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I)
                                   ? (((- (IData)((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                         >> 0x00000014U))
                                   : ((0x23U == (0x0000007fU 
                                                 & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                       ? (((- (IData)(
                                                      (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                       >> 0x0000001fU))) 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                   >> 7U))))
                                       : ((0x63U == 
                                           (0x0000007fU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                           ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B
                                           : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U)
                                               ? (0xfffff000U 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst)
                                               : ((0x6fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst))
                                                   ? vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J
                                                   : 0U)))))),32);
        bufp->chgCData(oldp+222,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+223,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+224,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ifu_cpu_arvalid) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state)))));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
        bufp->chgIData(oldp+226,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B),32);
        bufp->chgIData(oldp+227,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J),32);
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_valid));
        bufp->chgCData(oldp+230,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w),2);
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata),32);
        bufp->chgBit(oldp+232,((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
        bufp->chgCData(oldp+233,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
        bufp->chgCData(oldp+234,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
        bufp->chgBit(oldp+235,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__req_store));
        bufp->chgBit(oldp+236,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
        bufp->chgBit(oldp+237,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
        bufp->chgCData(oldp+239,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state),2);
        bufp->chgCData(oldp+240,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count),2);
        bufp->chgCData(oldp+241,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0]),2);
        bufp->chgCData(oldp+242,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[1]),2);
        bufp->chgCData(oldp+243,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[2]),2);
        bufp->chgCData(oldp+244,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[3]),2);
        bufp->chgCData(oldp+245,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[4]),2);
        bufp->chgCData(oldp+246,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[5]),2);
        bufp->chgCData(oldp+247,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[6]),2);
        bufp->chgCData(oldp+248,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[7]),2);
        bufp->chgCData(oldp+249,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[8]),2);
        bufp->chgCData(oldp+250,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[9]),2);
        bufp->chgCData(oldp+251,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[10]),2);
        bufp->chgCData(oldp+252,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[11]),2);
        bufp->chgCData(oldp+253,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[12]),2);
        bufp->chgCData(oldp+254,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[13]),2);
        bufp->chgCData(oldp+255,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[14]),2);
        bufp->chgCData(oldp+256,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[15]),2);
        bufp->chgCData(oldp+257,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[16]),2);
        bufp->chgCData(oldp+258,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[17]),2);
        bufp->chgCData(oldp+259,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[18]),2);
        bufp->chgCData(oldp+260,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[19]),2);
        bufp->chgCData(oldp+261,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[20]),2);
        bufp->chgCData(oldp+262,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[21]),2);
        bufp->chgCData(oldp+263,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[22]),2);
        bufp->chgCData(oldp+264,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[23]),2);
        bufp->chgCData(oldp+265,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[24]),2);
        bufp->chgCData(oldp+266,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[25]),2);
        bufp->chgCData(oldp+267,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[26]),2);
        bufp->chgCData(oldp+268,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[27]),2);
        bufp->chgCData(oldp+269,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[28]),2);
        bufp->chgCData(oldp+270,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[29]),2);
        bufp->chgCData(oldp+271,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[30]),2);
        bufp->chgCData(oldp+272,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[31]),2);
        bufp->chgBit(oldp+273,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                                 & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o))));
        bufp->chgIData(oldp+274,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+275,(vlSelfRef.ysyx_26010027__DOT__icache_rdata),32);
        bufp->chgBit(oldp+276,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
        bufp->chgBit(oldp+277,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
        bufp->chgCData(oldp+278,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
        bufp->chgBit(oldp+279,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
        bufp->chgIData(oldp+280,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
        bufp->chgBit(oldp+281,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
        bufp->chgBit(oldp+282,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    }
    bufp->chgBit(oldp+283,(vlSelfRef.clock));
    bufp->chgBit(oldp+284,(vlSelfRef.reset));
    bufp->chgBit(oldp+285,(vlSelfRef.nothing));
    bufp->chgBit(oldp+286,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                            & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
    bufp->chgBit(oldp+287,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                             & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))) 
                            | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                               | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                  & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
    bufp->chgIData(oldp+288,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
