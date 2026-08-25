// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_EXU___stl_sequent__TOP__ysyx_26010027__my_EXU__0(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___stl_sequent__TOP__ysyx_26010027__my_EXU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__lsu_fwd_data = ((3U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res)) ? vlSelfRef.__PVT__exu_lsu_snpc : vlSelfRef.__PVT__exu_lsu_alu_result);
vlSelfRef.__PVT__lsu_fwd_flag = (((IData)(vlSelfRef.__PVT__exu_lsu_valid) & (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)) & (1U != (IData)(vlSelfRef.__PVT__exu_lsu_rf_res)));
VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__csr_fwd, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr)) & ((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr) == (IData)(vlSelfRef.__PVT__exu_lsu_csr_waddr))) & (IData)(vlSelfRef.__PVT__exu_lsu_valid)) & (IData)(vlSelfRef.__PVT__exu_lsu_csr_we)) & (2U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))));
vlSelfRef.__PVT__snpc = ((IData)(4U) + vlSelfRef.__PVT__idu_exu_pc);
vlSelfRef.__PVT__wbu_fwd_data = ((3U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)) ? vlSelfRef.__PVT__lsu_wbu_snpc : vlSelfRef.__PVT__lsu_wbu_alu_result);
VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__fwd_1, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) == (IData)(vlSelfRef.__PVT__exu_lsu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_fwd_flag)));
VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__fwd_2, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) == (IData)(vlSelfRef.__PVT__exu_lsu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_fwd_flag)));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_EXU___stl_sequent__TOP__ysyx_26010027__my_EXU__1(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___stl_sequent__TOP__ysyx_26010027__my_EXU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__load_use_stall = (((((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & (IData)(vlSelfRef.__PVT__exu_lsu_valid)) & (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)) & (1U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))) & ((IData)(vlSelfRef.__PVT__exu_lsu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr1))) | ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & (IData)(vlSelfRef.__PVT__exu_lsu_valid)) & (IData)(vlSelfRef.__PVT__exu_lsu_reg_w)) & (1U == (IData)(vlSelfRef.__PVT__exu_lsu_rf_res))) & ((IData)(vlSelfRef.__PVT__exu_lsu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr2)))) | ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & (IData)(vlSelfRef.__PVT__lsu_load_inflight)) & ((IData)(vlSelfRef.__PVT__lsu_wbu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr1)))) | ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & (IData)(vlSelfRef.__PVT__lsu_load_inflight)) & ((IData)(vlSelfRef.__PVT__lsu_wbu_waddr) == (IData)(vlSelfRef.__PVT__idu_wbu_raddr2))));
VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__csr_fwd, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr)) & ((IData)(vlSelfRef.__PVT__idu_wbu_csr_raddr) == (IData)(vlSelfRef.__PVT__lsu_wbu_csr_waddr))) & (IData)(vlSelfRef.__PVT__lsu_wbu_valid)) & (IData)(vlSelfRef.__PVT__lsu_wbu_csr_we)) & (2U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))));
VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__fwd_1, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_wbu_reg_w)) & (IData)(vlSelfRef.__PVT__lsu_wbu_valid)) & (1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))));
VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__fwd_2, ((((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__lsu_wbu_reg_w)) & (IData)(vlSelfRef.__PVT__lsu_wbu_valid)) & (1U == (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res))));
vlSelfRef.__PVT__wbu_fwd_flag = (((IData)(vlSelfRef.__PVT__lsu_wbu_valid) & (IData)(vlSelfRef.__PVT__lsu_wbu_reg_w)) & (1U != (IData)(vlSelfRef.__PVT__lsu_wbu_rf_res)));
vlSelfRef.__PVT__trap_pc = ((IData)(vlSelfRef.__PVT__idu_exu_csr_ecall) ? vlSelfRef.__PVT__exu_mtvec : vlSelfRef.__PVT__exu_mepc);
vlSelfRef.__PVT__exu_idu_ready = (1U & (((IData)(vlSelfRef.__PVT__lsu_exu_ready) | (~ (IData)(vlSelfRef.__PVT__exu_lsu_valid))) & (~ (IData)(vlSelfRef.__PVT__load_use_stall))));
VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__fwd_1, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr1)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr1) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__wbu_fwd_flag)));
VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__fwd_2, ((VL_REDOR_I((IData)(vlSelfRef.__PVT__idu_wbu_raddr2)) & ((IData)(vlSelfRef.__PVT__idu_wbu_raddr2) == (IData)(vlSelfRef.__PVT__lsu_wbu_waddr))) & (IData)(vlSelfRef.__PVT__wbu_fwd_flag)));
}

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_EXU___stl_sequent__TOP__ysyx_26010027__my_EXU__2(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___stl_sequent__TOP__ysyx_26010027__my_EXU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__csr_rdata = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__csr_fwd), 0U)) ? vlSelfRef.__PVT__exu_lsu_csr_wdata : ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__csr_fwd), 1U)) ? vlSelfRef.__PVT__lsu_wbu_csr_wdata : vlSelfRef.__PVT__wbu_exu_csr_rdata));
vlSelfRef.__PVT__rdata2 = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_2), 0U)) ? vlSelfRef.__PVT__lsu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_2), 1U)) ? vlSelfRef.__PVT__wbu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_2), 2U)) ? vlSelfRef.__PVT__lsu_wbu_mem_result : vlSelfRef.__PVT__wbu_exu_rdata2)));
vlSelfRef.__PVT__rdata1 = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_1), 0U)) ? vlSelfRef.__PVT__lsu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_1), 1U)) ? vlSelfRef.__PVT__wbu_fwd_data : ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fwd_1), 2U)) ? vlSelfRef.__PVT__lsu_wbu_mem_result : vlSelfRef.__PVT__wbu_exu_rdata1)));
vlSelfRef.__PVT__src2 = ((IData)(vlSelfRef.__PVT__idu_exu_alu_arc2) ? vlSelfRef.__PVT__idu_exu_imm : vlSelfRef.__PVT__rdata2);
vlSelfRef.__PVT__src1 = ((IData)(vlSelfRef.__PVT__idu_exu_alu_arc1) ? vlSelfRef.__PVT__idu_exu_pc : vlSelfRef.__PVT__rdata1);
vlSelfRef.__PVT__eq = (vlSelfRef.__PVT__src1 == vlSelfRef.__PVT__src2);
vlSelfRef.__PVT__lts = VL_LTS_III(32, vlSelfRef.__PVT__src1, vlSelfRef.__PVT__src2);
vlSelfRef.__PVT__ltu = (vlSelfRef.__PVT__src1 < vlSelfRef.__PVT__src2);
vlSelfRef.__PVT__taken = (1U & ((0U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (~ (IData)(vlSelfRef.__PVT__eq)) : ((1U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (IData)(vlSelfRef.__PVT__eq) : ((2U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (IData)(vlSelfRef.__PVT__lts) : ((3U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (~ (IData)(vlSelfRef.__PVT__lts)) : ((4U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) ? (IData)(vlSelfRef.__PVT__ltu) : ((5U == (IData)(vlSelfRef.__PVT__idu_exu_branch)) & (~ (IData)(vlSelfRef.__PVT__ltu)))))))));
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

VL_ATTR_COLD void Vysyx_26010027_ysyx_26010027_EXU___ctor_var_reset(Vysyx_26010027_ysyx_26010027_EXU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_EXU___ctor_var_reset\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
vlSelf->__PVT__idu_exu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3667902548427312410ull);
vlSelf->__PVT__exu_idu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9919610088417113283ull);
vlSelf->__PVT__idu_exu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5601031467851036200ull);
vlSelf->__PVT__idu_exu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13621274918108753720ull);
vlSelf->__PVT__idu_exu_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7477911006665384310ull);
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
vlSelf->__PVT__idu_exu_fencei = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14143010326642941493ull);
vlSelf->__PVT__idu_exu_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1623648128667446177ull);
vlSelf->__PVT__idu_exu_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17116033661732219898ull);
vlSelf->__PVT__idu_exu_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13166169235025647983ull);
vlSelf->__PVT__idu_exu_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17705660091863183697ull);
vlSelf->__PVT__lsu_exu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12521238730869369999ull);
vlSelf->__PVT__exu_lsu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15907641580100121387ull);
vlSelf->__PVT__exu_lsu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18234735619894488717ull);
vlSelf->__PVT__exu_lsu_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6417574988869439604ull);
vlSelf->__PVT__exu_lsu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5062588424509372868ull);
vlSelf->__PVT__exu_lsu_mem_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15051009589663021510ull);
vlSelf->__PVT__exu_lsu_mem_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5757054759557756680ull);
vlSelf->__PVT__exu_lsu_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14897376209994633664ull);
vlSelf->__PVT__exu_lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10611043150164332298ull);
vlSelf->__PVT__exu_lsu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17122993046965594649ull);
vlSelf->__PVT__exu_lsu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15258802598644843815ull);
vlSelf->__PVT__exu_lsu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6672747562969528322ull);
vlSelf->__PVT__exu_lsu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5902197904464830595ull);
vlSelf->__PVT__exu_lsu_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15198584706829679277ull);
vlSelf->__PVT__exu_lsu_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5015970898832611039ull);
vlSelf->__PVT__exu_lsu_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14232897796520984556ull);
vlSelf->__PVT__exu_lsu_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6998911747177318781ull);
vlSelf->__PVT__exu_lsu_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16975172967430906159ull);
vlSelf->__PVT__exu_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9574981724881550454ull);
vlSelf->__PVT__exu_flush_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11763334058525865209ull);
vlSelf->__PVT__lsu_wbu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652334751880033759ull);
vlSelf->__PVT__lsu_load_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11533648048938271791ull);
vlSelf->__PVT__lsu_wbu_reg_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 25816388150553717ull);
vlSelf->__PVT__lsu_wbu_csr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9897701433583394645ull);
vlSelf->__PVT__lsu_wbu_rf_res = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1522593543870129406ull);
vlSelf->__PVT__idu_wbu_raddr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6503143500796745143ull);
vlSelf->__PVT__idu_wbu_raddr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14401585879293550172ull);
vlSelf->__PVT__idu_wbu_csr_raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10350177626432760766ull);
vlSelf->__PVT__lsu_wbu_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5842538283110212528ull);
vlSelf->__PVT__lsu_wbu_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3508083279400371322ull);
vlSelf->__PVT__lsu_wbu_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3617157319308945984ull);
vlSelf->__PVT__lsu_wbu_snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16363578126972848751ull);
vlSelf->__PVT__lsu_wbu_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9970364371346125120ull);
vlSelf->__PVT__lsu_wbu_mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11453650951010209917ull);
vlSelf->__PVT__lsu_wbu_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3089798186865548182ull);
vlSelf->__PVT__wbu_exu_rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18257322093878146674ull);
vlSelf->__PVT__wbu_exu_rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9914486841929216693ull);
vlSelf->__PVT__wbu_exu_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1692111453719819152ull);
vlSelf->__PVT__exu_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3814200074288655096ull);
vlSelf->__PVT__exu_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17790222417073972753ull);
vlSelf->__PVT__src1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11501994169717294192ull);
vlSelf->__PVT__src2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3892772694212331581ull);
vlSelf->__PVT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12169918079455006130ull);
vlSelf->__PVT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10569764147769340794ull);
vlSelf->__PVT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17955041938888895009ull);
vlSelf->__PVT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686967141507380524ull);
vlSelf->__PVT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15326351562492354909ull);
vlSelf->__PVT__lsu_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8254714272449817809ull);
vlSelf->__PVT__wbu_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13746750137838026965ull);
vlSelf->__PVT__eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3626420587408340920ull);
vlSelf->__PVT__lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7988709603901312811ull);
vlSelf->__PVT__ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370257815385987717ull);
vlSelf->__PVT__taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 337230714877897787ull);
vlSelf->__PVT__fwd_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4866313514026352860ull);
vlSelf->__PVT__fwd_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17518684073145767356ull);
vlSelf->__PVT__csr_fwd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 408437857148853388ull);
vlSelf->__PVT__load_use_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340987187204866703ull);
vlSelf->__PVT__lsu_fwd_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11625323317604096916ull);
vlSelf->__PVT__wbu_fwd_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8856543430872842563ull);
vlSelf->__PVT__trap_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8753758821950171138ull);
vlSelf->__Vdly__exu_lsu_valid = 0;
vlSelf->__Vdly__exu_lsu_pc = 0;
vlSelf->__Vdly__exu_lsu_snpc = 0;
vlSelf->__Vdly__exu_lsu_inst = 0;
vlSelf->__Vdly__exu_lsu_mem_w = 0;
vlSelf->__Vdly__exu_lsu_mem_r = 0;
vlSelf->__Vdly__exu_lsu_mem_addr = 0;
vlSelf->__Vdly__exu_lsu_reg_w = 0;
vlSelf->__Vdly__exu_lsu_rf_res = 0;
vlSelf->__Vdly__exu_lsu_waddr = 0;
vlSelf->__Vdly__exu_lsu_alu_result = 0;
vlSelf->__Vdly__exu_lsu_csr_waddr = 0;
vlSelf->__Vdly__exu_lsu_csr_we = 0;
vlSelf->__Vdly__exu_lsu_csr_ecall = 0;
vlSelf->__Vdly__exu_lsu_csr_mret = 0;
vlSelf->__Vdly__exu_lsu_csr_wdata = 0;
vlSelf->__Vdly__exu_lsu_wdata = 0;
}
