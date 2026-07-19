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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(isjump,0,0);
        CData/*7:0*/ top__DOT__is_what;
        CData/*3:0*/ top__DOT__wmask;
        CData/*0:0*/ top__DOT____Vcellinp__inst_store____pinNumber7;
        CData/*0:0*/ top__DOT____VdfgRegularize_h245778ca_0_0;
        CData/*0:0*/ top__DOT____VdfgRegularize_h245778ca_0_1;
        CData/*0:0*/ top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(ppc,31,0);
        IData/*31:0*/ top__DOT__imm;
        IData/*31:0*/ top__DOT__inst;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__rdata1;
        IData/*31:0*/ top__DOT__rdata2;
        IData/*31:0*/ top__DOT__raddrM;
        IData/*31:0*/ top__DOT__waddrM;
        IData/*31:0*/ top__DOT__result;
        IData/*31:0*/ top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__inst_exu__DOT__sum_addi;
        IData/*31:0*/ top__DOT__inst_exu__DOT__sum_add;
        IData/*31:0*/ top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__inst_store__DOT__rdata;
        IData/*31:0*/ top__DOT__inst_store__DOT__rdatabyte;
        IData/*31:0*/ top__DOT__inst_store__DOT__wdatabt;
        IData/*31:0*/ top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_9;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_17;
        IData/*31:0*/ __Vfunc_top__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*39:0*/, 7> top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 7> top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 7> top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 4> top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 4> top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 4> top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 2> top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 2> top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 2> top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 2> top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> top__DOT__u_gpr__DOT__rf;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
