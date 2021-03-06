// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _karastuba_mul_MUL_st_HH_
#define _karastuba_mul_MUL_st_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "karastuba_mul_templa.h"
#include "karastuba_mul_templa_4.h"
#include "karastuba_mul_ADDrcU.h"
#include "karastuba_mul_ADDNgs.h"

namespace ap_rtl {

struct karastuba_mul_MUL_st : public sc_module {
    // Port declarations 36
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > lhs_digits_data_V_address0;
    sc_out< sc_logic > lhs_digits_data_V_ce0;
    sc_in< sc_lv<64> > lhs_digits_data_V_q0;
    sc_out< sc_lv<6> > rhs_digits_data_V_address0;
    sc_out< sc_logic > rhs_digits_data_V_ce0;
    sc_in< sc_lv<64> > rhs_digits_data_V_q0;
    sc_out< sc_lv<6> > z0_digits_data_V_address0;
    sc_out< sc_logic > z0_digits_data_V_ce0;
    sc_out< sc_logic > z0_digits_data_V_we0;
    sc_out< sc_lv<64> > z0_digits_data_V_d0;
    sc_out< sc_lv<6> > z2_digits_data_V_address0;
    sc_out< sc_logic > z2_digits_data_V_ce0;
    sc_out< sc_logic > z2_digits_data_V_we0;
    sc_out< sc_lv<64> > z2_digits_data_V_d0;
    sc_out< sc_lv<6> > cross_mul_digits_data_V_address0;
    sc_out< sc_logic > cross_mul_digits_data_V_ce0;
    sc_out< sc_logic > cross_mul_digits_data_V_we0;
    sc_out< sc_lv<64> > cross_mul_digits_data_V_d0;
    sc_out< sc_lv<6> > inter_lhs_digits_data_V_address0;
    sc_out< sc_logic > inter_lhs_digits_data_V_ce0;
    sc_out< sc_logic > inter_lhs_digits_data_V_we0;
    sc_out< sc_lv<64> > inter_lhs_digits_data_V_d0;
    sc_out< sc_lv<6> > inter_rhs_digits_data_V_address0;
    sc_out< sc_logic > inter_rhs_digits_data_V_ce0;
    sc_out< sc_logic > inter_rhs_digits_data_V_we0;
    sc_out< sc_lv<64> > inter_rhs_digits_data_V_d0;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_signal< sc_logic > ap_var_for_const2;
    sc_signal< sc_lv<2> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const1;


    // Module declarations
    karastuba_mul_MUL_st(sc_module_name name);
    SC_HAS_PROCESS(karastuba_mul_MUL_st);

    ~karastuba_mul_MUL_st();

    sc_trace_file* mVcdFile;

    karastuba_mul_ADDrcU* lhs0_digits_data_V_U;
    karastuba_mul_ADDrcU* lhs1_digits_data_V_U;
    karastuba_mul_ADDrcU* rhs0_digits_data_V_U;
    karastuba_mul_ADDrcU* rhs1_digits_data_V_U;
    karastuba_mul_ADDrcU* lhs0_tmp_digits_data_U;
    karastuba_mul_ADDrcU* lhs1_tmp_digits_data_U;
    karastuba_mul_ADDrcU* rhs0_tmp_digits_data_U;
    karastuba_mul_ADDrcU* rhs1_tmp_digits_data_U;
    karastuba_mul_ADDNgs* p_z0_digits_data_V_U;
    karastuba_mul_ADDNgs* p_z2_digits_data_V_U;
    karastuba_mul_ADDNgs* p_cross_mul_digits_da_U;
    karastuba_mul_templa* grp_karastuba_mul_templa_fu_462;
    karastuba_mul_templa_4* grp_karastuba_mul_templa_4_fu_472;
    karastuba_mul_templa_4* grp_karastuba_mul_templa_4_fu_484;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > i_0_reg_383;
    sc_signal< sc_lv<6> > i1_0_reg_394;
    sc_signal< sc_lv<6> > i1_0_reg_394_pp1_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state6_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state7_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state8_pp1_stage0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<6> > i2_0_reg_406;
    sc_signal< sc_lv<6> > i3_0_reg_417;
    sc_signal< sc_lv<6> > i3_0_reg_417_pp3_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< bool > ap_block_state14_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state15_pp3_stage0_iter1;
    sc_signal< bool > ap_block_state16_pp3_stage0_iter2;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_lv<7> > i4_0_reg_429;
    sc_signal< sc_lv<7> > i5_0_reg_440;
    sc_signal< sc_lv<7> > i6_0_reg_451;
    sc_signal< sc_lv<64> > reg_496;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln262_reg_718;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<1> > icmp_ln267_reg_739;
    sc_signal< sc_lv<64> > reg_505;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_state10_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state11_pp2_stage0_iter1;
    sc_signal< bool > ap_block_state12_pp2_stage0_iter2;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln272_reg_758;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< sc_lv<1> > icmp_ln277_reg_779;
    sc_signal< sc_lv<1> > icmp_ln262_fu_514_p2;
    sc_signal< sc_lv<1> > icmp_ln262_reg_718_pp0_iter1_reg;
    sc_signal< sc_lv<6> > i_fu_520_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > zext_ln265_fu_526_p1;
    sc_signal< sc_lv<64> > zext_ln265_reg_727;
    sc_signal< sc_lv<64> > zext_ln265_reg_727_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln267_fu_531_p2;
    sc_signal< sc_lv<1> > icmp_ln267_reg_739_pp1_iter1_reg;
    sc_signal< sc_lv<6> > i_17_fu_537_p2;
    sc_signal< sc_lv<6> > i_17_reg_743;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > zext_ln270_1_fu_549_p1;
    sc_signal< sc_lv<64> > zext_ln270_1_reg_748;
    sc_signal< sc_lv<64> > zext_ln270_1_reg_748_pp1_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln272_fu_560_p2;
    sc_signal< sc_lv<1> > icmp_ln272_reg_758_pp2_iter1_reg;
    sc_signal< sc_lv<6> > i_18_fu_566_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<64> > zext_ln275_fu_572_p1;
    sc_signal< sc_lv<64> > zext_ln275_reg_767;
    sc_signal< sc_lv<64> > zext_ln275_reg_767_pp2_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln277_fu_577_p2;
    sc_signal< sc_lv<1> > icmp_ln277_reg_779_pp3_iter1_reg;
    sc_signal< sc_lv<6> > i_19_fu_583_p2;
    sc_signal< sc_lv<6> > i_19_reg_783;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<64> > zext_ln280_1_fu_595_p1;
    sc_signal< sc_lv<64> > zext_ln280_1_reg_788;
    sc_signal< sc_lv<64> > zext_ln280_1_reg_788_pp3_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln294_fu_621_p2;
    sc_signal< sc_lv<1> > icmp_ln294_reg_798;
    sc_signal< sc_logic > ap_CS_fsm_pp4_stage0;
    sc_signal< bool > ap_block_state20_pp4_stage0_iter0;
    sc_signal< bool > ap_block_state21_pp4_stage0_iter1;
    sc_signal< bool > ap_block_state22_pp4_stage0_iter2;
    sc_signal< bool > ap_block_pp4_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln294_reg_798_pp4_iter1_reg;
    sc_signal< sc_lv<7> > i_20_fu_627_p2;
    sc_signal< sc_logic > ap_enable_reg_pp4_iter0;
    sc_signal< sc_lv<64> > zext_ln297_fu_633_p1;
    sc_signal< sc_lv<64> > zext_ln297_reg_807;
    sc_signal< sc_lv<64> > zext_ln297_reg_807_pp4_iter1_reg;
    sc_signal< sc_lv<64> > p_z0_digits_data_V_q0;
    sc_signal< sc_lv<64> > p_z0_digits_data_V_lo_reg_817;
    sc_signal< sc_lv<32> > p_z0_tmp_bits_load_reg_822;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<1> > icmp_ln300_fu_641_p2;
    sc_signal< sc_lv<1> > icmp_ln300_reg_827;
    sc_signal< sc_logic > ap_CS_fsm_pp5_stage0;
    sc_signal< bool > ap_block_state24_pp5_stage0_iter0;
    sc_signal< bool > ap_block_state25_pp5_stage0_iter1;
    sc_signal< bool > ap_block_state26_pp5_stage0_iter2;
    sc_signal< bool > ap_block_pp5_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln300_reg_827_pp5_iter1_reg;
    sc_signal< sc_lv<7> > i_21_fu_647_p2;
    sc_signal< sc_logic > ap_enable_reg_pp5_iter0;
    sc_signal< sc_lv<64> > zext_ln303_fu_653_p1;
    sc_signal< sc_lv<64> > zext_ln303_reg_836;
    sc_signal< sc_lv<64> > zext_ln303_reg_836_pp5_iter1_reg;
    sc_signal< sc_lv<64> > p_z2_digits_data_V_q0;
    sc_signal< sc_lv<64> > p_z2_digits_data_V_lo_reg_846;
    sc_signal< sc_lv<32> > p_z2_tmp_bits_load_reg_851;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<1> > icmp_ln306_fu_661_p2;
    sc_signal< sc_lv<1> > icmp_ln306_reg_856;
    sc_signal< sc_logic > ap_CS_fsm_pp6_stage0;
    sc_signal< bool > ap_block_state28_pp6_stage0_iter0;
    sc_signal< bool > ap_block_state29_pp6_stage0_iter1;
    sc_signal< bool > ap_block_state30_pp6_stage0_iter2;
    sc_signal< bool > ap_block_pp6_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln306_reg_856_pp6_iter1_reg;
    sc_signal< sc_lv<7> > i_22_fu_667_p2;
    sc_signal< sc_logic > ap_enable_reg_pp6_iter0;
    sc_signal< sc_lv<64> > zext_ln309_fu_673_p1;
    sc_signal< sc_lv<64> > zext_ln309_reg_865;
    sc_signal< sc_lv<64> > zext_ln309_reg_865_pp6_iter1_reg;
    sc_signal< sc_lv<64> > p_cross_mul_digits_da_q0;
    sc_signal< sc_lv<64> > p_cross_mul_digits_da_6_reg_875;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state6;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state10;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state14;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_ap_ready;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_ap_done;
    sc_signal< sc_logic > ap_sync_grp_karastuba_mul_templa_4_fu_472_ap_ready;
    sc_signal< sc_logic > ap_sync_grp_karastuba_mul_templa_4_fu_472_ap_done;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_ap_ready;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_ap_done;
    sc_signal< sc_logic > ap_sync_grp_karastuba_mul_templa_4_fu_484_ap_ready;
    sc_signal< sc_logic > ap_sync_grp_karastuba_mul_templa_4_fu_484_ap_done;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_ap_ready;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_ap_done;
    sc_signal< bool > ap_block_state19_on_subcall_done;
    sc_signal< bool > ap_block_pp4_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp4_exit_iter0_state20;
    sc_signal< sc_logic > ap_enable_reg_pp4_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp4_iter2;
    sc_signal< bool > ap_block_pp5_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp5_exit_iter0_state24;
    sc_signal< sc_logic > ap_enable_reg_pp5_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp5_iter2;
    sc_signal< bool > ap_block_pp6_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp6_exit_iter0_state28;
    sc_signal< sc_logic > ap_enable_reg_pp6_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp6_iter2;
    sc_signal< sc_lv<5> > lhs0_digits_data_V_address0;
    sc_signal< sc_logic > lhs0_digits_data_V_ce0;
    sc_signal< sc_logic > lhs0_digits_data_V_we0;
    sc_signal< sc_lv<64> > lhs0_digits_data_V_q0;
    sc_signal< sc_lv<5> > lhs1_digits_data_V_address0;
    sc_signal< sc_logic > lhs1_digits_data_V_ce0;
    sc_signal< sc_logic > lhs1_digits_data_V_we0;
    sc_signal< sc_lv<64> > lhs1_digits_data_V_q0;
    sc_signal< sc_lv<5> > rhs0_digits_data_V_address0;
    sc_signal< sc_logic > rhs0_digits_data_V_ce0;
    sc_signal< sc_logic > rhs0_digits_data_V_we0;
    sc_signal< sc_lv<64> > rhs0_digits_data_V_q0;
    sc_signal< sc_lv<5> > rhs1_digits_data_V_address0;
    sc_signal< sc_logic > rhs1_digits_data_V_ce0;
    sc_signal< sc_logic > rhs1_digits_data_V_we0;
    sc_signal< sc_lv<64> > rhs1_digits_data_V_q0;
    sc_signal< sc_lv<5> > lhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > lhs0_tmp_digits_data_ce0;
    sc_signal< sc_logic > lhs0_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > lhs0_tmp_digits_data_q0;
    sc_signal< sc_lv<5> > lhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > lhs1_tmp_digits_data_ce0;
    sc_signal< sc_logic > lhs1_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > lhs1_tmp_digits_data_q0;
    sc_signal< sc_lv<5> > rhs0_tmp_digits_data_address0;
    sc_signal< sc_logic > rhs0_tmp_digits_data_ce0;
    sc_signal< sc_logic > rhs0_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > rhs0_tmp_digits_data_q0;
    sc_signal< sc_lv<5> > rhs1_tmp_digits_data_address0;
    sc_signal< sc_logic > rhs1_tmp_digits_data_ce0;
    sc_signal< sc_logic > rhs1_tmp_digits_data_we0;
    sc_signal< sc_lv<64> > rhs1_tmp_digits_data_q0;
    sc_signal< sc_lv<6> > p_z0_digits_data_V_address0;
    sc_signal< sc_logic > p_z0_digits_data_V_ce0;
    sc_signal< sc_logic > p_z0_digits_data_V_we0;
    sc_signal< sc_lv<6> > p_z2_digits_data_V_address0;
    sc_signal< sc_logic > p_z2_digits_data_V_ce0;
    sc_signal< sc_logic > p_z2_digits_data_V_we0;
    sc_signal< sc_lv<6> > p_cross_mul_digits_da_address0;
    sc_signal< sc_logic > p_cross_mul_digits_da_ce0;
    sc_signal< sc_logic > p_cross_mul_digits_da_we0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_ap_start;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_ap_idle;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_fu_462_lhs0_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_lhs0_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_fu_462_lhs1_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_lhs1_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_fu_462_rhs0_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_rhs0_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_fu_462_rhs1_tmp_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_rhs1_tmp_digits_data_V_ce0;
    sc_signal< sc_lv<32> > grp_karastuba_mul_templa_fu_462_cross_mul_tmp_bits;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_cross_mul_tmp_bits_ap_vld;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_fu_462_cross_mul_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_cross_mul_digits_data_V_ce0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_cross_mul_digits_data_V_we0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_fu_462_cross_mul_digits_data_V_d0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_ce0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_d0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_we0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_ce1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_d1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_lhs_digits_data_V_we1;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_ce0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_d0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_we0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_ce1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_d1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_rhs_digits_data_V_we1;
    sc_signal< sc_lv<32> > grp_karastuba_mul_templa_4_fu_472_res_tmp_bits;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_ce0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_d0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_we0;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_ce1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_d1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_res_digits_data_V_we1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_ap_start;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_res_tmp_bits_ap_vld;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_ap_idle;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_ap_continue;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_ce0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_d0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_we0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_ce1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_d1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_lhs_digits_data_V_we1;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_ce0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_d0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_we0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_ce1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_d1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_rhs_digits_data_V_we1;
    sc_signal< sc_lv<32> > grp_karastuba_mul_templa_4_fu_484_res_tmp_bits;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_ce0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_d0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_we0;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_ce1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_d1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_res_digits_data_V_we1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_ap_start;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_res_tmp_bits_ap_vld;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_ap_idle;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_ap_continue;
    sc_signal< sc_lv<6> > ap_phi_mux_i1_0_phi_fu_398_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<6> > ap_phi_mux_i3_0_phi_fu_421_p4;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_fu_462_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<32> > p_cross_mul_tmp_bits_fu_120;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_472_ap_start_reg;
    sc_signal< sc_logic > ap_sync_reg_grp_karastuba_mul_templa_4_fu_472_ap_ready;
    sc_signal< sc_logic > ap_sync_reg_grp_karastuba_mul_templa_4_fu_472_ap_done;
    sc_signal< sc_lv<32> > p_z0_tmp_bits_fu_104;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_484_ap_start_reg;
    sc_signal< sc_logic > ap_sync_reg_grp_karastuba_mul_templa_4_fu_484_ap_ready;
    sc_signal< sc_logic > ap_sync_reg_grp_karastuba_mul_templa_4_fu_484_ap_done;
    sc_signal< sc_lv<32> > p_z2_tmp_bits_fu_112;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln270_fu_554_p1;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<64> > zext_ln280_fu_600_p1;
    sc_signal< bool > ap_block_pp4_stage0;
    sc_signal< bool > ap_block_pp5_stage0;
    sc_signal< bool > ap_block_pp6_stage0;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<6> > xor_ln270_fu_543_p2;
    sc_signal< sc_lv<6> > xor_ln280_fu_589_p2;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_logic > ap_idle_pp4;
    sc_signal< sc_logic > ap_enable_pp4;
    sc_signal< sc_logic > ap_idle_pp5;
    sc_signal< sc_logic > ap_enable_pp5;
    sc_signal< sc_logic > ap_idle_pp6;
    sc_signal< sc_logic > ap_enable_pp6;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_pp0_stage0;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_pp1_stage0;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_pp2_stage0;
    static const sc_lv<17> ap_ST_fsm_state13;
    static const sc_lv<17> ap_ST_fsm_pp3_stage0;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<17> ap_ST_fsm_state18;
    static const sc_lv<17> ap_ST_fsm_state19;
    static const sc_lv<17> ap_ST_fsm_pp4_stage0;
    static const sc_lv<17> ap_ST_fsm_state23;
    static const sc_lv<17> ap_ST_fsm_pp5_stage0;
    static const sc_lv<17> ap_ST_fsm_state27;
    static const sc_lv<17> ap_ST_fsm_pp6_stage0;
    static const sc_lv<17> ap_ST_fsm_state31;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<64> ap_const_lv64_0;
    // Thread declarations
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_pp4_stage0();
    void thread_ap_CS_fsm_pp5_stage0();
    void thread_ap_CS_fsm_pp6_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state5();
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
    void thread_ap_block_pp4_stage0();
    void thread_ap_block_pp4_stage0_11001();
    void thread_ap_block_pp4_stage0_subdone();
    void thread_ap_block_pp5_stage0();
    void thread_ap_block_pp5_stage0_11001();
    void thread_ap_block_pp5_stage0_subdone();
    void thread_ap_block_pp6_stage0();
    void thread_ap_block_pp6_stage0_11001();
    void thread_ap_block_pp6_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp2_stage0_iter0();
    void thread_ap_block_state11_pp2_stage0_iter1();
    void thread_ap_block_state12_pp2_stage0_iter2();
    void thread_ap_block_state14_pp3_stage0_iter0();
    void thread_ap_block_state15_pp3_stage0_iter1();
    void thread_ap_block_state16_pp3_stage0_iter2();
    void thread_ap_block_state19_on_subcall_done();
    void thread_ap_block_state20_pp4_stage0_iter0();
    void thread_ap_block_state21_pp4_stage0_iter1();
    void thread_ap_block_state22_pp4_stage0_iter2();
    void thread_ap_block_state24_pp5_stage0_iter0();
    void thread_ap_block_state25_pp5_stage0_iter1();
    void thread_ap_block_state26_pp5_stage0_iter2();
    void thread_ap_block_state28_pp6_stage0_iter0();
    void thread_ap_block_state29_pp6_stage0_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state30_pp6_stage0_iter2();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state6_pp1_stage0_iter0();
    void thread_ap_block_state7_pp1_stage0_iter1();
    void thread_ap_block_state8_pp1_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_condition_pp1_exit_iter0_state6();
    void thread_ap_condition_pp2_exit_iter0_state10();
    void thread_ap_condition_pp3_exit_iter0_state14();
    void thread_ap_condition_pp4_exit_iter0_state20();
    void thread_ap_condition_pp5_exit_iter0_state24();
    void thread_ap_condition_pp6_exit_iter0_state28();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_enable_pp4();
    void thread_ap_enable_pp5();
    void thread_ap_enable_pp6();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_idle_pp4();
    void thread_ap_idle_pp5();
    void thread_ap_idle_pp6();
    void thread_ap_phi_mux_i1_0_phi_fu_398_p4();
    void thread_ap_phi_mux_i3_0_phi_fu_421_p4();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_ap_sync_grp_karastuba_mul_templa_4_fu_472_ap_done();
    void thread_ap_sync_grp_karastuba_mul_templa_4_fu_472_ap_ready();
    void thread_ap_sync_grp_karastuba_mul_templa_4_fu_484_ap_done();
    void thread_ap_sync_grp_karastuba_mul_templa_4_fu_484_ap_ready();
    void thread_cross_mul_digits_data_V_address0();
    void thread_cross_mul_digits_data_V_ce0();
    void thread_cross_mul_digits_data_V_d0();
    void thread_cross_mul_digits_data_V_we0();
    void thread_grp_karastuba_mul_templa_4_fu_472_ap_continue();
    void thread_grp_karastuba_mul_templa_4_fu_472_ap_start();
    void thread_grp_karastuba_mul_templa_4_fu_484_ap_continue();
    void thread_grp_karastuba_mul_templa_4_fu_484_ap_start();
    void thread_grp_karastuba_mul_templa_fu_462_ap_start();
    void thread_i_17_fu_537_p2();
    void thread_i_18_fu_566_p2();
    void thread_i_19_fu_583_p2();
    void thread_i_20_fu_627_p2();
    void thread_i_21_fu_647_p2();
    void thread_i_22_fu_667_p2();
    void thread_i_fu_520_p2();
    void thread_icmp_ln262_fu_514_p2();
    void thread_icmp_ln267_fu_531_p2();
    void thread_icmp_ln272_fu_560_p2();
    void thread_icmp_ln277_fu_577_p2();
    void thread_icmp_ln294_fu_621_p2();
    void thread_icmp_ln300_fu_641_p2();
    void thread_icmp_ln306_fu_661_p2();
    void thread_inter_lhs_digits_data_V_address0();
    void thread_inter_lhs_digits_data_V_ce0();
    void thread_inter_lhs_digits_data_V_d0();
    void thread_inter_lhs_digits_data_V_we0();
    void thread_inter_rhs_digits_data_V_address0();
    void thread_inter_rhs_digits_data_V_ce0();
    void thread_inter_rhs_digits_data_V_d0();
    void thread_inter_rhs_digits_data_V_we0();
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
    void thread_p_cross_mul_digits_da_address0();
    void thread_p_cross_mul_digits_da_ce0();
    void thread_p_cross_mul_digits_da_we0();
    void thread_p_z0_digits_data_V_address0();
    void thread_p_z0_digits_data_V_ce0();
    void thread_p_z0_digits_data_V_we0();
    void thread_p_z2_digits_data_V_address0();
    void thread_p_z2_digits_data_V_ce0();
    void thread_p_z2_digits_data_V_we0();
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
    void thread_xor_ln270_fu_543_p2();
    void thread_xor_ln280_fu_589_p2();
    void thread_z0_digits_data_V_address0();
    void thread_z0_digits_data_V_ce0();
    void thread_z0_digits_data_V_d0();
    void thread_z0_digits_data_V_we0();
    void thread_z2_digits_data_V_address0();
    void thread_z2_digits_data_V_ce0();
    void thread_z2_digits_data_V_d0();
    void thread_z2_digits_data_V_we0();
    void thread_zext_ln265_fu_526_p1();
    void thread_zext_ln270_1_fu_549_p1();
    void thread_zext_ln270_fu_554_p1();
    void thread_zext_ln275_fu_572_p1();
    void thread_zext_ln280_1_fu_595_p1();
    void thread_zext_ln280_fu_600_p1();
    void thread_zext_ln297_fu_633_p1();
    void thread_zext_ln303_fu_653_p1();
    void thread_zext_ln309_fu_673_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
