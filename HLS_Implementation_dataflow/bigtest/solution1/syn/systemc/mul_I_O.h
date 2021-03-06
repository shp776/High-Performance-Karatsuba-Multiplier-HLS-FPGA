// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mul_I_O_HH_
#define _mul_I_O_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "karastuba_mul_mulbkb.h"

namespace ap_rtl {

struct mul_I_O : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<2> > u_tmp_bits_read;
    sc_out< sc_lv<3> > u_digits_data_V_address0;
    sc_out< sc_logic > u_digits_data_V_ce0;
    sc_in< sc_lv<64> > u_digits_data_V_q0;
    sc_in< sc_lv<2> > v_tmp_bits_read;
    sc_out< sc_lv<3> > v_digits_data_V_address0;
    sc_out< sc_logic > v_digits_data_V_ce0;
    sc_in< sc_lv<64> > v_digits_data_V_q0;
    sc_out< sc_lv<4> > w_digits_data_V_address0;
    sc_out< sc_logic > w_digits_data_V_ce0;
    sc_out< sc_logic > w_digits_data_V_we0;
    sc_out< sc_lv<64> > w_digits_data_V_d0;
    sc_in< sc_lv<64> > w_digits_data_V_q0;
    sc_out< sc_lv<4> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    mul_I_O(sc_module_name name);
    SC_HAS_PROCESS(mul_I_O);

    ~mul_I_O();

    sc_trace_file* mVcdFile;

    karastuba_mul_mulbkb<1,6,64,64,128>* karastuba_mul_mulbkb_U5;
    sc_signal< sc_lv<19> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > p_0176_1_reg_188;
    sc_signal< sc_lv<4> > i_0_reg_200;
    sc_signal< sc_lv<2> > p_0288_0_reg_211;
    sc_signal< sc_lv<4> > i2_0_reg_223;
    sc_signal< sc_lv<5> > j3_0_reg_234;
    sc_signal< sc_lv<2> > p_0356_0_reg_258;
    sc_signal< sc_lv<4> > i6_0_reg_270;
    sc_signal< sc_lv<5> > j7_0_reg_281;
    sc_signal< sc_lv<64> > reg_302;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state9_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state13_pp0_stage1_iter2;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > icmp_ln111_reg_694;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_state20_pp1_stage1_iter0;
    sc_signal< bool > ap_block_state22_pp1_stage1_iter1;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<1> > icmp_ln133_reg_767;
    sc_signal< sc_lv<64> > reg_306;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< bool > ap_block_state26_pp2_stage1_iter0;
    sc_signal< bool > ap_block_state28_pp2_stage1_iter1;
    sc_signal< bool > ap_block_pp2_stage1_11001;
    sc_signal< sc_lv<1> > icmp_ln147_reg_816;
    sc_signal< sc_lv<64> > reg_310;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln111_reg_694_pp0_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<5> > j_fu_320_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln108_fu_331_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > j_2_fu_337_p2;
    sc_signal< sc_lv<4> > j_2_reg_680;
    sc_signal< sc_lv<3> > v_digits_data_V_addr_reg_685;
    sc_signal< sc_lv<1> > icmp_ln129_fu_348_p2;
    sc_signal< sc_lv<1> > icmp_ln111_fu_353_p2;
    sc_signal< sc_lv<1> > icmp_ln111_reg_694_pp0_iter2_reg;
    sc_signal< sc_lv<4> > add_ln111_fu_359_p2;
    sc_signal< sc_lv<4> > add_ln111_reg_698;
    sc_signal< sc_lv<4> > add_ln114_fu_365_p2;
    sc_signal< sc_lv<4> > add_ln114_reg_703;
    sc_signal< sc_lv<4> > add_ln114_reg_703_pp0_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state6_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state10_pp0_stage2_iter1;
    sc_signal< bool > ap_block_state14_pp0_stage2_iter2;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<128> > grp_fu_384_p2;
    sc_signal< sc_lv<128> > mul_ln700_reg_723;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state7_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state11_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<4> > w_digits_data_V_addr_1_reg_728;
    sc_signal< sc_lv<128> > add_ln700_fu_398_p2;
    sc_signal< sc_lv<128> > add_ln700_reg_733;
    sc_signal< sc_lv<64> > trunc_ln700_fu_403_p1;
    sc_signal< sc_lv<64> > trunc_ln700_reg_738;
    sc_signal< sc_lv<64> > add_ln209_1_fu_407_p2;
    sc_signal< sc_lv<64> > add_ln209_1_reg_743;
    sc_signal< sc_lv<1> > icmp_ln883_fu_431_p2;
    sc_signal< sc_lv<1> > icmp_ln883_reg_753;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<4> > w_digits_data_V_addr_3_reg_757;
    sc_signal< sc_lv<64> > add_ln209_2_fu_448_p2;
    sc_signal< sc_lv<64> > add_ln209_2_reg_762;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<1> > icmp_ln133_fu_454_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state19_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state21_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln133_reg_767_pp1_iter1_reg;
    sc_signal< sc_lv<4> > i_fu_460_p2;
    sc_signal< sc_lv<4> > i_reg_771;
    sc_signal< sc_lv<4> > w_digits_data_V_addr_2_reg_781;
    sc_signal< sc_lv<4> > w_digits_data_V_addr_2_reg_781_pp1_iter1_reg;
    sc_signal< sc_lv<5> > j_1_fu_476_p2;
    sc_signal< sc_lv<5> > j_1_reg_786;
    sc_signal< sc_lv<65> > tmp_V_4_fu_494_p2;
    sc_signal< sc_lv<65> > tmp_V_4_reg_791;
    sc_signal< sc_lv<64> > add_ln209_fu_506_p2;
    sc_signal< sc_lv<64> > add_ln209_reg_796;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<3> > zext_ln143_fu_535_p1;
    sc_signal< sc_lv<3> > zext_ln143_reg_806;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<1> > icmp_ln143_fu_539_p2;
    sc_signal< sc_lv<1> > icmp_ln147_fu_544_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state25_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state27_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln147_reg_816_pp2_iter1_reg;
    sc_signal< sc_lv<4> > i_1_fu_550_p2;
    sc_signal< sc_lv<4> > i_1_reg_820;
    sc_signal< sc_lv<4> > w_digits_data_V_addr_4_reg_830;
    sc_signal< sc_lv<4> > w_digits_data_V_addr_4_reg_830_pp2_iter1_reg;
    sc_signal< sc_lv<5> > j_3_fu_566_p2;
    sc_signal< sc_lv<5> > j_3_reg_835;
    sc_signal< sc_lv<65> > tmp_V_5_fu_584_p2;
    sc_signal< sc_lv<65> > tmp_V_5_reg_840;
    sc_signal< sc_lv<64> > add_ln209_3_fu_596_p2;
    sc_signal< sc_lv<64> > add_ln209_3_reg_845;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< sc_lv<3> > add_ln155_fu_629_p2;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state19;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state25;
    sc_signal< bool > ap_block_pp2_stage1_subdone;
    sc_signal< sc_lv<5> > j_0_reg_165;
    sc_signal< sc_lv<1> > icmp_ln105_fu_314_p2;
    sc_signal< sc_lv<4> > j1_0_reg_176;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<4> > ap_phi_mux_i_0_phi_fu_204_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<4> > ap_phi_mux_i2_0_phi_fu_227_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<5> > ap_phi_mux_j3_0_phi_fu_238_p4;
    sc_signal< sc_lv<2> > w_tmp_bits_0_reg_246;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<4> > ap_phi_mux_i6_0_phi_fu_274_p4;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<5> > ap_phi_mux_j7_0_phi_fu_285_p4;
    sc_signal< sc_lv<3> > w_tmp_bits_1_reg_293;
    sc_signal< sc_lv<64> > zext_ln105_fu_326_p1;
    sc_signal< sc_lv<64> > zext_ln116_fu_343_p1;
    sc_signal< sc_lv<64> > zext_ln116_1_fu_371_p1;
    sc_signal< sc_lv<64> > zext_ln116_2_fu_390_p1;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<64> > zext_ln123_fu_443_p1;
    sc_signal< sc_lv<64> > zext_ln136_fu_466_p1;
    sc_signal< sc_lv<64> > zext_ln137_fu_471_p1;
    sc_signal< sc_lv<64> > zext_ln150_fu_556_p1;
    sc_signal< sc_lv<64> > zext_ln151_fu_561_p1;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< bool > ap_block_pp2_stage1;
    sc_signal< sc_lv<64> > grp_fu_384_p0;
    sc_signal< sc_lv<64> > grp_fu_384_p1;
    sc_signal< sc_lv<128> > zext_ln111_fu_394_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<128> > zext_ln700_2_fu_412_p1;
    sc_signal< sc_lv<128> > k_V_fu_416_p2;
    sc_signal< sc_lv<4> > xor_ln123_fu_437_p2;
    sc_signal< sc_lv<65> > zext_ln700_3_fu_486_p1;
    sc_signal< sc_lv<65> > zext_ln133_fu_482_p1;
    sc_signal< sc_lv<64> > zext_ln700_5_fu_490_p1;
    sc_signal< sc_lv<64> > add_ln209_4_fu_500_p2;
    sc_signal< sc_lv<66> > zext_ln700_6_fu_516_p1;
    sc_signal< sc_lv<66> > zext_ln700_4_fu_512_p1;
    sc_signal< sc_lv<66> > tmp_V_fu_519_p2;
    sc_signal< sc_lv<65> > zext_ln700_7_fu_576_p1;
    sc_signal< sc_lv<65> > zext_ln147_fu_572_p1;
    sc_signal< sc_lv<64> > zext_ln700_9_fu_580_p1;
    sc_signal< sc_lv<64> > add_ln209_5_fu_590_p2;
    sc_signal< sc_lv<66> > zext_ln700_10_fu_606_p1;
    sc_signal< sc_lv<66> > zext_ln700_8_fu_602_p1;
    sc_signal< sc_lv<66> > tmp_V_3_fu_609_p2;
    sc_signal< sc_lv<3> > zext_ln155_fu_625_p1;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<2> > mul_ln157_fu_644_p0;
    sc_signal< sc_lv<2> > mul_ln157_fu_644_p1;
    sc_signal< sc_lv<4> > mul_ln157_fu_644_p2;
    sc_signal< sc_lv<4> > zext_ln157_fu_634_p1;
    sc_signal< sc_lv<4> > add_ln157_fu_650_p2;
    sc_signal< sc_lv<4> > ap_return_preg;
    sc_signal< sc_lv<19> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_lv<128> > grp_fu_384_p00;
    sc_signal< sc_lv<128> > grp_fu_384_p10;
    sc_signal< sc_lv<4> > mul_ln157_fu_644_p00;
    sc_signal< sc_lv<4> > mul_ln157_fu_644_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<19> ap_ST_fsm_state1;
    static const sc_lv<19> ap_ST_fsm_state2;
    static const sc_lv<19> ap_ST_fsm_state3;
    static const sc_lv<19> ap_ST_fsm_pp0_stage0;
    static const sc_lv<19> ap_ST_fsm_pp0_stage1;
    static const sc_lv<19> ap_ST_fsm_pp0_stage2;
    static const sc_lv<19> ap_ST_fsm_pp0_stage3;
    static const sc_lv<19> ap_ST_fsm_state15;
    static const sc_lv<19> ap_ST_fsm_state16;
    static const sc_lv<19> ap_ST_fsm_state17;
    static const sc_lv<19> ap_ST_fsm_state18;
    static const sc_lv<19> ap_ST_fsm_pp1_stage0;
    static const sc_lv<19> ap_ST_fsm_pp1_stage1;
    static const sc_lv<19> ap_ST_fsm_state23;
    static const sc_lv<19> ap_ST_fsm_state24;
    static const sc_lv<19> ap_ST_fsm_pp2_stage0;
    static const sc_lv<19> ap_ST_fsm_pp2_stage1;
    static const sc_lv<19> ap_ST_fsm_state29;
    static const sc_lv<19> ap_ST_fsm_state30;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<5> ap_const_lv5_8;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_41;
    static const sc_lv<32> ap_const_lv32_12;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln111_fu_359_p2();
    void thread_add_ln114_fu_365_p2();
    void thread_add_ln155_fu_629_p2();
    void thread_add_ln157_fu_650_p2();
    void thread_add_ln209_1_fu_407_p2();
    void thread_add_ln209_2_fu_448_p2();
    void thread_add_ln209_3_fu_596_p2();
    void thread_add_ln209_4_fu_500_p2();
    void thread_add_ln209_5_fu_590_p2();
    void thread_add_ln209_fu_506_p2();
    void thread_add_ln700_fu_398_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp2_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_pp2_stage1();
    void thread_ap_block_pp2_stage1_11001();
    void thread_ap_block_pp2_stage1_subdone();
    void thread_ap_block_state10_pp0_stage2_iter1();
    void thread_ap_block_state11_pp0_stage3_iter1();
    void thread_ap_block_state12_pp0_stage0_iter2();
    void thread_ap_block_state13_pp0_stage1_iter2();
    void thread_ap_block_state14_pp0_stage2_iter2();
    void thread_ap_block_state19_pp1_stage0_iter0();
    void thread_ap_block_state20_pp1_stage1_iter0();
    void thread_ap_block_state21_pp1_stage0_iter1();
    void thread_ap_block_state22_pp1_stage1_iter1();
    void thread_ap_block_state25_pp2_stage0_iter0();
    void thread_ap_block_state26_pp2_stage1_iter0();
    void thread_ap_block_state27_pp2_stage0_iter1();
    void thread_ap_block_state28_pp2_stage1_iter1();
    void thread_ap_block_state4_pp0_stage0_iter0();
    void thread_ap_block_state5_pp0_stage1_iter0();
    void thread_ap_block_state6_pp0_stage2_iter0();
    void thread_ap_block_state7_pp0_stage3_iter0();
    void thread_ap_block_state8_pp0_stage0_iter1();
    void thread_ap_block_state9_pp0_stage1_iter1();
    void thread_ap_condition_pp0_exit_iter0_state4();
    void thread_ap_condition_pp1_exit_iter0_state19();
    void thread_ap_condition_pp2_exit_iter0_state25();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_phi_mux_i2_0_phi_fu_227_p4();
    void thread_ap_phi_mux_i6_0_phi_fu_274_p4();
    void thread_ap_phi_mux_i_0_phi_fu_204_p4();
    void thread_ap_phi_mux_j3_0_phi_fu_238_p4();
    void thread_ap_phi_mux_j7_0_phi_fu_285_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_grp_fu_384_p0();
    void thread_grp_fu_384_p00();
    void thread_grp_fu_384_p1();
    void thread_grp_fu_384_p10();
    void thread_i_1_fu_550_p2();
    void thread_i_fu_460_p2();
    void thread_icmp_ln105_fu_314_p2();
    void thread_icmp_ln108_fu_331_p2();
    void thread_icmp_ln111_fu_353_p2();
    void thread_icmp_ln129_fu_348_p2();
    void thread_icmp_ln133_fu_454_p2();
    void thread_icmp_ln143_fu_539_p2();
    void thread_icmp_ln147_fu_544_p2();
    void thread_icmp_ln883_fu_431_p2();
    void thread_j_1_fu_476_p2();
    void thread_j_2_fu_337_p2();
    void thread_j_3_fu_566_p2();
    void thread_j_fu_320_p2();
    void thread_k_V_fu_416_p2();
    void thread_mul_ln157_fu_644_p0();
    void thread_mul_ln157_fu_644_p00();
    void thread_mul_ln157_fu_644_p1();
    void thread_mul_ln157_fu_644_p10();
    void thread_mul_ln157_fu_644_p2();
    void thread_tmp_V_3_fu_609_p2();
    void thread_tmp_V_4_fu_494_p2();
    void thread_tmp_V_5_fu_584_p2();
    void thread_tmp_V_fu_519_p2();
    void thread_trunc_ln700_fu_403_p1();
    void thread_u_digits_data_V_address0();
    void thread_u_digits_data_V_ce0();
    void thread_v_digits_data_V_address0();
    void thread_v_digits_data_V_ce0();
    void thread_w_digits_data_V_address0();
    void thread_w_digits_data_V_ce0();
    void thread_w_digits_data_V_d0();
    void thread_w_digits_data_V_we0();
    void thread_xor_ln123_fu_437_p2();
    void thread_zext_ln105_fu_326_p1();
    void thread_zext_ln111_fu_394_p1();
    void thread_zext_ln116_1_fu_371_p1();
    void thread_zext_ln116_2_fu_390_p1();
    void thread_zext_ln116_fu_343_p1();
    void thread_zext_ln123_fu_443_p1();
    void thread_zext_ln133_fu_482_p1();
    void thread_zext_ln136_fu_466_p1();
    void thread_zext_ln137_fu_471_p1();
    void thread_zext_ln143_fu_535_p1();
    void thread_zext_ln147_fu_572_p1();
    void thread_zext_ln150_fu_556_p1();
    void thread_zext_ln151_fu_561_p1();
    void thread_zext_ln155_fu_625_p1();
    void thread_zext_ln157_fu_634_p1();
    void thread_zext_ln700_10_fu_606_p1();
    void thread_zext_ln700_2_fu_412_p1();
    void thread_zext_ln700_3_fu_486_p1();
    void thread_zext_ln700_4_fu_512_p1();
    void thread_zext_ln700_5_fu_490_p1();
    void thread_zext_ln700_6_fu_516_p1();
    void thread_zext_ln700_7_fu_576_p1();
    void thread_zext_ln700_8_fu_602_p1();
    void thread_zext_ln700_9_fu_580_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
