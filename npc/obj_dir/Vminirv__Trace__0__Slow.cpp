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
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"cur_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"cur_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("minirv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"cur_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"cur_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"alu_arc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"alu_arc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+111,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"ebreak_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("R", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+121,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+44,0,"alu_arc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"alu_arc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"reg_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rf_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"mem_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"mem_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+44,0,"alu_arc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"alu_arc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"j_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+48,0,"ebreak_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+54,0,"inst_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"inst_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"inst_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"inst_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"inst_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"I_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"I_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"i_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"ld_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"r_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"r_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"r_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"s_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"b_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"csr_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"awdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"full_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"data_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"j_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"n_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+125,(5U),32);
    bufp->fullIData(oldp+126,(0x00000020U),32);
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
    bufp->fullIData(oldp+1,(vlSelfRef.minirv__DOT__R__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.minirv__DOT__R__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.minirv__DOT__R__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.minirv__DOT__R__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.minirv__DOT__R__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.minirv__DOT__R__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.minirv__DOT__R__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.minirv__DOT__R__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.minirv__DOT__R__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.minirv__DOT__R__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.minirv__DOT__R__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.minirv__DOT__R__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.minirv__DOT__R__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.minirv__DOT__R__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.minirv__DOT__R__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.minirv__DOT__R__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.minirv__DOT__R__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.minirv__DOT__R__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.minirv__DOT__R__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.minirv__DOT__R__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.minirv__DOT__R__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.minirv__DOT__R__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.minirv__DOT__R__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.minirv__DOT__R__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.minirv__DOT__R__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.minirv__DOT__R__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.minirv__DOT__R__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.minirv__DOT__R__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.minirv__DOT__R__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.minirv__DOT__R__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.minirv__DOT__R__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.minirv__DOT__R__DOT__rf[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.minirv__DOT__inst),32);
    bufp->fullIData(oldp+34,(vlSelfRef.minirv__DOT__my_IDU__DOT__imm),32);
    bufp->fullCData(oldp+35,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+36,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+37,((0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                             >> 7U))),5);
    bufp->fullCData(oldp+38,(vlSelfRef.minirv__DOT__R__DOT__waddr),5);
    bufp->fullCData(oldp+39,(vlSelfRef.minirv__DOT__my_IDU__DOT__rf_res),2);
    bufp->fullCData(oldp+40,(vlSelfRef.minirv__DOT__my_IDU__DOT__alu_op),4);
    bufp->fullCData(oldp+41,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                               ? 0U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                        ? 1U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                                 ? 2U
                                                 : 3U)))),2);
    bufp->fullCData(oldp+42,(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r),3);
    bufp->fullBit(oldp+43,(vlSelfRef.minirv__DOT__R__DOT__wen));
    bufp->fullBit(oldp+44,(((0x6fU == (0x0000007fU 
                                       & vlSelfRef.minirv__DOT__inst)) 
                            | (0x17U == (0x0000007fU 
                                         & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__inst_I) 
                            | ((0x23U == (0x0000007fU 
                                          & vlSelfRef.minirv__DOT__inst)) 
                               | ((0x17U == (0x0000007fU 
                                             & vlSelfRef.minirv__DOT__inst)) 
                                  | (0x6fU == (0x0000007fU 
                                               & vlSelfRef.minirv__DOT__inst)))))));
    bufp->fullCData(oldp+46,(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type),2);
    bufp->fullCData(oldp+47,(vlSelfRef.minirv__DOT__b_type),3);
    bufp->fullBit(oldp+48,(vlSelfRef.minirv__DOT__my_IDU__DOT__ebreak_type));
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
    bufp->fullBit(oldp+58,((0x6fU == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+59,((0x33U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+60,((0x13U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+61,((3U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+62,(vlSelfRef.minirv__DOT__my_IDU__DOT__addi));
    bufp->fullBit(oldp+63,(vlSelfRef.minirv__DOT__my_IDU__DOT__slti));
    bufp->fullBit(oldp+64,(vlSelfRef.minirv__DOT__my_IDU__DOT__slli));
    bufp->fullBit(oldp+65,(vlSelfRef.minirv__DOT__my_IDU__DOT__srli));
    bufp->fullBit(oldp+66,(vlSelfRef.minirv__DOT__my_IDU__DOT__srai));
    bufp->fullBit(oldp+67,(vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu));
    bufp->fullBit(oldp+68,(vlSelfRef.minirv__DOT__my_IDU__DOT__xori));
    bufp->fullBit(oldp+69,(vlSelfRef.minirv__DOT__my_IDU__DOT__ori));
    bufp->fullBit(oldp+70,(vlSelfRef.minirv__DOT__my_IDU__DOT__andi));
    bufp->fullBit(oldp+71,(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu));
    bufp->fullBit(oldp+72,(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu));
    bufp->fullBit(oldp+73,(vlSelfRef.minirv__DOT__my_IDU__DOT__lw));
    bufp->fullBit(oldp+74,(vlSelfRef.minirv__DOT__my_IDU__DOT__lh));
    bufp->fullBit(oldp+75,(vlSelfRef.minirv__DOT__my_IDU__DOT__lb));
    bufp->fullBit(oldp+76,((0x67U == (0x0000007fU & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+77,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__addi) 
                            | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slti) 
                               | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slli) 
                                  | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srli) 
                                     | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srai) 
                                        | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu) 
                                           | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__xori) 
                                              | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ori) 
                                                 | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__andi) 
                                                    | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu) 
                                                       | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu) 
                                                          | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lw) 
                                                             | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lh) 
                                                                | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lb) 
                                                                   | (0x67U 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & vlSelfRef.minirv__DOT__inst))))))))))))))))));
    bufp->fullBit(oldp+78,(vlSelfRef.minirv__DOT__my_IDU__DOT__ld_type));
    bufp->fullBit(oldp+79,(vlSelfRef.minirv__DOT__my_IDU__DOT__add));
    bufp->fullBit(oldp+80,(vlSelfRef.minirv__DOT__my_IDU__DOT__sub));
    bufp->fullBit(oldp+81,(vlSelfRef.minirv__DOT__my_IDU__DOT__sll));
    bufp->fullBit(oldp+82,(vlSelfRef.minirv__DOT__my_IDU__DOT__slt));
    bufp->fullBit(oldp+83,(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu));
    bufp->fullBit(oldp+84,(vlSelfRef.minirv__DOT__my_IDU__DOT__srl));
    bufp->fullBit(oldp+85,(vlSelfRef.minirv__DOT__my_IDU__DOT__sra));
    bufp->fullBit(oldp+86,(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor));
    bufp->fullBit(oldp+87,(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or));
    bufp->fullBit(oldp+88,(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and));
    bufp->fullBit(oldp+89,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__add) 
                            | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sub) 
                               | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sll) 
                                  | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slt) 
                                     | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu) 
                                        | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srl) 
                                           | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sra) 
                                              | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor) 
                                                 | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or) 
                                                    | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and))))))))))));
    bufp->fullBit(oldp+90,(vlSelfRef.minirv__DOT__my_IDU__DOT__sw));
    bufp->fullBit(oldp+91,(vlSelfRef.minirv__DOT__my_IDU__DOT__sb));
    bufp->fullBit(oldp+92,(vlSelfRef.minirv__DOT__my_IDU__DOT__sh));
    bufp->fullBit(oldp+93,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw) 
                            | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb) 
                               | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)))));
    bufp->fullBit(oldp+94,(vlSelfRef.minirv__DOT__my_IDU__DOT__bne));
    bufp->fullBit(oldp+95,(vlSelfRef.minirv__DOT__my_IDU__DOT__beq));
    bufp->fullBit(oldp+96,(vlSelfRef.minirv__DOT__my_IDU__DOT__blt));
    bufp->fullBit(oldp+97,(vlSelfRef.minirv__DOT__my_IDU__DOT__bge));
    bufp->fullBit(oldp+98,(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu));
    bufp->fullBit(oldp+99,(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu));
    bufp->fullBit(oldp+100,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bne) 
                             | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__beq) 
                                | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__blt) 
                                   | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bge) 
                                      | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu) 
                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu))))))));
    bufp->fullBit(oldp+101,((0x37U == (0x0000007fU 
                                       & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+102,((0x17U == (0x0000007fU 
                                       & vlSelfRef.minirv__DOT__inst))));
    bufp->fullBit(oldp+103,(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw));
    bufp->fullBit(oldp+104,(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs));
    bufp->fullBit(oldp+105,((IData)((0x00003073U == 
                                     (0x0000707fU & vlSelfRef.minirv__DOT__inst)))));
    bufp->fullBit(oldp+106,(vlSelfRef.minirv__DOT__my_IDU__DOT__mret));
    bufp->fullBit(oldp+107,(((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw) 
                             | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs) 
                                | ((IData)((0x00003073U 
                                            == (0x0000707fU 
                                                & vlSelfRef.minirv__DOT__inst))) 
                                   | ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ebreak_type) 
                                      | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mret)))))));
    bufp->fullBit(oldp+108,((1U & (~ ((((((((((((((
                                                   ((((((((((((((((((((((((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__addi) 
                                                                          | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slti)) 
                                                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slli)) 
                                                                        | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srli)) 
                                                                       | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srai)) 
                                                                      | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltiu)) 
                                                                     | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__xori)) 
                                                                    | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ori)) 
                                                                   | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__andi)) 
                                                                  | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lbu)) 
                                                                 | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lhu)) 
                                                                | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lw)) 
                                                               | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lh)) 
                                                              | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__lb)) 
                                                             | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__add)) 
                                                            | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sub)) 
                                                           | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sll)) 
                                                          | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__slt)) 
                                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sltu)) 
                                                        | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__srl)) 
                                                       | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sra)) 
                                                      | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_xor)) 
                                                     | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_or)) 
                                                    | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__r_and)) 
                                                   | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)) 
                                                  | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)) 
                                                 | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)) 
                                                | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bne)) 
                                               | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__beq)) 
                                              | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__blt)) 
                                             | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bge)) 
                                            | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bltu)) 
                                           | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__bgeu)) 
                                          | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrw)) 
                                         | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__csrrs)) 
                                        | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__ebreak_type)) 
                                       | (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mret)) 
                                      | (((((0x67U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.minirv__DOT__inst)) 
                                            | (0x37U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.minirv__DOT__inst))) 
                                           | (0x17U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.minirv__DOT__inst))) 
                                          | (0x6fU 
                                             == (0x0000007fU 
                                                 & vlSelfRef.minirv__DOT__inst))) 
                                         | (0x00003073U 
                                            == (0x0000707fU 
                                                & vlSelfRef.minirv__DOT__inst))))))));
    bufp->fullIData(oldp+109,(vlSelfRef.minirv__DOT__R__DOT__rdata2),32);
    bufp->fullIData(oldp+110,(vlSelfRef.minirv__DOT__alu_result),32);
    bufp->fullIData(oldp+111,(vlSelfRef.minirv__DOT__wdata),32);
    bufp->fullIData(oldp+112,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs1),32);
    bufp->fullIData(oldp+113,(vlSelfRef.minirv__DOT__my_EXU__DOT__rs2),32);
    bufp->fullIData(oldp+114,(vlSelfRef.minirv__DOT__my_EXU__DOT__result),32);
    bufp->fullIData(oldp+115,(vlSelfRef.minirv__DOT__my_LSU__DOT__rdata),32);
    bufp->fullIData(oldp+116,(vlSelfRef.minirv__DOT__my_LSU__DOT__data_s),32);
    bufp->fullBit(oldp+117,(vlSelfRef.clk));
    bufp->fullBit(oldp+118,(vlSelfRef.rst));
    bufp->fullIData(oldp+119,(vlSelfRef.cur_pc),32);
    bufp->fullIData(oldp+120,(vlSelfRef.cur_inst),32);
    bufp->fullIData(oldp+121,(((0U == (0x0000001fU 
                                       & (vlSelfRef.minirv__DOT__inst 
                                          >> 0x0000000fU)))
                                ? 0U : vlSelfRef.minirv__DOT__R__DOT__rf
                               [(0x0000001fU & (vlSelfRef.minirv__DOT__inst 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+122,(((4U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                ? ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                    ? 0U : ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                             ? 0U : 
                                            (0x0000ffffU 
                                             & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                : ((2U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                    ? ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                        ? (0x000000ffU 
                                           & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.minirv__DOT__my_LSU__DOT__data_s 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))
                                    : ((1U & (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__mem_r))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.minirv__DOT__my_LSU__DOT__data_s 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSelfRef.minirv__DOT__my_LSU__DOT__data_s))
                                        : vlSelfRef.minirv__DOT__my_LSU__DOT__data_s)))),32);
    bufp->fullIData(oldp+123,((((0U != (IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__j_type)) 
                                | (6U != (IData)(vlSelfRef.minirv__DOT__b_type)))
                                ? vlSelfRef.minirv__DOT__alu_result
                                : ((IData)(4U) + vlSelfRef.minirv__DOT__pc))),32);
    bufp->fullIData(oldp+124,(((0U == ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sw)
                                        ? 0U : ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sb)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelfRef.minirv__DOT__my_IDU__DOT__sh)
                                                  ? 2U
                                                  : 3U))))
                                ? vlSelfRef.minirv__DOT__R__DOT__rdata2
                                : VL_SHIFTL_III(32,32,32, vlSelfRef.minirv__DOT__R__DOT__rdata2, 
                                                VL_SHIFTL_III(32,32,32, 
                                                              (3U 
                                                               & vlSelfRef.minirv__DOT__alu_result), 3U)))),32);
}
