// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h02dc8855_0;
void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027___stl_sequent__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___stl_sequent__TOP__ysyx_26010027__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_EXU__DOT__lsu_exu_ready = (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)));
    if (vlSelfRef.__PVT__lsu_wbu_reg_w) {
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__waddr 
            = vlSelfRef.__PVT__lsu_wbu_waddr;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__wdata 
            = ((0U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))
                ? vlSelfRef.__PVT__lsu_wbu_alu_result
                : ((1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))
                    ? vlSelfRef.__PVT__lsu_wbu_mem_result
                    : ((2U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))
                        ? 0U : ((IData)(4U) + vlSelfRef.__PVT__lsu_wbu_pc))));
    } else {
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__waddr = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__wdata = 0U;
    }
    vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted = VL_SHIFTR_III(32,32,32, 
                                                                ((2U 
                                                                  == (IData)(vlSelfRef.__PVT__grant))
                                                                  ? vlSelfRef.__PVT__pmem_read_data
                                                                  : 0U), 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              (3U 
                                                                               & vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr), 3U));
    if ((2U == (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid 
            = vlSelfRef.__PVT__pmem_rvalid;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp 
            = vlSelfRef.__PVT__arb_rresp;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp 
            = vlSelfRef.__PVT__pmem_bresp;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid 
            = vlSelfRef.__PVT__pmem_bvalid;
    } else {
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid = 0U;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp = 0U;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp = 0U;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid = 0U;
    }
    vlSelfRef.__PVT__my_LSU__DOT__req_store = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid) 
                                               & ((~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__mem_done)) 
                                                  & (3U 
                                                     != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w))));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12 
        = (vlSelfRef.__PVT__idu_exu_imm + vlSelfRef.__PVT__idu_exu_pc);
    vlSelfRef.__PVT__my_EXU__DOT__lsu_load_inflight 
        = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__mem_done)) 
              & (5U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7 
        = ((IData)(vlSelfRef.__PVT__exu_lsu_waddr) 
           == (IData)(vlSelfRef.__PVT__idu_wbu_raddr1));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8 
        = ((IData)(vlSelfRef.__PVT__exu_lsu_waddr) 
           == (IData)(vlSelfRef.__PVT__idu_wbu_raddr2));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2 
        = ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) 
           == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 
        = ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) 
           == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr));
    vlSelfRef.__VdfgRegularize_hcab2a8af_1_3 = ((IData)(vlSelfRef.__PVT__exu_lsu_reg_w) 
                                                & ((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))));
    vlSelfRef.lsu_wbu_valid = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid) 
                               & ((~ ((5U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r)) 
                                      | (3U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w)))) 
                                  | (IData)(vlSelfRef.__PVT__my_LSU__DOT__mem_done)));
    vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid = 
        ((1U == (IData)(vlSelfRef.__PVT__grant)) & (IData)(vlSelfRef.__PVT__pmem_rvalid));
    vlSelfRef.__PVT__my_LSU__DOT__handshake_r = ((1U 
                                                  == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r)) 
                                                 & ((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp))));
    vlSelfRef.__PVT__my_LSU__DOT__handshake_b = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp))));
    vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_wvalid = 
        (((0U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w)) 
          | (1U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w))) 
         & (IData)(vlSelfRef.__PVT__my_LSU__DOT__req_store));
    vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_awvalid = 
        ((0U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w)) 
         & (IData)(vlSelfRef.__PVT__my_LSU__DOT__req_store));
    vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_arvalid = 
        ((0U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r)) 
         & (IData)(vlSelfRef.__PVT__my_EXU__DOT__lsu_load_inflight));
    vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready = (1U 
                                                   & ((~ 
                                                       (((0U 
                                                          != (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) 
                                                         & ((IData)(vlSelfRef.__PVT__exu_lsu_reg_w) 
                                                            & ((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
                                                               & ((1U 
                                                                   == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res)) 
                                                                  & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7))))) 
                                                        | (((0U 
                                                             != (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) 
                                                            & ((IData)(vlSelfRef.__PVT__exu_lsu_reg_w) 
                                                               & ((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
                                                                  & ((1U 
                                                                      == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res)) 
                                                                     & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8))))) 
                                                           | (((0U 
                                                                != (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) 
                                                               & ((IData)(vlSelfRef.__PVT__my_EXU__DOT__lsu_load_inflight) 
                                                                  & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2))) 
                                                              | ((0U 
                                                                  != (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) 
                                                                 & ((IData)(vlSelfRef.__PVT__my_EXU__DOT__lsu_load_inflight) 
                                                                    & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))))))) 
                                                      & ((~ (IData)(vlSelfRef.__PVT__exu_lsu_valid)) 
                                                         | (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)))));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13 
        = ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) 
           & (IData)(vlSelfRef.lsu_wbu_valid));
    vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rdata = (
                                                   (1U 
                                                    == (IData)(vlSelfRef.__PVT__grant))
                                                    ? vlSelfRef.__PVT__pmem_read_data
                                                    : 0U);
    vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst = ((IData)(vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid)
                                                   ? vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rdata
                                                   : vlSelfRef.__PVT__my_IFU__DOT__inst_latch);
    vlSelfRef.__PVT__arb_awvalid = ((2U == (IData)(vlSelfRef.__PVT__grant)) 
                                    & (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_awvalid));
    vlSelfRef.__PVT__exu_flush = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
                                       & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready)) 
                                      && ((0U != (IData)(vlSelfRef.__PVT__idu_exu_jump)) 
                                          | (6U != (IData)(vlSelfRef.__PVT__idu_exu_branch)))));
    vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__idu_exu_valid)) 
                                                      | (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready)));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15 
        = ((0U != (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) 
           & ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2) 
              & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14 
        = ((0U != (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) 
           & ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
              & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)));
    vlSelfRef.__PVT__my_IDU__DOT__inst_I = ((0x13U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                            | ((3U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                               | ((0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                                  | (0x73U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))));
    vlSelfRef.__PVT__my_IFU__DOT__imm_B = (((- (IData)(
                                                       (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                        >> 0x0000001fU))) 
                                            << 0x0000000cU) 
                                           | ((0x00000800U 
                                               & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                  << 4U)) 
                                              | ((0x000007e0U 
                                                  & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001eU 
                                                    & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                       >> 7U)))));
    vlSelfRef.__PVT__my_IFU__DOT__imm_J = ((((0x00000ffeU 
                                              & ((- (IData)(
                                                            (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                             >> 0x0000001fU))) 
                                                 << 1U)) 
                                             | (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                >> 0x0000001fU)) 
                                            << 0x00000014U) 
                                           | ((((0x000001feU 
                                                 & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                      >> 0x00000014U))) 
                                               << 0x0000000bU) 
                                              | (0x000007feU 
                                                 & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                    >> 0x00000014U))));
    vlSelfRef.__PVT__my_IFU__DOT__jump = ((0x6fU == 
                                           (0x0000007fU 
                                            & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                          | (0x67U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__inst_U = ((0x37U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                            | (0x17U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__addi = (IData)((0x00000013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__slti = (IData)((0x00002013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__slli = (IData)((0x00001013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__sltiu = (IData)((0x00003013U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__xori = (IData)((0x00004013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__ori = (IData)((0x00006013U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__andi = (IData)((0x00007013U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__sll = (IData)((0x00001033U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__slt = (IData)((0x00002033U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__sltu = (IData)((0x00003033U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__r_xor = (IData)((0x00004033U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__r_or = (IData)((0x00006033U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__r_and = (IData)((0x00007033U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__sw = (IData)((0x00002023U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__sb = (IData)((0x00000023U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__sh = (IData)((0x00001023U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__csrrw = (IData)((0x00001073U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__csrrs = (IData)((0x00002073U 
                                                   == 
                                                   (0x0000707fU 
                                                    & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__lbu = (IData)((0x00004003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__lhu = (IData)((0x00005003U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__lw = (IData)((0x00002003U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__lh = (IData)((0x00001003U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__lb = (IData)((3U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__bne = (IData)((0x00001063U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__beq = (IData)((0x00000063U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__blt = (IData)((0x00004063U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__bge = (IData)((0x00005063U 
                                                 == 
                                                 (0x0000707fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__bltu = (IData)((0x00006063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IDU__DOT__bgeu = (IData)((0x00007063U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 
        = (IData)((0x00005013U == (0x0000707fU & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 
        = (IData)((0x00000033U == (0x0000707fU & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 
        = (IData)((0x00005033U == (0x0000707fU & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)));
    vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_arvalid = 
        ((0U == (IData)(vlSelfRef.__PVT__my_IFU__DOT__state)) 
         & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready));
    vlSelfRef.__PVT__arb_arvalid = ((1U == (IData)(vlSelfRef.__PVT__grant))
                                     ? (IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_arvalid)
                                     : (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_arvalid));
    vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready = 
        ((1U == (IData)(vlSelfRef.__PVT__my_IFU__DOT__state)) 
         & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready));
    vlSelfRef.__PVT__my_EXU__DOT__rs1 = (((0U != (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) 
                                          & ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hcab2a8af_1_3)))
                                          ? vlSelfRef.__PVT__exu_lsu_alu_result
                                          : (((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)))
                                              ? vlSelfRef.__PVT__lsu_wbu_alu_result
                                              : (((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)))
                                                  ? vlSelfRef.__PVT__lsu_wbu_mem_result
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__idu_exu_alu_arc1)
                                                   ? vlSelfRef.__PVT__idu_exu_pc
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__idu_wbu_raddr1))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf
                                                   [
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.__PVT__idu_wbu_raddr1))])))));
    vlSelfRef.__PVT__my_EXU__DOT__rs2 = (((0U != (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) 
                                          & ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hcab2a8af_1_3)))
                                          ? vlSelfRef.__PVT__exu_lsu_alu_result
                                          : (((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)))
                                              ? vlSelfRef.__PVT__lsu_wbu_alu_result
                                              : (((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)))
                                                  ? vlSelfRef.__PVT__lsu_wbu_mem_result
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__idu_exu_alu_arc2)
                                                   ? vlSelfRef.__PVT__idu_exu_imm
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__idu_wbu_raddr2))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf
                                                   [
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.__PVT__idu_wbu_raddr2))])))));
    vlSelfRef.__PVT__my_IDU__DOT__jump = ((IData)(vlSelfRef.__PVT__my_IFU__DOT__jump)
                                           ? 1U : (
                                                   (0x00000073U 
                                                    == vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)
                                                    ? 2U
                                                    : 
                                                   ((0x30200073U 
                                                     == vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)
                                                     ? 3U
                                                     : 0U)));
    vlSelfRef.__PVT__my_IDU__DOT__csr_we = ((IData)(vlSelfRef.__PVT__my_IDU__DOT__csrrw) 
                                            | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__csrrs) 
                                               | (IData)(
                                                         (0x00003073U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))));
    vlSelfRef.__PVT__my_IDU__DOT__ld_type = ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lbu) 
                                             | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lhu) 
                                                | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lw) 
                                                   | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lh) 
                                                      | (IData)(vlSelfRef.__PVT__my_IDU__DOT__lb)))));
    vlSelfRef.__Vtableidx5 = ((((IData)(vlSelfRef.__PVT__my_IDU__DOT__bgeu) 
                                << 5U) | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__bltu) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.__PVT__my_IDU__DOT__bge) 
                                           << 3U))) 
                              | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__blt) 
                                  << 2U) | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__beq) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__my_IDU__DOT__bne))));
    vlSelfRef.__PVT__my_IDU__DOT__branch = Vysyx_26010027__ConstPool__TABLE_h02dc8855_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.__PVT__my_IDU__DOT__srli = ((IData)(vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                          & (0U == 
                                             (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                              >> 0x00000019U)));
    vlSelfRef.__PVT__my_IDU__DOT__srai = ((IData)(vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4) 
                                          & (0x20U 
                                             == (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                 >> 0x00000019U)));
    vlSelfRef.__PVT__my_IDU__DOT__add = ((IData)(vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                         & (0U == (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                   >> 0x00000019U)));
    vlSelfRef.__PVT__my_IDU__DOT__sub = ((IData)(vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                                         & (0x20U == 
                                            (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                             >> 0x00000019U)));
    vlSelfRef.__PVT__my_IDU__DOT__srl = ((IData)(vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                         & (0U == (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                   >> 0x00000019U)));
    vlSelfRef.__PVT__my_IDU__DOT__sra = ((IData)(vlSelfRef.my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12) 
                                         & (0x20U == 
                                            (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                             >> 0x00000019U)));
    vlSelfRef.__PVT__my_IFU__DOT__handshake_r = ((IData)(vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid) 
                                                 & ((IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__cpu_ifu_rresp))));
    vlSelfRef.__PVT__my_EXU__DOT__mid = (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                         - vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 
        = VL_LTS_III(32, vlSelfRef.__PVT__my_EXU__DOT__rs1, vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11 
        = (vlSelfRef.__PVT__my_EXU__DOT__rs1 < vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_IDU__DOT____VdfgExtracted_h0084629c__0 
        = ((~ (((IData)(vlSelfRef.__PVT__my_IDU__DOT__addi) 
                | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__slti) 
                   | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__slli) 
                      | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__srli) 
                         | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__srai) 
                            | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sltiu) 
                               | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__xori) 
                                  | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__ori) 
                                     | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__andi) 
                                        | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lbu) 
                                           | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lhu) 
                                              | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lw) 
                                                 | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lh) 
                                                    | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lb) 
                                                       | (0x67U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))))))))))))))) 
               | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__add) 
                   | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sub) 
                      | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sll) 
                         | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__slt) 
                            | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sltu) 
                               | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__srl) 
                                  | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sra) 
                                     | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__r_xor) 
                                        | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__r_or) 
                                           | (IData)(vlSelfRef.__PVT__my_IDU__DOT__r_and)))))))))) 
                  | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__sw) 
                      | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sb) 
                         | (IData)(vlSelfRef.__PVT__my_IDU__DOT__sh))) 
                     | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__bne) 
                         | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__beq) 
                            | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__blt) 
                               | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__bge) 
                                  | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__bltu) 
                                     | (IData)(vlSelfRef.__PVT__my_IDU__DOT__bgeu)))))) 
                        | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__inst_U) 
                           | ((0x6fU == (0x0000007fU 
                                         & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                              | (((IData)(vlSelfRef.__PVT__my_IDU__DOT__csr_we) 
                                  | ((0x00000073U == vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst) 
                                     | (0x30200073U 
                                        == vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst))) 
                                 | ((0x00100073U == vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst) 
                                    | (0x0000100fU 
                                       == vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))))))))) 
           & (0U != vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst));
    vlSelfRef.__PVT__my_EXU__DOT__result = ((8U & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? 0U
                                                   : vlSelfRef.__PVT__my_EXU__DOT__rs1))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? 
                                                  (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                   | vlSelfRef.__PVT__my_EXU__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                   & vlSelfRef.__PVT__my_EXU__DOT__rs2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? 
                                                  (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                   ^ vlSelfRef.__PVT__my_EXU__DOT__rs2)
                                                   : (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11))))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11)
                                                   : (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__my_EXU__DOT__rs1, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.__PVT__my_EXU__DOT__rs2))
                                                   : 
                                                  (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.__PVT__my_EXU__DOT__rs2))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? 
                                                  (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.__PVT__my_EXU__DOT__rs2))
                                                   : vlSelfRef.__PVT__idu_exu_imm)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__idu_exu_alu_op))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.__PVT__idu_exu_branch))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__idu_exu_branch))
                                                     ? vlSelfRef.__PVT__my_EXU__DOT__mid
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__idu_exu_branch))
                                                      ? 
                                                     ((vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                       >= vlSelfRef.__PVT__my_EXU__DOT__rs2)
                                                       ? vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.__PVT__idu_exu_pc))
                                                      : 
                                                     ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11)
                                                       ? vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.__PVT__idu_exu_pc))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__idu_exu_branch))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__idu_exu_branch))
                                                      ? 
                                                     (VL_GTES_III(32, vlSelfRef.__PVT__my_EXU__DOT__rs1, vlSelfRef.__PVT__my_EXU__DOT__rs2)
                                                       ? vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.__PVT__idu_exu_pc))
                                                      : 
                                                     ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10)
                                                       ? vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.__PVT__idu_exu_pc)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__idu_exu_branch))
                                                      ? 
                                                     ((0U 
                                                       == vlSelfRef.__PVT__my_EXU__DOT__mid)
                                                       ? vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.__PVT__idu_exu_pc))
                                                      : 
                                                     ((0U 
                                                       == vlSelfRef.__PVT__my_EXU__DOT__mid)
                                                       ? 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.__PVT__idu_exu_pc)
                                                       : vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12))))
                                                   : 
                                                  (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                                   + vlSelfRef.__PVT__my_EXU__DOT__rs2)))));
    if (vlSelfRef.my_IDU__DOT____VdfgExtracted_h0084629c__0) {
        Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
    vlSelfRef.__PVT__my_IFU__DOT__next_pc = ((IData)(vlSelfRef.__PVT__exu_flush)
                                              ? ((IData)(vlSymsp->TOP.reset)
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
                                                   & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready))
                                                   ? 
                                                  (((0U 
                                                     != (IData)(vlSelfRef.__PVT__idu_exu_jump)) 
                                                    | (6U 
                                                       != (IData)(vlSelfRef.__PVT__idu_exu_branch)))
                                                    ? 
                                                   (((0U 
                                                      != (IData)(vlSelfRef.__PVT__idu_exu_jump)) 
                                                     | (6U 
                                                        != (IData)(vlSelfRef.__PVT__idu_exu_branch)))
                                                     ? vlSelfRef.__PVT__my_EXU__DOT__result
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.__PVT__idu_exu_pc))
                                                    : 0U)
                                                   : 0U))
                                              : ((0x63U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst))
                                                  ? 
                                                 (vlSelfRef.__PVT__ifu_idu_pc 
                                                  + vlSelfRef.__PVT__my_IFU__DOT__imm_B)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__my_IFU__DOT__jump)
                                                   ? 
                                                  (vlSelfRef.__PVT__ifu_idu_pc 
                                                   + vlSelfRef.__PVT__my_IFU__DOT__imm_J)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.__PVT__ifu_idu_pc))));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027___ctor_var_reset(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___ctor_var_reset\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->nothing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17836210167517520960ull);
    vlSelf->__PVT__arb_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1232570018901271965ull);
    vlSelf->__PVT__arb_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17362420493246550151ull);
    vlSelf->__PVT__arb_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14695357915731239492ull);
    vlSelf->__PVT__arb_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12732154952695290848ull);
    vlSelf->__PVT__arb_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14029062802745425764ull);
    vlSelf->__PVT__arb_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7614817519861299784ull);
    vlSelf->__PVT__pmem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9458859946277510535ull);
    vlSelf->__PVT__pmem_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4737722959129694750ull);
    vlSelf->__PVT__pmem_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6133526519962897352ull);
    vlSelf->__PVT__pmem_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12455403094663776374ull);
    vlSelf->__PVT__pmem_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16758099598794371793ull);
    vlSelf->__PVT__pmem_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10237736142551000564ull);
    vlSelf->__PVT__ifu_idu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14371617750656682084ull);
    vlSelf->__PVT__ifu_idu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686918125687587890ull);
    vlSelf->__PVT__cpu_ifu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11000008308430698012ull);
    vlSelf->__PVT__cpu_ifu_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11192571458016751655ull);
    vlSelf->__PVT__cpu_ifu_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 574719463867346499ull);
    vlSelf->__PVT__icache_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4403364200429934240ull);
    vlSelf->__PVT__icache_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13697126626524858745ull);
    vlSelf->__PVT__icache_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6567169402611116825ull);
    vlSelf->__PVT__icache_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14158847878628772022ull);
    vlSelf->__PVT__idu_exu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3667902548427312410ull);
    vlSelf->__PVT__idu_exu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5601031467851036200ull);
    vlSelf->__PVT__idu_exu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13621274918108753720ull);
    vlSelf->__PVT__idu_exu_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3382672417083866813ull);
    vlSelf->__PVT__idu_exu_alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9539579576103590657ull);
    vlSelf->__PVT__idu_exu_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5938485070278428068ull);
    vlSelf->__PVT__idu_exu_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14217957160770561798ull);
    vlSelf->__PVT__idu_exu_alu_arc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16389855128689802251ull);
    vlSelf->__PVT__idu_exu_alu_arc2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5086812622032467558ull);
    vlSelf->__PVT__idu_exu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3361143315910248485ull);
    vlSelf->__PVT__idu_exu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17870044299691500493ull);
    vlSelf->__PVT__idu_exu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1603175283786291759ull);
    vlSelf->__PVT__idu_exu_jump = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11907574008471320917ull);
    vlSelf->__PVT__idu_exu_branch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 293437243093547106ull);
    vlSelf->__PVT__idu_wbu_raddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6503143500796745143ull);
    vlSelf->__PVT__idu_wbu_raddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14401585879293550172ull);
    vlSelf->__PVT__exu_lsu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15907641580100121387ull);
    vlSelf->__PVT__exu_lsu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18234735619894488717ull);
    vlSelf->__PVT__exu_lsu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5062588424509372868ull);
    vlSelf->__PVT__exu_lsu_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15051009589663021510ull);
    vlSelf->__PVT__exu_lsu_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5757054759557756680ull);
    vlSelf->__PVT__exu_lsu_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14897376209994633664ull);
    vlSelf->__PVT__exu_lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10611043150164332298ull);
    vlSelf->__PVT__exu_lsu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17122993046965594649ull);
    vlSelf->__PVT__exu_lsu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15258802598644843815ull);
    vlSelf->__PVT__exu_lsu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6672747562969528322ull);
    vlSelf->__PVT__exu_lsu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5902197904464830595ull);
    vlSelf->__PVT__exu_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9574981724881550454ull);
    vlSelf->lsu_wbu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652334751880033759ull);
    vlSelf->__PVT__lsu_wbu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3617157319308945984ull);
    vlSelf->__PVT__lsu_wbu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4521485598998237108ull);
    vlSelf->__PVT__lsu_wbu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 25816388150553717ull);
    vlSelf->__PVT__lsu_wbu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1522593543870129406ull);
    vlSelf->__PVT__lsu_wbu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5842538283110212528ull);
    vlSelf->__PVT__lsu_wbu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9970364371346125120ull);
    vlSelf->__PVT__lsu_wbu_mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11453650951010209917ull);
    vlSelf->__PVT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 741988092961692266ull);
    vlSelf->__PVT__my_IFU__DOT__idu_ifu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2402562341553053422ull);
    vlSelf->__PVT__my_IFU__DOT__ifu_idu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6426341485491471718ull);
    vlSelf->__PVT__my_IFU__DOT__ifu_cpu_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2004638260100319524ull);
    vlSelf->__PVT__my_IFU__DOT__cpu_ifu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13214395621189688065ull);
    vlSelf->__PVT__my_IFU__DOT__ifu_cpu_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17846429642665766716ull);
    vlSelf->__PVT__my_IFU__DOT__cpu_ifu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12538085237574333831ull);
    vlSelf->__PVT__my_IFU__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5543296451849231428ull);
    vlSelf->__PVT__my_IFU__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2405861009728256364ull);
    vlSelf->__PVT__my_IFU__DOT__inst_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13174741350590099829ull);
    vlSelf->__PVT__my_IFU__DOT__imm_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2106109593370118861ull);
    vlSelf->__PVT__my_IFU__DOT__imm_J = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7197515495993174271ull);
    vlSelf->__PVT__my_IFU__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2193525945026142532ull);
    vlSelf->__PVT__my_IFU__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1285239871851085386ull);
    vlSelf->__PVT__my_IDU__DOT__inst_I = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9700772868496184346ull);
    vlSelf->__PVT__my_IDU__DOT__inst_U = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3278769668278126877ull);
    vlSelf->__PVT__my_IDU__DOT__addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14183151575985288661ull);
    vlSelf->__PVT__my_IDU__DOT__slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10746601473872827648ull);
    vlSelf->__PVT__my_IDU__DOT__slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6924957383613707303ull);
    vlSelf->__PVT__my_IDU__DOT__srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 952324952647241356ull);
    vlSelf->__PVT__my_IDU__DOT__srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4865687372550559967ull);
    vlSelf->__PVT__my_IDU__DOT__sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10878910578124101650ull);
    vlSelf->__PVT__my_IDU__DOT__xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2674924240229784293ull);
    vlSelf->__PVT__my_IDU__DOT__ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15380612826585504512ull);
    vlSelf->__PVT__my_IDU__DOT__andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7204780813255158615ull);
    vlSelf->__PVT__my_IDU__DOT__lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16215175729698477807ull);
    vlSelf->__PVT__my_IDU__DOT__lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16447016543755989469ull);
    vlSelf->__PVT__my_IDU__DOT__lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7707654478688479645ull);
    vlSelf->__PVT__my_IDU__DOT__lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15306394313056916900ull);
    vlSelf->__PVT__my_IDU__DOT__lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4834984752974443079ull);
    vlSelf->__PVT__my_IDU__DOT__ld_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5311542644609935056ull);
    vlSelf->__PVT__my_IDU__DOT__add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 538022271096084438ull);
    vlSelf->__PVT__my_IDU__DOT__sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9099984770078180772ull);
    vlSelf->__PVT__my_IDU__DOT__sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6112057306169143546ull);
    vlSelf->__PVT__my_IDU__DOT__slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231734461868632217ull);
    vlSelf->__PVT__my_IDU__DOT__sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3469941806301082125ull);
    vlSelf->__PVT__my_IDU__DOT__srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16097450574061770158ull);
    vlSelf->__PVT__my_IDU__DOT__sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15921173704914147500ull);
    vlSelf->__PVT__my_IDU__DOT__r_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4067727052730085365ull);
    vlSelf->__PVT__my_IDU__DOT__r_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6196259638349877221ull);
    vlSelf->__PVT__my_IDU__DOT__r_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10340113992733615061ull);
    vlSelf->__PVT__my_IDU__DOT__sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13819645425329361727ull);
    vlSelf->__PVT__my_IDU__DOT__sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16450507849035629285ull);
    vlSelf->__PVT__my_IDU__DOT__sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16008184817846388448ull);
    vlSelf->__PVT__my_IDU__DOT__bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3888010287220569836ull);
    vlSelf->__PVT__my_IDU__DOT__beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13394218198599818050ull);
    vlSelf->__PVT__my_IDU__DOT__blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 954098555156909850ull);
    vlSelf->__PVT__my_IDU__DOT__bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895103069761916718ull);
    vlSelf->__PVT__my_IDU__DOT__bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8170103408406470969ull);
    vlSelf->__PVT__my_IDU__DOT__bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6661306853467763955ull);
    vlSelf->__PVT__my_IDU__DOT__csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12335541138013786659ull);
    vlSelf->__PVT__my_IDU__DOT__csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9520144412040412107ull);
    vlSelf->__PVT__my_IDU__DOT__jump = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2084310299349075241ull);
    vlSelf->__PVT__my_IDU__DOT__branch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2803922358053641630ull);
    vlSelf->__PVT__my_IDU__DOT__csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653521218591113149ull);
    vlSelf->my_IDU__DOT____VdfgExtracted_h0084629c__0 = 0;
    vlSelf->my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4 = 0;
    vlSelf->my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11 = 0;
    vlSelf->my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12 = 0;
    vlSelf->__PVT__my_EXU__DOT__exu_idu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4938014503836095943ull);
    vlSelf->__PVT__my_EXU__DOT__lsu_exu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15711306428670176556ull);
    vlSelf->__PVT__my_EXU__DOT__lsu_load_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5183460295611869101ull);
    vlSelf->__PVT__my_EXU__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3375265093868932751ull);
    vlSelf->__PVT__my_EXU__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18092652491546959696ull);
    vlSelf->__PVT__my_EXU__DOT__mid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2900692155287794461ull);
    vlSelf->__PVT__my_EXU__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16599972878776496114ull);
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14 = 0;
    vlSelf->my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15 = 0;
    vlSelf->__PVT__my_LSU__DOT__lsu_cpu_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12838312268910401612ull);
    vlSelf->__PVT__my_LSU__DOT__cpu_lsu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15913577180945297599ull);
    vlSelf->__PVT__my_LSU__DOT__cpu_lsu_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12260594977734441412ull);
    vlSelf->__PVT__my_LSU__DOT__lsu_cpu_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4746046120451288130ull);
    vlSelf->__PVT__my_LSU__DOT__lsu_cpu_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14105350508464985680ull);
    vlSelf->__PVT__my_LSU__DOT__cpu_lsu_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3886854866958260040ull);
    vlSelf->__PVT__my_LSU__DOT__cpu_lsu_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6914346447177790176ull);
    vlSelf->__PVT__my_LSU__DOT__l_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6610340618832581161ull);
    vlSelf->__PVT__my_LSU__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1005453673548847849ull);
    vlSelf->__PVT__my_LSU__DOT__l_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14259493723382604210ull);
    vlSelf->__PVT__my_LSU__DOT__l_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14727225620831913027ull);
    vlSelf->__PVT__my_LSU__DOT__l_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13550281039112257979ull);
    vlSelf->__PVT__my_LSU__DOT__l_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8729885426027966473ull);
    vlSelf->__PVT__my_LSU__DOT__state_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10803024306436275214ull);
    vlSelf->__PVT__my_LSU__DOT__state_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6324777597958112444ull);
    vlSelf->__PVT__my_LSU__DOT__req_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2570821120996829265ull);
    vlSelf->__PVT__my_LSU__DOT__rdata_shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11349547269282798608ull);
    vlSelf->__PVT__my_LSU__DOT__handshake_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6312638168787726960ull);
    vlSelf->__PVT__my_LSU__DOT__handshake_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7744554924522890443ull);
    vlSelf->__PVT__my_WBU__DOT__my_gpr__DOT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15291083161809276791ull);
    vlSelf->__PVT__my_WBU__DOT__my_gpr__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7023803175736767152ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_WBU__DOT__my_gpr__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4427045335049911852ull);
    }
    vlSelf->__PVT__my_WBU__DOT__my_gpr__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1596898924444063234ull);
    vlSelf->__VdfgRegularize_hcab2a8af_1_3 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vdly__grant = 0;
    vlSelf->__Vdly__ifu_idu_valid = 0;
    vlSelf->__Vdly__idu_exu_jump = 0;
    vlSelf->__Vdly__idu_exu_waddr = 0;
    vlSelf->__Vdly__idu_exu_inst = 0;
    vlSelf->__Vdly__idu_exu_pc = 0;
    vlSelf->__Vdly__idu_exu_branch = 0;
    vlSelf->__Vdly__exu_lsu_pc = 0;
    vlSelf->__Vdly__exu_lsu_inst = 0;
    vlSelf->__Vdly__exu_lsu_mem_w = 0;
    vlSelf->__Vdly__exu_lsu_mem_addr = 0;
    vlSelf->__Vdly__my_LSU__DOT__state_w = 0;
    vlSelf->__Vdly__my_LSU__DOT__state_r = 0;
    vlSelf->__Vdly__my_LSU__DOT__l_valid = 0;
}
