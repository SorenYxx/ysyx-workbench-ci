// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027___ico_sequent__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___ico_sequent__TOP__ysyx_26010027__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__exu_flush = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
                                       & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready)) 
                                      && ((0U != (IData)(vlSelfRef.__PVT__idu_exu_jump)) 
                                          | (6U != (IData)(vlSelfRef.__PVT__idu_exu_branch)))));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13 
        = ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) 
           & (IData)(vlSelfRef.lsu_wbu_valid));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_15 
        = ((0U != (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) 
           & ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2) 
              & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)));
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_14 
        = ((0U != (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) 
           & ((IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4) 
              & (IData)(vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_13)));
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
    vlSelfRef.__PVT__my_EXU__DOT__mid = (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                         - vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 
        = VL_LTS_III(32, vlSelfRef.__PVT__my_EXU__DOT__rs1, vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11 
        = (vlSelfRef.__PVT__my_EXU__DOT__rs1 < vlSelfRef.__PVT__my_EXU__DOT__rs2);
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

extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_26010027__ConstPool__TABLE_hce441473_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_26010027__ConstPool__TABLE_h9a46d3c3_0;
void Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ r);
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_26010027__ConstPool__TABLE_h50b6148b_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_26010027__ConstPool__TABLE_h12a8eb2a_0;

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vdly__idu_exu_rf_res;
    __Vdly__idu_exu_rf_res = 0;
    CData/*2:0*/ __Vdly__idu_exu_mem_r;
    __Vdly__idu_exu_mem_r = 0;
    CData/*1:0*/ __Vdly__idu_exu_mem_w;
    __Vdly__idu_exu_mem_w = 0;
    IData/*31:0*/ __Vdly__exu_lsu_alu_result;
    __Vdly__exu_lsu_alu_result = 0;
    CData/*2:0*/ __Vdly__exu_lsu_mem_r;
    __Vdly__exu_lsu_mem_r = 0;
    CData/*0:0*/ __Vdly__exu_lsu_reg_w;
    __Vdly__exu_lsu_reg_w = 0;
    CData/*1:0*/ __Vdly__exu_lsu_rf_res;
    __Vdly__exu_lsu_rf_res = 0;
    CData/*4:0*/ __Vdly__exu_lsu_waddr;
    __Vdly__exu_lsu_waddr = 0;
    CData/*0:0*/ __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v0;
    __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlyVal__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    CData/*3:0*/ __VdlyDim0__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlyDim0__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    CData/*0:0*/ __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v16;
    __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0;
    // Body
    vlSelfRef.__Vdly__ifu_idu_valid = vlSelfRef.__PVT__ifu_idu_valid;
    __Vdly__idu_exu_rf_res = vlSelfRef.__PVT__idu_exu_rf_res;
    vlSelfRef.__Vdly__idu_exu_jump = vlSelfRef.__PVT__idu_exu_jump;
    __Vdly__idu_exu_mem_w = vlSelfRef.__PVT__idu_exu_mem_w;
    vlSelfRef.__Vdly__idu_exu_branch = vlSelfRef.__PVT__idu_exu_branch;
    __Vdly__idu_exu_mem_r = vlSelfRef.__PVT__idu_exu_mem_r;
    vlSelfRef.__Vdly__exu_lsu_mem_w = vlSelfRef.__PVT__exu_lsu_mem_w;
    __Vdly__exu_lsu_mem_r = vlSelfRef.__PVT__exu_lsu_mem_r;
    vlSelfRef.__Vdly__exu_lsu_inst = vlSelfRef.__PVT__exu_lsu_inst;
    vlSelfRef.__Vdly__exu_lsu_mem_addr = vlSelfRef.__PVT__exu_lsu_mem_addr;
    vlSelfRef.__Vdly__exu_lsu_pc = vlSelfRef.__PVT__exu_lsu_pc;
    vlSelfRef.__Vdly__idu_exu_pc = vlSelfRef.__PVT__idu_exu_pc;
    __Vdly__exu_lsu_alu_result = vlSelfRef.__PVT__exu_lsu_alu_result;
    __Vdly__exu_lsu_reg_w = vlSelfRef.__PVT__exu_lsu_reg_w;
    __Vdly__exu_lsu_rf_res = vlSelfRef.__PVT__exu_lsu_rf_res;
    __Vdly__exu_lsu_waddr = vlSelfRef.__PVT__exu_lsu_waddr;
    vlSelfRef.__Vdly__idu_exu_waddr = vlSelfRef.__PVT__idu_exu_waddr;
    vlSelfRef.__Vdly__idu_exu_inst = vlSelfRef.__PVT__idu_exu_inst;
    vlSelfRef.__Vdly__my_LSU__DOT__l_valid = vlSelfRef.__PVT__my_LSU__DOT__l_valid;
    vlSelfRef.__Vdly__my_LSU__DOT__state_r = vlSelfRef.__PVT__my_LSU__DOT__state_r;
    vlSelfRef.__Vdly__my_LSU__DOT__state_w = vlSelfRef.__PVT__my_LSU__DOT__state_w;
    __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v0 = 0U;
    __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v16 = 0U;
    vlSelfRef.__Vdly__grant = vlSelfRef.__PVT__grant;
    __Vdly__exu_lsu_reg_w = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
                                  & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready))
                                  ? (IData)(vlSelfRef.__PVT__idu_exu_reg_w)
                                  : (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)));
    vlSelfRef.__PVT__idu_exu_reg_w = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
                                           & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))
                                           ? ((IData)(vlSelfRef.__PVT__my_IDU__DOT__inst_I) 
                                              | ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                                 | ((0x6fU 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                                    | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__inst_U) 
                                                       | (IData)(vlSelfRef.__PVT__my_IDU__DOT__csr_we)))))
                                           : (IData)(vlSelfRef.__PVT__idu_exu_reg_w)));
    vlSelfRef.__PVT__idu_exu_alu_arc1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
                                              & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))
                                              ? ((0x6fU 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                                 | (0x17U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))
                                              : (IData)(vlSelfRef.__PVT__idu_exu_alu_arc1)));
    vlSelfRef.__PVT__idu_exu_alu_arc2 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
                                              & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))
                                              ? ((IData)(vlSelfRef.__PVT__my_IDU__DOT__inst_I) 
                                                 | ((0x23U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))))
                                              : (IData)(vlSelfRef.__PVT__idu_exu_alu_arc2)));
    __Vtableidx4 = ((((IData)(vlSelfRef.__PVT__my_LSU__DOT__handshake_r) 
                      << 4U) | ((((2U == (IData)(vlSelfRef.__PVT__grant)) 
                                  & (IData)(vlSelfRef.__PVT__arb_arvalid)) 
                                 & (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_arvalid)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0
        [__Vtableidx4]) {
        vlSelfRef.__Vdly__my_LSU__DOT__state_r = Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0
            [__Vtableidx4];
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.__PVT__my_IFU__DOT__handshake_r) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_arvalid) 
                                 & ((1U == (IData)(vlSelfRef.__PVT__grant)) 
                                    & (IData)(vlSelfRef.__PVT__arb_arvalid))) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__my_IFU__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hf4dcf818_0
        [__Vtableidx2]) {
        vlSelfRef.__PVT__my_IFU__DOT__state = Vysyx_26010027__ConstPool__TABLE_h5bf68e37_0
            [__Vtableidx2];
    }
    __Vtableidx3 = ((((IData)(vlSelfRef.__PVT__my_LSU__DOT__handshake_b) 
                      << 6U) | (((((2U == (IData)(vlSelfRef.__PVT__grant)) 
                                   & (IData)(vlSelfRef.__PVT__pmem_wready)) 
                                  & (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_wvalid)) 
                                 << 5U) | ((((2U == (IData)(vlSelfRef.__PVT__grant)) 
                                             & (IData)(vlSelfRef.__PVT__arb_awvalid)) 
                                            & (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_awvalid)) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w) 
                        << 1U) | (IData)(vlSymsp->TOP.reset)));
    if (Vysyx_26010027__ConstPool__TABLE_hce441473_0
        [__Vtableidx3]) {
        vlSelfRef.__Vdly__my_LSU__DOT__state_w = Vysyx_26010027__ConstPool__TABLE_h9a46d3c3_0
            [__Vtableidx3];
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__ifu_idu_valid = 0U;
        __Vdly__idu_exu_rf_res = 0U;
        vlSelfRef.__Vdly__idu_exu_jump = 0U;
        __Vdly__idu_exu_mem_w = 0U;
        vlSelfRef.__Vdly__idu_exu_branch = 6U;
        __Vdly__idu_exu_mem_r = 0U;
        vlSelfRef.__Vdly__exu_lsu_mem_w = 0U;
        __Vdly__exu_lsu_mem_r = 0U;
        vlSelfRef.__Vdly__exu_lsu_inst = 0U;
        vlSelfRef.__Vdly__exu_lsu_mem_addr = 0U;
        vlSelfRef.__Vdly__exu_lsu_pc = 0U;
        vlSelfRef.__Vdly__idu_exu_pc = 0U;
        __Vdly__exu_lsu_alu_result = 0U;
        __Vdly__exu_lsu_rf_res = 0U;
        __Vdly__exu_lsu_waddr = 0U;
        vlSelfRef.__Vdly__idu_exu_waddr = 0U;
        vlSelfRef.__Vdly__idu_exu_inst = 0U;
        vlSelfRef.__PVT__idu_exu_imm = 0U;
        vlSelfRef.__PVT__idu_exu_alu_op = 0U;
        vlSelfRef.__Vdly__my_LSU__DOT__l_valid = 0U;
        vlSelfRef.__PVT__idu_wbu_raddr1 = 0U;
        vlSelfRef.__PVT__idu_wbu_raddr2 = 0U;
    } else {
        if (vlSelfRef.__PVT__exu_flush) {
            vlSelfRef.__Vdly__ifu_idu_valid = 0U;
        } else if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
                    & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.__Vdly__ifu_idu_valid = 0U;
        } else if (vlSelfRef.__PVT__my_IFU__DOT__handshake_r) {
            vlSelfRef.__Vdly__ifu_idu_valid = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
             & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))) {
            __Vdly__idu_exu_rf_res = ((IData)(vlSelfRef.__PVT__my_IDU__DOT__ld_type)
                                       ? 1U : ((IData)(vlSelfRef.__PVT__my_IDU__DOT__csr_we)
                                                ? 2U
                                                : ((IData)(vlSelfRef.__PVT__my_IFU__DOT__jump)
                                                    ? 3U
                                                    : 0U)));
            vlSelfRef.__Vdly__idu_exu_jump = vlSelfRef.__PVT__my_IDU__DOT__jump;
            __Vdly__idu_exu_mem_w = ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sw)
                                      ? 0U : ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sb)
                                               ? 1U
                                               : ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sh)
                                                   ? 2U
                                                   : 3U)));
            vlSelfRef.__Vdly__idu_exu_branch = vlSelfRef.__PVT__my_IDU__DOT__branch;
            __Vdly__idu_exu_mem_r = ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lw)
                                      ? 0U : ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lb)
                                               ? 1U
                                               : ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lh)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lbu)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__my_IDU__DOT__lhu)
                                                     ? 4U
                                                     : 5U)))));
            vlSelfRef.__Vdly__idu_exu_pc = vlSelfRef.__PVT__ifu_idu_pc;
            vlSelfRef.__Vdly__idu_exu_waddr = (0x0000001fU 
                                               & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                  >> 7U));
            vlSelfRef.__Vdly__idu_exu_inst = vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst;
            vlSelfRef.__PVT__idu_exu_imm = ((IData)(vlSelfRef.__PVT__my_IDU__DOT__inst_I)
                                             ? (((- (IData)(
                                                            (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                   >> 0x00000014U))
                                             : ((0x23U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst))
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                          >> 7U))))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst))
                                                  ? vlSelfRef.__PVT__my_IFU__DOT__imm_B
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__my_IDU__DOT__inst_U)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst))
                                                    ? vlSelfRef.__PVT__my_IFU__DOT__imm_J
                                                    : 0U)))));
            vlSelfRef.__PVT__idu_exu_alu_op = (((IData)(vlSelfRef.__PVT__my_IDU__DOT__add) 
                                                | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__addi) 
                                                   | ((IData)(vlSelfRef.__PVT__my_IDU__DOT__ld_type) 
                                                      | (1U 
                                                         == (IData)(vlSelfRef.__PVT__my_IDU__DOT__jump)))))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sub) 
                                                    | (0x63U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst)))
                                                    ? 1U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelfRef.__PVT__my_IDU__DOT__sll) 
                                                      | (IData)(vlSelfRef.__PVT__my_IDU__DOT__slli))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlSelfRef.__PVT__my_IDU__DOT__srl) 
                                                       | (IData)(vlSelfRef.__PVT__my_IDU__DOT__srli))
                                                       ? 4U
                                                       : 
                                                      (((IData)(vlSelfRef.__PVT__my_IDU__DOT__sra) 
                                                        | (IData)(vlSelfRef.__PVT__my_IDU__DOT__srai))
                                                        ? 5U
                                                        : 
                                                       (((IData)(vlSelfRef.__PVT__my_IDU__DOT__slt) 
                                                         | (IData)(vlSelfRef.__PVT__my_IDU__DOT__slti))
                                                         ? 6U
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sltiu)
                                                          ? 7U
                                                          : 
                                                         ((IData)(vlSelfRef.__PVT__my_IDU__DOT__sltu)
                                                           ? 8U
                                                           : 
                                                          (((IData)(vlSelfRef.__PVT__my_IDU__DOT__r_xor) 
                                                            | (IData)(vlSelfRef.__PVT__my_IDU__DOT__xori))
                                                            ? 9U
                                                            : 
                                                           (((IData)(vlSelfRef.__PVT__my_IDU__DOT__r_and) 
                                                             | (IData)(vlSelfRef.__PVT__my_IDU__DOT__andi))
                                                             ? 0x0aU
                                                             : 
                                                            (((IData)(vlSelfRef.__PVT__my_IDU__DOT__r_or) 
                                                              | (IData)(vlSelfRef.__PVT__my_IDU__DOT__ori))
                                                              ? 0x0bU
                                                              : 
                                                             ((IData)(vlSelfRef.__PVT__my_IDU__DOT__csrrw)
                                                               ? 0x0cU
                                                               : 
                                                              ((IData)(vlSelfRef.__PVT__my_IDU__DOT__csrrs)
                                                                ? 0x0dU
                                                                : 0U))))))))))))));
            vlSelfRef.__PVT__idu_wbu_raddr1 = (0x0000001fU 
                                               & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                  >> 0x0000000fU));
            vlSelfRef.__PVT__idu_wbu_raddr2 = (0x0000001fU 
                                               & (vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
                                                  >> 0x00000014U));
        } else {
            __Vdly__idu_exu_rf_res = vlSelfRef.__PVT__idu_exu_rf_res;
            vlSelfRef.__Vdly__idu_exu_jump = vlSelfRef.__PVT__idu_exu_jump;
            __Vdly__idu_exu_mem_w = vlSelfRef.__PVT__idu_exu_mem_w;
            vlSelfRef.__Vdly__idu_exu_branch = vlSelfRef.__PVT__idu_exu_branch;
            __Vdly__idu_exu_mem_r = vlSelfRef.__PVT__idu_exu_mem_r;
            vlSelfRef.__Vdly__idu_exu_pc = vlSelfRef.__PVT__idu_exu_pc;
            vlSelfRef.__Vdly__idu_exu_waddr = (0x0000001fU 
                                               & (IData)(vlSelfRef.__PVT__idu_exu_waddr));
            vlSelfRef.__Vdly__idu_exu_inst = vlSelfRef.__PVT__idu_exu_inst;
            vlSelfRef.__PVT__idu_exu_imm = vlSelfRef.__PVT__idu_exu_imm;
            vlSelfRef.__PVT__idu_exu_alu_op = vlSelfRef.__PVT__idu_exu_alu_op;
            vlSelfRef.__PVT__idu_wbu_raddr1 = (0x0000001fU 
                                               & (IData)(vlSelfRef.__PVT__idu_wbu_raddr1));
            vlSelfRef.__PVT__idu_wbu_raddr2 = (0x0000001fU 
                                               & (IData)(vlSelfRef.__PVT__idu_wbu_raddr2));
        }
        if (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
             & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.__Vdly__exu_lsu_mem_w = vlSelfRef.__PVT__idu_exu_mem_w;
            __Vdly__exu_lsu_mem_r = vlSelfRef.__PVT__idu_exu_mem_r;
            vlSelfRef.__Vdly__exu_lsu_inst = vlSelfRef.__PVT__idu_exu_inst;
            vlSelfRef.__Vdly__exu_lsu_mem_addr = vlSelfRef.__PVT__my_EXU__DOT__result;
            vlSelfRef.__Vdly__exu_lsu_pc = vlSelfRef.__PVT__idu_exu_pc;
            __Vdly__exu_lsu_alu_result = vlSelfRef.__PVT__my_EXU__DOT__result;
            __Vdly__exu_lsu_rf_res = vlSelfRef.__PVT__idu_exu_rf_res;
            __Vdly__exu_lsu_waddr = vlSelfRef.__PVT__idu_exu_waddr;
        } else {
            vlSelfRef.__Vdly__exu_lsu_mem_w = vlSelfRef.__PVT__exu_lsu_mem_w;
            __Vdly__exu_lsu_mem_r = vlSelfRef.__PVT__exu_lsu_mem_r;
            vlSelfRef.__Vdly__exu_lsu_inst = vlSelfRef.__PVT__exu_lsu_inst;
            vlSelfRef.__Vdly__exu_lsu_mem_addr = vlSelfRef.__PVT__exu_lsu_mem_addr;
            vlSelfRef.__Vdly__exu_lsu_pc = vlSelfRef.__PVT__exu_lsu_pc;
            __Vdly__exu_lsu_alu_result = vlSelfRef.__PVT__exu_lsu_alu_result;
            __Vdly__exu_lsu_rf_res = vlSelfRef.__PVT__exu_lsu_rf_res;
            __Vdly__exu_lsu_waddr = vlSelfRef.__PVT__exu_lsu_waddr;
        }
        if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
             & (IData)(vlSelfRef.__PVT__my_EXU__DOT__lsu_exu_ready))) {
            vlSelfRef.__Vdly__my_LSU__DOT__l_valid = 1U;
        } else if (vlSelfRef.lsu_wbu_valid) {
            vlSelfRef.__Vdly__my_LSU__DOT__l_valid = 0U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__i = 0x00000010U;
        __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v0 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) 
                & (0U != (IData)(vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__waddr)))) {
        Vysyx_26010027___024unit____Vdpiimwrap_get_reg_TOP____024unit(vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__waddr, vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__wdata);
        __VdlyVal__my_WBU__DOT__my_gpr__DOT__rf__v16 
            = vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__wdata;
        __VdlyDim0__my_WBU__DOT__my_gpr__DOT__rf__v16 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__waddr));
        __VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v16 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_LSU__DOT__mem_done = 0U;
        vlSelfRef.__PVT__lsu_wbu_alu_result = 0U;
        vlSelfRef.__PVT__lsu_wbu_rf_res = 0U;
        vlSelfRef.__PVT__lsu_wbu_waddr = 0U;
        vlSelfRef.__PVT__lsu_wbu_mem_result = 0U;
        vlSelfRef.__PVT__my_IFU__DOT__inst_latch = 0U;
        vlSelfRef.__PVT__lsu_wbu_reg_w = 0U;
        vlSelfRef.__PVT__my_LSU__DOT__l_mem_r = 5U;
    } else {
        if (vlSelfRef.__PVT__my_LSU__DOT__handshake_r) {
            vlSelfRef.__PVT__lsu_wbu_mem_result = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))
                                                    ? vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted 
                                                                      >> 0x0000000fU)))) 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))
                                                       ? 
                                                      (0x000000ffU 
                                                       & vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))
                                                        ? 
                                                       (0x0000ffffU 
                                                        & vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted)
                                                        : 0U)))));
        }
        if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)))) {
            vlSelfRef.__PVT__my_LSU__DOT__mem_done = 0U;
            vlSelfRef.__PVT__lsu_wbu_alu_result = vlSelfRef.__PVT__exu_lsu_alu_result;
            vlSelfRef.__PVT__lsu_wbu_rf_res = vlSelfRef.__PVT__exu_lsu_rf_res;
            vlSelfRef.__PVT__lsu_wbu_waddr = vlSelfRef.__PVT__exu_lsu_waddr;
            vlSelfRef.__PVT__lsu_wbu_reg_w = vlSelfRef.__PVT__exu_lsu_reg_w;
            vlSelfRef.__PVT__my_LSU__DOT__l_mem_r = vlSelfRef.__PVT__exu_lsu_mem_r;
        } else if (((IData)(vlSelfRef.__PVT__my_LSU__DOT__handshake_r) 
                    | (IData)(vlSelfRef.__PVT__my_LSU__DOT__handshake_b))) {
            vlSelfRef.__PVT__my_LSU__DOT__mem_done = 1U;
        }
        if (vlSelfRef.__PVT__my_IFU__DOT__handshake_r) {
            vlSelfRef.__PVT__my_IFU__DOT__inst_latch 
                = vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rdata;
        }
    }
    __Vtableidx1 = ((((((((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid) 
                          & (2U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w))) 
                         & (0U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp))) 
                        << 3U) | ((((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid) 
                                    & (1U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r))) 
                                   & (0U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp))) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_awvalid) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_arvalid))) 
                     << 4U) | (((((IData)(vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid) 
                                  & (IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready)) 
                                 & (0U == (IData)(vlSelfRef.__PVT__cpu_ifu_rresp))) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__grant) 
                                           << 1U) | (IData)(vlSymsp->TOP.reset))));
    if (Vysyx_26010027__ConstPool__TABLE_h50b6148b_0
        [__Vtableidx1]) {
        vlSelfRef.__Vdly__grant = Vysyx_26010027__ConstPool__TABLE_h12a8eb2a_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__idu_exu_mem_w = __Vdly__idu_exu_mem_w;
    vlSelfRef.__PVT__idu_exu_mem_r = __Vdly__idu_exu_mem_r;
    vlSelfRef.__PVT__idu_exu_rf_res = __Vdly__idu_exu_rf_res;
    if (__VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v0) {
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[1U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[2U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[3U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[4U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[5U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[6U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[7U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[8U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[9U] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0x0aU] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0x0bU] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0x0cU] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0x0dU] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0x0eU] = 0U;
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[0x0fU] = 0U;
    }
    if (__VdlySet__my_WBU__DOT__my_gpr__DOT__rf__v16) {
        vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__rf[__VdlyDim0__my_WBU__DOT__my_gpr__DOT__rf__v16] 
            = __VdlyVal__my_WBU__DOT__my_gpr__DOT__rf__v16;
    }
    vlSelfRef.__PVT__exu_lsu_alu_result = __Vdly__exu_lsu_alu_result;
    vlSelfRef.__PVT__exu_lsu_rf_res = __Vdly__exu_lsu_rf_res;
    vlSelfRef.__PVT__exu_lsu_waddr = __Vdly__exu_lsu_waddr;
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
    vlSelfRef.__PVT__exu_lsu_reg_w = __Vdly__exu_lsu_reg_w;
    vlSelfRef.__PVT__exu_lsu_mem_r = __Vdly__exu_lsu_mem_r;
    vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__waddr 
        = ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) ? (IData)(vlSelfRef.__PVT__lsu_wbu_waddr)
            : 0U);
}

void Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(IData/*31:0*/ lsu_get_data, IData/*31:0*/ lsu_w_data, IData/*31:0*/ exu_done, IData/*31:0*/ alu_we, IData/*31:0*/ csr_we, IData/*31:0*/ cpu_jump, IData/*31:0*/ cpu_branch, IData/*31:0*/ icache_hit, IData/*31:0*/ icache_miss, IData/*31:0*/ icache_miss_latency);
void Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ target, IData/*31:0*/ rd, IData/*31:0*/ rs1);
void Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__1(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__1\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    __Vfunc_pmem_read__0__Vfuncout = 0;
    CData/*0:0*/ __Vdly__pmem_rvalid;
    __Vdly__pmem_rvalid = 0;
    CData/*0:0*/ __Vdly__pmem_wready;
    __Vdly__pmem_wready = 0;
    CData/*0:0*/ __Vdly__pmem_bvalid;
    __Vdly__pmem_bvalid = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        Vysyx_26010027___024unit____Vdpiimwrap_get_cpu_state_TOP____024unit(
                                                                            ((IData)(vlSelfRef.lsu_wbu_valid) 
                                                                             & (3U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst))), 
                                                                            ((IData)(vlSelfRef.lsu_wbu_valid) 
                                                                             & (0x23U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst))), (IData)(vlSelfRef.lsu_wbu_valid), 
                                                                            ((IData)(vlSelfRef.lsu_wbu_valid) 
                                                                             & ((0x33U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst)) 
                                                                                | ((0x13U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst)) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst)))))), 
                                                                            ((IData)(vlSelfRef.lsu_wbu_valid) 
                                                                             & (0x73U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst))), 
                                                                            ((IData)(vlSelfRef.lsu_wbu_valid) 
                                                                             & ((0x6fU 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst)) 
                                                                                | (0x67U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst)))), 
                                                                            ((IData)(vlSelfRef.lsu_wbu_valid) 
                                                                             & (0x63U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.__PVT__lsu_wbu_inst))), 0U, 0U, 0U);
        if ((((IData)(vlSelfRef.__PVT__idu_exu_valid) 
              & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready)) 
             & (1U == (IData)(vlSelfRef.__PVT__idu_exu_jump)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_ftrace_print_TOP____024unit(vlSelfRef.__PVT__idu_exu_pc, 
                                                                               ((IData)(vlSymsp->TOP.reset)
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
                                                                                 : 0U)), (IData)(vlSelfRef.__PVT__idu_exu_waddr), 
                                                                               (0x0000001fU 
                                                                                & (vlSelfRef.__PVT__idu_exu_inst 
                                                                                >> 0x0fU)));
        }
        if (VL_UNLIKELY((((0x00100073U == vlSelfRef.__PVT__lsu_wbu_inst) 
                          | ((((IData)(vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid) 
                               & (IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready)) 
                              & (0U != (IData)(vlSelfRef.__PVT__cpu_ifu_rresp))) 
                             | ((((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid) 
                                  & (1U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r))) 
                                 & (0U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp))) 
                                | (((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid) 
                                    & (2U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w))) 
                                   & (0U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp))))))))) {
            Vysyx_26010027___024unit____Vdpiimwrap_finish_sim_TOP____024unit();
            VL_WRITEF_NX("ebreak at PC = 0x%x Inst = 0x%x\n",0,
                         32,vlSelfRef.__PVT__lsu_wbu_pc,
                         32,vlSelfRef.__PVT__lsu_wbu_inst);
            if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid) 
                                & (IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready)) 
                               & (0U != (IData)(vlSelfRef.__PVT__cpu_ifu_rresp))) 
                              | ((((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid) 
                                   & (1U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r))) 
                                  & (0U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp))) 
                                 | (((IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid) 
                                     & (2U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w))) 
                                    & (0U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp)))))))) {
                VL_WRITEF_NX("![Access-FAULT]\n",0);
            }
        }
    }
    __Vdly__pmem_wready = vlSelfRef.__PVT__pmem_wready;
    __Vdly__pmem_bvalid = vlSelfRef.__PVT__pmem_bvalid;
    __Vdly__pmem_rvalid = vlSelfRef.__PVT__pmem_rvalid;
    if (vlSymsp->TOP.reset) {
        __Vdly__pmem_rvalid = 0U;
        __Vdly__pmem_wready = 0U;
        __Vdly__pmem_bvalid = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__pmem_rvalid) 
             & ((1U == (IData)(vlSelfRef.__PVT__grant))
                 ? (IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready)
                 : (1U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_r))))) {
            __Vdly__pmem_rvalid = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_wvalid) 
             & (IData)(vlSelfRef.__PVT__pmem_wready))) {
            __Vdly__pmem_wready = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pmem_bvalid) 
             & (2U == (IData)(vlSelfRef.__PVT__my_LSU__DOT__state_w)))) {
            __Vdly__pmem_bvalid = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__arb_arvalid) 
             & (~ (IData)(vlSelfRef.__PVT__pmem_rvalid)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                            ((1U 
                                                                              == (IData)(vlSelfRef.__PVT__grant))
                                                                              ? 
                                                                             (((IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready) 
                                                                               & (IData)(vlSelfRef.__PVT__ifu_idu_valid))
                                                                               ? vlSelfRef.__PVT__my_IFU__DOT__next_pc
                                                                               : vlSelfRef.__PVT__ifu_idu_pc)
                                                                              : vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr), __Vfunc_pmem_read__0__Vfuncout);
            vlSelfRef.__PVT__pmem_read_data = __Vfunc_pmem_read__0__Vfuncout;
            __Vdly__pmem_rvalid = 1U;
        } else if (((IData)(vlSelfRef.__PVT__arb_awvalid) 
                    & (~ (IData)(vlSelfRef.__PVT__pmem_wready)))) {
            Vysyx_26010027___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr, 
                                                                             ((0U 
                                                                               == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w))
                                                                               ? vlSelfRef.__PVT__my_LSU__DOT__l_wdata
                                                                               : 
                                                                              VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__my_LSU__DOT__l_wdata, 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr), 3U))), 
                                                                             ((0U 
                                                                               == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w))
                                                                               ? 0x0000000fU
                                                                               : 
                                                                              (0x0000000fU 
                                                                               & ((1U 
                                                                                == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w))
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w))
                                                                                 ? 
                                                                                ((IData)(3U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr))
                                                                                 : 0U)))));
            __Vdly__pmem_wready = 1U;
            __Vdly__pmem_bvalid = 1U;
            vlSelfRef.__PVT__pmem_bresp = 0U;
        }
    }
    vlSelfRef.__PVT__pmem_wready = __Vdly__pmem_wready;
    vlSelfRef.__PVT__pmem_bvalid = __Vdly__pmem_bvalid;
    vlSelfRef.__PVT__pmem_rvalid = __Vdly__pmem_rvalid;
}

void Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__2(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_sequent__TOP__ysyx_26010027__2\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__idu_exu_waddr = vlSelfRef.__Vdly__idu_exu_waddr;
    vlSelfRef.__PVT__idu_exu_inst = vlSelfRef.__Vdly__idu_exu_inst;
    vlSelfRef.__PVT__idu_exu_jump = vlSelfRef.__Vdly__idu_exu_jump;
    vlSelfRef.__PVT__idu_exu_branch = vlSelfRef.__Vdly__idu_exu_branch;
    vlSelfRef.__PVT__idu_exu_pc = vlSelfRef.__Vdly__idu_exu_pc;
    vlSelfRef.__PVT__my_LSU__DOT__state_r = vlSelfRef.__Vdly__my_LSU__DOT__state_r;
    vlSelfRef.__PVT__my_LSU__DOT__state_w = vlSelfRef.__Vdly__my_LSU__DOT__state_w;
    vlSelfRef.__PVT__grant = vlSelfRef.__Vdly__grant;
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_12 
        = (vlSelfRef.__PVT__idu_exu_imm + vlSelfRef.__PVT__idu_exu_pc);
    vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rresp = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__grant))
                                                    ? (IData)(vlSelfRef.__PVT__arb_rresp)
                                                    : 0U);
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsu_wbu_inst = 0U;
        vlSelfRef.__PVT__exu_lsu_inst = vlSelfRef.__Vdly__exu_lsu_inst;
        vlSelfRef.__PVT__lsu_wbu_pc = 0U;
        vlSelfRef.__PVT__exu_lsu_pc = vlSelfRef.__Vdly__exu_lsu_pc;
        vlSelfRef.__PVT__ifu_idu_pc = 0x80000000U;
        vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr = 0U;
        vlSelfRef.__PVT__exu_lsu_mem_addr = vlSelfRef.__Vdly__exu_lsu_mem_addr;
        vlSelfRef.__PVT__my_LSU__DOT__l_mem_w = 3U;
    } else {
        if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
             & (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)))) {
            vlSelfRef.__PVT__lsu_wbu_inst = vlSelfRef.__PVT__exu_lsu_inst;
            vlSelfRef.__PVT__lsu_wbu_pc = vlSelfRef.__PVT__exu_lsu_pc;
            vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr 
                = vlSelfRef.__PVT__exu_lsu_mem_addr;
            vlSelfRef.__PVT__my_LSU__DOT__l_mem_w = vlSelfRef.__PVT__exu_lsu_mem_w;
        }
        vlSelfRef.__PVT__exu_lsu_inst = vlSelfRef.__Vdly__exu_lsu_inst;
        vlSelfRef.__PVT__exu_lsu_pc = vlSelfRef.__Vdly__exu_lsu_pc;
        if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
             & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.__PVT__ifu_idu_pc = vlSelfRef.__PVT__my_IFU__DOT__next_pc;
        }
        vlSelfRef.__PVT__exu_lsu_mem_addr = vlSelfRef.__Vdly__exu_lsu_mem_addr;
    }
    vlSelfRef.__PVT__exu_lsu_mem_w = vlSelfRef.__Vdly__exu_lsu_mem_w;
    vlSelfRef.__PVT__my_WBU__DOT__my_gpr__DOT__wdata 
        = ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) ? 
           ((0U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))
             ? vlSelfRef.__PVT__lsu_wbu_alu_result : 
            ((1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))
              ? vlSelfRef.__PVT__lsu_wbu_mem_result
              : ((2U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))
                  ? 0U : ((IData)(4U) + vlSelfRef.__PVT__lsu_wbu_pc))))
            : 0U);
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_LSU__DOT__l_wdata = 0U;
    } else if (((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
                & (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)))) {
        vlSelfRef.__PVT__my_LSU__DOT__l_wdata = vlSelfRef.__PVT__exu_lsu_wdata;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
             & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.__PVT__exu_lsu_wdata = vlSelfRef.__PVT__my_EXU__DOT__rs2;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__exu_lsu_valid = 0U;
        vlSelfRef.__PVT__idu_exu_valid = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__idu_exu_valid) 
             & (IData)(vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready))) {
            vlSelfRef.__PVT__exu_lsu_valid = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)))) {
            vlSelfRef.__PVT__exu_lsu_valid = 0U;
        }
        if (vlSelfRef.__PVT__exu_flush) {
            vlSelfRef.__PVT__idu_exu_valid = 0U;
        } else if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) 
                    & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready))) {
            vlSelfRef.__PVT__idu_exu_valid = 1U;
        } else if (vlSelfRef.__PVT__my_EXU__DOT__exu_idu_ready) {
            vlSelfRef.__PVT__idu_exu_valid = 0U;
        }
    }
    vlSelfRef.__PVT__my_LSU__DOT__l_valid = vlSelfRef.__Vdly__my_LSU__DOT__l_valid;
    vlSelfRef.__VdfgRegularize_hcab2a8af_1_3 = ((IData)(vlSelfRef.__PVT__exu_lsu_reg_w) 
                                                & ((IData)(vlSelfRef.__PVT__exu_lsu_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))));
    vlSelfRef.__PVT__my_EXU__DOT__lsu_exu_ready = (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid)));
    vlSelfRef.__PVT__my_LSU__DOT__req_store = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid) 
                                               & ((~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__mem_done)) 
                                                  & (3U 
                                                     != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w))));
    vlSelfRef.__PVT__my_EXU__DOT__lsu_load_inflight 
        = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__my_LSU__DOT__mem_done)) 
              & (5U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r))));
    vlSelfRef.lsu_wbu_valid = ((IData)(vlSelfRef.__PVT__my_LSU__DOT__l_valid) 
                               & ((~ ((5U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_r)) 
                                      | (3U != (IData)(vlSelfRef.__PVT__my_LSU__DOT__l_mem_w)))) 
                                  | (IData)(vlSelfRef.__PVT__my_LSU__DOT__mem_done)));
    vlSelfRef.__PVT__ifu_idu_valid = vlSelfRef.__Vdly__ifu_idu_valid;
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
    vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_arvalid = 
        ((0U == (IData)(vlSelfRef.__PVT__my_IFU__DOT__state)) 
         & (IData)(vlSelfRef.__PVT__my_IFU__DOT__idu_ifu_ready));
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
    vlSelfRef.__PVT__arb_arvalid = ((1U == (IData)(vlSelfRef.__PVT__grant))
                                     ? (IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_arvalid)
                                     : (IData)(vlSelfRef.__PVT__my_LSU__DOT__lsu_cpu_arvalid));
    vlSelfRef.__PVT__my_EXU__DOT__mid = (vlSelfRef.__PVT__my_EXU__DOT__rs1 
                                         - vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10 
        = VL_LTS_III(32, vlSelfRef.__PVT__my_EXU__DOT__rs1, vlSelfRef.__PVT__my_EXU__DOT__rs2);
    vlSelfRef.my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11 
        = (vlSelfRef.__PVT__my_EXU__DOT__rs1 < vlSelfRef.__PVT__my_EXU__DOT__rs2);
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
}

extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_26010027__ConstPool__TABLE_h02dc8855_0;
void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

void Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__0(Vysyx_26010027_ysyx_26010027* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_26010027_ysyx_26010027___nba_comb__TOP__ysyx_26010027__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid 
            = vlSelfRef.__PVT__pmem_rvalid;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp 
            = vlSelfRef.__PVT__pmem_bresp;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid 
            = vlSelfRef.__PVT__pmem_bvalid;
    } else {
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_rvalid = 0U;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bresp = 0U;
        vlSelfRef.__PVT__my_LSU__DOT__cpu_lsu_bvalid = 0U;
    }
    if ((1U == (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rdata 
            = vlSelfRef.__PVT__pmem_read_data;
        vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid 
            = vlSelfRef.__PVT__pmem_rvalid;
    } else {
        vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rdata = 0U;
        vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid = 0U;
    }
    vlSelfRef.__PVT__my_LSU__DOT__rdata_shifted = VL_SHIFTR_III(32,32,32, 
                                                                ((2U 
                                                                  == (IData)(vlSelfRef.__PVT__grant))
                                                                  ? vlSelfRef.__PVT__pmem_read_data
                                                                  : 0U), 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              (3U 
                                                                               & vlSelfRef.__PVT__my_LSU__DOT__l_mem_addr), 3U));
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
    if (vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rvalid) {
        vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
            = vlSelfRef.__PVT__my_IFU__DOT__cpu_ifu_rdata;
        vlSelfRef.__PVT__my_IFU__DOT__handshake_r = 
            ((IData)(vlSelfRef.__PVT__my_IFU__DOT__ifu_cpu_rready) 
             & (0U == (IData)(vlSelfRef.__PVT__cpu_ifu_rresp)));
    } else {
        vlSelfRef.__PVT__my_IFU__DOT__ifu_idu_inst 
            = vlSelfRef.__PVT__my_IFU__DOT__inst_latch;
        vlSelfRef.__PVT__my_IFU__DOT__handshake_r = 0U;
    }
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
    if (vlSelfRef.my_IDU__DOT____VdfgExtracted_h0084629c__0) {
        Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
    }
}
