// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"


void Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();

void Vysyx_26010027_ysyx_26010027_IDU___nba_sequent__TOP__ysyx_26010027__my_IDU__0(Vysyx_26010027_ysyx_26010027_IDU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IDU___nba_sequent__TOP__ysyx_26010027__my_IDU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
if ((((((IData)(vlSelfRef.__PVT__ifu_idu_valid) & (IData)(vlSelfRef.__PVT__idu_ifu_ready)) & (~ (IData)(vlSelfRef.__PVT__exu_flush))) & (IData)(vlSelfRef.__PVT__illegal)) & (0U != vlSelfRef.__PVT__inst))) {
Vysyx_26010027___024unit____Vdpiimwrap_is_illegal_inst_TOP____024unit();
}
}

void Vysyx_26010027_ysyx_26010027_IDU___nba_sequent__TOP__ysyx_26010027__my_IDU__1(Vysyx_26010027_ysyx_26010027_IDU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IDU___nba_sequent__TOP__ysyx_26010027__my_IDU__1\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__Vdly__idu_exu_valid = vlSelfRef.__PVT__idu_exu_valid;
vlSelfRef.__Vdly__idu_exu_inst = vlSelfRef.__PVT__idu_exu_inst;
vlSelfRef.__Vdly__idu_exu_mem_w = vlSelfRef.__PVT__idu_exu_mem_w;
vlSelfRef.__Vdly__idu_exu_mem_r = vlSelfRef.__PVT__idu_exu_mem_r;
vlSelfRef.__Vdly__idu_exu_reg_w = vlSelfRef.__PVT__idu_exu_reg_w;
vlSelfRef.__Vdly__idu_exu_rf_res = vlSelfRef.__PVT__idu_exu_rf_res;
vlSelfRef.__Vdly__idu_exu_waddr = vlSelfRef.__PVT__idu_exu_waddr;
vlSelfRef.__Vdly__idu_exu_csr_waddr = vlSelfRef.__PVT__idu_exu_csr_waddr;
vlSelfRef.__Vdly__idu_exu_csr_we = vlSelfRef.__PVT__idu_exu_csr_we;
vlSelfRef.__Vdly__idu_exu_jump = vlSelfRef.__PVT__idu_exu_jump;
vlSelfRef.__Vdly__idu_exu_csr_mret = vlSelfRef.__PVT__idu_exu_csr_mret;
vlSelfRef.__Vdly__idu_exu_fencei = vlSelfRef.__PVT__idu_exu_fencei;
vlSelfRef.__Vdly__idu_exu_target = vlSelfRef.__PVT__idu_exu_target;
vlSelfRef.__Vdly__idu_exu_alu_op = vlSelfRef.__PVT__idu_exu_alu_op;
vlSelfRef.__Vdly__idu_exu_csr_ecall = vlSelfRef.__PVT__idu_exu_csr_ecall;
vlSelfRef.__Vdly__idu_exu_branch = vlSelfRef.__PVT__idu_exu_branch;
vlSelfRef.__Vdly__idu_wbu_csr_raddr = vlSelfRef.__PVT__idu_wbu_csr_raddr;
vlSelfRef.__Vdly__idu_exu_alu_arc1 = vlSelfRef.__PVT__idu_exu_alu_arc1;
vlSelfRef.__Vdly__idu_exu_alu_arc2 = vlSelfRef.__PVT__idu_exu_alu_arc2;
vlSelfRef.__Vdly__idu_exu_imm = vlSelfRef.__PVT__idu_exu_imm;
vlSelfRef.__Vdly__idu_exu_pc = vlSelfRef.__PVT__idu_exu_pc;
vlSelfRef.__Vdly__idu_wbu_raddr1 = vlSelfRef.__PVT__idu_wbu_raddr1;
vlSelfRef.__Vdly__idu_wbu_raddr2 = vlSelfRef.__PVT__idu_wbu_raddr2;
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__idu_exu_valid = 0U;
} else if (vlSelfRef.__PVT__exu_flush) {
vlSelfRef.__Vdly__idu_exu_valid = 0U;
} else if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) & (IData)(vlSelfRef.__PVT__idu_ifu_ready))) {
vlSelfRef.__Vdly__idu_exu_valid = 1U;
} else if (vlSelfRef.__PVT__exu_idu_ready) {
vlSelfRef.__Vdly__idu_exu_valid = 0U;
}
if (vlSelfRef.__PVT__reset) {
vlSelfRef.__Vdly__idu_exu_pc = 0U;
vlSelfRef.__Vdly__idu_exu_inst = 0U;
vlSelfRef.__Vdly__idu_exu_target = 0U;
vlSelfRef.__Vdly__idu_exu_imm = 0U;
vlSelfRef.__Vdly__idu_exu_alu_op = 0U;
vlSelfRef.__Vdly__idu_exu_mem_w = 0U;
vlSelfRef.__Vdly__idu_exu_mem_r = 0U;
vlSelfRef.__Vdly__idu_exu_alu_arc1 = 0U;
vlSelfRef.__Vdly__idu_exu_alu_arc2 = 0U;
vlSelfRef.__Vdly__idu_exu_reg_w = 0U;
vlSelfRef.__Vdly__idu_exu_rf_res = 0U;
vlSelfRef.__Vdly__idu_exu_waddr = 0U;
vlSelfRef.__Vdly__idu_exu_jump = 0U;
vlSelfRef.__Vdly__idu_exu_branch = 6U;
vlSelfRef.__Vdly__idu_exu_fencei = 0U;
vlSelfRef.__Vdly__idu_wbu_csr_raddr = 0U;
vlSelfRef.__Vdly__idu_exu_csr_waddr = 0U;
vlSelfRef.__Vdly__idu_exu_csr_we = 0U;
vlSelfRef.__Vdly__idu_exu_csr_ecall = 0U;
vlSelfRef.__Vdly__idu_exu_csr_mret = 0U;
vlSelfRef.__Vdly__idu_wbu_raddr1 = 0U;
vlSelfRef.__Vdly__idu_wbu_raddr2 = 0U;
} else if (((IData)(vlSelfRef.__PVT__ifu_idu_valid) & (IData)(vlSelfRef.__PVT__idu_ifu_ready))) {
vlSelfRef.__Vdly__idu_exu_pc = vlSelfRef.__PVT__ifu_idu_pc;
vlSelfRef.__Vdly__idu_exu_inst = vlSelfRef.__PVT__ifu_idu_inst;
vlSelfRef.__Vdly__idu_exu_target = vlSelfRef.__PVT__target;
vlSelfRef.__Vdly__idu_exu_imm = vlSelfRef.__PVT__imm;
vlSelfRef.__Vdly__idu_exu_alu_op = vlSelfRef.__PVT__alu_op;
vlSelfRef.__Vdly__idu_exu_mem_w = vlSelfRef.__PVT__mem_w;
vlSelfRef.__Vdly__idu_exu_mem_r = vlSelfRef.__PVT__mem_r;
vlSelfRef.__Vdly__idu_exu_alu_arc1 = vlSelfRef.__PVT__alu_arc1;
vlSelfRef.__Vdly__idu_exu_alu_arc2 = vlSelfRef.__PVT__alu_arc2;
vlSelfRef.__Vdly__idu_exu_reg_w = vlSelfRef.__PVT__reg_w;
vlSelfRef.__Vdly__idu_exu_rf_res = vlSelfRef.__PVT__rf_res;
vlSelfRef.__Vdly__idu_exu_waddr = vlSelfRef.__PVT__waddr;
vlSelfRef.__Vdly__idu_exu_jump = vlSelfRef.__PVT__jump;
vlSelfRef.__Vdly__idu_exu_branch = vlSelfRef.__PVT__branch;
vlSelfRef.__Vdly__idu_exu_fencei = vlSelfRef.__PVT__fence_i;
vlSelfRef.__Vdly__idu_wbu_csr_raddr = vlSelfRef.__PVT__csr_addr;
vlSelfRef.__Vdly__idu_exu_csr_waddr = vlSelfRef.__PVT__csr_addr;
vlSelfRef.__Vdly__idu_exu_csr_we = vlSelfRef.__PVT__csrrw;
vlSelfRef.__Vdly__idu_exu_csr_ecall = vlSelfRef.__PVT__csr_ecall;
vlSelfRef.__Vdly__idu_exu_csr_mret = vlSelfRef.__PVT__csr_mret;
vlSelfRef.__Vdly__idu_wbu_raddr1 = vlSelfRef.__PVT__raddr1;
vlSelfRef.__Vdly__idu_wbu_raddr2 = vlSelfRef.__PVT__raddr2;
}
vlSelfRef.__PVT__idu_exu_valid = vlSelfRef.__Vdly__idu_exu_valid;
vlSelfRef.__PVT__idu_exu_inst = vlSelfRef.__Vdly__idu_exu_inst;
vlSelfRef.__PVT__idu_exu_mem_w = vlSelfRef.__Vdly__idu_exu_mem_w;
vlSelfRef.__PVT__idu_exu_mem_r = vlSelfRef.__Vdly__idu_exu_mem_r;
vlSelfRef.__PVT__idu_exu_reg_w = vlSelfRef.__Vdly__idu_exu_reg_w;
vlSelfRef.__PVT__idu_exu_rf_res = vlSelfRef.__Vdly__idu_exu_rf_res;
vlSelfRef.__PVT__idu_exu_waddr = vlSelfRef.__Vdly__idu_exu_waddr;
vlSelfRef.__PVT__idu_exu_csr_waddr = vlSelfRef.__Vdly__idu_exu_csr_waddr;
vlSelfRef.__PVT__idu_exu_csr_we = vlSelfRef.__Vdly__idu_exu_csr_we;
vlSelfRef.__PVT__idu_exu_jump = vlSelfRef.__Vdly__idu_exu_jump;
vlSelfRef.__PVT__idu_exu_csr_mret = vlSelfRef.__Vdly__idu_exu_csr_mret;
vlSelfRef.__PVT__idu_exu_fencei = vlSelfRef.__Vdly__idu_exu_fencei;
vlSelfRef.__PVT__idu_exu_target = vlSelfRef.__Vdly__idu_exu_target;
vlSelfRef.__PVT__idu_exu_alu_op = vlSelfRef.__Vdly__idu_exu_alu_op;
vlSelfRef.__PVT__idu_exu_csr_ecall = vlSelfRef.__Vdly__idu_exu_csr_ecall;
vlSelfRef.__PVT__idu_exu_branch = vlSelfRef.__Vdly__idu_exu_branch;
vlSelfRef.__PVT__idu_wbu_csr_raddr = vlSelfRef.__Vdly__idu_wbu_csr_raddr;
vlSelfRef.__PVT__idu_exu_alu_arc1 = vlSelfRef.__Vdly__idu_exu_alu_arc1;
vlSelfRef.__PVT__idu_exu_alu_arc2 = vlSelfRef.__Vdly__idu_exu_alu_arc2;
vlSelfRef.__PVT__idu_exu_imm = vlSelfRef.__Vdly__idu_exu_imm;
vlSelfRef.__PVT__idu_exu_pc = vlSelfRef.__Vdly__idu_exu_pc;
vlSelfRef.__PVT__idu_wbu_raddr1 = vlSelfRef.__Vdly__idu_wbu_raddr1;
vlSelfRef.__PVT__idu_wbu_raddr2 = vlSelfRef.__Vdly__idu_wbu_raddr2;
}

void Vysyx_26010027_ysyx_26010027_IDU___nba_sequent__TOP__ysyx_26010027__my_IDU__2(Vysyx_26010027_ysyx_26010027_IDU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IDU___nba_sequent__TOP__ysyx_26010027__my_IDU__2\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__inst = vlSelfRef.__PVT__ifu_idu_inst;
vlSelfRef.__PVT__raddr1 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x0fU, 5));
vlSelfRef.__PVT__raddr2 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x14U, 5));
vlSelfRef.__PVT__waddr = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 7U, 5));
vlSelfRef.__PVT__fence_i = (0x0000100fU == vlSelfRef.__PVT__inst);
vlSelfRef.__PVT__ebreak = (0x00100073U == vlSelfRef.__PVT__inst);
vlSelfRef.__PVT__csr_ecall = (0x00000073U == vlSelfRef.__PVT__inst);
vlSelfRef.__PVT__csr_mret = (0x30200073U == vlSelfRef.__PVT__inst);
vlSelfRef.__PVT__funct7 = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x19U, 7));
vlSelfRef.__PVT__funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x0cU, 3));
vlSelfRef.__PVT__opcode = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0U, 7));
vlSelfRef.__PVT__auipc = (0x17U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__inst_U = ((0x37U == (IData)(vlSelfRef.__PVT__opcode)) | (0x17U == (IData)(vlSelfRef.__PVT__opcode)));
vlSelfRef.__PVT__inst_I = ((((0x13U == (IData)(vlSelfRef.__PVT__opcode)) | (3U == (IData)(vlSelfRef.__PVT__opcode))) | (0x67U == (IData)(vlSelfRef.__PVT__opcode))) | (0x73U == (IData)(vlSelfRef.__PVT__opcode)));
vlSelfRef.__PVT__lui = (0x37U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__jalr = (0x67U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__inst_J = (0x6fU == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__inst_S = (0x23U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__I_c = (0x73U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__inst_B = (0x63U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__I_b = (3U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__I_a = (0x13U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__inst_R = (0x33U == (IData)(vlSelfRef.__PVT__opcode));
vlSelfRef.__PVT__jump = ((IData)(vlSelfRef.__PVT__jalr) ? 1U : ((IData)(vlSelfRef.__PVT__csr_ecall) ? 2U : ((IData)(vlSelfRef.__PVT__csr_mret) ? 3U : 0U)));
vlSelfRef.__PVT__jal = vlSelfRef.__PVT__inst_J;
vlSelfRef.__PVT__alu_arc2 = ((((IData)(vlSelfRef.__PVT__inst_I) | (IData)(vlSelfRef.__PVT__inst_S)) | (IData)(vlSelfRef.__PVT__auipc)) | (IData)(vlSelfRef.__PVT__inst_J));
vlSelfRef.__PVT__sw = ((IData)(vlSelfRef.__PVT__inst_S) & (2U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__sb = ((IData)(vlSelfRef.__PVT__inst_S) & (0U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__sh = ((IData)(vlSelfRef.__PVT__inst_S) & (1U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__csrrc = ((IData)(vlSelfRef.__PVT__I_c) & (3U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__csrrs = ((IData)(vlSelfRef.__PVT__I_c) & (2U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__csrrw = ((IData)(vlSelfRef.__PVT__I_c) & (1U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__imm = ((IData)(vlSelfRef.__PVT__inst_I) ? VL_CONCAT_III(32,20,12, (0x000fffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x00000014U)), (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x14U, 12))) : ((IData)(vlSelfRef.__PVT__inst_S) ? VL_CONCAT_III(32,20,12, (0x000fffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x00000014U)), VL_CONCAT_III(12,7,5, (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x19U, 7)), (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 7U, 5)))) : ((IData)(vlSelfRef.__PVT__inst_B) ? VL_CONCAT_III(32,20,12, (0x000fffffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x00000014U)), VL_CONCAT_III(12,1,11, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 7U)), VL_CONCAT_III(11,6,5, (0x0000003fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x19U, 6)), VL_CONCAT_III(5,4,1, (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 8U, 4)), 0U)))) : ((IData)(vlSelfRef.__PVT__inst_U) ? VL_CONCAT_III(32,20,12, (0x000fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x0cU, 20)), 0U) : ((IData)(vlSelfRef.__PVT__inst_J) ? VL_CONCAT_III(32,12,20, VL_CONCAT_III(12,11,1, (0x000007ffU & VL_REPLICATE_IOI(1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU)), 0x0000000bU)), (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x1fU))), VL_CONCAT_III(20,9,11, VL_CONCAT_III(9,8,1, (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x0cU, 8)), (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst, 0x14U))), VL_CONCAT_III(11,10,1, (0x000003ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst, 0x15U, 10)), 0U))) : 0U)))));
vlSelfRef.__PVT__bne = ((IData)(vlSelfRef.__PVT__inst_B) & (1U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__beq = ((IData)(vlSelfRef.__PVT__inst_B) & (0U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__blt = ((IData)(vlSelfRef.__PVT__inst_B) & (4U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__bge = ((IData)(vlSelfRef.__PVT__inst_B) & (5U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__bltu = ((IData)(vlSelfRef.__PVT__inst_B) & (6U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__bgeu = ((IData)(vlSelfRef.__PVT__inst_B) & (7U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__lbu = ((IData)(vlSelfRef.__PVT__I_b) & (4U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__lhu = ((IData)(vlSelfRef.__PVT__I_b) & (5U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__lw = ((IData)(vlSelfRef.__PVT__I_b) & (2U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__lh = ((IData)(vlSelfRef.__PVT__I_b) & (1U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__lb = ((IData)(vlSelfRef.__PVT__I_b) & (0U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__addi = ((IData)(vlSelfRef.__PVT__I_a) & (0U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__slti = ((IData)(vlSelfRef.__PVT__I_a) & (2U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__slli = ((IData)(vlSelfRef.__PVT__I_a) & (1U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__sltiu = ((IData)(vlSelfRef.__PVT__I_a) & (3U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__xori = ((IData)(vlSelfRef.__PVT__I_a) & (4U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__ori = ((IData)(vlSelfRef.__PVT__I_a) & (6U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__andi = ((IData)(vlSelfRef.__PVT__I_a) & (7U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__srli = (((IData)(vlSelfRef.__PVT__I_a) & (5U == (IData)(vlSelfRef.__PVT__funct3))) & (0U == (IData)(vlSelfRef.__PVT__funct7)));
vlSelfRef.__PVT__srai = (((IData)(vlSelfRef.__PVT__I_a) & (5U == (IData)(vlSelfRef.__PVT__funct3))) & (0x20U == (IData)(vlSelfRef.__PVT__funct7)));
vlSelfRef.__PVT__add = (((IData)(vlSelfRef.__PVT__inst_R) & (0U == (IData)(vlSelfRef.__PVT__funct3))) & (0U == (IData)(vlSelfRef.__PVT__funct7)));
vlSelfRef.__PVT__sll = ((IData)(vlSelfRef.__PVT__inst_R) & (1U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__slt = ((IData)(vlSelfRef.__PVT__inst_R) & (2U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__sltu = ((IData)(vlSelfRef.__PVT__inst_R) & (3U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__r_xor = ((IData)(vlSelfRef.__PVT__inst_R) & (4U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__r_or = ((IData)(vlSelfRef.__PVT__inst_R) & (6U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__r_and = ((IData)(vlSelfRef.__PVT__inst_R) & (7U == (IData)(vlSelfRef.__PVT__funct3)));
vlSelfRef.__PVT__sub = (((IData)(vlSelfRef.__PVT__inst_R) & (0U == (IData)(vlSelfRef.__PVT__funct3))) & (0x20U == (IData)(vlSelfRef.__PVT__funct7)));
vlSelfRef.__PVT__srl = (((IData)(vlSelfRef.__PVT__inst_R) & (5U == (IData)(vlSelfRef.__PVT__funct3))) & (0U == (IData)(vlSelfRef.__PVT__funct7)));
vlSelfRef.__PVT__sra = (((IData)(vlSelfRef.__PVT__inst_R) & (5U == (IData)(vlSelfRef.__PVT__funct3))) & (0x20U == (IData)(vlSelfRef.__PVT__funct7)));
vlSelfRef.__PVT__alu_arc1 = ((IData)(vlSelfRef.__PVT__jal) | (IData)(vlSelfRef.__PVT__auipc));
vlSelfRef.__PVT__mem_w = ((IData)(vlSelfRef.__PVT__sw) ? 0U : ((IData)(vlSelfRef.__PVT__sb) ? 1U : ((IData)(vlSelfRef.__PVT__sh) ? 2U : 3U)));
vlSelfRef.__PVT__s_inst = (((IData)(vlSelfRef.__PVT__sw) | (IData)(vlSelfRef.__PVT__sb)) | (IData)(vlSelfRef.__PVT__sh));
vlSelfRef.__PVT__reg_w = (((((IData)(vlSelfRef.__PVT__inst_I) | (IData)(vlSelfRef.__PVT__inst_R)) | (IData)(vlSelfRef.__PVT__inst_J)) | (IData)(vlSelfRef.__PVT__inst_U)) | (IData)(vlSelfRef.__PVT__csrrw));
vlSelfRef.__PVT__csr_inst = (((((IData)(vlSelfRef.__PVT__csrrw) | (IData)(vlSelfRef.__PVT__csrrs)) | (IData)(vlSelfRef.__PVT__csrrc)) | (IData)(vlSelfRef.__PVT__csr_ecall)) | (IData)(vlSelfRef.__PVT__csr_mret));
vlSelfRef.__PVT__csr_addr = (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__imm, 0U, 12));
vlSelfRef.__PVT__branch = ((IData)(vlSelfRef.__PVT__bne) ? 0U : ((IData)(vlSelfRef.__PVT__beq) ? 1U : ((IData)(vlSelfRef.__PVT__blt) ? 2U : ((IData)(vlSelfRef.__PVT__bge) ? 3U : ((IData)(vlSelfRef.__PVT__bltu) ? 4U : ((IData)(vlSelfRef.__PVT__bgeu) ? 5U : 6U))))));
vlSelfRef.__PVT__b_inst = ((((((IData)(vlSelfRef.__PVT__bne) | (IData)(vlSelfRef.__PVT__beq)) | (IData)(vlSelfRef.__PVT__blt)) | (IData)(vlSelfRef.__PVT__bge)) | (IData)(vlSelfRef.__PVT__bltu)) | (IData)(vlSelfRef.__PVT__bgeu));
vlSelfRef.__PVT__mem_r = ((IData)(vlSelfRef.__PVT__lw) ? 0U : ((IData)(vlSelfRef.__PVT__lb) ? 1U : ((IData)(vlSelfRef.__PVT__lh) ? 2U : ((IData)(vlSelfRef.__PVT__lbu) ? 3U : ((IData)(vlSelfRef.__PVT__lhu) ? 4U : 5U)))));
vlSelfRef.__PVT__ld_type = (((((IData)(vlSelfRef.__PVT__lbu) | (IData)(vlSelfRef.__PVT__lhu)) | (IData)(vlSelfRef.__PVT__lw)) | (IData)(vlSelfRef.__PVT__lh)) | (IData)(vlSelfRef.__PVT__lb));
vlSelfRef.__PVT__i_inst = (((((((((((((((IData)(vlSelfRef.__PVT__addi) | (IData)(vlSelfRef.__PVT__slti)) | (IData)(vlSelfRef.__PVT__slli)) | (IData)(vlSelfRef.__PVT__srli)) | (IData)(vlSelfRef.__PVT__srai)) | (IData)(vlSelfRef.__PVT__sltiu)) | (IData)(vlSelfRef.__PVT__xori)) | (IData)(vlSelfRef.__PVT__ori)) | (IData)(vlSelfRef.__PVT__andi)) | (IData)(vlSelfRef.__PVT__lbu)) | (IData)(vlSelfRef.__PVT__lhu)) | (IData)(vlSelfRef.__PVT__lw)) | (IData)(vlSelfRef.__PVT__lh)) | (IData)(vlSelfRef.__PVT__lb)) | (IData)(vlSelfRef.__PVT__jalr));
vlSelfRef.__PVT__alu_op = ((IData)(vlSelfRef.__PVT__sub) ? 1U : ((IData)(vlSelfRef.__PVT__lui) ? 2U : (((IData)(vlSelfRef.__PVT__sll) | (IData)(vlSelfRef.__PVT__slli)) ? 3U : (((IData)(vlSelfRef.__PVT__srl) | (IData)(vlSelfRef.__PVT__srli)) ? 4U : (((IData)(vlSelfRef.__PVT__sra) | (IData)(vlSelfRef.__PVT__srai)) ? 5U : (((IData)(vlSelfRef.__PVT__slt) | (IData)(vlSelfRef.__PVT__slti)) ? 6U : ((IData)(vlSelfRef.__PVT__sltiu) ? 7U : ((IData)(vlSelfRef.__PVT__sltu) ? 8U : (((IData)(vlSelfRef.__PVT__r_xor) | (IData)(vlSelfRef.__PVT__xori)) ? 9U : (((IData)(vlSelfRef.__PVT__r_and) | (IData)(vlSelfRef.__PVT__andi)) ? 0x0aU : (((IData)(vlSelfRef.__PVT__r_or) | (IData)(vlSelfRef.__PVT__ori)) ? 0x0bU : ((IData)(vlSelfRef.__PVT__inst_B) ? 0x0cU : ((IData)(vlSelfRef.__PVT__csrrw) ? 0x0dU : ((IData)(vlSelfRef.__PVT__csrrs) ? 0x0eU : 0U))))))))))))));
vlSelfRef.__PVT__r_inst = ((((((((((IData)(vlSelfRef.__PVT__add) | (IData)(vlSelfRef.__PVT__sub)) | (IData)(vlSelfRef.__PVT__sll)) | (IData)(vlSelfRef.__PVT__slt)) | (IData)(vlSelfRef.__PVT__sltu)) | (IData)(vlSelfRef.__PVT__srl)) | (IData)(vlSelfRef.__PVT__sra)) | (IData)(vlSelfRef.__PVT__r_xor)) | (IData)(vlSelfRef.__PVT__r_or)) | (IData)(vlSelfRef.__PVT__r_and));
vlSelfRef.__PVT__target = ((6U != (IData)(vlSelfRef.__PVT__branch)) ? (vlSelfRef.__PVT__ifu_idu_pc + vlSelfRef.__PVT__imm) : 0U);
vlSelfRef.__PVT__rf_res = ((IData)(vlSelfRef.__PVT__ld_type) ? 1U : ((((IData)(vlSelfRef.__PVT__csrrw) | (IData)(vlSelfRef.__PVT__csrrs)) | (IData)(vlSelfRef.__PVT__csrrc)) ? 2U : (((IData)(vlSelfRef.__PVT__jal) | (IData)(vlSelfRef.__PVT__jalr)) ? 3U : 0U)));
vlSelfRef.__PVT__illegal = (1U & (~ ((((((((((IData)(vlSelfRef.__PVT__i_inst) | (IData)(vlSelfRef.__PVT__r_inst)) | (IData)(vlSelfRef.__PVT__s_inst)) | (IData)(vlSelfRef.__PVT__b_inst)) | (IData)(vlSelfRef.__PVT__lui)) | (IData)(vlSelfRef.__PVT__auipc)) | (IData)(vlSelfRef.__PVT__jal)) | (IData)(vlSelfRef.__PVT__csr_inst)) | (IData)(vlSelfRef.__PVT__ebreak)) | (IData)(vlSelfRef.__PVT__fence_i))));
}

void Vysyx_26010027_ysyx_26010027_IDU___nba_comb__TOP__ysyx_26010027__my_IDU__0(Vysyx_26010027_ysyx_26010027_IDU* vlSelf) {
VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_26010027_ysyx_26010027_IDU___nba_comb__TOP__ysyx_26010027__my_IDU__0\n"); );
Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
auto& vlSelfRef = std::ref(*vlSelf).get();
vlSelfRef.__PVT__idu_ifu_ready = (1U & ((IData)(vlSelfRef.__PVT__exu_idu_ready) | (~ (IData)(vlSelfRef.__PVT__idu_exu_valid))));
}
