// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

void Vysyx_26010027_ysyx_26010027_EXU___ico_sequent__TOP__ysyx_26010027__my_EXU__0(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___ico_sequent__TOP__ysyx_26010027__my_EXU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__PVT__exu_flush = 0U;
vlSelfRef.__PVT__exu_flush_pc = 0U;
} else if (((IData)(vlSelfRef.__PVT__idu_exu_valid) & (IData)(vlSelfRef.__PVT__exu_idu_ready))) {
if ((6U != (IData)(vlSelfRef.__PVT__idu_exu_branch))) {
vlSelfRef.__PVT__exu_flush = (1U & (~ (IData)(vlSelfRef.__PVT__taken)));
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__snpc;
} else if ((1U == (IData)(vlSelfRef.__PVT__idu_exu_jump))) {
vlSelfRef.__PVT__exu_flush = 1U;
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__alu_result;
} else if (((IData)(vlSelfRef.__PVT__idu_exu_csr_ecall) | (IData)(vlSelfRef.__PVT__idu_exu_csr_mret))) {
vlSelfRef.__PVT__exu_flush = 1U;
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__trap_pc;
} else if (vlSelfRef.__PVT__idu_exu_fencei) {
vlSelfRef.__PVT__exu_flush = 1U;
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__snpc;
} else {
vlSelfRef.__PVT__exu_flush = 0U;
vlSelfRef.__PVT__exu_flush_pc = 0U;
}
} else {
vlSelfRef.__PVT__exu_flush = 0U;
vlSelfRef.__PVT__exu_flush_pc = 0U;
}
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__0(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_fwd_data = ((3U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)) ? vlSelfRef.__PVT__lsu_wbu_snpc : vlSelfRef.__PVT__lsu_wbu_alu_result);
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__1(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__Vdly__exu_lsu_valid = vlSelfRef.__PVT__exu_lsu_valid;
vlSelfRef.__Vdly__exu_lsu_pc = vlSelfRef.__PVT__exu_lsu_pc;
vlSelfRef.__Vdly__exu_lsu_inst = vlSelfRef.__PVT__exu_lsu_inst;
vlSelfRef.__Vdly__exu_lsu_mem_w = vlSelfRef.__PVT__exu_lsu_mem_w;
vlSelfRef.__Vdly__exu_lsu_mem_r = vlSelfRef.__PVT__exu_lsu_mem_r;
vlSelfRef.__Vdly__exu_lsu_mem_addr = vlSelfRef.__PVT__exu_lsu_mem_addr;
vlSelfRef.__Vdly__exu_lsu_csr_ecall = vlSelfRef.__PVT__exu_lsu_csr_ecall;
vlSelfRef.__Vdly__exu_lsu_csr_mret = vlSelfRef.__PVT__exu_lsu_csr_mret;
vlSelfRef.__Vdly__exu_lsu_wdata = vlSelfRef.__PVT__exu_lsu_wdata;
vlSelfRef.__Vdly__exu_lsu_csr_wdata = vlSelfRef.__PVT__exu_lsu_csr_wdata;
vlSelfRef.__Vdly__exu_lsu_csr_waddr = vlSelfRef.__PVT__exu_lsu_csr_waddr;
vlSelfRef.__Vdly__exu_lsu_csr_we = vlSelfRef.__PVT__exu_lsu_csr_we;
vlSelfRef.__Vdly__exu_lsu_snpc = vlSelfRef.__PVT__exu_lsu_snpc;
vlSelfRef.__Vdly__exu_lsu_alu_result = vlSelfRef.__PVT__exu_lsu_alu_result;
vlSelfRef.__Vdly__exu_lsu_waddr = vlSelfRef.__PVT__exu_lsu_waddr;
vlSelfRef.__Vdly__exu_lsu_reg_w = vlSelfRef.__PVT__exu_lsu_reg_w;
vlSelfRef.__Vdly__exu_lsu_rf_res = vlSelfRef.__PVT__exu_lsu_rf_res;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__exu_lsu_valid = 0U;
} else if (((IData)(vlSelfRef.__PVT__idu_exu_valid) & (IData)(vlSelfRef.__PVT__exu_idu_ready))) {
vlSelfRef.__Vdly__exu_lsu_valid = 1U;
} else if (vlSelfRef.__PVT__lsu_exu_ready) {
vlSelfRef.__Vdly__exu_lsu_valid = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__exu_lsu_pc = 0U;
vlSelfRef.__Vdly__exu_lsu_snpc = 0U;
vlSelfRef.__Vdly__exu_lsu_inst = 0U;
vlSelfRef.__Vdly__exu_lsu_mem_w = 0U;
vlSelfRef.__Vdly__exu_lsu_mem_r = 0U;
vlSelfRef.__Vdly__exu_lsu_mem_addr = 0U;
vlSelfRef.__Vdly__exu_lsu_reg_w = 0U;
vlSelfRef.__Vdly__exu_lsu_rf_res = 0U;
vlSelfRef.__Vdly__exu_lsu_waddr = 0U;
vlSelfRef.__Vdly__exu_lsu_alu_result = 0U;
vlSelfRef.__Vdly__exu_lsu_csr_waddr = 0U;
vlSelfRef.__Vdly__exu_lsu_csr_we = 0U;
vlSelfRef.__Vdly__exu_lsu_csr_ecall = 0U;
vlSelfRef.__Vdly__exu_lsu_csr_mret = 0U;
vlSelfRef.__Vdly__exu_lsu_csr_wdata = 0U;
} else if (((IData)(vlSelfRef.__PVT__idu_exu_valid) & (IData)(vlSelfRef.__PVT__exu_idu_ready))) {
vlSelfRef.__Vdly__exu_lsu_pc = vlSelfRef.__PVT__idu_exu_pc;
vlSelfRef.__Vdly__exu_lsu_snpc = vlSelfRef.__PVT__snpc;
vlSelfRef.__Vdly__exu_lsu_inst = vlSelfRef.__PVT__idu_exu_inst;
vlSelfRef.__Vdly__exu_lsu_mem_w = vlSelfRef.__PVT__idu_exu_mem_w;
vlSelfRef.__Vdly__exu_lsu_mem_r = vlSelfRef.__PVT__idu_exu_mem_r;
vlSelfRef.__Vdly__exu_lsu_mem_addr = vlSelfRef.__PVT__alu_result;
vlSelfRef.__Vdly__exu_lsu_wdata = vlSelfRef.__PVT__rdata2;
vlSelfRef.__Vdly__exu_lsu_reg_w = vlSelfRef.__PVT__idu_exu_reg_w;
vlSelfRef.__Vdly__exu_lsu_rf_res = vlSelfRef.__PVT__idu_exu_rf_res;
vlSelfRef.__Vdly__exu_lsu_waddr = vlSelfRef.__PVT__idu_exu_waddr;
vlSelfRef.__Vdly__exu_lsu_alu_result = vlSelfRef.__PVT__alu_result;
vlSelfRef.__Vdly__exu_lsu_csr_waddr = vlSelfRef.__PVT__idu_exu_csr_waddr;
vlSelfRef.__Vdly__exu_lsu_csr_we = vlSelfRef.__PVT__idu_exu_csr_we;
vlSelfRef.__Vdly__exu_lsu_csr_ecall = vlSelfRef.__PVT__idu_exu_csr_ecall;
vlSelfRef.__Vdly__exu_lsu_csr_mret = vlSelfRef.__PVT__idu_exu_csr_mret;
vlSelfRef.__Vdly__exu_lsu_csr_wdata = vlSelfRef.__PVT__alu_result;
}
vlSelfRef.__PVT__exu_lsu_valid = vlSelfRef.__Vdly__exu_lsu_valid;
vlSelfRef.__PVT__exu_lsu_pc = vlSelfRef.__Vdly__exu_lsu_pc;
vlSelfRef.__PVT__exu_lsu_inst = vlSelfRef.__Vdly__exu_lsu_inst;
vlSelfRef.__PVT__exu_lsu_mem_w = vlSelfRef.__Vdly__exu_lsu_mem_w;
vlSelfRef.__PVT__exu_lsu_mem_r = vlSelfRef.__Vdly__exu_lsu_mem_r;
vlSelfRef.__PVT__exu_lsu_mem_addr = vlSelfRef.__Vdly__exu_lsu_mem_addr;
vlSelfRef.__PVT__exu_lsu_csr_ecall = vlSelfRef.__Vdly__exu_lsu_csr_ecall;
vlSelfRef.__PVT__exu_lsu_csr_mret = vlSelfRef.__Vdly__exu_lsu_csr_mret;
vlSelfRef.__PVT__exu_lsu_wdata = vlSelfRef.__Vdly__exu_lsu_wdata;
vlSelfRef.__PVT__exu_lsu_csr_wdata = vlSelfRef.__Vdly__exu_lsu_csr_wdata;
vlSelfRef.__PVT__exu_lsu_csr_waddr = vlSelfRef.__Vdly__exu_lsu_csr_waddr;
vlSelfRef.__PVT__exu_lsu_csr_we = vlSelfRef.__Vdly__exu_lsu_csr_we;
vlSelfRef.__PVT__exu_lsu_snpc = vlSelfRef.__Vdly__exu_lsu_snpc;
vlSelfRef.__PVT__exu_lsu_alu_result = vlSelfRef.__Vdly__exu_lsu_alu_result;
vlSelfRef.__PVT__exu_lsu_waddr = vlSelfRef.__Vdly__exu_lsu_waddr;
vlSelfRef.__PVT__exu_lsu_reg_w = vlSelfRef.__Vdly__exu_lsu_reg_w;
vlSelfRef.__PVT__exu_lsu_rf_res = vlSelfRef.__Vdly__exu_lsu_rf_res;
vlSelfRef.__PVT__lsu_fwd_data = ((3U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res)) ? vlSelfRef.__PVT__exu_lsu_snpc : vlSelfRef.__PVT__exu_lsu_alu_result);
vlSelfRef.__PVT__lsu_fwd_flag = (((IData)(vlSelfRef.__PVT__exu_lsu_valid) & (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)) & (1U != (IData)(vlSelfRef.__PVT__exu_lsu_rf_res)));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__2(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__wbu_fwd_flag = (((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__lsu_wbu_reg_w)) & (1U != (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__3(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_sequent__TOP__ysyx_26010027__my_EXU__3\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__snpc = ((IData)(4U) + vlSelfRef.__PVT__idu_exu_pc);
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__0(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__csr_fwd, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr)) & ((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr) == (IData)(vlSelfRef.__PVT__exu_lsu_csr_waddr))) & (IData)(vlSelfRef.__PVT__exu_lsu_valid)) & (IData)(vlSelfRef.__PVT__exu_lsu_csr_we)) & (2U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))));
VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__fwd_1, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) == (IData)(vlSelfRef.__PVT__exu_lsu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_fwd_flag)));
VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__fwd_2, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) == (IData)(vlSelfRef.__PVT__exu_lsu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_fwd_flag)));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__1(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__load_use_stall = (((((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & (IData)(vlSelfRef.__PVT__exu_lsu_valid)) & (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)) & (1U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))) & ((IData)(vlSelfRef.__PVT__exu_lsu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr1))) | ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & (IData)(vlSelfRef.__PVT__exu_lsu_valid)) & (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)) & (1U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))) & ((IData)(vlSelfRef.__PVT__exu_lsu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)))) | ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & (IData)(vlSelfRef.__PVT__lsu_load_inflight)) & ((IData)(vlSelfRef.__PVT__lsu_wbu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)))) | ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & (IData)(vlSelfRef.__PVT__lsu_load_inflight)) & ((IData)(vlSelfRef.__PVT__lsu_wbu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr2))));
vlSelfRef.__PVT__exu_idu_ready = (1U & (((IData)(vlSelfRef.__PVT__lsu_exu_ready) | (~ (IData)(vlSelfRef.__PVT__exu_lsu_valid))) & (~ (IData)(vlSelfRef.__PVT__load_use_stall))));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__2(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__csr_fwd, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr)) & ((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr) == (IData)(vlSelfRef.__PVT__lsu_wbu_csr_waddr))) & (IData)(vlSelfRef.__PVT__lsu_wbu_valid)) & (IData)(vlSelfRef.__PVT__lsu_wbu_csr_we)) & (2U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))));
VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__fwd_1, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_wbu_reg_w)) & (IData)(vlSelfRef.__PVT__lsu_wbu_valid)) & (1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))));
VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__fwd_2, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_wbu_reg_w)) & (IData)(vlSelfRef.__PVT__lsu_wbu_valid)) & (1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))));
VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__fwd_1, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__wbu_fwd_flag)));
VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__fwd_2, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__wbu_fwd_flag)));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__3(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__3\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__trap_pc = ((IData)(vlSelfRef.__PVT__idu_exu_csr_ecall) ? vlSelfRef.__PVT__exu_mtvec : vlSelfRef.__PVT__exu_mepc);
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__4(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__4\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__csr_rdata = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__csr_fwd), 0U)) ? vlSelfRef.__PVT__exu_lsu_csr_wdata : ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__csr_fwd), 1U)) ? vlSelfRef.__PVT__lsu_wbu_csr_wdata : vlSelfRef.__PVT__wbu_exu_csr_rdata));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__5(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__5\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__rdata1 = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_1), 0U)) ? vlSelfRef.__PVT__lsu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_1), 1U)) ? vlSelfRef.__PVT__wbu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_1), 2U)) ? vlSelfRef.__PVT__lsu_wbu_mem_result : vlSelfRef.__PVT__wbu_exu_rdata1)));
vlSelfRef.__PVT__rdata2 = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_2), 0U)) ? vlSelfRef.__PVT__lsu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_2), 1U)) ? vlSelfRef.__PVT__wbu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_2), 2U)) ? vlSelfRef.__PVT__lsu_wbu_mem_result : vlSelfRef.__PVT__wbu_exu_rdata2)));
vlSelfRef.__PVT__src1 = ((IData)(vlSelfRef.__PVT__idu_exu_alu_arc1) ? vlSelfRef.__PVT__idu_exu_pc : vlSelfRef.__PVT__rdata1);
vlSelfRef.__PVT__src2 = ((IData)(vlSelfRef.__PVT__idu_exu_alu_arc2) ? vlSelfRef.__PVT__idu_exu_imm : vlSelfRef.__PVT__rdata2);
vlSelfRef.__PVT__eq = (vlSelfRef.__PVT__src1 == vlSelfRef.__PVT__src2);
vlSelfRef.__PVT__lts = VL_LTS_III(32, vlSelfRef.__PVT__src1, vlSelfRef.__PVT__src2);
vlSelfRef.__PVT__ltu = (vlSelfRef.__PVT__src1 < vlSelfRef.__PVT__src2);
vlSelfRef.__PVT__taken = (1U & ((0U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (~ (IData)(vlSelfRef.__PVT__eq)) : ((1U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (IData)(vlSelfRef.__PVT__eq) : ((2U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (IData)(vlSelfRef.__PVT__lts) : ((3U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (~ (IData)(vlSelfRef.__PVT__lts)) : ((4U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (IData)(vlSelfRef.__PVT__ltu) : ((5U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) & (~ (IData)(vlSelfRef.__PVT__ltu)))))))));
}

void Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__6(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___nba_comb__TOP__ysyx_26010027__my_EXU__6\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__alu_result = (((((((((0U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) | (1U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) | (2U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) | (3U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) | (4U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) | (5U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) | (6U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) | (7U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op))) ? ((0U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 + vlSelfRef.__PVT__src2) : ((1U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 - vlSelfRef.__PVT__src2) : ((2U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? vlSelfRef.__PVT__idu_exu_imm : ((3U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 << (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__src2, 0U, 5))) : ((4U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 >> (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__src2, 0U, 5))) : ((5U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__src1, (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__src2, 0U, 5))) : ((6U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__lts)) : VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__ltu))))))))) : ((8U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__ltu)) : ((9U == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 ^ vlSelfRef.__PVT__src2) : ((0x0aU == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 & vlSelfRef.__PVT__src2) : ((0x0bU == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 | vlSelfRef.__PVT__src2) : ((0x0cU == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? ((IData)(vlSelfRef.__PVT__taken) ? vlSelfRef.__PVT__idu_exu_target : vlSelfRef.__PVT__snpc) : ((0x0dU == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? vlSelfRef.__PVT__src1 : ((0x0eU == (IData)(vlSelfRef.__PVT__idu_exu_alu_op)) ? (vlSelfRef.__PVT__src1 | vlSelfRef.__PVT__csr_rdata) : 0U))))))));
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__PVT__exu_flush = 0U;
vlSelfRef.__PVT__exu_flush_pc = 0U;
} else if (((IData)(vlSelfRef.__PVT__idu_exu_valid) & (IData)(vlSelfRef.__PVT__exu_idu_ready))) {
if ((6U != (IData)(vlSelfRef.__PVT__idu_exu_branch))) {
vlSelfRef.__PVT__exu_flush = (1U & (~ (IData)(vlSelfRef.__PVT__taken)));
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__snpc;
} else if ((1U == (IData)(vlSelfRef.__PVT__idu_exu_jump))) {
vlSelfRef.__PVT__exu_flush = 1U;
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__alu_result;
} else if (((IData)(vlSelfRef.__PVT__idu_exu_csr_ecall) | (IData)(vlSelfRef.__PVT__idu_exu_csr_mret))) {
vlSelfRef.__PVT__exu_flush = 1U;
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__trap_pc;
} else if (vlSelfRef.__PVT__idu_exu_fencei) {
vlSelfRef.__PVT__exu_flush = 1U;
vlSelfRef.__PVT__exu_flush_pc = vlSelfRef.__PVT__snpc;
} else {
vlSelfRef.__PVT__exu_flush = 0U;
vlSelfRef.__PVT__exu_flush_pc = 0U;
}
} else {
vlSelfRef.__PVT__exu_flush = 0U;
vlSelfRef.__PVT__exu_flush_pc = 0U;
}
}
