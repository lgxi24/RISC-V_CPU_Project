// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((IData)(vlSelf->top__DOT__JumpE) 
                              | ((IData)(vlSelf->top__DOT__BranchE) 
                                 & (IData)(vlSelf->top__DOT__ZeroE)))));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__PC_PlusE),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__PC_PlusM),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__PC_PlusW),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__ImmExtE),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__PCE),32);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__ZeroE));
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__ResultSrcW),2);
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__MemWriteE));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__MemWriteM));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__ALUSrcAE));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__ALUSrcBE));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__RegWriteE));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__RegWriteM));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__RegWriteW));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__ALUControlE),3);
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__LdSrcE));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__StSrcE));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__JalSrcE));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__LdSrcM));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__StSrcM));
        bufp->chgIData(oldp+23,(((IData)(vlSelf->top__DOT__LdSrcM)
                                  ? (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)
                                  : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlSelf->top__DOT__ALUResultM))] 
                                      << 0x18U) | (
                                                   (vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                    [
                                                    (0x1ffffU 
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
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__RD1E),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__RD2E),32);
        bufp->chgIData(oldp+26,(((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                  ? vlSelf->top__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                      ? vlSelf->top__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                          ? vlSelf->top__DOT__PC_PlusW
                                          : 0U)))),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__WriteDataM),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ReadDataW),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ALUResult),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ALUResultM),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__ALUResultW),32);
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__JumpE));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__BranchE));
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__RdE),5);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__RdM),5);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__RdW),5);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__my_alu__DOT__SrcA),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__my_alu__DOT__SrcB),32);
        bufp->chgIData(oldp+39,(((IData)(vlSelf->top__DOT__JalSrcE)
                                  ? (vlSelf->top__DOT__ImmExtE 
                                     + vlSelf->top__DOT__PCE)
                                  : vlSelf->top__DOT__RD1E)),32);
        bufp->chgIData(oldp+40,((vlSelf->top__DOT__ImmExtE 
                                 + vlSelf->top__DOT__PCE)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__my_reg_file__DOT__mem[0]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__my_reg_file__DOT__mem[1]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__my_reg_file__DOT__mem[2]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__my_reg_file__DOT__mem[3]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__my_reg_file__DOT__mem[4]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__my_reg_file__DOT__mem[5]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__my_reg_file__DOT__mem[6]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__my_reg_file__DOT__mem[7]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__my_reg_file__DOT__mem[8]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__my_reg_file__DOT__mem[9]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__my_reg_file__DOT__mem[10]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__my_reg_file__DOT__mem[11]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__my_reg_file__DOT__mem[12]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__my_reg_file__DOT__mem[13]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__my_reg_file__DOT__mem[14]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__my_reg_file__DOT__mem[15]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__my_reg_file__DOT__mem[16]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__my_reg_file__DOT__mem[17]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__my_reg_file__DOT__mem[18]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__my_reg_file__DOT__mem[19]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__my_reg_file__DOT__mem[20]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__my_reg_file__DOT__mem[21]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__my_reg_file__DOT__mem[22]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__my_reg_file__DOT__mem[23]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__my_reg_file__DOT__mem[24]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__my_reg_file__DOT__mem[25]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__my_reg_file__DOT__mem[26]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__my_reg_file__DOT__mem[27]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__my_reg_file__DOT__mem[28]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__my_reg_file__DOT__mem[29]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__my_reg_file__DOT__mem[30]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__my_reg_file__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+73,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__PC_PlusD),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__ImmExtD),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__PCF),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__PCD),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__InstrD),32);
        bufp->chgCData(oldp+79,((0x7fU & vlSelf->top__DOT__InstrD)),7);
        bufp->chgCData(oldp+80,((7U & (vlSelf->top__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+81,((1U & (vlSelf->top__DOT__InstrD 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__ResultSrcD),2);
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__MemWriteD));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__ALUSrcAD));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__ALUSrcBD));
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__ImmSrcD),3);
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__RegWriteD));
        bufp->chgCData(oldp+88,(((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                  ? ((1U == (7U & (vlSelf->top__DOT__InstrD 
                                                   >> 0xcU)))
                                      ? 7U : ((5U == 
                                               (7U 
                                                & (vlSelf->top__DOT__InstrD 
                                                   >> 0xcU)))
                                               ? 4U
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 0U)))
                                  : ((1U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                      ? 1U : ((2U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0U 
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
                                                   : 
                                                  ((4U 
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
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 6U
                                                    : 0U)
                                                   : 0U))))),3);
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__LdSrcD));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__StSrcD));
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__JalSrcD));
        bufp->chgSData(oldp+92,((0xfffU & vlSelf->top__DOT__PCF)),12);
        bufp->chgCData(oldp+93,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+95,(((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                  [(0xfffU & vlSelf->top__DOT__PCF)] 
                                  << 0x18U) | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->top__DOT__PCF))] 
                                                << 0x10U) 
                                               | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->top__DOT__PCF))] 
                                                   << 8U) 
                                                  | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                  [
                                                  (0xfffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->top__DOT__PCF))])))),32);
        bufp->chgIData(oldp+96,((vlSelf->top__DOT__InstrD 
                                 >> 7U)),25);
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__JumpD));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__BranchD));
        bufp->chgCData(oldp+99,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 7U))),5);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD),2);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode),2);
        bufp->chgBit(oldp+102,((1U & (vlSelf->top__DOT__InstrD 
                                      >> 5U))));
    }
    bufp->chgBit(oldp+103,(vlSelf->clk));
    bufp->chgBit(oldp+104,(vlSelf->rst));
    bufp->chgIData(oldp+105,(vlSelf->a0),32);
    bufp->chgIData(oldp+106,(vlSelf->top__DOT__my_reg_file__DOT__mem
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+107,(vlSelf->top__DOT__my_reg_file__DOT__mem
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+108,((((IData)(vlSelf->top__DOT__JumpE) 
                               | ((IData)(vlSelf->top__DOT__BranchE) 
                                  & (IData)(vlSelf->top__DOT__ZeroE)))
                               ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                   ? (vlSelf->top__DOT__ImmExtE 
                                      + vlSelf->top__DOT__PCE)
                                   : vlSelf->top__DOT__RD1E)
                               : ((IData)(4U) + vlSelf->top__DOT__PCF))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
