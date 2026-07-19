// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"ppc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"isjump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"ppc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"isjump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"is_what",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"min2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"rdataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"raddrM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"waddrM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+84,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("inst_du", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"is_what",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+88,0,"imm7_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+89,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("immMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+90,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+90,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+224,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+99+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+113+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+120,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"is_what",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"waddrM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"raddrM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"min2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"sum_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"jalrpc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"lui_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"sum_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"lw_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"lbu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"sw_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"sb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("maskmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+228,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+229,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+230,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+125,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+126,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("raddrMMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+127,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+127,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+224,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+130+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+134+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+136,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("resultMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+138,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+138,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+224,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+143+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+151+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+155,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("waddrMMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+157,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+157,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+224,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+160+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+164+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+166,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_store", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"wdatain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"wmaskin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+168,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"readen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"is_what",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"rdataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"min2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+170,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"rdatabyte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"wdatabt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("databyte", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+175,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+175,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declBus(c+234,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+180+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+188+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+192,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wdatabyte", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+194,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+194,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declBus(c+234,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+199+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+207+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+211,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instfu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"isjalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_gpr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+217,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+218,(0x1fU),32);
    bufp->fullIData(oldp+219,(7U),32);
    bufp->fullIData(oldp+220,(8U),32);
    bufp->fullIData(oldp+221,(0x20U),32);
    bufp->fullIData(oldp+222,(0U),32);
    bufp->fullIData(oldp+223,(0U),32);
    bufp->fullIData(oldp+224,(0x28U),32);
    bufp->fullIData(oldp+225,(7U),32);
    bufp->fullIData(oldp+226,(4U),32);
    bufp->fullIData(oldp+227,(2U),32);
    bufp->fullIData(oldp+228,(0x52938U),24);
    bufp->fullCData(oldp+229,(0U),4);
    bufp->fullIData(oldp+230,(6U),32);
    bufp->fullIData(oldp+231,(4U),32);
    bufp->fullIData(oldp+232,(1U),32);
    bufp->fullIData(oldp+233,(2U),32);
    bufp->fullIData(oldp+234,(0x22U),32);
    bufp->fullIData(oldp+235,(5U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_19;
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+10,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+11,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+12,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+13,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+14,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+15,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+16,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[2]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[3]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+29,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+30,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+31,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+32,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+33,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+34,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+35,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[3]),2);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__u_gpr__DOT__rf
                             [0xaU]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__u_gpr__DOT__rf[0]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__u_gpr__DOT__rf[1]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__u_gpr__DOT__rf[2]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__u_gpr__DOT__rf[3]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__u_gpr__DOT__rf[4]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__u_gpr__DOT__rf[5]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__u_gpr__DOT__rf[6]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__u_gpr__DOT__rf[7]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__u_gpr__DOT__rf[8]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__u_gpr__DOT__rf[9]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__u_gpr__DOT__rf[10]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__u_gpr__DOT__rf[11]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__u_gpr__DOT__rf[12]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__u_gpr__DOT__rf[13]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__u_gpr__DOT__rf[14]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__u_gpr__DOT__rf[15]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__u_gpr__DOT__rf[16]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__u_gpr__DOT__rf[17]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__u_gpr__DOT__rf[18]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__u_gpr__DOT__rf[19]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__u_gpr__DOT__rf[20]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__u_gpr__DOT__rf[21]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__u_gpr__DOT__rf[22]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__u_gpr__DOT__rf[23]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__u_gpr__DOT__rf[24]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__u_gpr__DOT__rf[25]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__u_gpr__DOT__rf[26]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__u_gpr__DOT__rf[27]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__u_gpr__DOT__rf[28]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__u_gpr__DOT__rf[29]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__u_gpr__DOT__rf[30]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__u_gpr__DOT__rf[31]),32);
    bufp->fullIData(oldp+69,((0xfffffffeU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__imm),32);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelfRef.top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelfRef.top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelfRef.top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+74,(vlSelfRef.top__DOT__is_what),8);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__inst),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__pc),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__rdata1),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__rdata2),32);
    bufp->fullCData(oldp+79,((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),2);
    bufp->fullIData(oldp+80,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                               ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                               : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                   ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                   : 0U))),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__raddrM),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__waddrM),32);
    bufp->fullCData(oldp+83,(vlSelfRef.top__DOT__wmask),4);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__result),32);
    bufp->fullIData(oldp+85,((((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1) 
                               | (IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0))
                               ? ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                   ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                   : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                       ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                       : 0U)) : vlSelfRef.top__DOT__result)),32);
    bufp->fullBit(oldp+86,((0x100073U == vlSelfRef.top__DOT__inst)));
    bufp->fullSData(oldp+87,((vlSelfRef.top__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullSData(oldp+88,(((0xfe0U & (vlSelfRef.top__DOT__inst 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 7U)))),12);
    bufp->fullIData(oldp+89,((vlSelfRef.top__DOT__inst 
                              >> 0xcU)),20);
    __Vtemp_4[2U] = (((IData)((0x200000000010ULL | 
                               ((QData)((IData)((((- (IData)(
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
                         >> 0x18U) | ((IData)(((8ULL 
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
                                       << 8U))) << 8U) 
                     | (IData)(((((QData)((IData)((0xfffffU 
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
                                                                        << 1U))))))) 
                                >> 0x20U)));
    __Vtemp_6[3U] = __Vtemp_4[2U];
    __Vtemp_6[4U] = (((IData)((0x200000000010ULL | 
                               ((QData)((IData)((((- (IData)(
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
                     | (vlSelfRef.top__DOT__inst >> 0x14U));
    __Vtemp_6[6U] = (IData)((0x800000000040ULL | ((QData)((IData)(
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
    bufp->fullWData(oldp+90,(__Vtemp_6),280);
    bufp->fullQData(oldp+99,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+101,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+103,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+105,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+107,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullQData(oldp+109,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5]),40);
    bufp->fullQData(oldp+111,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[6]),40);
    bufp->fullIData(oldp+113,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+121,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+122,(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi),32);
    bufp->fullIData(oldp+123,(((IData)(4U) + vlSelfRef.top__DOT__pc)),32);
    bufp->fullIData(oldp+124,(vlSelfRef.top__DOT__inst_exu__DOT__sum_add),32);
    bufp->fullCData(oldp+125,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+126,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit));
    __Vtemp_8[0U] = (IData)((0x1000000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
    __Vtemp_8[1U] = ((vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                      << 8U) | (IData)(((0x1000000000ULL 
                                         | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = (0x2000U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                >> 0x18U));
    bufp->fullWData(oldp+127,(__Vtemp_8),80);
    bufp->fullQData(oldp+130,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+132,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullIData(oldp+134,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+137,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit));
    __Vtemp_11[0U] = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
    __Vtemp_11[1U] = (IData)((1ULL | ((QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelfRef.top__DOT__pc))) 
                                      << 8U)));
    __Vtemp_11[2U] = (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                           << 8U))) 
                       << 8U) | (IData)(((1ULL | ((QData)((IData)(
                                                                  ((IData)(4U) 
                                                                   + vlSelfRef.top__DOT__pc))) 
                                                  << 8U)) 
                                         >> 0x20U)));
    __Vtemp_11[3U] = (((IData)((0x20000000080ULL | 
                                ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                 << 8U))) << 0x10U) 
                      | (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                              << 8U))) 
                          >> 0x18U) | ((IData)(((0x40ULL 
                                                 | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                    << 8U)) 
                                                >> 0x20U)) 
                                       << 8U)));
    __Vtemp_11[4U] = (((IData)((0x20000000080ULL | 
                                ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                 << 8U))) >> 0x10U) 
                      | ((IData)(((0x20000000080ULL 
                                   | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                      << 8U)) >> 0x20U)) 
                         << 0x10U));
    bufp->fullWData(oldp+138,(__Vtemp_11),160);
    bufp->fullQData(oldp+143,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+145,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+147,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+149,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullIData(oldp+151,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+156,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit));
    __Vtemp_13[0U] = (IData)((0x400000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
    __Vtemp_13[1U] = ((vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                       << 8U) | (IData)(((0x400000000ULL 
                                          | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))) 
                                         >> 0x20U)));
    __Vtemp_13[2U] = (0x800U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                >> 0x18U));
    bufp->fullWData(oldp+157,(__Vtemp_13),80);
    bufp->fullQData(oldp+160,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+162,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullIData(oldp+164,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+167,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+168,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))));
    bufp->fullBit(oldp+169,(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7));
    bufp->fullIData(oldp+170,(vlSelfRef.top__DOT__inst_store__DOT__rdata),32);
    bufp->fullIData(oldp+171,(vlSelfRef.top__DOT__inst_store__DOT__rdatabyte),32);
    bufp->fullIData(oldp+172,(vlSelfRef.top__DOT__inst_store__DOT__wdatabt),32);
    bufp->fullIData(oldp+173,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)
                                ? vlSelfRef.top__DOT__inst_store__DOT__wdatabt
                                : vlSelfRef.top__DOT__rdata2)),32);
    bufp->fullCData(oldp+174,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)
                                ? 0xfU : (IData)(vlSelfRef.top__DOT__wmask))),4);
    __Vtemp_16[0U] = (IData)((0x300000000ULL | (QData)((IData)(
                                                               (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                >> 0x18U)))));
    __Vtemp_16[1U] = (((IData)((0x200000000ULL | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                     >> 0x10U)))))) 
                       << 2U) | (IData)(((0x300000000ULL 
                                          | (QData)((IData)(
                                                            (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                             >> 0x18U)))) 
                                         >> 0x20U)));
    __Vtemp_16[2U] = (((IData)((0x100000000ULL | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                                   << 0x22U) 
                                                  | (QData)((IData)(
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
    __Vtemp_16[3U] = (((IData)((0x100000000ULL | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                                   << 0x22U) 
                                                  | (QData)((IData)(
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
    __Vtemp_16[4U] = 0U;
    bufp->fullWData(oldp+175,(__Vtemp_16),136);
    bufp->fullQData(oldp+180,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+182,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+184,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+186,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+188,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+193,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit));
    __Vtemp_19[0U] = (IData)((0x300000000ULL | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelfRef.top__DOT__rdata2))) 
                                                 << 0x32U) 
                                                | (QData)((IData)(
                                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))));
    __Vtemp_19[1U] = (IData)(((0x300000000ULL | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelfRef.top__DOT__rdata2))) 
                                                  << 0x32U) 
                                                 | (QData)((IData)(
                                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))) 
                              >> 0x20U));
    __Vtemp_19[2U] = (8U | ((IData)((((QData)((IData)(
                                                      (0xffU 
                                                       & vlSelfRef.top__DOT__rdata2))) 
                                      << 0x1aU) | (QData)((IData)(
                                                                  (0x1000000U 
                                                                   | (0xffU 
                                                                      & vlSelfRef.top__DOT__rdata2)))))) 
                            << 0xcU));
    __Vtemp_19[3U] = (((IData)((((QData)((IData)((0xffU 
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
    __Vtemp_19[4U] = 0U;
    bufp->fullWData(oldp+194,(__Vtemp_19),136);
    bufp->fullQData(oldp+199,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+201,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+203,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+205,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+207,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+212,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+213,(vlSelfRef.clk));
    bufp->fullBit(oldp+214,(vlSelfRef.rst));
    bufp->fullIData(oldp+215,(vlSelfRef.ppc),32);
    bufp->fullBit(oldp+216,(vlSelfRef.isjump));
    bufp->fullBit(oldp+217,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
                                | ((IData)(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) 
                                   | ((IData)(vlSelfRef.isjump) 
                                      | (0x37U == (0x7fU 
                                                   & vlSelfRef.top__DOT__inst))))))));
}
