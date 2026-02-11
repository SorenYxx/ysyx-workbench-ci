// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vminirv__Syms.h"


VL_ATTR_COLD void Vminirv___024root__trace_init_sub__TOP__0(Vminirv___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_sub__TOP__0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"cur_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"cur_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("minirv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"cur_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"cur_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"alu_arc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"alu_arc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+94,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"ebreak_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("R", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+104,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+44,0,"alu_arc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"alu_arc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"reg_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rf_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"mem_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"mem_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+44,0,"alu_arc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"alu_arc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"j_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+48,0,"ebreak_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+54,0,"inst_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"inst_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"inst_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"inst_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"inst_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"I_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"I_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"ld_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"r_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"r_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"r_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"awdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"full_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"data_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"j_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"n_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vminirv___024root__trace_init_top(Vminirv___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_init_top\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminirv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vminirv___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vminirv___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vminirv___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vminirv___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vminirv___024root__trace_register(Vminirv___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_register\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vminirv___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vminirv___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vminirv___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vminirv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vminirv___024root__trace_const_0_sub_0(Vminirv___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vminirv___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_const_0\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vminirv___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vminirv___024root__trace_const_0_sub_0(Vminirv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_const_0_sub_0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+107,(5U),32);
    bufp->fullIData(oldp+108,(0x00000020U),32);
}

VL_ATTR_COLD void Vminirv___024root__trace_full_0_sub_0(Vminirv___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vminirv___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_full_0\n"); );
    // Body
    Vminirv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminirv___024root*>(voidSelf);
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vminirv___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vminirv___024root__trace_full_0_sub_0(Vminirv___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminirv___024root__trace_full_0_sub_0\n"); );
    Vminirv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.minirv__DOT__my_EXU__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelfRef.minirv__DOT__R__DOT__rf[0]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.minirv__DOT__R__DOT__rf[1]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.minirv__DOT__R__DOT__rf[2]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.minirv__DOT__R__DOT__rf[3]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.minirv__DOT__R__DOT__rf[4]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.minirv__DOT__R__DOT__rf[5]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.minirv__DOT__R__DOT__rf[6]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.minirv__DOT__R__DOT__rf[7]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.minirv__DOT__R__DOT__rf[8]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.minirv__DOT__R__DOT__rf[9]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.minirv__DOT__R__DOT__rf[10]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.minirv__DOT__R__DOT__rf[11]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.minirv__DOT__R__DOT__rf[12]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.minirv__DOT__R__DOT__rf[13]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.minirv__DOT__R__DOT__rf[14]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.minirv__DOT__R__DOT__rf[15]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.minirv__DOT__R__DOT__rf[16]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.minirv__DOT__R__DOT__rf[17]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.minirv__DOT__R__DOT__rf[18]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.minirv__DOT__R__DOT__rf[19]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.minirv__DOT__R__DOT__rf[20]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.minirv__DOT__R__DOT__rf[21]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.minirv__DOT__R__DOT__rf[22]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.minirv__DOT__R__DOT__rf[23]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.minirv__DOT__R__DOT__rf[24]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.minirv__DOT__R__DOT__rf[25]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.minirv__DOT__R__DOT__rf[26]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.minirv__DOT__R__DOT__rf[27]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.minirv__DOT__R__DOT__rf[28]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.minirv__DOT__R__DOT__rf[29]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.minirv__DOT__R__DOT__rf[30]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.minirv__DOT__R__DOT__rf[31]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.minirv__DOT__inst),32);
    bufp->fullIData(oldp+35,(vlSelfRef.minirv__DOT__my_IDU__DOT__imm),32);
    bufp->fullCData(oldp+36,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+37,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+38,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 7U))),5);
    bufp->fullCData(oldp+39,(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res),2);
    bufp->fullCData(oldp+40,(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op),4);
    bufp->fullCData(oldp+41,(((IData)((0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.minirv__DOT__inst)))
                               ? 0U : ((IData)((0x00000023U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.minirv__DOT__inst)))
                                        ? 1U : ((IData)(
                                                        (0x00001023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)))
                                                 ? 2U
                                                 : 3U)))),2);
    bufp->fullCData(oldp+42,(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r),3);
    bufp->fullBit(oldp+43,(vlSelfRef.minirv__DOT__R__DOT__wen));
    bufp->fullBit(oldp+44,((0x6fU == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+45,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                            | ((0x23U == (0x0000007fU 
                                          & vlSelfRef.minirv__DOT__inst)) 
                               | ((0x63U == (0x0000007fU 
                                             & vlSelfRef.minirv__DOT__inst)) 
                                  | ((0x17U == (0x0000007fU 
                                                & vlSelfRef.minirv__DOT__inst)) 
                                     | (0x6fU == (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst))))))));
    bufp->fullBit(oldp+46,(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type));
    bufp->fullCData(oldp+47,(vlSelfRef.minirv__DOT__b_type),3);
    bufp->fullBit(oldp+48,((0x73U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullIData(oldp+49,(vlSelfRef.minirv__DOT__pc),32);
    bufp->fullIData(oldp+50,(((IData)(4U) + vlSelfRef.minirv__DOT__pc)),32);
    bufp->fullCData(oldp+51,((0x0000007fU & vlSelfRef.minirv__DOT__inst)),7);
    bufp->fullCData(oldp+52,((7U & (vlSelfRef.minirv__DOT__inst 
                                    >> 0x0cU))),3);
    bufp->fullCData(oldp+53,((vlSelfRef.minirv__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+54,(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I));
    bufp->fullBit(oldp+55,(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_U));
    bufp->fullBit(oldp+56,((0x63U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+57,((0x23U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+58,((0x13U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+59,((3U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+60,(vlSelfRef.minirv__DOT__my_IDU__DOT__addi));
    bufp->fullBit(oldp+61,(vlSelfRef.minirv__DOT__my_IDU__DOT__slti));
    bufp->fullBit(oldp+62,(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu));
    bufp->fullBit(oldp+63,(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu));
    bufp->fullBit(oldp+64,(vlSelfRef.minirv__DOT__my_IDU__DOT__lw));
    bufp->fullBit(oldp+65,(vlSelfRef.minirv__DOT__my_IDU__DOT__lh));
    bufp->fullBit(oldp+66,(vlSelfRef.minirv__DOT__my_IDU__DOT__lb));
    bufp->fullBit(oldp+67,((0x67U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+68,(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type));
    bufp->fullBit(oldp+69,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_5) 
                            & (0U == (vlSelfRef.minirv__DOT__inst 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+70,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_5) 
                            & (0x20U == (vlSelfRef.minirv__DOT__inst 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+71,((IData)((0x00001073U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+72,((IData)((0x00002073U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+73,((IData)((0x00003073U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_8) 
                            & (0U == (vlSelfRef.minirv__DOT__inst 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+75,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_8) 
                            & (0x20U == (vlSelfRef.minirv__DOT__inst 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+76,((IData)((0x00004073U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+77,((IData)((0x00006073U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+78,((IData)((0x00007073U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+79,((IData)((0x00002023U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+80,((IData)((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+81,((IData)((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+82,((0x37U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+83,((0x17U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+84,((IData)((0x00001063U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+85,((IData)((0x00000063U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+86,((IData)((0x00004063U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+87,((IData)((0x00005063U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+88,((IData)((0x00006063U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+89,((IData)((0x00007063U == 
                                    (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullIData(oldp+90,(vlSelfRef.minirv__DOT__R__DOT__rdata2),32);
    bufp->fullIData(oldp+91,(vlSelfRef.minirv__DOT__alu_result),32);
    bufp->fullIData(oldp+92,(vlSelfRef.minirv__DOT__mem_result),32);
    bufp->fullCData(oldp+93,(vlSelfRef.minirv__DOT__waddr),5);
    bufp->fullIData(oldp+94,(vlSelfRef.minirv__DOT__wdata),32);
    bufp->fullIData(oldp+95,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs1),32);
    bufp->fullIData(oldp+96,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs2),32);
    bufp->fullIData(oldp+97,(vlSelfRef.minirv__DOT__my_EXU__DOT__result),32);
    bufp->fullIData(oldp+98,(vlSelfRef.minirv__DOT__my_LSU__DOT__rdata),32);
    bufp->fullIData(oldp+99,(vlSelfRef.minirv__DOT__my_LSU__DOT__data_s),32);
    bufp->fullBit(oldp+100,(vlSelfRef.clk));
    bufp->fullBit(oldp+101,(vlSelfRef.rst));
    bufp->fullIData(oldp+102,(vlSelfRef.cur_pc),32);
    bufp->fullIData(oldp+103,(vlSelfRef.cur_inst),32);
    bufp->fullIData(oldp+104,(((0U == (0x0000001fU 
                                       & (vlSelfRef.minirv__DOT__inst 
                                          >> 0x0000000fU)))
                                ? 0U : vlSelfRef.minirv__DOT__R__DOT__rf
                               [(0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+105,((((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type) 
                                | (6U != (IData)(vlSelfRef.minirv__DOT__b_type)))
                                ? vlSelfRef.minirv__DOT__alu_result
                                : ((IData)(4U) + vlSelfRef.minirv__DOT__pc))),32);
    bufp->fullIData(oldp+106,(((0U == ((IData)((0x00002023U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.minirv__DOT__inst)))
                                        ? 0U : ((IData)(
                                                        (0x00000023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.minirv__DOT__inst)))
                                                 ? 1U
                                                 : 
                                                ((IData)(
                                                         (0x00001023U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSelfRef.minirv__DOT__inst)))
                                                  ? 2U
                                                  : 3U))))
                                ? VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                                VL_SHIFTL_III(32,32,32, 
                                                              (3U 
                                                               & vlSelfRef.minirv__DOT__alu_result), 3U))
                                : vlSelfRef.minirv__DOT__R__DOT__rdata2)),32);
}
