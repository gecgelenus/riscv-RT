// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__ins_out),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__FU__DOT__PC),32);
        bufp->chgIData(oldp+2,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                         >> 0xfU))),32);
        bufp->chgIData(oldp+3,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                         >> 0x14U))),32);
        bufp->chgIData(oldp+4,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                         >> 7U))),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__rs0_data),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__rs1_data),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__rd_data),32);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__exec_type),6);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__immediate),32);
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__reg_we));
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__data_mem_width),3);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__data_mem_we),4);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__data_mem_addr),32);
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__data_mem_sign));
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__data_mem_in),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__data_mem_out),32);
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__data_mem_reg_we));
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__data_mem_reg_addr),5);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__data_mem_reg_width),3);
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__jump_en));
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__jump_addr),32);
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__ins_ready));
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__tmpGPIO),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__DRAM__DOT__mem[0]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__DRAM__DOT__mem[1]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__DRAM__DOT__mem[2]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__DRAM__DOT__mem[3]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__DRAM__DOT__mem[4]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__DRAM__DOT__mem[5]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__DRAM__DOT__mem[6]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__DRAM__DOT__mem[7]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__DRAM__DOT__mem[8]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__DRAM__DOT__mem[9]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__DRAM__DOT__mem[10]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__DRAM__DOT__mem[11]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__DRAM__DOT__mem[12]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__DRAM__DOT__mem[13]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__DRAM__DOT__mem[14]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__DRAM__DOT__mem[15]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__DRAM__DOT__mem[16]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__DRAM__DOT__mem[17]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__DRAM__DOT__mem[18]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__DRAM__DOT__mem[19]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__DRAM__DOT__mem[20]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__DRAM__DOT__mem[21]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__DRAM__DOT__mem[22]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__DRAM__DOT__mem[23]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__DRAM__DOT__mem[24]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__DRAM__DOT__mem[25]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__DRAM__DOT__mem[26]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__DRAM__DOT__mem[27]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__DRAM__DOT__mem[28]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__DRAM__DOT__mem[29]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__DRAM__DOT__mem[30]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__DRAM__DOT__mem[31]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__DRAM__DOT__mem[32]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__DRAM__DOT__mem[33]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__DRAM__DOT__mem[34]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__DRAM__DOT__mem[35]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__DRAM__DOT__mem[36]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__DRAM__DOT__mem[37]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__DRAM__DOT__mem[38]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__DRAM__DOT__mem[39]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__DRAM__DOT__mem[40]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__DRAM__DOT__mem[41]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__DRAM__DOT__mem[42]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__DRAM__DOT__mem[43]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__DRAM__DOT__mem[44]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__DRAM__DOT__mem[45]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__DRAM__DOT__mem[46]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__DRAM__DOT__mem[47]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__DRAM__DOT__mem[48]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__DRAM__DOT__mem[49]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__DRAM__DOT__mem[50]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__DRAM__DOT__mem[51]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__DRAM__DOT__mem[52]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__DRAM__DOT__mem[53]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__DRAM__DOT__mem[54]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__DRAM__DOT__mem[55]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__DRAM__DOT__mem[56]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__DRAM__DOT__mem[57]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__DRAM__DOT__mem[58]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__DRAM__DOT__mem[59]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__DRAM__DOT__mem[60]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__DRAM__DOT__mem[61]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__DRAM__DOT__mem[62]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__DRAM__DOT__mem[63]),32);
        bufp->chgCData(oldp+88,((0xffU & (vlSelfRef.top__DOT__data_mem_addr 
                                          >> 2U))),8);
        bufp->chgBit(oldp+89,((0x100U <= vlSelfRef.top__DOT__data_mem_addr)));
        bufp->chgCData(oldp+90,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+91,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+92,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                          >> 7U))),5);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__EU__DOT__target_addr),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__IRAM__DOT__mem[0]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__IRAM__DOT__mem[1]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__IRAM__DOT__mem[2]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__IRAM__DOT__mem[3]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__IRAM__DOT__mem[4]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__IRAM__DOT__mem[5]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__IRAM__DOT__mem[6]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__IRAM__DOT__mem[7]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__IRAM__DOT__mem[8]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__IRAM__DOT__mem[9]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__IRAM__DOT__mem[10]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__IRAM__DOT__mem[11]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__IRAM__DOT__mem[12]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__IRAM__DOT__mem[13]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__IRAM__DOT__mem[14]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__IRAM__DOT__mem[15]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__IRAM__DOT__mem[16]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__IRAM__DOT__mem[17]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__IRAM__DOT__mem[18]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__IRAM__DOT__mem[19]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__IRAM__DOT__mem[20]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__IRAM__DOT__mem[21]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__IRAM__DOT__mem[22]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__IRAM__DOT__mem[23]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.top__DOT__IRAM__DOT__mem[24]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__IRAM__DOT__mem[25]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__IRAM__DOT__mem[26]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__IRAM__DOT__mem[27]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.top__DOT__IRAM__DOT__mem[28]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__IRAM__DOT__mem[29]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.top__DOT__IRAM__DOT__mem[30]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.top__DOT__IRAM__DOT__mem[31]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.top__DOT__IRAM__DOT__mem[32]),32);
        bufp->chgCData(oldp+127,((0xffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                                           >> 2U))),8);
        bufp->chgIData(oldp+128,(vlSelfRef.top__DOT__reg_file__DOT__regs[0]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.top__DOT__reg_file__DOT__regs[1]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__reg_file__DOT__regs[2]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.top__DOT__reg_file__DOT__regs[3]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.top__DOT__reg_file__DOT__regs[4]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.top__DOT__reg_file__DOT__regs[5]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.top__DOT__reg_file__DOT__regs[6]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__reg_file__DOT__regs[7]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.top__DOT__reg_file__DOT__regs[8]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.top__DOT__reg_file__DOT__regs[9]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.top__DOT__reg_file__DOT__regs[10]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__reg_file__DOT__regs[11]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__reg_file__DOT__regs[12]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.top__DOT__reg_file__DOT__regs[13]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__reg_file__DOT__regs[14]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__reg_file__DOT__regs[15]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.top__DOT__reg_file__DOT__regs[16]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__reg_file__DOT__regs[17]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.top__DOT__reg_file__DOT__regs[18]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.top__DOT__reg_file__DOT__regs[19]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__reg_file__DOT__regs[20]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.top__DOT__reg_file__DOT__regs[21]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__reg_file__DOT__regs[22]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top__DOT__reg_file__DOT__regs[23]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.top__DOT__reg_file__DOT__regs[24]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.top__DOT__reg_file__DOT__regs[25]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.top__DOT__reg_file__DOT__regs[26]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__reg_file__DOT__regs[27]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__reg_file__DOT__regs[28]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.top__DOT__reg_file__DOT__regs[29]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.top__DOT__reg_file__DOT__regs[30]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.top__DOT__reg_file__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+160,(vlSelfRef.clk));
    bufp->chgCData(oldp+161,(vlSelfRef.GPIO),6);
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
}
