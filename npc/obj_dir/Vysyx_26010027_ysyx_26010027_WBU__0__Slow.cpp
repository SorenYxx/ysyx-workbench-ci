// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_WBU___stl_sequent__TOP__ysyx_26010027__my_WBU__0(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___stl_sequent__TOP__ysyx_26010027__my_WBU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_mret = vlSelfRef.__PVT__csr_mret;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_ecall = vlSelfRef.__PVT__csr_ecall;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__pc = vlSelfRef.__PVT__lsu_wbu_pc;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_wdata = vlSelfRef.__PVT__csr_wdata;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_we = vlSelfRef.__PVT__csr_we;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_waddr = vlSelfRef.__PVT__csr_waddr;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_raddr = vlSelfRef.__PVT__csr_raddr;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__wen = vlSelfRef.__PVT__lsu_wbu_reg_w;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__raddr2 = vlSelfRef.__PVT__idu_wbu_raddr2;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__raddr1 = vlSelfRef.__PVT__idu_wbu_raddr1;
vlSelfRef.__PVT__waddr = (0x0000001fU & VL_SEL_IIII(32, ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) ? VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__lsu_wbu_waddr)) : 0U), 0U, 5));
vlSelfRef.__PVT__wdata = ((IData)(vlSelfRef.__PVT__lsu_wbu_reg_w) ? (((0U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)) | (2U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))) ? vlSelfRef.__PVT__lsu_wbu_alu_result : ((1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)) ? vlSelfRef.__PVT__lsu_wbu_mem_result : vlSelfRef.__PVT__lsu_wbu_snpc)) : 0U);
vlSelfRef.__PVT__csr_mtvec = vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_mtvec;
vlSelfRef.__PVT__csr_mepc = vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_mepc;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__waddr = vlSelfRef.__PVT__waddr;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__wdata = vlSelfRef.__PVT__wdata;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_WBU___stl_sequent__TOP__ysyx_26010027__my_WBU__1(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___stl_sequent__TOP__ysyx_26010027__my_WBU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__clock = vlSelfRef.__PVT__clock;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__clock = vlSelfRef.__PVT__clock;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__reset = vlSelfRef.__PVT__reset;
vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__reset = vlSelfRef.__PVT__reset;
vlSelfRef.__PVT__wbu_lsu_ready = vlSelfRef.__PVT__lsu_wbu_valid;
vlSelfRef.__PVT__wbu_exu_csr_rdata = vlSymsp->TOP__ysyx_26010027__my_WBU__my_csr.__PVT__csr_rdata;
vlSelfRef.__PVT__wbu_exu_rdata2 = vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__rdata2;
vlSelfRef.__PVT__wbu_exu_rdata1 = vlSymsp->TOP__ysyx_26010027__my_WBU__my_gpr.__PVT__rdata1;
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_WBU___ctor_var_reset(Vysyx_26010027_ysyx_26010027_WBU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_WBU___ctor_var_reset\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
vlSelf->__PVT__idu_wbu_raddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6503143500796745143ull);
vlSelf->__PVT__idu_wbu_raddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14401585879293550172ull);
vlSelf->__PVT__lsu_wbu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1522593543870129406ull);
vlSelf->__PVT__wbu_exu_rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18257322093878146674ull);
vlSelf->__PVT__wbu_exu_rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9914486841929216693ull);
vlSelf->__PVT__wbu_exu_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1692111453719819152ull);
vlSelf->__PVT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16711562886451133210ull);
vlSelf->__PVT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14107046366709206832ull);
vlSelf->__PVT__lsu_wbu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652334751880033759ull);
vlSelf->__PVT__wbu_lsu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1848632801162230625ull);
vlSelf->__PVT__lsu_wbu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3617157319308945984ull);
vlSelf->__PVT__lsu_wbu_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16363578126972848751ull);
vlSelf->__PVT__lsu_wbu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4521485598998237108ull);
vlSelf->__PVT__lsu_wbu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 25816388150553717ull);
vlSelf->__PVT__lsu_wbu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5842538283110212528ull);
vlSelf->__PVT__lsu_wbu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9970364371346125120ull);
vlSelf->__PVT__lsu_wbu_mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11453650951010209917ull);
vlSelf->__PVT__csr_raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17848086834327152458ull);
vlSelf->__PVT__csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7347808842701014756ull);
vlSelf->__PVT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6382147037310304714ull);
vlSelf->__PVT__csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17572232473588034262ull);
vlSelf->__PVT__csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17810421086837207984ull);
vlSelf->__PVT__csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12840228928877068825ull);
vlSelf->__PVT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890271867161903902ull);
vlSelf->__PVT__waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15530376126285439671ull);
}
