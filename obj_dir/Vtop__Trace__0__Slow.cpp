// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+116,"trigger", false,-1, 31,0);
    tracep->declBus(c+117,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+116,"trigger", false,-1, 31,0);
    tracep->declBus(c+117,"a0", false,-1, 31,0);
    tracep->declBit(c+33,"PCSrcE", false,-1);
    tracep->declBus(c+110,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+34,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+35,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+36,"PC_PlusM", false,-1, 31,0);
    tracep->declBus(c+37,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+38,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+39,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+111,"PCF", false,-1, 31,0);
    tracep->declBus(c+40,"PCD", false,-1, 31,0);
    tracep->declBus(c+41,"PCE", false,-1, 31,0);
    tracep->declBus(c+42,"InstrD", false,-1, 31,0);
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBus(c+45,"funct3E", false,-1, 2,0);
    tracep->declBit(c+46,"func75", false,-1);
    tracep->declBit(c+47,"ZeroE", false,-1);
    tracep->declBus(c+48,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+49,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+50,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+51,"ResultSrcW", false,-1, 1,0);
    tracep->declBit(c+52,"MemWriteD", false,-1);
    tracep->declBit(c+53,"MemWriteE", false,-1);
    tracep->declBit(c+54,"MemWriteM", false,-1);
    tracep->declBit(c+55,"ALUSrcAD", false,-1);
    tracep->declBit(c+56,"ALUSrcBD", false,-1);
    tracep->declBit(c+57,"ALUSrcAE", false,-1);
    tracep->declBit(c+58,"ALUSrcBE", false,-1);
    tracep->declBus(c+59,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+60,"RegWriteD", false,-1);
    tracep->declBit(c+61,"RegWriteE", false,-1);
    tracep->declBit(c+62,"RegWriteM", false,-1);
    tracep->declBit(c+63,"RegWriteW", false,-1);
    tracep->declBus(c+64,"ALUControlD", false,-1, 2,0);
    tracep->declBus(c+65,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+66,"LdSrcD", false,-1);
    tracep->declBit(c+67,"StSrcD", false,-1);
    tracep->declBit(c+68,"JalSrcD", false,-1);
    tracep->declBit(c+69,"LdSrcE", false,-1);
    tracep->declBit(c+70,"StSrcE", false,-1);
    tracep->declBit(c+71,"JalSrcE", false,-1);
    tracep->declBit(c+72,"LdSrcM", false,-1);
    tracep->declBit(c+73,"StSrcM", false,-1);
    tracep->declBus(c+112,"A", false,-1, 11,0);
    tracep->declBus(c+74,"A1", false,-1, 4,0);
    tracep->declBus(c+75,"A2", false,-1, 4,0);
    tracep->declBus(c+113,"RDi", false,-1, 31,0);
    tracep->declBus(c+76,"RD", false,-1, 31,0);
    tracep->declBus(c+118,"RD1", false,-1, 31,0);
    tracep->declBus(c+77,"RD1E", false,-1, 31,0);
    tracep->declBus(c+119,"RD2", false,-1, 31,0);
    tracep->declBus(c+78,"RD2E", false,-1, 31,0);
    tracep->declBus(c+79,"ResultW", false,-1, 31,0);
    tracep->declBus(c+80,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+81,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+82,"Imm", false,-1, 24,0);
    tracep->declBus(c+83,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+84,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+85,"ALUResultW", false,-1, 31,0);
    tracep->declBit(c+86,"JumpD", false,-1);
    tracep->declBit(c+87,"JumpE", false,-1);
    tracep->declBit(c+88,"BranchD", false,-1);
    tracep->declBit(c+89,"BranchE", false,-1);
    tracep->declBus(c+90,"RdD", false,-1, 4,0);
    tracep->declBus(c+91,"RdE", false,-1, 4,0);
    tracep->declBus(c+92,"RdM", false,-1, 4,0);
    tracep->declBus(c+93,"RdW", false,-1, 4,0);
    tracep->declBus(c+74,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+75,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+94,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+95,"Rs2E", false,-1, 4,0);
    tracep->declBit(c+96,"StallD", false,-1);
    tracep->declBit(c+96,"StallF", false,-1);
    tracep->declBit(c+97,"FlushE", false,-1);
    tracep->declBit(c+33,"FlushD", false,-1);
    tracep->declBus(c+98,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+99,"SrcB0E", false,-1, 31,0);
    tracep->pushNamePrefix("PCSrcE_decode ");
    tracep->declBit(c+47,"ZeroE", false,-1);
    tracep->declBit(c+89,"BranchE", false,-1);
    tracep->declBit(c+87,"JumpE", false,-1);
    tracep->declBus(c+45,"funct3E", false,-1, 2,0);
    tracep->declBit(c+33,"PCSrcE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage1 ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+96,"en", false,-1);
    tracep->declBit(c+33,"clr", false,-1);
    tracep->declBus(c+113,"RDi", false,-1, 31,0);
    tracep->declBus(c+111,"PCF", false,-1, 31,0);
    tracep->declBus(c+110,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+42,"InstrD", false,-1, 31,0);
    tracep->declBus(c+40,"PCD", false,-1, 31,0);
    tracep->declBus(c+34,"PC_PlusD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage2 ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+97,"clr", false,-1);
    tracep->declBit(c+60,"RegWriteD", false,-1);
    tracep->declBus(c+48,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+52,"MemWriteD", false,-1);
    tracep->declBit(c+86,"JumpD", false,-1);
    tracep->declBit(c+88,"BranchD", false,-1);
    tracep->declBus(c+64,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+55,"ALUSrcAD", false,-1);
    tracep->declBit(c+56,"ALUSrcBD", false,-1);
    tracep->declBit(c+66,"LdSrcD", false,-1);
    tracep->declBit(c+67,"StSrcD", false,-1);
    tracep->declBit(c+68,"JalSrcD", false,-1);
    tracep->declBus(c+118,"RD1", false,-1, 31,0);
    tracep->declBus(c+119,"RD2", false,-1, 31,0);
    tracep->declBus(c+90,"RdD", false,-1, 4,0);
    tracep->declBus(c+38,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+40,"PCD", false,-1, 31,0);
    tracep->declBus(c+34,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+74,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+75,"Rs2D", false,-1, 4,0);
    tracep->declBit(c+61,"RegWriteE", false,-1);
    tracep->declBus(c+49,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+53,"MemWriteE", false,-1);
    tracep->declBit(c+87,"JumpE", false,-1);
    tracep->declBit(c+89,"BranchE", false,-1);
    tracep->declBus(c+65,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+57,"ALUSrcAE", false,-1);
    tracep->declBit(c+58,"ALUSrcBE", false,-1);
    tracep->declBit(c+69,"LdSrcE", false,-1);
    tracep->declBit(c+70,"StSrcE", false,-1);
    tracep->declBit(c+71,"JalSrcE", false,-1);
    tracep->declBus(c+77,"RD1E", false,-1, 31,0);
    tracep->declBus(c+78,"RD2E", false,-1, 31,0);
    tracep->declBus(c+91,"RdE", false,-1, 4,0);
    tracep->declBus(c+39,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+41,"PCE", false,-1, 31,0);
    tracep->declBus(c+35,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBus(c+45,"funct3E", false,-1, 2,0);
    tracep->declBus(c+94,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+95,"Rs2E", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage3 ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+61,"RegWriteE", false,-1);
    tracep->declBus(c+49,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+53,"MemWriteE", false,-1);
    tracep->declBit(c+70,"StSrcE", false,-1);
    tracep->declBit(c+69,"LdSrcE", false,-1);
    tracep->declBus(c+83,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+99,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+91,"RdE", false,-1, 4,0);
    tracep->declBus(c+35,"PC_PlusE", false,-1, 31,0);
    tracep->declBit(c+62,"RegWriteM", false,-1);
    tracep->declBus(c+50,"ResultSrcM", false,-1, 1,0);
    tracep->declBit(c+54,"MemWriteM", false,-1);
    tracep->declBit(c+73,"StSrcM", false,-1);
    tracep->declBit(c+72,"LdSrcM", false,-1);
    tracep->declBus(c+84,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+80,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+92,"RdM", false,-1, 4,0);
    tracep->declBus(c+36,"PC_PlusM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage4 ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+62,"RegWriteM", false,-1);
    tracep->declBus(c+50,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+84,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+76,"RD", false,-1, 31,0);
    tracep->declBus(c+92,"RdM", false,-1, 4,0);
    tracep->declBus(c+36,"PC_PlusM", false,-1, 31,0);
    tracep->declBit(c+63,"RegWriteW", false,-1);
    tracep->declBus(c+51,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+85,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+81,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+93,"RdW", false,-1, 4,0);
    tracep->declBus(c+37,"PC_PlusW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DataMux ");
    tracep->declBus(c+51,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+85,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+81,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+37,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+79,"ResultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_InstrD_mem ");
    tracep->declBus(c+122,"A_length", false,-1, 31,0);
    tracep->declBus(c+123,"D_length", false,-1, 31,0);
    tracep->declBus(c+112,"A", false,-1, 11,0);
    tracep->declBus(c+113,"RDi", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBus(c+41,"PCE", false,-1, 31,0);
    tracep->declBus(c+98,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+99,"SrcB0E", false,-1, 31,0);
    tracep->declBus(c+39,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+65,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+57,"ALUSrcAE", false,-1);
    tracep->declBit(c+58,"ALUSrcBE", false,-1);
    tracep->declBus(c+83,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+47,"ZeroE", false,-1);
    tracep->declBus(c+100,"SrcAE", false,-1, 31,0);
    tracep->declBus(c+101,"SrcBE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+46,"func75", false,-1);
    tracep->declBit(c+60,"RegWriteD", false,-1);
    tracep->declBus(c+48,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+52,"MemWriteD", false,-1);
    tracep->declBit(c+86,"JumpD", false,-1);
    tracep->declBit(c+88,"BranchD", false,-1);
    tracep->declBus(c+64,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+55,"ALUSrcAD", false,-1);
    tracep->declBit(c+56,"ALUSrcBD", false,-1);
    tracep->declBus(c+59,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+66,"LdSrcD", false,-1);
    tracep->declBit(c+67,"StSrcD", false,-1);
    tracep->declBit(c+68,"JalSrcD", false,-1);
    tracep->declBus(c+102,"ALUOpD", false,-1, 1,0);
    tracep->declBus(c+103,"ALUDecode", false,-1, 1,0);
    tracep->declBit(c+104,"op5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_data_memory ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+54,"WE", false,-1);
    tracep->declBit(c+73,"StSrcM", false,-1);
    tracep->declBit(c+72,"LdSrcM", false,-1);
    tracep->declBus(c+84,"A", false,-1, 31,0);
    tracep->declBus(c+80,"WD", false,-1, 31,0);
    tracep->declBus(c+76,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_extend ");
    tracep->declBus(c+59,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+82,"Imm", false,-1, 31,7);
    tracep->declBus(c+38,"ImmExtD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_hazardunit ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"RD1E", false,-1, 31,0);
    tracep->declBus(c+78,"RD2E", false,-1, 31,0);
    tracep->declBus(c+94,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+95,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+92,"RdM", false,-1, 4,0);
    tracep->declBus(c+93,"RdW", false,-1, 4,0);
    tracep->declBit(c+62,"RegWriteM", false,-1);
    tracep->declBit(c+63,"RegWriteW", false,-1);
    tracep->declBus(c+79,"ResultW", false,-1, 31,0);
    tracep->declBus(c+84,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+98,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+99,"SrcB0E", false,-1, 31,0);
    tracep->declBus(c+74,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+75,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+91,"RdE", false,-1, 4,0);
    tracep->declBus(c+49,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+96,"StallF", false,-1);
    tracep->declBit(c+96,"StallD", false,-1);
    tracep->declBit(c+97,"FlushE", false,-1);
    tracep->declBit(c+33,"PCSrcE", false,-1);
    tracep->declBit(c+33,"FlushD", false,-1);
    tracep->declBus(c+105,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+106,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+107,"ResultSrcE0", false,-1);
    tracep->declBit(c+96,"lwStall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBus(c+121,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBit(c+96,"en", false,-1);
    tracep->declBit(c+33,"PCSrcE", false,-1);
    tracep->declBit(c+71,"JalSrcE", false,-1);
    tracep->declBus(c+39,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+41,"PCE", false,-1, 31,0);
    tracep->declBus(c+77,"RD1E", false,-1, 31,0);
    tracep->declBus(c+110,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+111,"PCF", false,-1, 31,0);
    tracep->declBus(c+108,"PC_TargetE", false,-1, 31,0);
    tracep->declBus(c+109,"PC_Jump", false,-1, 31,0);
    tracep->declBus(c+120,"PCF_Next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_reg_file ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBus(c+74,"A1", false,-1, 4,0);
    tracep->declBus(c+75,"A2", false,-1, 4,0);
    tracep->declBus(c+93,"A3", false,-1, 4,0);
    tracep->declBus(c+79,"WD3", false,-1, 31,0);
    tracep->declBit(c+63,"WE3", false,-1);
    tracep->declBus(c+116,"trigger", false,-1, 31,0);
    tracep->declBus(c+118,"RD1", false,-1, 31,0);
    tracep->declBus(c+119,"RD2", false,-1, 31,0);
    tracep->declBus(c+117,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__my_reg_file__DOT__register[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__my_reg_file__DOT__register[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__my_reg_file__DOT__register[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__my_reg_file__DOT__register[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__my_reg_file__DOT__register[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__my_reg_file__DOT__register[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__my_reg_file__DOT__register[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__my_reg_file__DOT__register[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__my_reg_file__DOT__register[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__my_reg_file__DOT__register[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__my_reg_file__DOT__register[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__my_reg_file__DOT__register[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__my_reg_file__DOT__register[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__my_reg_file__DOT__register[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__my_reg_file__DOT__register[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__my_reg_file__DOT__register[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__my_reg_file__DOT__register[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__my_reg_file__DOT__register[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__my_reg_file__DOT__register[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__my_reg_file__DOT__register[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__my_reg_file__DOT__register[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__my_reg_file__DOT__register[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__my_reg_file__DOT__register[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__my_reg_file__DOT__register[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__my_reg_file__DOT__register[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__my_reg_file__DOT__register[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__my_reg_file__DOT__register[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__my_reg_file__DOT__register[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__my_reg_file__DOT__register[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__my_reg_file__DOT__register[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__my_reg_file__DOT__register[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__my_reg_file__DOT__register[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__PCSrcE));
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__PC_PlusD),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__PC_PlusE),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__PC_PlusM),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__PC_PlusW),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ImmExtD),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ImmExtE),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__PCD),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__PCE),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__InstrD),32);
    bufp->fullCData(oldp+43,((0x7fU & vlSelf->top__DOT__InstrD)),7);
    bufp->fullCData(oldp+44,((7U & (vlSelf->top__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__funct3E),3);
    bufp->fullBit(oldp+46,((1U & (vlSelf->top__DOT__InstrD 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__ZeroE));
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__ResultSrcD),2);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__ResultSrcE),2);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__ResultSrcM),2);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__ResultSrcW),2);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__MemWriteD));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__MemWriteE));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__MemWriteM));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__ALUSrcAD));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__ALUSrcBD));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__ALUSrcAE));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__ALUSrcBE));
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__ImmSrcD),3);
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__RegWriteD));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__RegWriteE));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__RegWriteM));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__RegWriteW));
    bufp->fullCData(oldp+64,(((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                               ? ((1U == (7U & (vlSelf->top__DOT__InstrD 
                                                >> 0xcU)))
                                   ? 7U : ((5U == (7U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0xcU)))
                                            ? 4U : 
                                           ((7U == 
                                             (7U & 
                                              (vlSelf->top__DOT__InstrD 
                                               >> 0xcU)))
                                             ? 2U : 0U)))
                               : ((1U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                   ? 1U : ((2U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    >> 0xcU)))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                      ? 0U
                                                      : 1U)))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__InstrD 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__InstrD 
                                                          >> 0xcU)))
                                                      ? 2U
                                                      : 0U))))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 6U
                                                    : 0U)
                                                : 0U))))),3);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__ALUControlE),3);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__LdSrcD));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__StSrcD));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__JalSrcD));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__LdSrcE));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__StSrcE));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__JalSrcE));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__LdSrcM));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__StSrcM));
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->top__DOT__LdSrcM)
                               ? (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)
                               : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                   [(0x1ffffU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__ALUResultM))] 
                                   << 0x18U) | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUResultM))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__ALUResultM))] 
                                                    << 8U) 
                                                   | (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)))))),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__ResultW),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__WriteDataM),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__ReadDataW),32);
    bufp->fullIData(oldp+82,((vlSelf->top__DOT__InstrD 
                              >> 7U)),25);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__ALUResultM),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__ALUResultW),32);
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__JumpD));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__JumpE));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__BranchD));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__BranchE));
    bufp->fullCData(oldp+90,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 7U))),5);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__RdE),5);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__RdM),5);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__RdW),5);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__Rs1E),5);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__Rs2E),5);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__StallD));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__FlushE));
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__SrcA0E),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__SrcB0E),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__my_alu__DOT__SrcAE),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__my_alu__DOT__SrcBE),32);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD),2);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode),2);
    bufp->fullBit(oldp+104,((1U & (vlSelf->top__DOT__InstrD 
                                   >> 5U))));
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE),2);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE),2);
    bufp->fullBit(oldp+107,((1U & (IData)(vlSelf->top__DOT__ResultSrcE))));
    bufp->fullIData(oldp+108,(((IData)(vlSelf->top__DOT__JalSrcE)
                                ? (vlSelf->top__DOT__ImmExtE 
                                   + vlSelf->top__DOT__PCE)
                                : vlSelf->top__DOT__RD1E)),32);
    bufp->fullIData(oldp+109,((vlSelf->top__DOT__ImmExtE 
                               + vlSelf->top__DOT__PCE)),32);
    bufp->fullIData(oldp+110,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__PCF),32);
    bufp->fullSData(oldp+112,((0xfffU & vlSelf->top__DOT__PCF)),12);
    bufp->fullIData(oldp+113,(((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                [(0xfffU & vlSelf->top__DOT__PCF)] 
                                << 0x18U) | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->top__DOT__PCF))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PCF))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__PCF))])))),32);
    bufp->fullBit(oldp+114,(vlSelf->clk));
    bufp->fullBit(oldp+115,(vlSelf->rst));
    bufp->fullIData(oldp+116,(vlSelf->trigger),32);
    bufp->fullIData(oldp+117,(vlSelf->a0),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__my_reg_file__DOT__register
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__my_reg_file__DOT__register
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+120,(((IData)(vlSelf->top__DOT__PCSrcE)
                                ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                    ? (vlSelf->top__DOT__ImmExtE 
                                       + vlSelf->top__DOT__PCE)
                                    : vlSelf->top__DOT__RD1E)
                                : ((IData)(4U) + vlSelf->top__DOT__PCF))),32);
    bufp->fullIData(oldp+121,(0x20U),32);
    bufp->fullIData(oldp+122,(0xcU),32);
    bufp->fullIData(oldp+123,(8U),32);
}
