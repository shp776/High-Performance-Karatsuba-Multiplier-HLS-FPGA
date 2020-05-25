// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _karastuba_mul_templa_1_HH_
#define _karastuba_mul_templa_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "karastuba_mul_templa.h"
#include "mul_I_O.h"
#include "CAT_I_I_I_O.h"
#include "karastuba_mul_temcud.h"
#include "karastuba_mul_temmb6.h"
#include "karastuba_mul_tempcA.h"

namespace ap_rtl {

struct karastuba_mul_templa_1 : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > lhs_digits_data_address0;
    sc_out< sc_logic > lhs_digits_data_ce0;
    sc_in< sc_lv<32> > lhs_digits_data_q0;
    sc_out< sc_lv<4> > rhs_digits_data_address0;
    sc_out< sc_logic > rhs_digits_data_ce0;
    sc_in< sc_lv<32> > rhs_digits_data_q0;
    sc_out< sc_lv<5> > res_digits_data_address0;
    sc_out< sc_logic > res_digits_data_ce0;
    sc_out< sc_logic > res_digits_data_we0;
    sc_out< sc_lv<32> > res_digits_data_d0;
    sc_in< sc_lv<32> > res_digits_data_q0;
    sc_out< sc_lv<5> > res_digits_data_address1;
    sc_out< sc_logic > res_digits_data_ce1;
    sc_out< sc_logic > res_digits_data_we1;
    sc_out< sc_lv<32> > res_digits_data_d1;
    sc_in< sc_lv<32> > res_digits_data_q1;
    sc_signal< sc_lv<2> > ap_var_for_const0;


    // Module declarations
    karastuba_mul_templa_1(sc_module_name name);
    SC_HAS_PROCESS(karastuba_mul_templa_1);

    ~karastuba_mul_templa_1();

    sc_trace_file* mVcdFile;

    karastuba_mul_temcud* lhs0_digits_data_U;
    karastuba_mul_temcud* lhs1_digits_data_U;
    karastuba_mul_temcud* rhs0_digits_data_U;
    karastuba_mul_temcud* rhs1_digits_data_U;
    karastuba_mul_temcud* lhs0_tmp_digits_data_U;
    karastuba_mul_temcud* lhs1_tmp_digits_data_U;
    karastuba_mul_temcud* rhs0_tmp_digits_data_U;
    karastuba_mul_temcud* rhs1_tmp_digits_data_U;
    karastuba_mul_temmb6* z0_digits_data_U;
    karastuba_mul_temmb6* z2_digits_data_U;
    karastuba_mul_temmb6* cross_mul_digits_dat_U;
    karastuba_mul_tempcA* add2_digits_data_U;
    karastuba_mul_tempcA* z1_digits_data_U;
    karastuba_mul_templa* grp_karastuba_mul_templa_fu_427;
    mul_I_O* grp_mul_I_O_fu_436;
    mul_I_O* grp_mul_I_O_fu_447;
    CAT_I_I_I_O* grp_CAT_I_I_I_O_fu_458;
    sc_signal< sc_lv<15> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > tmp_0_i_reg_381;
    sc_signal< sc_lv<5> > i_0_i_reg_393;
    sc_signal< sc_lv<1> > needDown_0_i_reg_404;
    sc_signal< sc_lv<5> > i_0_i2_reg_416;
    sc_signal< sc_lv<4> > i_fu_474_p2;
    sc_signal< sc_lv<4> > i_reg_761;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > zext_ln246_fu_480_p1;
    sc_signal< sc_lv<64> > zext_ln246_reg_766;
    sc_signal< sc_lv<1> > icmp_ln246_fu_468_p2;
    sc_signal< sc_lv<4> > i_2_fu_491_p2;
    sc_signal< sc_lv<4> > i_2_reg_780;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln247_fu_485_p2;
    sc_signal< sc_lv<4> > i_3_fu_520_p2;
    sc_signal< sc_lv<4> > i_3_reg_793;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > zext_ln248_fu_526_p1;
    sc_signal< sc_lv<64> > zext_ln248_reg_798;
    sc_signal< sc_lv<1> > icmp_ln248_fu_514_p2;
    sc_signal< sc_lv<4> > i_4_fu_537_p2;
    sc_signal< sc_lv<4> > i_4_reg_812;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln249_fu_531_p2;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_436_ap_return;
    sc_signal< sc_lv<4> > res_tmp_bits_write_a_reg_822;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_ap_ready;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_ap_done;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_ap_ready;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_ap_done;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_ap_ready;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_ap_done;
    sc_signal< bool > ap_block_state10_on_subcall_done;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_447_ap_return;
    sc_signal< sc_lv<4> > res_tmp_bits_write_a_1_reg_827;
    sc_signal< sc_lv<5> > zext_ln257_fu_560_p1;
    sc_signal< sc_lv<5> > zext_ln257_reg_832;
    sc_signal< sc_lv<1> > icmp_ln51_fu_564_p2;
    sc_signal< sc_lv<1> > icmp_ln51_reg_837;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln51_reg_837_pp0_iter1_reg;
    sc_signal< sc_lv<5> > i_5_fu_570_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > zext_ln56_fu_576_p1;
    sc_signal< sc_lv<64> > zext_ln56_reg_846;
    sc_signal< sc_lv<64> > zext_ln56_reg_846_pp0_iter1_reg;
    sc_signal< sc_lv<32> > z0_digits_data_q0;
    sc_signal< sc_lv<32> > z0_digits_data_load_reg_861;
    sc_signal< sc_lv<32> > z2_digits_data_q0;
    sc_signal< sc_lv<32> > z2_digits_data_load_reg_866;
    sc_signal< sc_lv<33> > add_ln57_fu_590_p2;
    sc_signal< sc_lv<33> > add_ln57_reg_871;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<7> > zext_ln61_4_fu_660_p1;
    sc_signal< sc_lv<7> > zext_ln61_4_reg_881;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > exitcond_i_fu_664_p2;
    sc_signal< sc_lv<1> > exitcond_i_reg_886;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state15_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state16_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state17_pp1_stage0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_i_reg_886_pp1_iter1_reg;
    sc_signal< sc_lv<5> > i_6_fu_670_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > zext_ln77_fu_676_p1;
    sc_signal< sc_lv<64> > zext_ln77_reg_895;
    sc_signal< sc_lv<64> > zext_ln77_reg_895_pp1_iter1_reg;
    sc_signal< sc_lv<33> > tmp_3_fu_690_p2;
    sc_signal< sc_lv<33> > tmp_3_reg_910;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_lv<7> > z1_tmp_bits_fu_752_p2;
    sc_signal< sc_lv<7> > z1_tmp_bits_reg_921;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state15;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<3> > lhs0_digits_data_address0;
    sc_signal< sc_logic > lhs0_digits_data_ce0;
    sc_signal< sc_logic > lhs0_digits_data_we0;
    sc_signal< sc_lv<32> > lhs0_digits_data_q0;
    sc_signal< sc_lv<3> > lhs1_digits_data_address0;
    sc_signal< sc_logic > lhs1_digits_data_ce0;
    sc_signal< sc_logic > lhs1_digits_data_we0;
    sc_signal< sc_lv<32> > lhs1_digits_data_q0;
    sc_signal< sc_lv<3> > rhs0_digits_data_address0;
    sc_signal< sc_logic > rhs0_digits_data_ce0;
    sc_signal< sc_logic > rhs0_digits_data_we0;
    sc_signal< sc_lv<32> > rhs0_digits_data_q0;
    sc_signal< sc_lv<3> > rhs1_digits_data_address0;
    sc_signal< sc_logic > rhs1_digits_data_ce0;
    sc_signal< sc_logic > rhs1_digits_data_we0;
    sc_signal< sc_lv<32> > rhs1_digits_data_q0;
    sc_signal< sc_lv<3> > lhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > lhs0_tmp_digits_data_ce0;
    sc_signal< sc_logic > lhs0_tmp_digits_data_we0;
    sc_signal< sc_lv<32> > lhs0_tmp_digits_data_q0;
    sc_signal< sc_lv<3> > lhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > lhs1_tmp_digits_data_ce0;
    sc_signal< sc_logic > lhs1_tmp_digits_data_we0;
    sc_signal< sc_lv<32> > lhs1_tmp_digits_data_q0;
    sc_signal< sc_lv<3> > rhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > rhs0_tmp_digits_data_ce0;
    sc_signal< sc_logic > rhs0_tmp_digits_data_we0;
    sc_signal< sc_lv<32> > rhs0_tmp_digits_data_q0;
    sc_signal< sc_lv<3> > rhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > rhs1_tmp_digits_data_ce0;
    sc_signal< sc_logic > rhs1_tmp_digits_data_we0;
    sc_signal< sc_lv<32> > rhs1_tmp_digits_data_q0;
    sc_signal< sc_lv<4> > z0_digits_data_address0;
    sc_signal< sc_logic > z0_digits_data_ce0;
    sc_signal< sc_logic > z0_digits_data_we0;
    sc_signal< sc_logic > z0_digits_data_ce1;
    sc_signal< sc_logic > z0_digits_data_we1;
    sc_signal< sc_lv<32> > z0_digits_data_q1;
    sc_signal< sc_lv<4> > z2_digits_data_address0;
    sc_signal< sc_logic > z2_digits_data_ce0;
    sc_signal< sc_logic > z2_digits_data_we0;
    sc_signal< sc_logic > z2_digits_data_ce1;
    sc_signal< sc_logic > z2_digits_data_we1;
    sc_signal< sc_lv<32> > z2_digits_data_q1;
    sc_signal< sc_lv<4> > cross_mul_digits_dat_address0;
    sc_signal< sc_logic > cross_mul_digits_dat_ce0;
    sc_signal< sc_logic > cross_mul_digits_dat_we0;
    sc_signal< sc_lv<32> > cross_mul_digits_dat_q0;
    sc_signal< sc_logic > cross_mul_digits_dat_ce1;
    sc_signal< sc_logic > cross_mul_digits_dat_we1;
    sc_signal< sc_lv<32> > cross_mul_digits_dat_q1;
    sc_signal< sc_lv<4> > add2_digits_data_address0;
    sc_signal< sc_logic > add2_digits_data_ce0;
    sc_signal< sc_logic > add2_digits_data_we0;
    sc_signal< sc_lv<32> > add2_digits_data_d0;
    sc_signal< sc_lv<32> > add2_digits_data_q0;
    sc_signal< sc_lv<4> > z1_digits_data_address0;
    sc_signal< sc_logic > z1_digits_data_ce0;
    sc_signal< sc_logic > z1_digits_data_we0;
    sc_signal< sc_lv<32> > z1_digits_data_d0;
    sc_signal< sc_lv<32> > z1_digits_data_q0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_ap_start;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_ap_idle;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_fu_427_lhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_lhs0_tmp_digits_data_ce0;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_fu_427_lhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_lhs1_tmp_digits_data_ce0;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_fu_427_rhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_rhs0_tmp_digits_data_ce0;
    sc_signal< sc_lv<3> > grp_karastuba_mul_templa_fu_427_rhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_rhs1_tmp_digits_data_ce0;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_ce0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_we0;
    sc_signal< sc_lv<32> > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_d0;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_ce1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_we1;
    sc_signal< sc_lv<32> > grp_karastuba_mul_templa_fu_427_cross_mul_digits_data_d1;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_fu_427_ap_return;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_ap_start;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_ap_idle;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_436_u_digits_data_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_u_digits_data_ce0;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_436_v_digits_data_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_v_digits_data_ce0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_436_w_digits_data_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_w_digits_data_ce0;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_w_digits_data_we0;
    sc_signal< sc_lv<32> > grp_mul_I_O_fu_436_w_digits_data_d0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_436_w_digits_data_address1;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_w_digits_data_ce1;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_w_digits_data_we1;
    sc_signal< sc_lv<32> > grp_mul_I_O_fu_436_w_digits_data_d1;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_ap_start;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_ap_idle;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_447_u_digits_data_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_u_digits_data_ce0;
    sc_signal< sc_lv<3> > grp_mul_I_O_fu_447_v_digits_data_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_v_digits_data_ce0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_447_w_digits_data_address0;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_w_digits_data_ce0;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_w_digits_data_we0;
    sc_signal< sc_lv<32> > grp_mul_I_O_fu_447_w_digits_data_d0;
    sc_signal< sc_lv<4> > grp_mul_I_O_fu_447_w_digits_data_address1;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_w_digits_data_ce1;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_w_digits_data_we1;
    sc_signal< sc_lv<32> > grp_mul_I_O_fu_447_w_digits_data_d1;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_ap_start;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_ap_done;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_ap_idle;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_ap_ready;
    sc_signal< sc_lv<4> > grp_CAT_I_I_I_O_fu_458_x0_digits_data_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_x0_digits_data_ce0;
    sc_signal< sc_lv<4> > grp_CAT_I_I_I_O_fu_458_x1_digits_data_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_x1_digits_data_ce0;
    sc_signal< sc_lv<4> > grp_CAT_I_I_I_O_fu_458_x2_digits_data_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_x2_digits_data_ce0;
    sc_signal< sc_lv<5> > grp_CAT_I_I_I_O_fu_458_w_digits_data_address0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_w_digits_data_ce0;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_w_digits_data_we0;
    sc_signal< sc_lv<32> > grp_CAT_I_I_I_O_fu_458_w_digits_data_d0;
    sc_signal< sc_lv<5> > grp_CAT_I_I_I_O_fu_458_w_digits_data_address1;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_w_digits_data_ce1;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_w_digits_data_we1;
    sc_signal< sc_lv<32> > grp_CAT_I_I_I_O_fu_458_w_digits_data_d1;
    sc_signal< sc_lv<4> > i_0_reg_335;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > i1_0_reg_346;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > i2_0_reg_358;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > i3_0_reg_369;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_427_ap_start_reg;
    sc_signal< sc_logic > grp_mul_I_O_fu_436_ap_start_reg;
    sc_signal< sc_logic > grp_mul_I_O_fu_447_ap_start_reg;
    sc_signal< sc_logic > grp_CAT_I_I_I_O_fu_458_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > zext_ln247_fu_503_p1;
    sc_signal< sc_lv<64> > zext_ln247_1_fu_508_p1;
    sc_signal< sc_lv<64> > zext_ln249_fu_549_p1;
    sc_signal< sc_lv<64> > zext_ln249_1_fu_554_p1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<4> > xor_ln247_fu_497_p2;
    sc_signal< sc_lv<4> > xor_ln249_fu_543_p2;
    sc_signal< sc_lv<33> > zext_ln57_fu_582_p1;
    sc_signal< sc_lv<33> > zext_ln56_1_fu_586_p1;
    sc_signal< sc_lv<34> > zext_ln57_1_fu_604_p1;
    sc_signal< sc_lv<34> > zext_ln51_fu_596_p1;
    sc_signal< sc_lv<32> > zext_ln56_2_fu_600_p1;
    sc_signal< sc_lv<32> > add_ln58_1_fu_613_p2;
    sc_signal< sc_lv<34> > tmp_fu_607_p2;
    sc_signal< sc_lv<5> > zext_ln61_2_fu_641_p1;
    sc_signal< sc_lv<5> > zext_ln61_1_fu_638_p1;
    sc_signal< sc_lv<5> > add_ln61_fu_644_p2;
    sc_signal< sc_lv<6> > zext_ln61_fu_634_p1;
    sc_signal< sc_lv<6> > zext_ln61_3_fu_650_p1;
    sc_signal< sc_lv<6> > add2_tmp_bits_fu_654_p2;
    sc_signal< sc_lv<33> > zext_ln77_1_fu_682_p1;
    sc_signal< sc_lv<33> > zext_ln78_fu_686_p1;
    sc_signal< sc_lv<33> > select_ln79_fu_696_p3;
    sc_signal< sc_lv<33> > tmp_4_fu_715_p2;
    sc_signal< sc_lv<32> > trunc_ln79_fu_712_p1;
    sc_signal< sc_lv<32> > select_ln79_1_fu_704_p3;
    sc_signal< sc_lv<5> > empty_21_fu_735_p3;
    sc_signal< sc_lv<5> > add_ln92_fu_743_p2;
    sc_signal< sc_lv<7> > sext_ln92_fu_748_p1;
    sc_signal< sc_lv<15> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<15> ap_ST_fsm_state1;
    static const sc_lv<15> ap_ST_fsm_state2;
    static const sc_lv<15> ap_ST_fsm_state3;
    static const sc_lv<15> ap_ST_fsm_state4;
    static const sc_lv<15> ap_ST_fsm_state5;
    static const sc_lv<15> ap_ST_fsm_state6;
    static const sc_lv<15> ap_ST_fsm_state7;
    static const sc_lv<15> ap_ST_fsm_state8;
    static const sc_lv<15> ap_ST_fsm_state9;
    static const sc_lv<15> ap_ST_fsm_state10;
    static const sc_lv<15> ap_ST_fsm_pp0_stage0;
    static const sc_lv<15> ap_ST_fsm_state14;
    static const sc_lv<15> ap_ST_fsm_pp1_stage0;
    static const sc_lv<15> ap_ST_fsm_state18;
    static const sc_lv<15> ap_ST_fsm_state19;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<33> ap_const_lv33_1FFFFFFFF;
    static const sc_lv<33> ap_const_lv33_0;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<5> ap_const_lv5_1F;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add2_digits_data_address0();
    void thread_add2_digits_data_ce0();
    void thread_add2_digits_data_d0();
    void thread_add2_digits_data_we0();
    void thread_add2_tmp_bits_fu_654_p2();
    void thread_add_ln57_fu_590_p2();
    void thread_add_ln58_1_fu_613_p2();
    void thread_add_ln61_fu_644_p2();
    void thread_add_ln92_fu_743_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
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
    void thread_ap_block_state10_on_subcall_done();
    void thread_ap_block_state11_pp0_stage0_iter0();
    void thread_ap_block_state12_pp0_stage0_iter1();
    void thread_ap_block_state13_pp0_stage0_iter2();
    void thread_ap_block_state15_pp1_stage0_iter0();
    void thread_ap_block_state16_pp1_stage0_iter1();
    void thread_ap_block_state17_pp1_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state11();
    void thread_ap_condition_pp1_exit_iter0_state15();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_ready();
    void thread_cross_mul_digits_dat_address0();
    void thread_cross_mul_digits_dat_ce0();
    void thread_cross_mul_digits_dat_ce1();
    void thread_cross_mul_digits_dat_we0();
    void thread_cross_mul_digits_dat_we1();
    void thread_empty_21_fu_735_p3();
    void thread_exitcond_i_fu_664_p2();
    void thread_grp_CAT_I_I_I_O_fu_458_ap_start();
    void thread_grp_karastuba_mul_templa_fu_427_ap_start();
    void thread_grp_mul_I_O_fu_436_ap_start();
    void thread_grp_mul_I_O_fu_447_ap_start();
    void thread_i_2_fu_491_p2();
    void thread_i_3_fu_520_p2();
    void thread_i_4_fu_537_p2();
    void thread_i_5_fu_570_p2();
    void thread_i_6_fu_670_p2();
    void thread_i_fu_474_p2();
    void thread_icmp_ln246_fu_468_p2();
    void thread_icmp_ln247_fu_485_p2();
    void thread_icmp_ln248_fu_514_p2();
    void thread_icmp_ln249_fu_531_p2();
    void thread_icmp_ln51_fu_564_p2();
    void thread_lhs0_digits_data_address0();
    void thread_lhs0_digits_data_ce0();
    void thread_lhs0_digits_data_we0();
    void thread_lhs0_tmp_digits_data_address0();
    void thread_lhs0_tmp_digits_data_ce0();
    void thread_lhs0_tmp_digits_data_we0();
    void thread_lhs1_digits_data_address0();
    void thread_lhs1_digits_data_ce0();
    void thread_lhs1_digits_data_we0();
    void thread_lhs1_tmp_digits_data_address0();
    void thread_lhs1_tmp_digits_data_ce0();
    void thread_lhs1_tmp_digits_data_we0();
    void thread_lhs_digits_data_address0();
    void thread_lhs_digits_data_ce0();
    void thread_res_digits_data_address0();
    void thread_res_digits_data_address1();
    void thread_res_digits_data_ce0();
    void thread_res_digits_data_ce1();
    void thread_res_digits_data_d0();
    void thread_res_digits_data_d1();
    void thread_res_digits_data_we0();
    void thread_res_digits_data_we1();
    void thread_rhs0_digits_data_address0();
    void thread_rhs0_digits_data_ce0();
    void thread_rhs0_digits_data_we0();
    void thread_rhs0_tmp_digits_data_address0();
    void thread_rhs0_tmp_digits_data_ce0();
    void thread_rhs0_tmp_digits_data_we0();
    void thread_rhs1_digits_data_address0();
    void thread_rhs1_digits_data_ce0();
    void thread_rhs1_digits_data_we0();
    void thread_rhs1_tmp_digits_data_address0();
    void thread_rhs1_tmp_digits_data_ce0();
    void thread_rhs1_tmp_digits_data_we0();
    void thread_rhs_digits_data_address0();
    void thread_rhs_digits_data_ce0();
    void thread_select_ln79_1_fu_704_p3();
    void thread_select_ln79_fu_696_p3();
    void thread_sext_ln92_fu_748_p1();
    void thread_tmp_3_fu_690_p2();
    void thread_tmp_4_fu_715_p2();
    void thread_tmp_fu_607_p2();
    void thread_trunc_ln79_fu_712_p1();
    void thread_xor_ln247_fu_497_p2();
    void thread_xor_ln249_fu_543_p2();
    void thread_z0_digits_data_address0();
    void thread_z0_digits_data_ce0();
    void thread_z0_digits_data_ce1();
    void thread_z0_digits_data_we0();
    void thread_z0_digits_data_we1();
    void thread_z1_digits_data_address0();
    void thread_z1_digits_data_ce0();
    void thread_z1_digits_data_d0();
    void thread_z1_digits_data_we0();
    void thread_z1_tmp_bits_fu_752_p2();
    void thread_z2_digits_data_address0();
    void thread_z2_digits_data_ce0();
    void thread_z2_digits_data_ce1();
    void thread_z2_digits_data_we0();
    void thread_z2_digits_data_we1();
    void thread_zext_ln246_fu_480_p1();
    void thread_zext_ln247_1_fu_508_p1();
    void thread_zext_ln247_fu_503_p1();
    void thread_zext_ln248_fu_526_p1();
    void thread_zext_ln249_1_fu_554_p1();
    void thread_zext_ln249_fu_549_p1();
    void thread_zext_ln257_fu_560_p1();
    void thread_zext_ln51_fu_596_p1();
    void thread_zext_ln56_1_fu_586_p1();
    void thread_zext_ln56_2_fu_600_p1();
    void thread_zext_ln56_fu_576_p1();
    void thread_zext_ln57_1_fu_604_p1();
    void thread_zext_ln57_fu_582_p1();
    void thread_zext_ln61_1_fu_638_p1();
    void thread_zext_ln61_2_fu_641_p1();
    void thread_zext_ln61_3_fu_650_p1();
    void thread_zext_ln61_4_fu_660_p1();
    void thread_zext_ln61_fu_634_p1();
    void thread_zext_ln77_1_fu_682_p1();
    void thread_zext_ln77_fu_676_p1();
    void thread_zext_ln78_fu_686_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif