// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<9>/*287:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_26;
    VlWide<18>/*575:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_35;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+10,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[2]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[3]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0]),20);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[1]),20);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[2]),20);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[3]),20);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[4]),20);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[5]),20);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[6]),20);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[7]),20);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[8]),20);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[9]),20);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[10]),20);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[11]),20);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[12]),20);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[13]),20);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[14]),20);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[15]),20);
        bufp->chgCData(oldp+43,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+44,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+45,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+46,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+47,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+48,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+49,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+50,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+51,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+52,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+53,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+54,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[11]),4);
        bufp->chgCData(oldp+55,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[12]),4);
        bufp->chgCData(oldp+56,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[13]),4);
        bufp->chgCData(oldp+57,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[14]),4);
        bufp->chgCData(oldp+58,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[15]),4);
        bufp->chgSData(oldp+59,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0]),16);
        bufp->chgSData(oldp+60,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[1]),16);
        bufp->chgSData(oldp+61,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[2]),16);
        bufp->chgSData(oldp+62,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[3]),16);
        bufp->chgSData(oldp+63,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[4]),16);
        bufp->chgSData(oldp+64,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[5]),16);
        bufp->chgSData(oldp+65,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[6]),16);
        bufp->chgSData(oldp+66,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[7]),16);
        bufp->chgSData(oldp+67,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[8]),16);
        bufp->chgSData(oldp+68,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[9]),16);
        bufp->chgSData(oldp+69,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[10]),16);
        bufp->chgSData(oldp+70,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[11]),16);
        bufp->chgSData(oldp+71,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[12]),16);
        bufp->chgSData(oldp+72,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[13]),16);
        bufp->chgSData(oldp+73,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[14]),16);
        bufp->chgSData(oldp+74,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[15]),16);
        bufp->chgCData(oldp+75,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+76,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+77,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+78,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+80,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+81,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+82,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+83,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+84,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+85,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+86,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[11]),4);
        bufp->chgCData(oldp+87,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[12]),4);
        bufp->chgCData(oldp+88,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[13]),4);
        bufp->chgCData(oldp+89,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[14]),4);
        bufp->chgCData(oldp+90,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[15]),4);
        bufp->chgCData(oldp+91,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+92,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+93,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+94,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+95,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+96,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+97,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+98,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+99,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+100,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+101,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+102,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[11]),4);
        bufp->chgCData(oldp+103,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[12]),4);
        bufp->chgCData(oldp+104,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[13]),4);
        bufp->chgCData(oldp+105,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[14]),4);
        bufp->chgCData(oldp+106,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[15]),4);
        bufp->chgCData(oldp+107,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+108,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+109,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+110,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+111,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+112,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+113,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+114,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+115,((0xfffffffeU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__imm),32);
        bufp->chgCData(oldp+117,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+118,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+119,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+120,(vlSelfRef.top__DOT__is_what),8);
        bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__inst),32);
        bufp->chgIData(oldp+122,(vlSelfRef.top__DOT__instfu__DOT__q),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__rdata1),32);
        bufp->chgIData(oldp+124,(vlSelfRef.top__DOT__rdata2),32);
        bufp->chgCData(oldp+125,((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),2);
        bufp->chgIData(oldp+126,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                   ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                   : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                       ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                       : 0U))),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__raddrM),32);
        bufp->chgIData(oldp+128,(vlSelfRef.top__DOT__waddrM),32);
        bufp->chgCData(oldp+129,(vlSelfRef.top__DOT__wmask),4);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__result),32);
        bufp->chgIData(oldp+131,(vlSelfRef.top__DOT__wb_data),32);
        bufp->chgIData(oldp+132,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4),32);
        bufp->chgBit(oldp+133,((0x100073U == vlSelfRef.top__DOT__inst)));
        bufp->chgSData(oldp+134,((vlSelfRef.top__DOT__inst 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+135,(((0xfe0U & (vlSelfRef.top__DOT__inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.top__DOT__inst 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+136,((vlSelfRef.top__DOT__inst 
                                  >> 0xcU)),20);
        __Vtemp_4[2U] = (((IData)((0x200000000010ULL 
                                   | ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelfRef.top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 8U))) << 0x10U) 
                         | (((IData)((8ULL | ((QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelfRef.top__DOT__inst 
                                                                            >> 0x1fU))) 
                                                                << 0xcU) 
                                                               | (vlSelfRef.top__DOT__inst 
                                                                  >> 0x14U)))) 
                                              << 8U))) 
                             >> 0x18U) | ((IData)((
                                                   (8ULL 
                                                    | ((QData)((IData)(
                                                                       (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                         << 0xcU) 
                                                                        | (vlSelfRef.top__DOT__inst 
                                                                           >> 0x14U)))) 
                                                       << 8U)) 
                                                   >> 0x20U)) 
                                          << 8U)));
        __Vtemp_6[0U] = vlSelfRef.__VdfgRegularize_hd87f99a1_0_9;
        __Vtemp_6[1U] = (IData)((((QData)((IData)((0xfffffU 
                                                   & (- (IData)(
                                                                (vlSelfRef.top__DOT__inst 
                                                                 >> 0x1fU)))))) 
                                  << 0x14U) | (QData)((IData)(
                                                              (4U 
                                                               | ((0xfe000U 
                                                                   & (vlSelfRef.top__DOT__inst 
                                                                      >> 0xcU)) 
                                                                  | (0x1f00U 
                                                                     & (vlSelfRef.top__DOT__inst 
                                                                        << 1U))))))));
        __Vtemp_6[2U] = (((IData)((8ULL | ((QData)((IData)(
                                                           (((- (IData)(
                                                                        (vlSelfRef.top__DOT__inst 
                                                                         >> 0x1fU))) 
                                                             << 0xcU) 
                                                            | (vlSelfRef.top__DOT__inst 
                                                               >> 0x14U)))) 
                                           << 8U))) 
                          << 8U) | (IData)(((((QData)((IData)(
                                                              (0xfffffU 
                                                               & (- (IData)(
                                                                            (vlSelfRef.top__DOT__inst 
                                                                             >> 0x1fU)))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (4U 
                                                                | ((0xfe000U 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0xcU)) 
                                                                   | (0x1f00U 
                                                                      & (vlSelfRef.top__DOT__inst 
                                                                         << 1U))))))) 
                                            >> 0x20U)));
        __Vtemp_6[3U] = __Vtemp_4[2U];
        __Vtemp_6[4U] = (((IData)((0x200000000010ULL 
                                   | ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelfRef.top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 8U))) >> 0x10U) 
                         | ((IData)(((0x200000000010ULL 
                                      | ((QData)((IData)(
                                                         (((- (IData)(
                                                                      (vlSelfRef.top__DOT__inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelfRef.top__DOT__inst 
                                                             >> 0x14U)))) 
                                         << 8U)) >> 0x20U)) 
                            << 0x10U));
        __Vtemp_6[5U] = (((- (IData)((vlSelfRef.top__DOT__inst 
                                      >> 0x1fU))) << 0xcU) 
                         | (vlSelfRef.top__DOT__inst 
                            >> 0x14U));
        __Vtemp_6[6U] = (IData)((0x800000000040ULL 
                                 | ((QData)((IData)(
                                                    (vlSelfRef.top__DOT__inst 
                                                     >> 0xcU))) 
                                    << 0x14U)));
        __Vtemp_6[7U] = (((IData)((0x200000000ULL | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                      << 0xcU) 
                                                                     | (vlSelfRef.top__DOT__inst 
                                                                        >> 0x14U)))))) 
                          << 0x10U) | (IData)(((0x800000000040ULL 
                                                | ((QData)((IData)(
                                                                   (vlSelfRef.top__DOT__inst 
                                                                    >> 0xcU))) 
                                                   << 0x14U)) 
                                               >> 0x20U)));
        __Vtemp_6[8U] = (((IData)((0x200000000ULL | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                      << 0xcU) 
                                                                     | (vlSelfRef.top__DOT__inst 
                                                                        >> 0x14U)))))) 
                          >> 0x10U) | ((IData)(((0x200000000ULL 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                     << 0xcU) 
                                                                    | (vlSelfRef.top__DOT__inst 
                                                                       >> 0x14U))))) 
                                                >> 0x20U)) 
                                       << 0x10U));
        bufp->chgWData(oldp+137,(__Vtemp_6),280);
        bufp->chgQData(oldp+146,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+148,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+150,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+152,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+154,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+156,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+158,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgIData(oldp+160,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+168,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+169,(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi),32);
        bufp->chgIData(oldp+170,(((IData)(4U) + vlSelfRef.top__DOT__instfu__DOT__q)),32);
        bufp->chgIData(oldp+171,(vlSelfRef.top__DOT__inst_exu__DOT__sum_add),32);
        bufp->chgIData(oldp+172,((0xfffffffcU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),32);
        bufp->chgCData(oldp+173,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+174,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit));
        __Vtemp_8[0U] = (IData)((0x1000000000ULL | (QData)((IData)(
                                                                   (0xfffffffcU 
                                                                    & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)))));
        __Vtemp_8[1U] = ((0xfffffc00U & (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                         << 8U)) | (IData)(
                                                           ((0x1000000000ULL 
                                                             | (QData)((IData)(
                                                                               (0xfffffffcU 
                                                                                & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)))) 
                                                            >> 0x20U)));
        __Vtemp_8[2U] = (0x2000U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                    >> 0x18U));
        bufp->chgWData(oldp+175,(__Vtemp_8),80);
        bufp->chgQData(oldp+178,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+180,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgIData(oldp+182,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit));
        __Vtemp_11[0U] = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
        __Vtemp_11[1U] = (IData)((1ULL | ((QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelfRef.top__DOT__instfu__DOT__q))) 
                                          << 8U)));
        __Vtemp_11[2U] = (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                               << 8U))) 
                           << 8U) | (IData)(((1ULL 
                                              | ((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelfRef.top__DOT__instfu__DOT__q))) 
                                                 << 8U)) 
                                             >> 0x20U)));
        __Vtemp_11[3U] = (((IData)((0x20000000080ULL 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                       << 8U))) << 0x10U) 
                          | (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                  << 8U))) 
                              >> 0x18U) | ((IData)(
                                                   ((0x40ULL 
                                                     | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                        << 8U)) 
                                                    >> 0x20U)) 
                                           << 8U)));
        __Vtemp_11[4U] = (((IData)((0x20000000080ULL 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                       << 8U))) >> 0x10U) 
                          | ((IData)(((0x20000000080ULL 
                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                          << 8U)) >> 0x20U)) 
                             << 0x10U));
        bufp->chgWData(oldp+186,(__Vtemp_11),160);
        bufp->chgQData(oldp+191,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+193,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+195,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+197,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgIData(oldp+199,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit));
        __Vtemp_13[0U] = (IData)((0x400000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
        __Vtemp_13[1U] = ((vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                           << 8U) | (IData)(((0x400000000ULL 
                                              | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))) 
                                             >> 0x20U)));
        __Vtemp_13[2U] = (0x800U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                    >> 0x18U));
        bufp->chgWData(oldp+205,(__Vtemp_13),80);
        bufp->chgQData(oldp+208,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+210,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgIData(oldp+212,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+216,(vlSelfRef.top__DOT__inst_gpr__DOT__sign),16);
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__inst_gpr__DOT__wen));
        bufp->chgIData(oldp+218,(vlSelfRef.top__DOT__inst_gpr__DOT__out[0]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.top__DOT__inst_gpr__DOT__out[1]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.top__DOT__inst_gpr__DOT__out[2]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.top__DOT__inst_gpr__DOT__out[3]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.top__DOT__inst_gpr__DOT__out[4]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.top__DOT__inst_gpr__DOT__out[5]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.top__DOT__inst_gpr__DOT__out[6]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.top__DOT__inst_gpr__DOT__out[7]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.top__DOT__inst_gpr__DOT__out[8]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.top__DOT__inst_gpr__DOT__out[9]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.top__DOT__inst_gpr__DOT__out[10]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.top__DOT__inst_gpr__DOT__out[11]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.top__DOT__inst_gpr__DOT__out[12]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.top__DOT__inst_gpr__DOT__out[13]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.top__DOT__inst_gpr__DOT__out[14]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.top__DOT__inst_gpr__DOT__out[15]),32);
        bufp->chgCData(oldp+234,((0xfU & (vlSelfRef.top__DOT__inst 
                                          >> 7U))),4);
        bufp->chgSData(oldp+235,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out),16);
        bufp->chgBit(oldp+236,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+237,((0xfU & (vlSelfRef.top__DOT__inst 
                                          >> 0xfU))),4);
        __Vtemp_20[5U] = (((IData)((3ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                            << 4U))) 
                           << 0x10U) | (((0xffU & ((IData)(
                                                           (4ULL 
                                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                                               << 4U))) 
                                                   >> 0x14U)) 
                                         | ((IData)(
                                                    ((5ULL 
                                                      | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                                         << 4U)) 
                                                     >> 0x20U)) 
                                            >> 0x18U)) 
                                        | ((0xf00U 
                                            & ((IData)(
                                                       (4ULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                                           << 4U))) 
                                               >> 0x14U)) 
                                           | ((IData)(
                                                      ((4ULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                                           << 4U)) 
                                                       >> 0x20U)) 
                                              << 0xcU))));
        __Vtemp_20[7U] = (((0xffffU & ((IData)((2ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                   << 4U))) 
                                       >> 0xcU)) | 
                           ((IData)(((3ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                              << 4U)) 
                                     >> 0x20U)) >> 0x10U)) 
                          | (((IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                               << 4U))) 
                              << 0x18U) | ((0xf0000U 
                                            & ((IData)(
                                                       (2ULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                           << 4U))) 
                                               >> 0xcU)) 
                                           | ((IData)(
                                                      ((2ULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                           << 4U)) 
                                                       >> 0x20U)) 
                                              << 0x14U))));
        __Vtemp_20[8U] = ((0xffffU & (((IData)((1ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                                   << 4U))) 
                                       >> 8U) | ((IData)(
                                                         ((2ULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                              << 4U)) 
                                                          >> 0x20U)) 
                                                 >> 0xcU))) 
                          | ((0xff0000U & ((IData)(
                                                   (1ULL 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                                       << 4U))) 
                                           >> 8U)) 
                             | ((IData)(((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                                  << 4U)) 
                                         >> 0x20U)) 
                                << 0x18U)));
        __Vtemp_26[4U] = (((IData)((0xbULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                              << 4U))) 
                           << 0x10U) | (((0xffU & ((IData)(
                                                           (0xcULL 
                                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                               << 4U))) 
                                                   >> 0x14U)) 
                                         | ((IData)(
                                                    ((0xdULL 
                                                      | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                                         << 4U)) 
                                                     >> 0x20U)) 
                                            >> 0x18U)) 
                                        | ((0xf00U 
                                            & ((IData)(
                                                       (0xcULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                           << 4U))) 
                                               >> 0x14U)) 
                                           | ((IData)(
                                                      ((0xcULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                           << 4U)) 
                                                       >> 0x20U)) 
                                              << 0xcU))));
        __Vtemp_26[6U] = (((0xffffU & ((IData)((0xaULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                   << 4U))) 
                                       >> 0xcU)) | 
                           ((IData)(((0xbULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                                << 4U)) 
                                     >> 0x20U)) >> 0x10U)) 
                          | (((IData)((0x8000000009ULL 
                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                          << 4U))) 
                              << 0x18U) | ((0xf0000U 
                                            & ((IData)(
                                                       (0xaULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                           << 4U))) 
                                               >> 0xcU)) 
                                           | ((IData)(
                                                      ((0xaULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                           << 4U)) 
                                                       >> 0x20U)) 
                                              << 0x14U))));
        __Vtemp_26[7U] = ((0xffffU & (((IData)((0x8000000009ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                                   << 4U))) 
                                       >> 8U) | ((IData)(
                                                         ((0xaULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                              << 4U)) 
                                                          >> 0x20U)) 
                                                 >> 0xcU))) 
                          | ((0xff0000U & ((IData)(
                                                   (0x8000000009ULL 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                                       << 4U))) 
                                           >> 8U)) 
                             | ((IData)(((0x8000000009ULL 
                                          | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                             << 4U)) 
                                         >> 0x20U)) 
                                << 0x18U)));
        __Vtemp_29[0U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4;
        __Vtemp_29[1U] = (IData)((0xfULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4)) 
                                            << 4U)));
        __Vtemp_29[2U] = (((IData)((0xeULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)) 
                                              << 4U))) 
                           << 4U) | (IData)(((0xfULL 
                                              | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4)) 
                                                 << 4U)) 
                                             >> 0x20U)));
        __Vtemp_29[3U] = (((IData)((0xdULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                              << 4U))) 
                           << 8U) | (((IData)((0xeULL 
                                               | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)) 
                                                  << 4U))) 
                                      >> 0x1cU) | ((IData)(
                                                           ((0xeULL 
                                                             | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)) 
                                                                << 4U)) 
                                                            >> 0x20U)) 
                                                   << 4U)));
        __Vtemp_29[4U] = (((IData)((0xdULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                              << 4U))) 
                           >> 0x18U) | (((IData)((0xcULL 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                     << 4U))) 
                                         << 0xcU) | 
                                        ((IData)(((0xdULL 
                                                   | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                                      << 4U)) 
                                                  >> 0x20U)) 
                                         << 8U)));
        __Vtemp_29[5U] = __Vtemp_26[4U];
        __Vtemp_29[6U] = (((IData)((0xbULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                              << 4U))) 
                           >> 0x10U) | (((IData)((0xaULL 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                     << 4U))) 
                                         << 0x14U) 
                                        | ((IData)(
                                                   ((0xbULL 
                                                     | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                                        << 4U)) 
                                                    >> 0x20U)) 
                                           << 0x10U)));
        __Vtemp_29[7U] = __Vtemp_26[6U];
        __Vtemp_29[8U] = __Vtemp_26[7U];
        __Vtemp_29[9U] = (IData)((0x700000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4))));
        __Vtemp_29[0xaU] = ((vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4 
                             << 4U) | (IData)(((0x700000000ULL 
                                                | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4))) 
                                               >> 0x20U)));
        __Vtemp_29[0xbU] = (((IData)((6ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)) 
                                              << 4U))) 
                             << 4U) | (vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4 
                                       >> 0x1cU));
        __Vtemp_29[0xcU] = (((IData)((5ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                              << 4U))) 
                             << 8U) | (((IData)((6ULL 
                                                 | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)) 
                                                    << 4U))) 
                                        >> 0x1cU) | 
                                       ((IData)(((6ULL 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)) 
                                                     << 4U)) 
                                                 >> 0x20U)) 
                                        << 4U)));
        __Vtemp_29[0xdU] = (((IData)((5ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                              << 4U))) 
                             >> 0x18U) | (((IData)(
                                                   (4ULL 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                                       << 4U))) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     ((5ULL 
                                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                                          << 4U)) 
                                                      >> 0x20U)) 
                                             << 8U)));
        __Vtemp_29[0xeU] = __Vtemp_20[5U];
        __Vtemp_29[0xfU] = (((IData)((3ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                              << 4U))) 
                             >> 0x10U) | (((IData)(
                                                   (2ULL 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                       << 4U))) 
                                           << 0x14U) 
                                          | ((IData)(
                                                     ((3ULL 
                                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                                          << 4U)) 
                                                      >> 0x20U)) 
                                             << 0x10U)));
        __Vtemp_29[0x10U] = __Vtemp_20[7U];
        __Vtemp_29[0x11U] = __Vtemp_20[8U];
        bufp->chgWData(oldp+238,(__Vtemp_29),576);
        bufp->chgQData(oldp+256,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+258,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+260,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+262,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+264,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+266,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+268,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+270,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+272,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+274,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+276,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+278,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgQData(oldp+280,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[12]),36);
        bufp->chgQData(oldp+282,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[13]),36);
        bufp->chgQData(oldp+284,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[14]),36);
        bufp->chgQData(oldp+286,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[15]),36);
        bufp->chgIData(oldp+288,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+305,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+306,((0xfU & (vlSelfRef.top__DOT__inst 
                                          >> 0x14U))),4);
        bufp->chgQData(oldp+307,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+309,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+311,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+313,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+315,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+317,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+319,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+321,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+323,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+325,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+327,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+329,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgQData(oldp+331,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[12]),36);
        bufp->chgQData(oldp+333,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[13]),36);
        bufp->chgQData(oldp+335,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[14]),36);
        bufp->chgQData(oldp+337,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[15]),36);
        bufp->chgIData(oldp+339,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+340,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+341,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+342,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+343,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+344,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+345,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+346,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+347,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+348,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+349,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+350,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+351,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+352,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+353,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+354,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+355,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+356,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+357,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4),32);
        bufp->chgBit(oldp+358,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellinp__reg0____pinNumber5));
        bufp->chgIData(oldp+359,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4),32);
        bufp->chgBit(oldp+360,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 0xaU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+361,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4),32);
        bufp->chgBit(oldp+362,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 0xbU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+363,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4),32);
        bufp->chgBit(oldp+364,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 0xcU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+365,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4),32);
        bufp->chgBit(oldp+366,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 0xdU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+367,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4),32);
        bufp->chgBit(oldp+368,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 0xeU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+369,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4),32);
        bufp->chgBit(oldp+370,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 0xfU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+371,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4),32);
        bufp->chgBit(oldp+372,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 2U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+373,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4),32);
        bufp->chgBit(oldp+374,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 3U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+375,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4),32);
        bufp->chgBit(oldp+376,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 4U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+377,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4),32);
        bufp->chgBit(oldp+378,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 5U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+379,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4),32);
        bufp->chgBit(oldp+380,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 6U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+381,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4),32);
        bufp->chgBit(oldp+382,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 7U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+383,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4),32);
        bufp->chgBit(oldp+384,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 8U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgIData(oldp+385,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4),32);
        bufp->chgBit(oldp+386,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                                 >> 9U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
        bufp->chgBit(oldp+387,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))));
        bufp->chgBit(oldp+388,(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7));
        bufp->chgIData(oldp+389,(vlSelfRef.top__DOT__inst_store__DOT__rdata),32);
        bufp->chgIData(oldp+390,(vlSelfRef.top__DOT__inst_store__DOT__rdatabyte),32);
        bufp->chgIData(oldp+391,(vlSelfRef.top__DOT__inst_store__DOT__wdatabt),32);
        bufp->chgIData(oldp+392,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)
                                   ? 0xfU : (IData)(vlSelfRef.top__DOT__wmask))),32);
        bufp->chgIData(oldp+393,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)
                                   ? vlSelfRef.top__DOT__inst_store__DOT__wdatabt
                                   : vlSelfRef.top__DOT__rdata2)),32);
        __Vtemp_32[0U] = (IData)((0x300000000ULL | (QData)((IData)(
                                                                   (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                    >> 0x18U)))));
        __Vtemp_32[1U] = (((IData)((0x200000000ULL 
                                    | (QData)((IData)(
                                                      (0xffU 
                                                       & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                          >> 0x10U)))))) 
                           << 2U) | (IData)(((0x300000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                 >> 0x18U)))) 
                                             >> 0x20U)));
        __Vtemp_32[2U] = (((IData)((0x100000000ULL 
                                    | (((QData)((IData)(
                                                        (0xffU 
                                                         & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                        << 0x22U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                        >> 8U))))))) 
                           << 4U) | (((IData)((0x200000000ULL 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                     >> 0x10U)))))) 
                                      >> 0x1eU) | ((IData)(
                                                           ((0x200000000ULL 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                                >> 0x10U))))) 
                                                            >> 0x20U)) 
                                                   << 2U)));
        __Vtemp_32[3U] = (((IData)((0x100000000ULL 
                                    | (((QData)((IData)(
                                                        (0xffU 
                                                         & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                        << 0x22U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                        >> 8U))))))) 
                           >> 0x1cU) | ((IData)(((0x100000000ULL 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                                      << 0x22U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                           >> 8U)))))) 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp_32[4U] = 0U;
        bufp->chgWData(oldp+394,(__Vtemp_32),136);
        bufp->chgQData(oldp+399,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+401,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+403,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+405,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+407,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+408,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+409,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+410,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+411,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+412,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit));
        __Vtemp_35[0U] = (IData)((0x300000000ULL | 
                                  (((QData)((IData)(
                                                    (0xffU 
                                                     & vlSelfRef.top__DOT__rdata2))) 
                                    << 0x32U) | (QData)((IData)(
                                                                VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))));
        __Vtemp_35[1U] = (IData)(((0x300000000ULL | 
                                   (((QData)((IData)(
                                                     (0xffU 
                                                      & vlSelfRef.top__DOT__rdata2))) 
                                     << 0x32U) | (QData)((IData)(
                                                                 VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))) 
                                  >> 0x20U));
        __Vtemp_35[2U] = (8U | ((IData)((((QData)((IData)(
                                                          (0xffU 
                                                           & vlSelfRef.top__DOT__rdata2))) 
                                          << 0x1aU) 
                                         | (QData)((IData)(
                                                           (0x1000000U 
                                                            | (0xffU 
                                                               & vlSelfRef.top__DOT__rdata2)))))) 
                                << 0xcU));
        __Vtemp_35[3U] = (((IData)((((QData)((IData)(
                                                     (0xffU 
                                                      & vlSelfRef.top__DOT__rdata2))) 
                                     << 0x1aU) | (QData)((IData)(
                                                                 (0x1000000U 
                                                                  | (0xffU 
                                                                     & vlSelfRef.top__DOT__rdata2)))))) 
                           >> 0x14U) | ((IData)(((((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.top__DOT__rdata2))) 
                                                   << 0x1aU) 
                                                  | (QData)((IData)(
                                                                    (0x1000000U 
                                                                     | (0xffU 
                                                                        & vlSelfRef.top__DOT__rdata2))))) 
                                                 >> 0x20U)) 
                                        << 0xcU));
        __Vtemp_35[4U] = 0U;
        bufp->chgWData(oldp+413,(__Vtemp_35),136);
        bufp->chgQData(oldp+418,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+420,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+422,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+424,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+426,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+427,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+428,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+429,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+430,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+431,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+432,(vlSelfRef.clk));
    bufp->chgBit(oldp+433,(vlSelfRef.rst));
    bufp->chgBit(oldp+434,(vlSelfRef.wen));
    bufp->chgIData(oldp+435,(vlSelfRef.ppc),32);
    bufp->chgBit(oldp+436,(vlSelfRef.isjump));
    bufp->chgIData(oldp+437,(((IData)(vlSelfRef.isjump)
                               ? (0xfffffffeU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)
                               : ((IData)(4U) + vlSelfRef.top__DOT__instfu__DOT__q))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
