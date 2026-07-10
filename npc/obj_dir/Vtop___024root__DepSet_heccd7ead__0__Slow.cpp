// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[1U] = 8U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[2U] = 0x10U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[3U] = 0x20U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[4U] = 0x40U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[5U] = 0x80U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[1U] = 0x40U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[2U] = 0x80U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[0U] = 0x10U;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[1U] = 0x20U;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[1U] = 8U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0U] = 0xfU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[1U] = 0xeU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[2U] = 0xdU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[3U] = 0xcU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[4U] = 0xbU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[5U] = 0xaU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0xaU] = 5U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0xbU] = 4U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0xcU] = 3U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0xdU] = 2U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0xeU] = 1U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0xfU] = 0U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0U] = 0xfU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[1U] = 0xeU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[2U] = 0xdU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[3U] = 0xcU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[4U] = 0xbU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[5U] = 0xaU;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0xaU] = 5U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0xbU] = 4U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0xcU] = 3U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0xdU] = 2U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0xeU] = 1U;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0xfU] = 0U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[0U] = 8U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[0U] = 0x38U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[1U] = 0x24U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[2U] = 0x12U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[3U] = 1U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0U] = 0xfU;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[1U] = 0xeU;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[2U] = 0xdU;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[3U] = 0xcU;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[4U] = 0xbU;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[5U] = 0xaU;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0xaU] = 5U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0xbU] = 4U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0xcU] = 3U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0xdU] = 2U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0xeU] = 1U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0xfU] = 0U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0U] = 0x8000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[1U] = 0x4000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[2U] = 0x2000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[3U] = 0x1000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[4U] = 0x800U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[5U] = 0x400U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[6U] = 0x200U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[7U] = 0x100U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[8U] = 0x80U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[9U] = 0x40U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0xaU] = 0x20U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0xbU] = 0x10U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0xcU] = 8U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0xdU] = 4U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0xeU] = 3U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0xfU] = 0U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0U] = 0xf8000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[1U] = 0xe4000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[2U] = 0xd2000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[3U] = 0xc1000U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[4U] = 0xb0800U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[5U] = 0xa0400U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[6U] = 0x90200U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[7U] = 0x80100U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[8U] = 0x70080U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[9U] = 0x60040U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0xaU] = 0x50020U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0xbU] = 0x40010U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0xcU] = 0x30008U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0xdU] = 0x20004U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0xeU] = 0x10003U;
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0xfU] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/lx02/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__inst_du__DOT__halt_TOP(IData/*31:0*/ code);
void Vtop___024root____Vdpiimwrap_top__DOT__inst_store__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ppc = vlSelfRef.top__DOT__instfu__DOT__q;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1U] 
        = (0x4000000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelfRef.top__DOT__instfu__DOT__q))));
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[1U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[2U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[3U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[4U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[5U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[6U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[7U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[8U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[9U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0xaU] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0xbU] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0xcU] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0xdU] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0xeU] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__out[0xfU] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (0xf00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[3U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[4U] 
        = (0xb00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[5U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[6U] 
        = (0x900000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[7U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[8U] 
        = (0x700000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[9U] 
        = (0x600000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0xaU] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0xbU] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0xcU] 
        = (0x300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0xdU] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0xeU] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0xfU] 
        = (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0U] 
        = (0xf00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[3U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[4U] 
        = (0xb00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[5U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[6U] 
        = (0x900000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[7U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[8U] 
        = (0x700000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[9U] 
        = (0x600000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0xaU] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0xbU] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0xcU] 
        = (0x300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0xdU] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0xeU] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0xfU] 
        = (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__instfu__DOT__q);
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[8U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[9U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0xaU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0xbU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0xcU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0xdU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0xeU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0xfU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[8U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[9U] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0xaU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0xbU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0xcU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0xdU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0xeU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0xfU] 
        = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4;
    if ((0U != vlSelfRef.top__DOT__instfu__DOT__q)) {
        Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelfRef.top__DOT__instfu__DOT__q, vlSelfRef.__Vfunc_top__DOT__pmem_read__0__Vfuncout);
        vlSelfRef.top__DOT__inst = vlSelfRef.__Vfunc_top__DOT__pmem_read__0__Vfuncout;
    }
    if ((0x100073U == vlSelfRef.top__DOT__inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__inst_du__DOT__halt_TOP(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4);
    }
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
           == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 7U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
           == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0xfU)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
           == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelfRef.top__DOT__inst >> 0x14U)) 
              == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5U] 
        = (0x8000000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)) == vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__sign = vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0x14U)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.top__DOT__rdata2 = vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0xfU & (vlSelfRef.top__DOT__inst 
                                   >> 0xfU)) == vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.top__DOT__rdata1 = vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = (IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_4 = (IData)(
                                                       (0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.isjump = (IData)((0x67U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = (IData)(
                                                       (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_9 = (((- (IData)(
                                                            (vlSelfRef.top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 7U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_17 = (((- (IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.top__DOT__inst 
                                                    >> 0x14U));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((0xff0000U 
                                             & (vlSelfRef.top__DOT__rdata2 
                                                << 0x10U)))));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((0xff00U 
                                             & (vlSelfRef.top__DOT__rdata2 
                                                << 8U)))));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)((0xffU & vlSelfRef.top__DOT__rdata2)));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[0U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U);
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[1U] 
        = (0xff0000U & (vlSelfRef.top__DOT__rdata2 
                        << 0x10U));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[2U] 
        = (0xff00U & (vlSelfRef.top__DOT__rdata2 << 8U));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelfRef.top__DOT__rdata2);
    vlSelfRef.top__DOT__inst_exu__DOT__sum_add = (vlSelfRef.top__DOT__rdata1 
                                                  + vlSelfRef.top__DOT__rdata2);
    vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7 
        = ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0) 
           | (IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1));
    vlSelfRef.top__DOT__is_what = (((((0x37U == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst)) 
                                      << 7U) | ((IData)(vlSelfRef.isjump) 
                                                << 6U)) 
                                    | (((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1) 
                                        << 5U) | ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0) 
                                                  << 4U))) 
                                   | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                                          << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4))));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[1U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_9;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_9;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[2U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[3U] 
        = (0x2000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[4U] 
        = (0x4000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_add)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
    vlSelfRef.top__DOT__inst_gpr__DOT__wen = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
                                                 | ((IData)(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) 
                                                    | ((IData)(vlSelfRef.isjump) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.top__DOT__inst))))));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_gpr__DOT____Vcellinp__reg0____pinNumber5 
        = (((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
            >> 1U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[2U] 
        = (0x8000000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.top__DOT__inst_exu__DOT__sum_addi = (vlSelfRef.top__DOT__imm 
                                                   + vlSelfRef.top__DOT__rdata1);
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
           == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
           == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
           == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[0U] 
        = (0x1000000000ULL | (QData)((IData)((0xfffffffcU 
                                              & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[1U] 
        = (0x2000000000ULL | (QData)((IData)((0xfffffffcU 
                                              & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((0xfffffffcU 
                                             & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[1U] 
        = (0x800000000ULL | (QData)((IData)((0xfffffffcU 
                                             & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
    vlSelfRef.top__DOT__instfu__DOT__d = ((IData)(vlSelfRef.isjump)
                                           ? (0xfffffffeU 
                                              & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)
                                           : ((IData)(4U) 
                                              + vlSelfRef.top__DOT__instfu__DOT__q));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__wmask = vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                       == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabt = vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffcU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1U] 
        = (0xfffffffcU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffcU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1U] 
        = (0xfffffffcU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__result = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__raddrM = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__waddrM = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out
                                   : 0U);
    if (vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) {
        Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelfRef.top__DOT__raddrM, vlSelfRef.__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout);
        vlSelfRef.top__DOT__inst_store__DOT__rdata 
            = vlSelfRef.__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout;
    } else if (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
        Vtop___024root____Vdpiimwrap_top__DOT__inst_store__DOT__pmem_write_TOP(vlSelfRef.top__DOT__waddrM, 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)
                                                                                 ? vlSelfRef.top__DOT__inst_store__DOT__wdatabt
                                                                                 : vlSelfRef.top__DOT__rdata2), 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.top__DOT__wmask))));
        vlSelfRef.top__DOT__inst_store__DOT__rdata = 0U;
    } else {
        vlSelfRef.top__DOT__inst_store__DOT__rdata = 0U;
    }
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                             >> 0x18U))));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((0xffU 
                                             & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                >> 0x10U)))));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((0xffU 
                                             & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                >> 8U)))));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)((0xffU & vlSelfRef.top__DOT__inst_store__DOT__rdata)));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[0U] 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__inst_store__DOT__rdata, 0x18U);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                    >> 0x10U));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                    >> 8U));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelfRef.top__DOT__inst_store__DOT__rdata);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                       == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__rdatabyte 
        = vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__wb_data = (((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1) 
                                    | (IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0))
                                    ? ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                        ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                        : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                            ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                            : 0U)) : vlSelfRef.top__DOT__result);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12409248811792671830ull);
    vlSelf->ppc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9014502055368371710ull);
    vlSelf->isjump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3529710505010002015ull);
    vlSelf->top__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18445623346312568628ull);
    vlSelf->top__DOT__is_what = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5868922744640580464ull);
    vlSelf->top__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4033626345969658743ull);
    vlSelf->top__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12275060777207994323ull);
    vlSelf->top__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16962670634133904117ull);
    vlSelf->top__DOT__raddrM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7354028418195929012ull);
    vlSelf->top__DOT__waddrM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4983943233067056335ull);
    vlSelf->top__DOT__wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14372174403682579114ull);
    vlSelf->top__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 708734222896241553ull);
    vlSelf->top__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17168433359956578864ull);
    vlSelf->top__DOT____Vcellinp__inst_store____pinNumber7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9264326485574166254ull);
    vlSelf->top__DOT____VdfgRegularize_h245778ca_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15911567072873210565ull);
    vlSelf->top__DOT____VdfgRegularize_h245778ca_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18164628636478145843ull);
    vlSelf->top__DOT__instfu__DOT__d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10416591658260531875ull);
    vlSelf->top__DOT__instfu__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8158597667223463994ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7487581992206185703ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3491333672584990582ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17420553585515911003ull);
    }
    vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10453729832025447029ull);
    vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1374518555202222310ull);
    vlSelf->top__DOT__inst_exu__DOT__sum_addi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17079588753924412295ull);
    vlSelf->top__DOT__inst_exu__DOT__sum_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 662873310255418041ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7557145043907345804ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18186021319409080488ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10082266609290996154ull);
    }
    vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12356310337505721935ull);
    vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2918666078630639975ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11937835204542397087ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4288534289263568548ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6118187372040182246ull);
    }
    vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6076451171839285331ull);
    vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14826953854936902322ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16901808125991460750ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12155566088865991876ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2581912990965926637ull);
    }
    vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13610728183378689208ull);
    vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8663932472835324095ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17674895783890766446ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4133979425719781652ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2863747664166170182ull);
    }
    vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13931901638681127398ull);
    vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10468920103546819972ull);
    vlSelf->top__DOT__inst_gpr__DOT__sign = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14333670430446594858ull);
    vlSelf->top__DOT__inst_gpr__DOT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10434268502489458841ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12950730376742907157ull);
    }
    vlSelf->top__DOT__inst_gpr__DOT____Vcellinp__reg0____pinNumber5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5240956352117390594ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2932078428029597896ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16928759315465754651ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2937731133517328976ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17481723814388237721ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 640720147029958629ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15380010476109216666ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6852828160739802870ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4611257691267711333ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8837802916637300807ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 917844704797169237ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10890450597667147895ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9669335723789744784ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14507653608916106922ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15467569026843203118ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2934775146144059546ull);
    vlSelf->top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8827292706071563284ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2074946515880241179ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14799956335502024378ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1260204215264477488ull);
    }
    vlSelf->top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 156158233855269186ull);
    vlSelf->top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7797221893764744930ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4574311464498581014ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10413310353995534832ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3497988515202300109ull);
    }
    vlSelf->top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3194617908178039867ull);
    vlSelf->top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17266938462870178725ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13580794979953940790ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15372869642374108073ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5352761608275897173ull);
    }
    vlSelf->top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15808411560902607300ull);
    vlSelf->top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16587968573812625347ull);
    vlSelf->top__DOT__inst_store__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13334867226943608757ull);
    vlSelf->top__DOT__inst_store__DOT__rdatabyte = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7652578487045241741ull);
    vlSelf->top__DOT__inst_store__DOT__wdatabt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18021043892396230638ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16121566357198352999ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6662492205812568046ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10337596488486658130ull);
    }
    vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18312860321978806952ull);
    vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6206211754377254997ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4877868529707220250ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5136077967900501414ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1900213751115710400ull);
    }
    vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18087926776891030478ull);
    vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8410990567547929829ull);
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5340372587894446017ull);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13937790191936043692ull);
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15698919337911904033ull);
    vlSelf->__VdfgRegularize_hd87f99a1_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6510449690261163580ull);
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10679088455101672072ull);
    vlSelf->__VdfgRegularize_hd87f99a1_0_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12127011254398728745ull);
    vlSelf->__Vfunc_top__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
