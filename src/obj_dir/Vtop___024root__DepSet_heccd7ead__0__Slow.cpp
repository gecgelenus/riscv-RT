// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f6d656dU;
    __Vtemp_1[2U] = 0x64617461U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__DRAM__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__reg_file__DOT__regs[3U] = 0xf0f0fff1U;
    vlSelfRef.top__DOT__reg_file__DOT__regs[4U] = 0xf0f0fff1U;
    vlSelfRef.top__DOT__reg_file__DOT__regs[5U] = 0x20U;
    VL_READMEM_N(true, 32, 256, 0, std::string{"mem.hex"}
                 ,  &(vlSelfRef.top__DOT__IRAM__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__FU__DOT__PC = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__rs1_data = ((0U == (0x1fU & 
                                            (vlSelfRef.top__DOT__ins_out 
                                             >> 0x14U)))
                                     ? 0U : vlSelfRef.top__DOT__reg_file__DOT__regs
                                    [(0x1fU & (vlSelfRef.top__DOT__ins_out 
                                               >> 0x14U))]);
    if ((0x40U & vlSelfRef.top__DOT__ins_out)) {
        if ((0x20U & vlSelfRef.top__DOT__ins_out)) {
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 4U)))) {
                if ((8U & vlSelfRef.top__DOT__ins_out)) {
                    if ((4U & vlSelfRef.top__DOT__ins_out)) {
                        if ((2U & vlSelfRef.top__DOT__ins_out)) {
                            if ((1U & vlSelfRef.top__DOT__ins_out)) {
                                vlSelfRef.top__DOT__immediate 
                                    = ((((- (IData)(
                                                    (vlSelfRef.top__DOT__ins_out 
                                                     >> 0x1fU))) 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelfRef.top__DOT__ins_out 
                                              >> 0xbU))) 
                                       | (((0xff000U 
                                            & vlSelfRef.top__DOT__ins_out) 
                                           | (0x800U 
                                              & (vlSelfRef.top__DOT__ins_out 
                                                 >> 9U))) 
                                          | (0x7feU 
                                             & (vlSelfRef.top__DOT__ins_out 
                                                >> 0x14U))));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__ins_out)) {
                    if ((2U & vlSelfRef.top__DOT__ins_out)) {
                        if ((1U & vlSelfRef.top__DOT__ins_out)) {
                            vlSelfRef.top__DOT__immediate 
                                = (((- (IData)((vlSelfRef.top__DOT__ins_out 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.top__DOT__ins_out 
                                                >> 0x14U));
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
                    if ((1U & vlSelfRef.top__DOT__ins_out)) {
                        vlSelfRef.top__DOT__immediate 
                            = (((- (IData)((vlSelfRef.top__DOT__ins_out 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top__DOT__ins_out 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top__DOT__ins_out 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top__DOT__ins_out 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top__DOT__ins_out 
                                                     >> 7U)))));
                    }
                }
            }
            if ((0x10U & vlSelfRef.top__DOT__ins_out)) {
                vlSelfRef.top__DOT__exec_type = 0x1fU;
            } else if ((8U & vlSelfRef.top__DOT__ins_out)) {
                vlSelfRef.top__DOT__exec_type = ((4U 
                                                  & vlSelfRef.top__DOT__ins_out)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 0x1dU
                                                    : 0x1fU)
                                                   : 0x1fU)
                                                  : 0x1fU);
            } else if ((4U & vlSelfRef.top__DOT__ins_out)) {
                vlSelfRef.top__DOT__exec_type = ((2U 
                                                  & vlSelfRef.top__DOT__ins_out)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 0x1eU
                                                   : 0x1fU)
                                                  : 0x1fU);
            } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
                if ((1U & vlSelfRef.top__DOT__ins_out)) {
                    if ((0U == (7U & (vlSelfRef.top__DOT__ins_out 
                                      >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x20U;
                    } else if ((1U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x21U;
                    } else if ((4U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x22U;
                    } else if ((6U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x23U;
                    } else if ((5U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x24U;
                    } else if ((7U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x35U;
                    }
                } else {
                    vlSelfRef.top__DOT__exec_type = 0x1fU;
                }
            } else {
                vlSelfRef.top__DOT__exec_type = 0x1fU;
            }
        } else {
            vlSelfRef.top__DOT__exec_type = 0x1fU;
        }
    } else if ((0x20U & vlSelfRef.top__DOT__ins_out)) {
        if ((0x10U & vlSelfRef.top__DOT__ins_out)) {
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 3U)))) {
                if ((4U & vlSelfRef.top__DOT__ins_out)) {
                    if ((2U & vlSelfRef.top__DOT__ins_out)) {
                        if ((1U & vlSelfRef.top__DOT__ins_out)) {
                            vlSelfRef.top__DOT__immediate 
                                = vlSelfRef.top__DOT__ins_out;
                        }
                    }
                }
            }
            vlSelfRef.top__DOT__exec_type = ((8U & vlSelfRef.top__DOT__ins_out)
                                              ? 0x1fU
                                              : ((4U 
                                                  & vlSelfRef.top__DOT__ins_out)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 0x13U
                                                    : 0x1fU)
                                                   : 0x1fU)
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 4U
                                                       : 5U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelfRef.top__DOT__ins_out 
                                                         >> 0x19U))
                                                        ? 9U
                                                        : 8U)
                                                       : 6U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 7U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSelfRef.top__DOT__ins_out 
                                                         >> 0x19U))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSelfRef.top__DOT__ins_out 
                                                          >> 0x19U))
                                                         ? 1U
                                                         : 0x1fU)))))
                                                    : 0x1fU)
                                                   : 0x1fU)));
        } else {
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__ins_out)) {
                        if ((1U & vlSelfRef.top__DOT__ins_out)) {
                            vlSelfRef.top__DOT__immediate 
                                = ((0xfe0U & (vlSelfRef.top__DOT__ins_out 
                                              >> 0x14U)) 
                                   | (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                               >> 7U)));
                        }
                    }
                }
            }
            if ((8U & vlSelfRef.top__DOT__ins_out)) {
                vlSelfRef.top__DOT__exec_type = 0x1fU;
            } else if ((4U & vlSelfRef.top__DOT__ins_out)) {
                vlSelfRef.top__DOT__exec_type = 0x1fU;
            } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
                if ((1U & vlSelfRef.top__DOT__ins_out)) {
                    if ((0U == (7U & (vlSelfRef.top__DOT__ins_out 
                                      >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x15U;
                    } else if ((1U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x16U;
                    } else if ((2U == (7U & (vlSelfRef.top__DOT__ins_out 
                                             >> 0xcU)))) {
                        vlSelfRef.top__DOT__exec_type = 0x17U;
                    }
                } else {
                    vlSelfRef.top__DOT__exec_type = 0x1fU;
                }
            } else {
                vlSelfRef.top__DOT__exec_type = 0x1fU;
            }
        }
    } else if ((0x10U & vlSelfRef.top__DOT__ins_out)) {
        if ((1U & (~ (vlSelfRef.top__DOT__ins_out >> 3U)))) {
            if ((4U & vlSelfRef.top__DOT__ins_out)) {
                if ((2U & vlSelfRef.top__DOT__ins_out)) {
                    if ((1U & vlSelfRef.top__DOT__ins_out)) {
                        vlSelfRef.top__DOT__immediate 
                            = vlSelfRef.top__DOT__ins_out;
                    }
                }
            } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
                if ((1U & vlSelfRef.top__DOT__ins_out)) {
                    vlSelfRef.top__DOT__immediate = 
                        (vlSelfRef.top__DOT__ins_out 
                         >> 0x14U);
                }
            }
        }
        vlSelfRef.top__DOT__exec_type = ((8U & vlSelfRef.top__DOT__ins_out)
                                          ? 0x1fU : 
                                         ((4U & vlSelfRef.top__DOT__ins_out)
                                           ? ((2U & vlSelfRef.top__DOT__ins_out)
                                               ? ((1U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 0x14U
                                                   : 0x1fU)
                                               : 0x1fU)
                                           : ((2U & vlSelfRef.top__DOT__ins_out)
                                               ? ((1U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0xdU
                                                      : 0xeU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x20U 
                                                       == 
                                                       (vlSelfRef.top__DOT__ins_out 
                                                        >> 0x19U))
                                                       ? 0x12U
                                                       : 0x11U)
                                                      : 0xfU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0xcU
                                                      : 0xbU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0x10U
                                                      : 0xaU)))
                                                   : 0x1fU)
                                               : 0x1fU)));
    } else {
        if ((1U & (~ (vlSelfRef.top__DOT__ins_out >> 3U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 2U)))) {
                if ((2U & vlSelfRef.top__DOT__ins_out)) {
                    if ((1U & vlSelfRef.top__DOT__ins_out)) {
                        vlSelfRef.top__DOT__immediate 
                            = vlSelfRef.top__DOT__ins_out;
                    }
                }
            }
        }
        if ((8U & vlSelfRef.top__DOT__ins_out)) {
            vlSelfRef.top__DOT__exec_type = 0x1fU;
        } else if ((4U & vlSelfRef.top__DOT__ins_out)) {
            vlSelfRef.top__DOT__exec_type = 0x1fU;
        } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
            if ((1U & vlSelfRef.top__DOT__ins_out)) {
                if ((0U == (7U & (vlSelfRef.top__DOT__ins_out 
                                  >> 0xcU)))) {
                    vlSelfRef.top__DOT__exec_type = 0x18U;
                } else if ((4U == (7U & (vlSelfRef.top__DOT__ins_out 
                                         >> 0xcU)))) {
                    vlSelfRef.top__DOT__exec_type = 0x1bU;
                } else if ((1U == (7U & (vlSelfRef.top__DOT__ins_out 
                                         >> 0xcU)))) {
                    vlSelfRef.top__DOT__exec_type = 0x19U;
                } else if ((5U == (7U & (vlSelfRef.top__DOT__ins_out 
                                         >> 0xcU)))) {
                    vlSelfRef.top__DOT__exec_type = 0x1cU;
                } else if ((2U == (7U & (vlSelfRef.top__DOT__ins_out 
                                         >> 0xcU)))) {
                    vlSelfRef.top__DOT__exec_type = 0x1aU;
                }
            } else {
                vlSelfRef.top__DOT__exec_type = 0x1fU;
            }
        } else {
            vlSelfRef.top__DOT__exec_type = 0x1fU;
        }
    }
    vlSelfRef.top__DOT__rs0_data = ((0U == (0x1fU & 
                                            (vlSelfRef.top__DOT__ins_out 
                                             >> 0xfU)))
                                     ? 0U : vlSelfRef.top__DOT__reg_file__DOT__regs
                                    [(0x1fU & (vlSelfRef.top__DOT__ins_out 
                                               >> 0xfU))]);
    vlSelfRef.top__DOT__EU__DOT__target_addr = (vlSelfRef.top__DOT__immediate 
                                                + vlSelfRef.top__DOT__rs0_data);
    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
    vlSelfRef.top__DOT__jump_en = 0U;
    vlSelfRef.top__DOT__reg_we = 0U;
    vlSelfRef.top__DOT__data_mem_we = 0U;
    vlSelfRef.top__DOT__data_mem_in = 0U;
    if (vlSelfRef.top__DOT__ins_ready) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__exec_type))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we = 0U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we = 0U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__jump_en = 1U;
                                vlSelfRef.top__DOT__jump_addr 
                                    = ((vlSelfRef.top__DOT__rs0_data 
                                        >= vlSelfRef.top__DOT__rs1_data)
                                        ? ((vlSelfRef.top__DOT__FU__DOT__PC 
                                            - (IData)(4U)) 
                                           + vlSelfRef.top__DOT__immediate)
                                        : vlSelfRef.top__DOT__FU__DOT__PC);
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we = 0U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__jump_en = 1U;
                                vlSelfRef.top__DOT__jump_addr 
                                    = (VL_GTES_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                        ? ((vlSelfRef.top__DOT__FU__DOT__PC 
                                            - (IData)(4U)) 
                                           + vlSelfRef.top__DOT__immediate)
                                        : vlSelfRef.top__DOT__FU__DOT__PC);
                            }
                        }
                    } else {
                        vlSelfRef.top__DOT__jump_en = 1U;
                        vlSelfRef.top__DOT__jump_addr 
                            = ((2U & (IData)(vlSelfRef.top__DOT__exec_type))
                                ? ((1U & (IData)(vlSelfRef.top__DOT__exec_type))
                                    ? ((vlSelfRef.top__DOT__rs0_data 
                                        < vlSelfRef.top__DOT__rs1_data)
                                        ? ((vlSelfRef.top__DOT__FU__DOT__PC 
                                            - (IData)(4U)) 
                                           + vlSelfRef.top__DOT__immediate)
                                        : vlSelfRef.top__DOT__FU__DOT__PC)
                                    : (VL_LTS_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                        ? ((vlSelfRef.top__DOT__FU__DOT__PC 
                                            - (IData)(4U)) 
                                           + vlSelfRef.top__DOT__immediate)
                                        : vlSelfRef.top__DOT__FU__DOT__PC))
                                : ((1U & (IData)(vlSelfRef.top__DOT__exec_type))
                                    ? ((vlSelfRef.top__DOT__rs0_data 
                                        != vlSelfRef.top__DOT__rs1_data)
                                        ? ((vlSelfRef.top__DOT__FU__DOT__PC 
                                            - (IData)(4U)) 
                                           + vlSelfRef.top__DOT__immediate)
                                        : vlSelfRef.top__DOT__FU__DOT__PC)
                                    : ((vlSelfRef.top__DOT__rs0_data 
                                        == vlSelfRef.top__DOT__rs1_data)
                                        ? ((vlSelfRef.top__DOT__FU__DOT__PC 
                                            - (IData)(4U)) 
                                           + vlSelfRef.top__DOT__immediate)
                                        : vlSelfRef.top__DOT__FU__DOT__PC)));
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                            vlSelfRef.top__DOT__data_mem_we = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__jump_en = 1U;
                            vlSelfRef.top__DOT__jump_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + vlSelfRef.top__DOT__immediate);
                            vlSelfRef.top__DOT__reg_we = 1U;
                        } else {
                            vlSelfRef.top__DOT__reg_we = 0U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__data_mem_reg_we = 1U;
                        }
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__jump_en = 1U;
                            vlSelfRef.top__DOT__reg_we = 1U;
                            vlSelfRef.top__DOT__jump_addr 
                                = ((vlSelfRef.top__DOT__FU__DOT__PC 
                                    - (IData)(4U)) 
                                   + vlSelfRef.top__DOT__immediate);
                        }
                    }
                } else {
                    vlSelfRef.top__DOT__data_mem_reg_we = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_we = 0xfU;
                    } else if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                        if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                            vlSelfRef.top__DOT__data_mem_we = 0xcU;
                        }
                    } else {
                        vlSelfRef.top__DOT__data_mem_we = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we 
                        = ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                            ? ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                ? 8U : 4U) : ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                               ? 2U
                                               : 1U));
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                        vlSelfRef.top__DOT__reg_we = 1U;
                    }
                }
            } else {
                vlSelfRef.top__DOT__reg_we = 1U;
            }
        } else {
            vlSelfRef.top__DOT__reg_we = 1U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_sign = 0U;
                                vlSelfRef.top__DOT__data_mem_width = 1U;
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = (vlSelfRef.top__DOT__rs0_data 
                                       + (vlSelfRef.top__DOT__immediate 
                                          >> 0x14U));
                            }
                        }
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__rd_data 
                                    = vlSelfRef.top__DOT__FU__DOT__PC;
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__rd_data 
                                = vlSelfRef.top__DOT__FU__DOT__PC;
                        }
                    } else {
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 0U;
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = (vlSelfRef.top__DOT__rs0_data 
                                       + (vlSelfRef.top__DOT__immediate 
                                          >> 0x14U));
                            } else {
                                vlSelfRef.top__DOT__data_mem_reg_width = 3U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 3U;
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = (vlSelfRef.top__DOT__rs0_data 
                                       + (vlSelfRef.top__DOT__immediate 
                                          >> 0x14U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                            vlSelfRef.top__DOT__data_mem_reg_addr 
                                = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                            >> 7U));
                            vlSelfRef.top__DOT__data_mem_width = 1U;
                            vlSelfRef.top__DOT__data_mem_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + (vlSelfRef.top__DOT__immediate 
                                      >> 0x14U));
                        } else {
                            vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                            vlSelfRef.top__DOT__data_mem_reg_addr 
                                = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                            >> 7U));
                            vlSelfRef.top__DOT__data_mem_width = 0U;
                            vlSelfRef.top__DOT__data_mem_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + (vlSelfRef.top__DOT__immediate 
                                      >> 0x14U));
                        }
                        vlSelfRef.top__DOT__data_mem_sign 
                            = (1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                        >> 1U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_reg_width = 3U;
                            vlSelfRef.top__DOT__data_mem_width = 3U;
                            vlSelfRef.top__DOT__data_mem_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + vlSelfRef.top__DOT__immediate);
                        } else {
                            vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                            vlSelfRef.top__DOT__data_mem_width = 1U;
                            vlSelfRef.top__DOT__data_mem_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + vlSelfRef.top__DOT__immediate);
                        }
                        vlSelfRef.top__DOT__data_mem_sign = 0U;
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                        vlSelfRef.top__DOT__data_mem_sign = 0U;
                        vlSelfRef.top__DOT__data_mem_width = 0U;
                        vlSelfRef.top__DOT__data_mem_addr 
                            = (vlSelfRef.top__DOT__rs0_data 
                               + vlSelfRef.top__DOT__immediate);
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__rd_data 
                                = ((vlSelfRef.top__DOT__FU__DOT__PC 
                                    - (IData)(4U)) 
                                   + (0xfffff000U & vlSelfRef.top__DOT__immediate));
                        }
                    }
                } else {
                    vlSelfRef.top__DOT__rd_data = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelfRef.top__DOT__immediate)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__rs0_data, 
                                                                   (0x1fU 
                                                                    & vlSelfRef.top__DOT__immediate)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.top__DOT__immediate))
                                                     : 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelfRef.top__DOT__immediate))));
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_in 
                                    = vlSelfRef.top__DOT__rs1_data;
                            } else if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                                if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                                    vlSelfRef.top__DOT__data_mem_in 
                                        = (vlSelfRef.top__DOT__rs1_data 
                                           << 0x10U);
                                }
                            } else {
                                vlSelfRef.top__DOT__data_mem_in 
                                    = (0xffffU & vlSelfRef.top__DOT__rs1_data);
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_in 
                                = ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                    ? ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                        ? (vlSelfRef.top__DOT__rs1_data 
                                           << 0x18U)
                                        : (0xff0000U 
                                           & (vlSelfRef.top__DOT__rs1_data 
                                              << 0x10U)))
                                    : ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                        ? (0xff00U 
                                           & (vlSelfRef.top__DOT__rs1_data 
                                              << 8U))
                                        : (0xffU & vlSelfRef.top__DOT__rs1_data)));
                        }
                    }
                }
            } else {
                vlSelfRef.top__DOT__rd_data = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__exec_type))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      ^ vlSelfRef.top__DOT__immediate)
                                                      : 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      | vlSelfRef.top__DOT__immediate))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      & vlSelfRef.top__DOT__immediate)
                                                      : 
                                                     ((vlSelfRef.top__DOT__rs0_data 
                                                       < vlSelfRef.top__DOT__immediate)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__immediate)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      + 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.top__DOT__immediate 
                                                                       >> 0xbU)))) 
                                                        << 0xcU) 
                                                       | (0xfffU 
                                                          & vlSelfRef.top__DOT__immediate))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                                      : 
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                                      : 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      ^ vlSelfRef.top__DOT__rs1_data))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      | vlSelfRef.top__DOT__rs1_data)
                                                      : 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      & vlSelfRef.top__DOT__rs1_data)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__rs0_data 
                                                       < vlSelfRef.top__DOT__rs1_data)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__exec_type))
                                                      ? 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      - vlSelfRef.top__DOT__rs1_data)
                                                      : 
                                                     (vlSelfRef.top__DOT__rs0_data 
                                                      + vlSelfRef.top__DOT__rs1_data)))));
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.top__DOT__data_mem_width))) {
        vlSelfRef.top__DOT__data_mem_out = ((0xffffff00U 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (0xffU 
                                               & ((2U 
                                                   & vlSelfRef.top__DOT__data_mem_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__data_mem_addr)
                                                    ? 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 0x18U)
                                                    : 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__data_mem_addr)
                                                    ? 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 8U)
                                                    : 
                                                   vlSelfRef.top__DOT__DRAM__DOT__mem
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.top__DOT__data_mem_addr 
                                                       >> 2U))]))));
        vlSelfRef.top__DOT__data_mem_out = ((0xffU 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (((IData)(vlSelfRef.top__DOT__data_mem_sign)
                                                 ? 
                                                (0xffffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & (vlSelfRef.top__DOT__data_mem_addr 
                                                                      >> 2U))] 
                                                                  >> 7U)))))
                                                 : 0U) 
                                               << 8U));
    }
    if ((1U == (IData)(vlSelfRef.top__DOT__data_mem_width))) {
        if ((2U & vlSelfRef.top__DOT__data_mem_addr)) {
            if ((2U & vlSelfRef.top__DOT__data_mem_addr)) {
                vlSelfRef.top__DOT__data_mem_out = 
                    ((0xffff0000U & vlSelfRef.top__DOT__data_mem_out) 
                     | (vlSelfRef.top__DOT__DRAM__DOT__mem
                        [(0xffU & (vlSelfRef.top__DOT__data_mem_addr 
                                   >> 2U))] >> 0x10U));
            }
        } else {
            vlSelfRef.top__DOT__data_mem_out = ((0xffff0000U 
                                                 & vlSelfRef.top__DOT__data_mem_out) 
                                                | (0xffffU 
                                                   & vlSelfRef.top__DOT__DRAM__DOT__mem
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.top__DOT__data_mem_addr 
                                                       >> 2U))]));
        }
        vlSelfRef.top__DOT__data_mem_out = ((0xffffU 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (((IData)(vlSelfRef.top__DOT__data_mem_sign)
                                                 ? 
                                                (0xffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                                  [
                                                                  (0xffU 
                                                                   & (vlSelfRef.top__DOT__data_mem_addr 
                                                                      >> 2U))] 
                                                                  >> 0xfU)))))
                                                 : 0U) 
                                               << 0x10U));
    }
    if ((3U == (IData)(vlSelfRef.top__DOT__data_mem_width))) {
        vlSelfRef.top__DOT__data_mem_out = vlSelfRef.top__DOT__DRAM__DOT__mem
            [(0xffU & (vlSelfRef.top__DOT__data_mem_addr 
                       >> 2U))];
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs0_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exec_type = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_width = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__data_mem_we = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__data_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_reg_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_reg_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__data_mem_reg_width = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jump_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ins_we = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__data_we = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__DRAM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_file__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__IRAM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__FU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EU__DOT__target_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
