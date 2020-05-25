// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module karastuba_mul_templa (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        lhs0_tmp_digits_data_V_address0,
        lhs0_tmp_digits_data_V_ce0,
        lhs0_tmp_digits_data_V_q0,
        lhs1_tmp_digits_data_V_address0,
        lhs1_tmp_digits_data_V_ce0,
        lhs1_tmp_digits_data_V_q0,
        rhs0_tmp_digits_data_V_address0,
        rhs0_tmp_digits_data_V_ce0,
        rhs0_tmp_digits_data_V_q0,
        rhs1_tmp_digits_data_V_address0,
        rhs1_tmp_digits_data_V_ce0,
        rhs1_tmp_digits_data_V_q0,
        cross_mul_digits_data_V_address0,
        cross_mul_digits_data_V_ce0,
        cross_mul_digits_data_V_we0,
        cross_mul_digits_data_V_d0,
        cross_mul_digits_data_V_q0,
        cross_mul_digits_data_V_address1,
        cross_mul_digits_data_V_ce1,
        cross_mul_digits_data_V_we1,
        cross_mul_digits_data_V_d1,
        cross_mul_digits_data_V_q1,
        ap_return
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_pp0_stage0 = 6'd2;
parameter    ap_ST_fsm_state7 = 6'd4;
parameter    ap_ST_fsm_pp1_stage0 = 6'd8;
parameter    ap_ST_fsm_state13 = 6'd16;
parameter    ap_ST_fsm_state14 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] lhs0_tmp_digits_data_V_address0;
output   lhs0_tmp_digits_data_V_ce0;
input  [63:0] lhs0_tmp_digits_data_V_q0;
output  [4:0] lhs1_tmp_digits_data_V_address0;
output   lhs1_tmp_digits_data_V_ce0;
input  [63:0] lhs1_tmp_digits_data_V_q0;
output  [4:0] rhs0_tmp_digits_data_V_address0;
output   rhs0_tmp_digits_data_V_ce0;
input  [63:0] rhs0_tmp_digits_data_V_q0;
output  [4:0] rhs1_tmp_digits_data_V_address0;
output   rhs1_tmp_digits_data_V_ce0;
input  [63:0] rhs1_tmp_digits_data_V_q0;
output  [5:0] cross_mul_digits_data_V_address0;
output   cross_mul_digits_data_V_ce0;
output   cross_mul_digits_data_V_we0;
output  [63:0] cross_mul_digits_data_V_d0;
input  [63:0] cross_mul_digits_data_V_q0;
output  [5:0] cross_mul_digits_data_V_address1;
output   cross_mul_digits_data_V_ce1;
output   cross_mul_digits_data_V_we1;
output  [63:0] cross_mul_digits_data_V_d1;
input  [63:0] cross_mul_digits_data_V_q1;
output  [3:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg lhs0_tmp_digits_data_V_ce0;
reg lhs1_tmp_digits_data_V_ce0;
reg rhs0_tmp_digits_data_V_ce0;
reg rhs1_tmp_digits_data_V_ce0;
reg[3:0] ap_return;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [1:0] p_088_0_i_reg_134;
reg   [5:0] i_0_i_reg_146;
reg   [1:0] p_088_0_i1_reg_157;
reg   [5:0] i_0_i2_reg_169;
wire   [0:0] icmp_ln51_fu_192_p2;
reg   [0:0] icmp_ln51_reg_326;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_state5_pp0_stage0_iter3;
wire    ap_block_state6_pp0_stage0_iter4;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln51_reg_326_pp0_iter1_reg;
reg   [0:0] icmp_ln51_reg_326_pp0_iter2_reg;
reg   [0:0] icmp_ln51_reg_326_pp0_iter3_reg;
wire   [5:0] i_fu_198_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [63:0] zext_ln56_fu_204_p1;
reg   [63:0] zext_ln56_reg_335;
reg   [63:0] zext_ln56_reg_335_pp0_iter1_reg;
reg   [63:0] zext_ln56_reg_335_pp0_iter2_reg;
reg   [63:0] zext_ln56_reg_335_pp0_iter3_reg;
reg   [63:0] lhs0_tmp_digits_data_6_reg_350;
reg   [63:0] lhs0_tmp_digits_data_6_reg_350_pp0_iter2_reg;
reg   [63:0] lhs1_tmp_digits_data_6_reg_356;
reg   [63:0] lhs1_tmp_digits_data_6_reg_356_pp0_iter2_reg;
wire   [64:0] add_ln700_fu_216_p2;
reg   [64:0] add_ln700_reg_362;
wire   [63:0] add_ln209_6_fu_244_p2;
reg   [63:0] add_ln209_6_reg_367;
reg   [1:0] trunc_ln_reg_372;
reg    ap_enable_reg_pp0_iter3;
wire   [0:0] icmp_ln51_1_fu_259_p2;
reg   [0:0] icmp_ln51_1_reg_377;
wire    ap_CS_fsm_pp1_stage0;
wire    ap_block_state8_pp1_stage0_iter0;
wire    ap_block_state9_pp1_stage0_iter1;
wire    ap_block_state10_pp1_stage0_iter2;
wire    ap_block_state11_pp1_stage0_iter3;
wire    ap_block_state12_pp1_stage0_iter4;
wire    ap_block_pp1_stage0_11001;
reg   [0:0] icmp_ln51_1_reg_377_pp1_iter1_reg;
reg   [0:0] icmp_ln51_1_reg_377_pp1_iter2_reg;
reg   [0:0] icmp_ln51_1_reg_377_pp1_iter3_reg;
wire   [5:0] i_23_fu_265_p2;
reg    ap_enable_reg_pp1_iter0;
wire   [63:0] zext_ln56_1_fu_271_p1;
reg   [63:0] zext_ln56_1_reg_386;
reg   [63:0] zext_ln56_1_reg_386_pp1_iter1_reg;
reg   [63:0] zext_ln56_1_reg_386_pp1_iter2_reg;
reg   [63:0] zext_ln56_1_reg_386_pp1_iter3_reg;
reg   [63:0] rhs0_tmp_digits_data_6_reg_401;
reg   [63:0] rhs0_tmp_digits_data_6_reg_401_pp1_iter2_reg;
reg   [63:0] rhs1_tmp_digits_data_6_reg_407;
reg   [63:0] rhs1_tmp_digits_data_6_reg_407_pp1_iter2_reg;
wire   [64:0] add_ln700_7_fu_283_p2;
reg   [64:0] add_ln700_7_reg_413;
wire   [63:0] add_ln209_8_fu_311_p2;
reg   [63:0] add_ln209_8_reg_418;
reg   [1:0] trunc_ln858_3_reg_423;
reg    ap_enable_reg_pp1_iter3;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter4;
wire    ap_CS_fsm_state7;
wire    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state8;
reg    ap_enable_reg_pp1_iter1;
reg    ap_enable_reg_pp1_iter2;
reg    ap_enable_reg_pp1_iter4;
reg   [4:0] add0_digits_data_V_address0;
reg    add0_digits_data_V_ce0;
reg    add0_digits_data_V_we0;
wire   [63:0] add0_digits_data_V_q0;
reg   [4:0] add1_digits_data_V_address0;
reg    add1_digits_data_V_ce0;
reg    add1_digits_data_V_we0;
wire   [63:0] add1_digits_data_V_q0;
wire    grp_karastuba_mul_templa_4_fu_180_ap_start;
wire    grp_karastuba_mul_templa_4_fu_180_ap_done;
wire    grp_karastuba_mul_templa_4_fu_180_ap_idle;
wire    grp_karastuba_mul_templa_4_fu_180_ap_ready;
wire   [4:0] grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_address0;
wire    grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_ce0;
wire   [4:0] grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_address0;
wire    grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_ce0;
wire   [5:0] grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address0;
wire    grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce0;
wire    grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we0;
wire   [63:0] grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d0;
wire   [5:0] grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address1;
wire    grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce1;
wire    grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we1;
wire   [63:0] grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d1;
wire   [3:0] grp_karastuba_mul_templa_4_fu_180_ap_return;
reg   [1:0] ap_phi_mux_p_088_0_i_phi_fu_138_p4;
wire    ap_block_pp0_stage0;
reg   [1:0] ap_phi_mux_p_088_0_i1_phi_fu_161_p4;
wire    ap_block_pp1_stage0;
reg    grp_karastuba_mul_templa_4_fu_180_ap_start_reg;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state14;
wire   [64:0] zext_ln209_fu_210_p1;
wire   [64:0] zext_ln700_fu_213_p1;
wire   [65:0] zext_ln700_10_fu_230_p1;
wire   [65:0] zext_ln51_fu_222_p1;
wire   [63:0] zext_ln700_9_fu_226_p1;
wire   [63:0] add_ln209_fu_239_p2;
wire   [65:0] tmp_V_fu_233_p2;
wire   [64:0] zext_ln209_1_fu_277_p1;
wire   [64:0] zext_ln700_11_fu_280_p1;
wire   [65:0] zext_ln700_13_fu_297_p1;
wire   [65:0] zext_ln51_1_fu_289_p1;
wire   [63:0] zext_ln700_12_fu_293_p1;
wire   [63:0] add_ln209_7_fu_306_p2;
wire   [65:0] tmp_V_14_fu_300_p2;
reg   [3:0] ap_return_preg;
reg   [5:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter2 = 1'b0;
#0 ap_enable_reg_pp1_iter4 = 1'b0;
#0 grp_karastuba_mul_templa_4_fu_180_ap_start_reg = 1'b0;
#0 ap_return_preg = 4'd0;
end

karastuba_mul_temEe0 #(
    .DataWidth( 64 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
add0_digits_data_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(add0_digits_data_V_address0),
    .ce0(add0_digits_data_V_ce0),
    .we0(add0_digits_data_V_we0),
    .d0(add_ln209_6_reg_367),
    .q0(add0_digits_data_V_q0)
);

karastuba_mul_temEe0 #(
    .DataWidth( 64 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
add1_digits_data_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(add1_digits_data_V_address0),
    .ce0(add1_digits_data_V_ce0),
    .we0(add1_digits_data_V_we0),
    .d0(add_ln209_8_reg_418),
    .q0(add1_digits_data_V_q0)
);

karastuba_mul_templa_4 grp_karastuba_mul_templa_4_fu_180(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_karastuba_mul_templa_4_fu_180_ap_start),
    .ap_done(grp_karastuba_mul_templa_4_fu_180_ap_done),
    .ap_idle(grp_karastuba_mul_templa_4_fu_180_ap_idle),
    .ap_ready(grp_karastuba_mul_templa_4_fu_180_ap_ready),
    .lhs_tmp_bits_read(p_088_0_i_reg_134),
    .lhs_digits_data_V_address0(grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_address0),
    .lhs_digits_data_V_ce0(grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_ce0),
    .lhs_digits_data_V_q0(add0_digits_data_V_q0),
    .rhs_tmp_bits_read(p_088_0_i1_reg_157),
    .rhs_digits_data_V_address0(grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_address0),
    .rhs_digits_data_V_ce0(grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_ce0),
    .rhs_digits_data_V_q0(add1_digits_data_V_q0),
    .res_digits_data_V_address0(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address0),
    .res_digits_data_V_ce0(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce0),
    .res_digits_data_V_we0(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we0),
    .res_digits_data_V_d0(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d0),
    .res_digits_data_V_q0(cross_mul_digits_data_V_q0),
    .res_digits_data_V_address1(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address1),
    .res_digits_data_V_ce1(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce1),
    .res_digits_data_V_we1(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we1),
    .res_digits_data_V_d1(grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d1),
    .res_digits_data_V_q1(cross_mul_digits_data_V_q1),
    .ap_return(grp_karastuba_mul_templa_4_fu_180_ap_return)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter4 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state8) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state7)) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp1_exit_iter0_state8)) begin
                ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state8);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter2 <= ap_enable_reg_pp1_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter3 <= ap_enable_reg_pp1_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter4 <= ap_enable_reg_pp1_iter3;
        end else if ((1'b1 == ap_CS_fsm_state7)) begin
            ap_enable_reg_pp1_iter4 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_preg <= 4'd0;
    end else begin
        if (((grp_karastuba_mul_templa_4_fu_180_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
            ap_return_preg <= grp_karastuba_mul_templa_4_fu_180_ap_return;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_karastuba_mul_templa_4_fu_180_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state13)) begin
            grp_karastuba_mul_templa_4_fu_180_ap_start_reg <= 1'b1;
        end else if ((grp_karastuba_mul_templa_4_fu_180_ap_ready == 1'b1)) begin
            grp_karastuba_mul_templa_4_fu_180_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_0_i2_reg_169 <= 6'd0;
    end else if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_fu_259_p2 == 1'd0))) begin
        i_0_i2_reg_169 <= i_23_fu_265_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_i_reg_146 <= 6'd0;
    end else if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln51_fu_192_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_0_i_reg_146 <= i_fu_198_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        p_088_0_i1_reg_157 <= 2'd0;
    end else if (((ap_enable_reg_pp1_iter4 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_reg_377_pp1_iter3_reg == 1'd0))) begin
        p_088_0_i1_reg_157 <= trunc_ln858_3_reg_423;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_088_0_i_reg_134 <= 2'd0;
    end else if (((icmp_ln51_reg_326_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        p_088_0_i_reg_134 <= trunc_ln_reg_372;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln51_reg_326_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln209_6_reg_367 <= add_ln209_6_fu_244_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_reg_377_pp1_iter2_reg == 1'd0))) begin
        add_ln209_8_reg_418 <= add_ln209_8_fu_311_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_reg_377_pp1_iter1_reg == 1'd0))) begin
        add_ln700_7_reg_413 <= add_ln700_7_fu_283_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln51_reg_326_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln700_reg_362 <= add_ln700_fu_216_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln51_1_reg_377 <= icmp_ln51_1_fu_259_p2;
        icmp_ln51_1_reg_377_pp1_iter1_reg <= icmp_ln51_1_reg_377;
        zext_ln56_1_reg_386_pp1_iter1_reg[5 : 0] <= zext_ln56_1_reg_386[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp1_stage0_11001)) begin
        icmp_ln51_1_reg_377_pp1_iter2_reg <= icmp_ln51_1_reg_377_pp1_iter1_reg;
        icmp_ln51_1_reg_377_pp1_iter3_reg <= icmp_ln51_1_reg_377_pp1_iter2_reg;
        rhs0_tmp_digits_data_6_reg_401_pp1_iter2_reg <= rhs0_tmp_digits_data_6_reg_401;
        rhs1_tmp_digits_data_6_reg_407_pp1_iter2_reg <= rhs1_tmp_digits_data_6_reg_407;
        zext_ln56_1_reg_386_pp1_iter2_reg[5 : 0] <= zext_ln56_1_reg_386_pp1_iter1_reg[5 : 0];
        zext_ln56_1_reg_386_pp1_iter3_reg[5 : 0] <= zext_ln56_1_reg_386_pp1_iter2_reg[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln51_reg_326 <= icmp_ln51_fu_192_p2;
        icmp_ln51_reg_326_pp0_iter1_reg <= icmp_ln51_reg_326;
        zext_ln56_reg_335_pp0_iter1_reg[5 : 0] <= zext_ln56_reg_335[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        icmp_ln51_reg_326_pp0_iter2_reg <= icmp_ln51_reg_326_pp0_iter1_reg;
        icmp_ln51_reg_326_pp0_iter3_reg <= icmp_ln51_reg_326_pp0_iter2_reg;
        lhs0_tmp_digits_data_6_reg_350_pp0_iter2_reg <= lhs0_tmp_digits_data_6_reg_350;
        lhs1_tmp_digits_data_6_reg_356_pp0_iter2_reg <= lhs1_tmp_digits_data_6_reg_356;
        zext_ln56_reg_335_pp0_iter2_reg[5 : 0] <= zext_ln56_reg_335_pp0_iter1_reg[5 : 0];
        zext_ln56_reg_335_pp0_iter3_reg[5 : 0] <= zext_ln56_reg_335_pp0_iter2_reg[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln51_reg_326 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lhs0_tmp_digits_data_6_reg_350 <= lhs0_tmp_digits_data_V_q0;
        lhs1_tmp_digits_data_6_reg_356 <= lhs1_tmp_digits_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_reg_377 == 1'd0))) begin
        rhs0_tmp_digits_data_6_reg_401 <= rhs0_tmp_digits_data_V_q0;
        rhs1_tmp_digits_data_6_reg_407 <= rhs1_tmp_digits_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter3 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_reg_377_pp1_iter2_reg == 1'd0))) begin
        trunc_ln858_3_reg_423 <= {{tmp_V_14_fu_300_p2[65:64]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln51_reg_326_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        trunc_ln_reg_372 <= {{tmp_V_fu_233_p2[65:64]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_fu_259_p2 == 1'd0))) begin
        zext_ln56_1_reg_386[5 : 0] <= zext_ln56_1_fu_271_p1[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln51_fu_192_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        zext_ln56_reg_335[5 : 0] <= zext_ln56_fu_204_p1[5 : 0];
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        add0_digits_data_V_address0 = zext_ln56_reg_335_pp0_iter3_reg;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        add0_digits_data_V_address0 = grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_address0;
    end else begin
        add0_digits_data_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        add0_digits_data_V_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        add0_digits_data_V_ce0 = grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_ce0;
    end else begin
        add0_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln51_reg_326_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        add0_digits_data_V_we0 = 1'b1;
    end else begin
        add0_digits_data_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter4 == 1'b1))) begin
        add1_digits_data_V_address0 = zext_ln56_1_reg_386_pp1_iter3_reg;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        add1_digits_data_V_address0 = grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_address0;
    end else begin
        add1_digits_data_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter4 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        add1_digits_data_V_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        add1_digits_data_V_ce0 = grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_ce0;
    end else begin
        add1_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter4 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001) & (icmp_ln51_1_reg_377_pp1_iter3_reg == 1'd0))) begin
        add1_digits_data_V_we0 = 1'b1;
    end else begin
        add1_digits_data_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln51_fu_192_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln51_1_fu_259_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state8 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state8 = 1'b0;
    end
end

always @ (*) begin
    if ((((grp_karastuba_mul_templa_4_fu_180_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter4 == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter3 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter4 == 1'b1) & (icmp_ln51_1_reg_377_pp1_iter3_reg == 1'd0))) begin
        ap_phi_mux_p_088_0_i1_phi_fu_161_p4 = trunc_ln858_3_reg_423;
    end else begin
        ap_phi_mux_p_088_0_i1_phi_fu_161_p4 = p_088_0_i1_reg_157;
    end
end

always @ (*) begin
    if (((icmp_ln51_reg_326_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        ap_phi_mux_p_088_0_i_phi_fu_138_p4 = trunc_ln_reg_372;
    end else begin
        ap_phi_mux_p_088_0_i_phi_fu_138_p4 = p_088_0_i_reg_134;
    end
end

always @ (*) begin
    if (((grp_karastuba_mul_templa_4_fu_180_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((grp_karastuba_mul_templa_4_fu_180_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
        ap_return = grp_karastuba_mul_templa_4_fu_180_ap_return;
    end else begin
        ap_return = ap_return_preg;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lhs0_tmp_digits_data_V_ce0 = 1'b1;
    end else begin
        lhs0_tmp_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        lhs1_tmp_digits_data_V_ce0 = 1'b1;
    end else begin
        lhs1_tmp_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        rhs0_tmp_digits_data_V_ce0 = 1'b1;
    end else begin
        rhs0_tmp_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        rhs1_tmp_digits_data_V_ce0 = 1'b1;
    end else begin
        rhs1_tmp_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((icmp_ln51_fu_192_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) & ~((ap_enable_reg_pp0_iter4 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter3 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((icmp_ln51_fu_192_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((ap_enable_reg_pp0_iter4 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter3 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
        ap_ST_fsm_pp1_stage0 : begin
            if ((~((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter0 == 1'b1) & (icmp_ln51_1_fu_259_p2 == 1'd1)) & ~((1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter4 == 1'b1) & (ap_enable_reg_pp1_iter3 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if ((((1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter4 == 1'b1) & (ap_enable_reg_pp1_iter3 == 1'b0)) | ((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter0 == 1'b1) & (icmp_ln51_1_fu_259_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            if (((grp_karastuba_mul_templa_4_fu_180_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln209_6_fu_244_p2 = (add_ln209_fu_239_p2 + lhs0_tmp_digits_data_6_reg_350_pp0_iter2_reg);

assign add_ln209_7_fu_306_p2 = (rhs1_tmp_digits_data_6_reg_407_pp1_iter2_reg + zext_ln700_12_fu_293_p1);

assign add_ln209_8_fu_311_p2 = (add_ln209_7_fu_306_p2 + rhs0_tmp_digits_data_6_reg_401_pp1_iter2_reg);

assign add_ln209_fu_239_p2 = (lhs1_tmp_digits_data_6_reg_356_pp0_iter2_reg + zext_ln700_9_fu_226_p1);

assign add_ln700_7_fu_283_p2 = (zext_ln209_1_fu_277_p1 + zext_ln700_11_fu_280_p1);

assign add_ln700_fu_216_p2 = (zext_ln209_fu_210_p1 + zext_ln700_fu_213_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp1_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp1_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp1_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign cross_mul_digits_data_V_address0 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address0;

assign cross_mul_digits_data_V_address1 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address1;

assign cross_mul_digits_data_V_ce0 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce0;

assign cross_mul_digits_data_V_ce1 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce1;

assign cross_mul_digits_data_V_d0 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d0;

assign cross_mul_digits_data_V_d1 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d1;

assign cross_mul_digits_data_V_we0 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we0;

assign cross_mul_digits_data_V_we1 = grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we1;

assign grp_karastuba_mul_templa_4_fu_180_ap_start = grp_karastuba_mul_templa_4_fu_180_ap_start_reg;

assign i_23_fu_265_p2 = (i_0_i2_reg_169 + 6'd1);

assign i_fu_198_p2 = (i_0_i_reg_146 + 6'd1);

assign icmp_ln51_1_fu_259_p2 = ((i_0_i2_reg_169 == 6'd32) ? 1'b1 : 1'b0);

assign icmp_ln51_fu_192_p2 = ((i_0_i_reg_146 == 6'd32) ? 1'b1 : 1'b0);

assign lhs0_tmp_digits_data_V_address0 = zext_ln56_fu_204_p1;

assign lhs1_tmp_digits_data_V_address0 = zext_ln56_fu_204_p1;

assign rhs0_tmp_digits_data_V_address0 = zext_ln56_1_fu_271_p1;

assign rhs1_tmp_digits_data_V_address0 = zext_ln56_1_fu_271_p1;

assign tmp_V_14_fu_300_p2 = (zext_ln700_13_fu_297_p1 + zext_ln51_1_fu_289_p1);

assign tmp_V_fu_233_p2 = (zext_ln700_10_fu_230_p1 + zext_ln51_fu_222_p1);

assign zext_ln209_1_fu_277_p1 = rhs0_tmp_digits_data_6_reg_401;

assign zext_ln209_fu_210_p1 = lhs0_tmp_digits_data_6_reg_350;

assign zext_ln51_1_fu_289_p1 = ap_phi_mux_p_088_0_i1_phi_fu_161_p4;

assign zext_ln51_fu_222_p1 = ap_phi_mux_p_088_0_i_phi_fu_138_p4;

assign zext_ln56_1_fu_271_p1 = i_0_i2_reg_169;

assign zext_ln56_fu_204_p1 = i_0_i_reg_146;

assign zext_ln700_10_fu_230_p1 = add_ln700_reg_362;

assign zext_ln700_11_fu_280_p1 = rhs1_tmp_digits_data_6_reg_407;

assign zext_ln700_12_fu_293_p1 = ap_phi_mux_p_088_0_i1_phi_fu_161_p4;

assign zext_ln700_13_fu_297_p1 = add_ln700_7_reg_413;

assign zext_ln700_9_fu_226_p1 = ap_phi_mux_p_088_0_i_phi_fu_138_p4;

assign zext_ln700_fu_213_p1 = lhs1_tmp_digits_data_6_reg_356;

always @ (posedge ap_clk) begin
    zext_ln56_reg_335[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_reg_335_pp0_iter1_reg[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_reg_335_pp0_iter2_reg[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_reg_335_pp0_iter3_reg[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_1_reg_386[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_1_reg_386_pp1_iter1_reg[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_1_reg_386_pp1_iter2_reg[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    zext_ln56_1_reg_386_pp1_iter3_reg[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
end

endmodule //karastuba_mul_templa
