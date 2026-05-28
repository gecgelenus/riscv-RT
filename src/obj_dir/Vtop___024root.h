// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*5:0*/ top__DOT__exec_type;
    CData/*0:0*/ top__DOT__reg_we;
    CData/*2:0*/ top__DOT__data_mem_width;
    CData/*3:0*/ top__DOT__data_mem_we;
    CData/*0:0*/ top__DOT__data_mem_sign;
    CData/*0:0*/ top__DOT__data_mem_reg_we;
    CData/*4:0*/ top__DOT__data_mem_reg_addr;
    CData/*2:0*/ top__DOT__data_mem_reg_width;
    CData/*0:0*/ top__DOT__jump_en;
    CData/*0:0*/ top__DOT__ins_ready;
    CData/*3:0*/ top__DOT__ins_we;
    CData/*3:0*/ top__DOT__data_we;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(GPIO,31,0);
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__data_in;
    IData/*31:0*/ top__DOT__data_out;
    IData/*31:0*/ top__DOT__data_addr;
    IData/*31:0*/ top__DOT__ins_in;
    IData/*31:0*/ top__DOT__ins_out;
    IData/*31:0*/ top__DOT__rs0_data;
    IData/*31:0*/ top__DOT__rs1_data;
    IData/*31:0*/ top__DOT__rd_data;
    IData/*31:0*/ top__DOT__immediate;
    IData/*31:0*/ top__DOT__data_mem_addr;
    IData/*31:0*/ top__DOT__data_mem_in;
    IData/*31:0*/ top__DOT__data_mem_out;
    IData/*31:0*/ top__DOT__jump_addr;
    IData/*31:0*/ top__DOT__FU__DOT__PC;
    IData/*31:0*/ top__DOT__EU__DOT__target_addr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__DRAM__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_file__DOT__regs;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__IRAM__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
