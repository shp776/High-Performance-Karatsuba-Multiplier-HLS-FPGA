// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _karastuba_mul_templa_5_HH_
#define _karastuba_mul_templa_5_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "karastuba_mul_templa_2.h"
#include "mul_I_O.h"
#include "CAT_I_I_I_O_2.h"
#include "karastuba_mul_temcud.h"
#include "karastuba_mul_temmb6.h"
#include "karastuba_mul_tempcA.h"

namespace ap_rtl {

struct karastuba_mul_templa_5 : public sc_module {
    // Port declarations 25
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<2> > lhs_tmp_bits_read;
    sc_out< sc_lv<4> > lhs_digits_data_V_address0;
    sc_out< sc_logic > lhs_digits_data_V_ce0;
    sc_in< sc_lv<64> > lhs_digits_data_V_q0;
    sc_in< sc_lv<2> > rhs_tmp_bits_read;
    sc_out< sc_lv<4> > rhs_digits_data_V_address0;
    sc_out< sc_logic > rhs_digits_data_V_ce0;
    sc_in< sc_lv<64> > rhs_digits_data_V_q0;
    sc_out< sc_lv<5> > res_digits_data_V_address0;
    sc_out< sc_logic > res_digits_data_V_ce0;
    sc_out< sc_logic > res_digits_data_V_we0;
    sc_out< sc_lv<64> > res_digits_data_V_d0;
    sc_in< sc_lv<64> > res_digits_data_V_q0;
    sc_out< sc_lv<5> > res_digits_data_V_address1;
    sc_out< sc_logic > res_digits_data_V_ce1;
    sc_out< sc_logic > res_digits_data_V_we1;
    sc_out< sc_lv<64> > res_digits_data_V_d1;
    sc_in< sc_lv<64> > res_digits_data_V_q1;
    sc_out< sc_lv<4> > ap_return;
    sc_signal< sc_lv<2> > ap_var_for_const0;


    // Module declarations
    karastuba_mul_templa_5(sc_module_name name);
    SC_HAS_PROCESS(karastuba_mul_templa_5);

    ~karastuba_mul_templa_5();

    sc_trace_file* mVcdFile;

    karastuba_mul_temcud* lhs0_digits_data_V_U;
    karastuba_mul_temcud* lhs1_digits_data_V_U;
    karastuba_mul_temcud* rhs0_digits_data_V_U;
    karastuba_mul_temcud* rhs1_digits_data_V_U;
    karastuba_mul_temcud* lhs0_tmp_digits_data_U;
    karastuba_mul_temcud* lhs1_tmp_digits_data_U;
    karastuba_mul_temcud* rhs0_tmp_digits_data_U;
    karastuba_mul_temcud* rhs1_tmp_digits_data_U;
    karastuba_mul_temmb6* z0_digits_data_V_U;
    karastuba_mul_temmb6* z2_digits_data_V_U;
    karastuba_mul_temmb6* cross_mul_digits_dat_U;
    karastuba_mul_tempcA* add2_digits_data_V_U;
    karastuba_mul_tempcA* z1_digits_data_V_U;
    karastuba_mul_templa_2* grp_karastuba_mul_templa_2_fu_585;
    mul_I_O* grp_mul_I_O_fu_594;
    mul_I_O* grp_mul_I_O_fu_605;
    CAT_I_I_I_O_2* grp_CAT_I_I_I_O_2_fu_616;
    sc_signal< sc_lv<20> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > p_088_0_i_reg_450;
    sc_signal< sc_lv<5> > i_0_i_reg_462;
    sc_signal< sc_lv<1> > op2_assign_reg_473;
    sc_signal< sc_lv<5> > i_0_i2_reg_485;
    sc_signal< sc_lv<2> > p_084_0_reg_496;
    sc_signal< sc_lv<5> > i4_0_reg_508;
    sc_signal< sc_lv<6> > j_0_reg_519;
    sc_signal< sc_lv<2> > p_0160_0_reg_542;
    sc_signal< sc_lv<5> > i7_0_reg_554;
    sc_signal< sc_lv<6> > j8_0_reg_565;
    sc_signal< sc_lv<64> > reg_626;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_state24_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state25_pp2_stage0_iter1;
    sc_signal< bool > ap_block_state26_pp2_stage0_iter2;
    sc_signal< bool > ap_block_state27_pp2_stage0_iter3;
    sc_signal< bool > ap_block_state28_pp2_stage0_iter4;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln282_reg_1323;
    sc_signal< sc_lv<64> > reg_626_pp2_iter2_reg;
    sc_signal< sc_lv<64> > reg_626_pp3_iter2_reg;
    sc_signal< bool > ap_block_state30_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state31_pp3_stage0_iter1;
    sc_signal< bool > ap_block_state32_pp3_stage0_iter2;
    sc_signal< bool > ap_block_state33_pp3_stage0_iter3;
    sc_signal< bool > ap_block_state34_pp3_stage0_iter4;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< sc_lv<1> > icmp_ln296_reg_1379;
    sc_signal< sc_lv<4> > i_fu_636_p2;
    sc_signal< sc_lv<4> > i_reg_1132;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > zext_ln255_fu_642_p1;
    sc_signal< sc_lv<64> > zext_ln255_reg_1137;
    sc_signal< sc_lv<1> > icmp_ln255_fu_630_p2;
    sc_signal< sc_lv<4> > i_2_fu_653_p2;
    sc_signal< sc_lv<4> > i_2_reg_1151;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln256_fu_647_p2;
    sc_signal< sc_lv<4> > i_3_fu_682_p2;
    sc_signal< sc_lv<4> > i_3_reg_1164;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > zext_ln257_fu_688_p1;
    sc_signal< sc_lv<64> > zext_ln257_reg_1169;
    sc_signal< sc_lv<1> > icmp_ln257_fu_676_p2;
    sc_signal< sc_lv<4> > i_4_fu_699_p2;
    sc_signal< sc_lv<4> > i_4_reg_1183;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln258_fu_693_p2;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_594_ap_return;
    sc_signal< sc_lv<4> > res_tmp_bits_write_a_reg_1193;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_ap_ready;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_ap_done;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_ap_ready;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_ap_done;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_ap_ready;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_ap_done;
    sc_signal< bool > ap_block_state10_on_subcall_done;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_605_ap_return;
    sc_signal< sc_lv<4> > res_tmp_bits_write_a_1_reg_1198;
    sc_signal< sc_lv<5> > zext_ln266_fu_722_p1;
    sc_signal< sc_lv<5> > zext_ln266_reg_1203;
    sc_signal< sc_lv<1> > icmp_ln53_fu_726_p2;
    sc_signal< sc_lv<1> > icmp_ln53_reg_1208;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln53_reg_1208_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln53_reg_1208_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln53_reg_1208_pp0_iter3_reg;
    sc_signal< sc_lv<5> > i_5_fu_732_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > zext_ln58_fu_738_p1;
    sc_signal< sc_lv<64> > zext_ln58_reg_1217;
    sc_signal< sc_lv<64> > zext_ln58_reg_1217_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln58_reg_1217_pp0_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln58_reg_1217_pp0_iter3_reg;
    sc_signal< sc_lv<64> > z0_digits_data_V_q0;
    sc_signal< sc_lv<64> > z0_digits_data_V_loa_reg_1232;
    sc_signal< sc_lv<64> > z0_digits_data_V_loa_reg_1232_pp0_iter2_reg;
    sc_signal< sc_lv<64> > z2_digits_data_V_q0;
    sc_signal< sc_lv<64> > z2_digits_data_V_loa_reg_1238;
    sc_signal< sc_lv<64> > z2_digits_data_V_loa_reg_1238_pp0_iter2_reg;
    sc_signal< sc_lv<65> > add_ln700_fu_750_p2;
    sc_signal< sc_lv<65> > add_ln700_reg_1244;
    sc_signal< sc_lv<64> > add_ln209_6_fu_778_p2;
    sc_signal< sc_lv<64> > add_ln209_6_reg_1249;
    sc_signal< sc_lv<2> > trunc_ln_reg_1254;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<7> > zext_ln63_4_fu_819_p1;
    sc_signal< sc_lv<7> > zext_ln63_4_reg_1259;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<1> > exitcond_i_fu_823_p2;
    sc_signal< sc_lv<1> > exitcond_i_reg_1264;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state17_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state18_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state19_pp1_stage0_iter2;
    sc_signal< bool > ap_block_state20_pp1_stage0_iter3;
    sc_signal< bool > ap_block_state21_pp1_stage0_iter4;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_i_reg_1264_pp1_iter1_reg;
    sc_signal< sc_lv<1> > exitcond_i_reg_1264_pp1_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_i_reg_1264_pp1_iter3_reg;
    sc_signal< sc_lv<5> > i_6_fu_829_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > zext_ln80_fu_835_p1;
    sc_signal< sc_lv<64> > zext_ln80_reg_1273;
    sc_signal< sc_lv<64> > zext_ln80_reg_1273_pp1_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln80_reg_1273_pp1_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln80_reg_1273_pp1_iter3_reg;
    sc_signal< sc_lv<64> > cross_mul_digits_dat_q0;
    sc_signal< sc_lv<64> > cross_mul_digits_dat_2_reg_1288;
    sc_signal< sc_lv<64> > add2_digits_data_V_q0;
    sc_signal< sc_lv<64> > add2_digits_data_V_l_reg_1293;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<65> > tmp_V_3_fu_847_p2;
    sc_signal< sc_lv<65> > tmp_V_3_reg_1298;
    sc_signal< sc_lv<1> > tmp_1_reg_1304;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter3;
    sc_signal< sc_lv<64> > add_ln700_7_fu_885_p2;
    sc_signal< sc_lv<64> > add_ln700_7_reg_1309;
    sc_signal< sc_lv<7> > z1_tmp_bits_fu_908_p2;
    sc_signal< sc_lv<7> > z1_tmp_bits_reg_1314;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<1> > icmp_ln278_fu_914_p2;
    sc_signal< sc_lv<1> > icmp_ln278_reg_1319;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_ap_ready;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_ap_done;
    sc_signal< sc_lv<1> > icmp_ln282_fu_919_p2;
    sc_signal< sc_lv<1> > icmp_ln282_reg_1323_pp2_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln282_reg_1323_pp2_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln282_reg_1323_pp2_iter3_reg;
    sc_signal< sc_lv<5> > i_7_fu_925_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_reg_1337;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_reg_1337_pp2_iter1_reg;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_reg_1337_pp2_iter2_reg;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_reg_1337_pp2_iter3_reg;
    sc_signal< sc_lv<6> > j_fu_941_p2;
    sc_signal< sc_lv<64> > lhs_digits_data_V_lo_2_reg_1348;
    sc_signal< sc_lv<64> > lhs_digits_data_V_lo_2_reg_1348_pp2_iter2_reg;
    sc_signal< sc_lv<65> > add_ln700_8_fu_954_p2;
    sc_signal< sc_lv<65> > add_ln700_8_reg_1354;
    sc_signal< sc_lv<64> > add_ln209_fu_983_p2;
    sc_signal< sc_lv<64> > add_ln209_reg_1359;
    sc_signal< sc_lv<2> > trunc_ln858_8_reg_1364;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter3;
    sc_signal< sc_lv<3> > zext_ln292_fu_998_p1;
    sc_signal< sc_lv<3> > zext_ln292_reg_1369;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<1> > icmp_ln292_fu_1002_p2;
    sc_signal< sc_lv<1> > icmp_ln296_fu_1007_p2;
    sc_signal< sc_lv<1> > icmp_ln296_reg_1379_pp3_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln296_reg_1379_pp3_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln296_reg_1379_pp3_iter3_reg;
    sc_signal< sc_lv<5> > i_8_fu_1013_p2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_1_reg_1393;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_1_reg_1393_pp3_iter1_reg;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_1_reg_1393_pp3_iter2_reg;
    sc_signal< sc_lv<5> > res_digits_data_V_ad_1_reg_1393_pp3_iter3_reg;
    sc_signal< sc_lv<6> > j_4_fu_1029_p2;
    sc_signal< sc_lv<64> > rhs_digits_data_V_lo_2_reg_1404;
    sc_signal< sc_lv<64> > rhs_digits_data_V_lo_2_reg_1404_pp3_iter2_reg;
    sc_signal< sc_lv<65> > add_ln700_10_fu_1042_p2;
    sc_signal< sc_lv<65> > add_ln700_10_reg_1410;
    sc_signal< sc_lv<64> > add_ln209_5_fu_1071_p2;
    sc_signal< sc_lv<64> > add_ln209_5_reg_1415;
    sc_signal< sc_lv<2> > trunc_ln858_9_reg_1420;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter3;
    sc_signal< sc_lv<3> > add_ln304_fu_1090_p2;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state17;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter4;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state24;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter4;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state30;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter4;
    sc_signal< sc_lv<3> > lhs0_digits_data_V_address0;
    sc_signal< sc_logic > lhs0_digits_data_V_ce0;
    sc_signal< sc_logic > lhs0_digits_data_V_we0;
    sc_signal< sc_lv<64> > lhs0_digits_data_V_q0;
    sc_signal< sc_lv<3> > lhs1_digits_data_V_address0;
    sc_signal< sc_logic > lhs1_digits_data_V_ce0;
    sc_signal< sc_logic > lhs1_digits_data_V_we0;
    sc_signal< sc_lv<64> > lhs1_digits_data_V_q0;
    sc_signal< sc_lv<3> > rhs0_digits_data_V_address0;
    sc_signal< sc_logic > rhs0_digits_data_V_ce0;
    sc_signal< sc_logic > rhs0_digits_data_V_we0;
    sc_signal< sc_lv<64> > rhs0_digits_data_V_q0;
    sc_signal< sc_lv<3> > rhs1_digits_data_V_address0;
    sc_signal< sc_logic > rhs1_digits_data_V_ce0;
    sc_signal< sc_logic > rhs1_digits_data_V_we0;
    sc_signal< sc_lv<64> > rhs1_digits_data_V_q0;
    sc_signal< sc_lv<3> > lhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > lhs0_tmp_digits_data_ce0;
    sc_signal< sc_logic > lhs0_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > lhs0_tmp_digits_data_q0;
    sc_signal< sc_lv<3> > lhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > lhs1_tmp_digits_data_ce0;
    sc_signal< sc_logic > lhs1_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > lhs1_tmp_digits_data_q0;
    sc_signal< sc_lv<3> > rhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > rhs0_tmp_digits_data_ce0;
    sc_signal< sc_logic > rhs0_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > rhs0_tmp_digits_data_q0;
    sc_signal< sc_lv<3> > rhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > rhs1_tmp_digits_data_ce0;
    sc_signal< sc_logic > rhs1_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > rhs1_tmp_digits_data_q0;
    sc_signal< sc_lv<4> > z0_digits_data_V_address0;
    sc_signal< sc_logic > z0_digits_data_V_ce0;
    sc_signal< sc_logic > z0_digits_data_V_we0;
    sc_signal< sc_logic > z0_digits_data_V_ce1;
    sc_signal< sc_logic > z0_digits_data_V_we1;
    sc_signal< sc_lv<64> > z0_digits_data_V_q1;
    sc_signal< sc_lv<4> > z2_digits_data_V_address0;
    sc_signal< sc_logic > z2_digits_data_V_ce0;
    sc_signal< sc_logic > z2_digits_data_V_we0;
    sc_signal< sc_logic > z2_digits_data_V_ce1;
    sc_signal< sc_logic > z2_digits_data_V_we1;
    sc_signal< sc_lv<64> > z2_digits_data_V_q1;
    sc_signal< sc_lv<4> > cross_mul_digits_dat_address0;
    sc_signal< sc_logic > cross_mul_digits_dat_ce0;
    sc_signal< sc_logic > cross_mul_digits_dat_we0;
    sc_signal< sc_logic > cross_mul_digits_dat_ce1;
    sc_signal< sc_logic > cross_mul_digits_dat_we1;
    sc_signal< sc_lv<64> > cross_mul_digits_dat_q1;
    sc_signal< sc_lv<4> > add2_digits_data_V_address0;
    sc_signal< sc_logic > add2_digits_data_V_ce0;
    sc_signal< sc_logic > add2_digits_data_V_we0;
    sc_signal< sc_lv<4> > z1_digits_data_V_address0;
    sc_signal< sc_logic > z1_digits_data_V_ce0;
    sc_signal< sc_logic > z1_digits_data_V_we0;
    sc_signal< sc_lv<64> > z1_digits_data_V_q0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_ap_start;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_ap_idle;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_2_fu_585_lhs0_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_lhs0_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_2_fu_585_lhs1_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_lhs1_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_2_fu_585_rhs0_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_rhs0_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_2_fu_585_rhs1_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_rhs1_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_ce0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_we0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_d0;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_ce1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_we1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_2_fu_585_cross_mul_digits_data_V_d1;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_2_fu_585_ap_return;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_ap_start;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_ap_idle;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_594_u_digits_data_V_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_u_digits_data_V_ce0;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_594_v_digits_data_V_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_v_digits_data_V_ce0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_594_w_digits_data_V_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_w_digits_data_V_ce0;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_w_digits_data_V_we0;
    sc_signal< sc_lv<64> > grp_mul_I_O_fu_594_w_digits_data_V_d0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_594_w_digits_data_V_address1;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_w_digits_data_V_ce1;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_w_digits_data_V_we1;
    sc_signal< sc_lv<64> > grp_mul_I_O_fu_594_w_digits_data_V_d1;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_ap_start;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_ap_idle;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_605_u_digits_data_V_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_u_digits_data_V_ce0;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_605_v_digits_data_V_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_v_digits_data_V_ce0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_605_w_digits_data_V_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_w_digits_data_V_ce0;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_w_digits_data_V_we0;
    sc_signal< sc_lv<64> > grp_mul_I_O_fu_605_w_digits_data_V_d0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_605_w_digits_data_V_address1;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_w_digits_data_V_ce1;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_w_digits_data_V_we1;
    sc_signal< sc_lv<64> > grp_mul_I_O_fu_605_w_digits_data_V_d1;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_ap_start;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_ap_idle;
    sc_signal< sc_lv<4> > grp_CAT_I_I_I_O_2_fu_616_x0_digits_data_V_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_x0_digits_data_V_ce0;
    sc_signal< sc_lv<4> > grp_CAT_I_I_I_O_2_fu_616_x1_digits_data_V_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_x1_digits_data_V_ce0;
    sc_signal< sc_lv<4> > grp_CAT_I_I_I_O_2_fu_616_x2_digits_data_V_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_x2_digits_data_V_ce0;
    sc_signal< sc_lv<5> > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_ce0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_we0;
    sc_signal< sc_lv<64> > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_d0;
    sc_signal< sc_lv<5> > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_address1;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_ce1;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_we1;
    sc_signal< sc_lv<64> > grp_CAT_I_I_I_O_2_fu_616_w_digits_data_V_d1;
    sc_signal< sc_lv<4> > i_0_reg_404;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > i1_0_reg_415;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > i2_0_reg_427;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > i3_0_reg_438;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<2> > ap_phi_mux_p_088_0_i_phi_fu_454_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > ap_phi_mux_op2_assign_phi_fu_477_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<2> > ap_phi_mux_p_084_0_phi_fu_500_p4;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<2> > ap_phi_mux_res_tmp_bits_0_phi_fu_534_p4;
    sc_signal< sc_lv<2> > res_tmp_bits_0_reg_530;
    sc_signal< sc_lv<2> > ap_phi_mux_p_0160_0_phi_fu_546_p4;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< sc_lv<3> > res_tmp_bits_1_reg_576;
    sc_signal< sc_logic > grp_karastuba_mul_templa_2_fu_585_ap_start_reg;
    sc_signal< sc_logic > grp_mul_I_O_fu_594_ap_start_reg;
    sc_signal< sc_logic > grp_mul_I_O_fu_605_ap_start_reg;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_2_fu_616_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln256_1_fu_665_p1;
    sc_signal< sc_lv<64> > zext_ln256_fu_670_p1;
    sc_signal< sc_lv<64> > zext_ln258_1_fu_711_p1;
    sc_signal< sc_lv<64> > zext_ln258_fu_716_p1;
    sc_signal< sc_lv<64> > zext_ln285_fu_931_p1;
    sc_signal< sc_lv<64> > zext_ln286_fu_936_p1;
    sc_signal< sc_lv<64> > zext_ln299_fu_1019_p1;
    sc_signal< sc_lv<64> > zext_ln300_fu_1024_p1;
    sc_signal< sc_lv<4> > xor_ln256_fu_659_p2;
    sc_signal< sc_lv<4> > xor_ln258_fu_705_p2;
    sc_signal< sc_lv<65> > zext_ln209_fu_744_p1;
    sc_signal< sc_lv<65> > zext_ln700_fu_747_p1;
    sc_signal< sc_lv<66> > zext_ln700_10_fu_764_p1;
    sc_signal< sc_lv<66> > zext_ln53_fu_756_p1;
    sc_signal< sc_lv<64> > zext_ln700_9_fu_760_p1;
    sc_signal< sc_lv<64> > add_ln209_7_fu_773_p2;
    sc_signal< sc_lv<66> > tmp_V_2_fu_767_p2;
    sc_signal< sc_lv<5> > zext_ln63_2_fu_800_p1;
    sc_signal< sc_lv<5> > zext_ln63_1_fu_797_p1;
    sc_signal< sc_lv<5> > add_ln63_fu_803_p2;
    sc_signal< sc_lv<6> > zext_ln63_fu_793_p1;
    sc_signal< sc_lv<6> > zext_ln63_3_fu_809_p1;
    sc_signal< sc_lv<6> > add2_tmp_bits_fu_813_p2;
    sc_signal< sc_lv<65> > zext_ln180_fu_841_p1;
    sc_signal< sc_lv<65> > zext_ln701_fu_844_p1;
    sc_signal< sc_lv<65> > select_ln701_fu_853_p3;
    sc_signal< sc_lv<65> > tmp_V_4_fu_872_p2;
    sc_signal< sc_lv<64> > trunc_ln701_fu_869_p1;
    sc_signal< sc_lv<64> > select_ln701_1_fu_861_p3;
    sc_signal< sc_lv<5> > empty_21_fu_891_p3;
    sc_signal< sc_lv<5> > add_ln95_fu_899_p2;
    sc_signal< sc_lv<7> > sext_ln95_fu_904_p1;
    sc_signal< sc_lv<65> > zext_ln286_1_fu_947_p1;
    sc_signal< sc_lv<65> > zext_ln700_11_fu_950_p1;
    sc_signal< sc_lv<66> > zext_ln700_13_fu_968_p1;
    sc_signal< sc_lv<66> > zext_ln282_fu_960_p1;
    sc_signal< sc_lv<64> > zext_ln700_12_fu_964_p1;
    sc_signal< sc_lv<64> > add_ln209_8_fu_977_p2;
    sc_signal< sc_lv<66> > tmp_V_fu_971_p2;
    sc_signal< sc_lv<65> > zext_ln300_1_fu_1035_p1;
    sc_signal< sc_lv<65> > zext_ln700_14_fu_1038_p1;
    sc_signal< sc_lv<66> > zext_ln700_16_fu_1056_p1;
    sc_signal< sc_lv<66> > zext_ln296_fu_1048_p1;
    sc_signal< sc_lv<64> > zext_ln700_15_fu_1052_p1;
    sc_signal< sc_lv<64> > add_ln209_9_fu_1065_p2;
    sc_signal< sc_lv<66> > tmp_V_5_fu_1059_p2;
    sc_signal< sc_lv<3> > zext_ln304_fu_1086_p1;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_lv<2> > mul_ln306_fu_1105_p0;
    sc_signal< sc_lv<2> > mul_ln306_fu_1105_p1;
    sc_signal< sc_lv<4> > zext_ln306_fu_1095_p1;
    sc_signal< sc_lv<4> > mul_ln306_fu_1105_p2;
    sc_signal< sc_lv<4> > add_ln306_fu_1111_p2;
    sc_signal< sc_lv<4> > ap_return_preg;
    sc_signal< sc_lv<20> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_lv<4> > mul_ln306_fu_1105_p00;
    sc_signal< sc_lv<4> > mul_ln306_fu_1105_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<20> ap_ST_fsm_state1;
    static const sc_lv<20> ap_ST_fsm_state2;
    static const sc_lv<20> ap_ST_fsm_state3;
    static const sc_lv<20> ap_ST_fsm_state4;
    static const sc_lv<20> ap_ST_fsm_state5;
    static const sc_lv<20> ap_ST_fsm_state6;
    static const sc_lv<20> ap_ST_fsm_state7;
    static const sc_lv<20> ap_ST_fsm_state8;
    static const sc_lv<20> ap_ST_fsm_state9;
    static const sc_lv<20> ap_ST_fsm_state10;
    static const sc_lv<20> ap_ST_fsm_pp0_stage0;
    static const sc_lv<20> ap_ST_fsm_state16;
    static const sc_lv<20> ap_ST_fsm_pp1_stage0;
    static const sc_lv<20> ap_ST_fsm_state22;
    static const sc_lv<20> ap_ST_fsm_state23;
    static const sc_lv<20> ap_ST_fsm_pp2_stage0;
    static const sc_lv<20> ap_ST_fsm_state29;
    static const sc_lv<20> ap_ST_fsm_pp3_stage0;
    static const sc_lv<20> ap_ST_fsm_state35;
    static const sc_lv<20> ap_ST_fsm_state36;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<6> ap_const_lv6_10;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_41;
    static const sc_lv<65> ap_const_lv65_1FFFFFFFFFFFFFFFF;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_13;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add2_digits_data_V_address0();
    void thread_add2_digits_data_V_ce0();
    void thread_add2_digits_data_V_we0();
    void thread_add2_tmp_bits_fu_813_p2();
    void thread_add_ln209_5_fu_1071_p2();
    void thread_add_ln209_6_fu_778_p2();
    void thread_add_ln209_7_fu_773_p2();
    void thread_add_ln209_8_fu_977_p2();
    void thread_add_ln209_9_fu_1065_p2();
    void thread_add_ln209_fu_983_p2();
    void thread_add_ln304_fu_1090_p2();
    void thread_add_ln306_fu_1111_p2();
    void thread_add_ln63_fu_803_p2();
    void thread_add_ln700_10_fu_1042_p2();
    void thread_add_ln700_7_fu_885_p2();
    void thread_add_ln700_8_fu_954_p2();
    void thread_add_ln700_fu_750_p2();
    void thread_add_ln95_fu_899_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_pp3_stage0();
    void thread_ap_block_pp3_stage0_11001();
    void thread_ap_block_pp3_stage0_subdone();
    void thread_ap_block_state10_on_subcall_done();
    void thread_ap_block_state11_pp0_stage0_iter0();
    void thread_ap_block_state12_pp0_stage0_iter1();
    void thread_ap_block_state13_pp0_stage0_iter2();
    void thread_ap_block_state14_pp0_stage0_iter3();
    void thread_ap_block_state15_pp0_stage0_iter4();
    void thread_ap_block_state17_pp1_stage0_iter0();
    void thread_ap_block_state18_pp1_stage0_iter1();
    void thread_ap_block_state19_pp1_stage0_iter2();
    void thread_ap_block_state20_pp1_stage0_iter3();
    void thread_ap_block_state21_pp1_stage0_iter4();
    void thread_ap_block_state24_pp2_stage0_iter0();
    void thread_ap_block_state25_pp2_stage0_iter1();
    void thread_ap_block_state26_pp2_stage0_iter2();
    void thread_ap_block_state27_pp2_stage0_iter3();
    void thread_ap_block_state28_pp2_stage0_iter4();
    void thread_ap_block_state30_pp3_stage0_iter0();
    void thread_ap_block_state31_pp3_stage0_iter1();
    void thread_ap_block_state32_pp3_stage0_iter2();
    void thread_ap_block_state33_pp3_stage0_iter3();
    void thread_ap_block_state34_pp3_stage0_iter4();
    void thread_ap_condition_pp0_exit_iter0_state11();
    void thread_ap_condition_pp1_exit_iter0_state17();
    void thread_ap_condition_pp2_exit_iter0_state24();
    void thread_ap_condition_pp3_exit_iter0_state30();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_phi_mux_op2_assign_phi_fu_477_p4();
    void thread_ap_phi_mux_p_0160_0_phi_fu_546_p4();
    void thread_ap_phi_mux_p_084_0_phi_fu_500_p4();
    void thread_ap_phi_mux_p_088_0_i_phi_fu_454_p4();
    void thread_ap_phi_mux_res_tmp_bits_0_phi_fu_534_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_cross_mul_digits_dat_address0();
    void thread_cross_mul_digits_dat_ce0();
    void thread_cross_mul_digits_dat_ce1();
    void thread_cross_mul_digits_dat_we0();
    void thread_cross_mul_digits_dat_we1();
    void thread_empty_21_fu_891_p3();
    void thread_exitcond_i_fu_823_p2();
    void thread_grp_CAT_I_I_I_O_2_fu_616_ap_start();
    void thread_grp_karastuba_mul_templa_2_fu_585_ap_start();
    void thread_grp_mul_I_O_fu_594_ap_start();
    void thread_grp_mul_I_O_fu_605_ap_start();
    void thread_i_2_fu_653_p2();
    void thread_i_3_fu_682_p2();
    void thread_i_4_fu_699_p2();
    void thread_i_5_fu_732_p2();
    void thread_i_6_fu_829_p2();
    void thread_i_7_fu_925_p2();
    void thread_i_8_fu_1013_p2();
    void thread_i_fu_636_p2();
    void thread_icmp_ln255_fu_630_p2();
    void thread_icmp_ln256_fu_647_p2();
    void thread_icmp_ln257_fu_676_p2();
    void thread_icmp_ln258_fu_693_p2();
    void thread_icmp_ln278_fu_914_p2();
    void thread_icmp_ln282_fu_919_p2();
    void thread_icmp_ln292_fu_1002_p2();
    void thread_icmp_ln296_fu_1007_p2();
    void thread_icmp_ln53_fu_726_p2();
    void thread_j_4_fu_1029_p2();
    void thread_j_fu_941_p2();
    void thread_lhs0_digits_data_V_address0();
    void thread_lhs0_digits_data_V_ce0();
    void thread_lhs0_digits_data_V_we0();
    void thread_lhs0_tmp_digits_data_address0();
    void thread_lhs0_tmp_digits_data_ce0();
    void thread_lhs0_tmp_digits_data_we0();
    void thread_lhs1_digits_data_V_address0();
    void thread_lhs1_digits_data_V_ce0();
    void thread_lhs1_digits_data_V_we0();
    void thread_lhs1_tmp_digits_data_address0();
    void thread_lhs1_tmp_digits_data_ce0();
    void thread_lhs1_tmp_digits_data_we0();
    void thread_lhs_digits_data_V_address0();
    void thread_lhs_digits_data_V_ce0();
    void thread_mul_ln306_fu_1105_p0();
    void thread_mul_ln306_fu_1105_p00();
    void thread_mul_ln306_fu_1105_p1();
    void thread_mul_ln306_fu_1105_p10();
    void thread_mul_ln306_fu_1105_p2();
    void thread_res_digits_data_V_address0();
    void thread_res_digits_data_V_address1();
    void thread_res_digits_data_V_ce0();
    void thread_res_digits_data_V_ce1();
    void thread_res_digits_data_V_d0();
    void thread_res_digits_data_V_d1();
    void thread_res_digits_data_V_we0();
    void thread_res_digits_data_V_we1();
    void thread_rhs0_digits_data_V_address0();
    void thread_rhs0_digits_data_V_ce0();
    void thread_rhs0_digits_data_V_we0();
    void thread_rhs0_tmp_digits_data_address0();
    void thread_rhs0_tmp_digits_data_ce0();
    void thread_rhs0_tmp_digits_data_we0();
    void thread_rhs1_digits_data_V_address0();
    void thread_rhs1_digits_data_V_ce0();
    void thread_rhs1_digits_data_V_we0();
    void thread_rhs1_tmp_digits_data_address0();
    void thread_rhs1_tmp_digits_data_ce0();
    void thread_rhs1_tmp_digits_data_we0();
    void thread_rhs_digits_data_V_address0();
    void thread_rhs_digits_data_V_ce0();
    void thread_select_ln701_1_fu_861_p3();
    void thread_select_ln701_fu_853_p3();
    void thread_sext_ln95_fu_904_p1();
    void thread_tmp_V_2_fu_767_p2();
    void thread_tmp_V_3_fu_847_p2();
    void thread_tmp_V_4_fu_872_p2();
    void thread_tmp_V_5_fu_1059_p2();
    void thread_tmp_V_fu_971_p2();
    void thread_trunc_ln701_fu_869_p1();
    void thread_xor_ln256_fu_659_p2();
    void thread_xor_ln258_fu_705_p2();
    void thread_z0_digits_data_V_address0();
    void thread_z0_digits_data_V_ce0();
    void thread_z0_digits_data_V_ce1();
    void thread_z0_digits_data_V_we0();
    void thread_z0_digits_data_V_we1();
    void thread_z1_digits_data_V_address0();
    void thread_z1_digits_data_V_ce0();
    void thread_z1_digits_data_V_we0();
    void thread_z1_tmp_bits_fu_908_p2();
    void thread_z2_digits_data_V_address0();
    void thread_z2_digits_data_V_ce0();
    void thread_z2_digits_data_V_ce1();
    void thread_z2_digits_data_V_we0();
    void thread_z2_digits_data_V_we1();
    void thread_zext_ln180_fu_841_p1();
    void thread_zext_ln209_fu_744_p1();
    void thread_zext_ln255_fu_642_p1();
    void thread_zext_ln256_1_fu_665_p1();
    void thread_zext_ln256_fu_670_p1();
    void thread_zext_ln257_fu_688_p1();
    void thread_zext_ln258_1_fu_711_p1();
    void thread_zext_ln258_fu_716_p1();
    void thread_zext_ln266_fu_722_p1();
    void thread_zext_ln282_fu_960_p1();
    void thread_zext_ln285_fu_931_p1();
    void thread_zext_ln286_1_fu_947_p1();
    void thread_zext_ln286_fu_936_p1();
    void thread_zext_ln292_fu_998_p1();
    void thread_zext_ln296_fu_1048_p1();
    void thread_zext_ln299_fu_1019_p1();
    void thread_zext_ln300_1_fu_1035_p1();
    void thread_zext_ln300_fu_1024_p1();
    void thread_zext_ln304_fu_1086_p1();
    void thread_zext_ln306_fu_1095_p1();
    void thread_zext_ln53_fu_756_p1();
    void thread_zext_ln58_fu_738_p1();
    void thread_zext_ln63_1_fu_797_p1();
    void thread_zext_ln63_2_fu_800_p1();
    void thread_zext_ln63_3_fu_809_p1();
    void thread_zext_ln63_4_fu_819_p1();
    void thread_zext_ln63_fu_793_p1();
    void thread_zext_ln700_10_fu_764_p1();
    void thread_zext_ln700_11_fu_950_p1();
    void thread_zext_ln700_12_fu_964_p1();
    void thread_zext_ln700_13_fu_968_p1();
    void thread_zext_ln700_14_fu_1038_p1();
    void thread_zext_ln700_15_fu_1052_p1();
    void thread_zext_ln700_16_fu_1056_p1();
    void thread_zext_ln700_9_fu_760_p1();
    void thread_zext_ln700_fu_747_p1();
    void thread_zext_ln701_fu_844_p1();
    void thread_zext_ln80_fu_835_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
