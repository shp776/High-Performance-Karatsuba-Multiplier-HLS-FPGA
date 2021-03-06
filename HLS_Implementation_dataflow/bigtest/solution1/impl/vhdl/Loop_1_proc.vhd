-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity Loop_1_proc is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    hs_input_V_TDATA : IN STD_LOGIC_VECTOR (63 downto 0);
    hs_input_V_TVALID : IN STD_LOGIC;
    hs_input_V_TREADY : OUT STD_LOGIC;
    lhs_digits_data_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    lhs_digits_data_V_ce0 : OUT STD_LOGIC;
    lhs_digits_data_V_we0 : OUT STD_LOGIC;
    lhs_digits_data_V_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
    rhs_digits_data_V_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    rhs_digits_data_V_ce0 : OUT STD_LOGIC;
    rhs_digits_data_V_we0 : OUT STD_LOGIC;
    rhs_digits_data_V_d0 : OUT STD_LOGIC_VECTOR (63 downto 0) );
end;


architecture behav of Loop_1_proc is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv8_80 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv8_C0 : STD_LOGIC_VECTOR (7 downto 0) := "11000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal hs_input_V_TDATA_blk_n : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal icmp_ln412_fu_98_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln416_fu_120_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_0_i_reg_87 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_predicate_op16_read_state2 : BOOLEAN;
    signal ap_predicate_op18_read_state2 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal i_fu_104_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln416_reg_150 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln419_fu_126_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln419_reg_154 : STD_LOGIC_VECTOR (7 downto 0);
    signal hs_input_V_read_1_reg_159 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal zext_ln417_fu_132_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln419_fu_137_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_4_fu_110_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;
    signal regslice_both_hs_input_V_U_apdone_blk : STD_LOGIC;
    signal hs_input_V_TDATA_int : STD_LOGIC_VECTOR (63 downto 0);
    signal hs_input_V_TVALID_int : STD_LOGIC;
    signal hs_input_V_TREADY_int : STD_LOGIC;
    signal regslice_both_hs_input_V_U_ack_in : STD_LOGIC;

    component regslice_both IS
    generic (
        DataWidth : INTEGER );
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        data_in : IN STD_LOGIC_VECTOR (DataWidth-1 downto 0);
        vld_in : IN STD_LOGIC;
        ack_in : OUT STD_LOGIC;
        data_out : OUT STD_LOGIC_VECTOR (DataWidth-1 downto 0);
        vld_out : OUT STD_LOGIC;
        ack_out : IN STD_LOGIC;
        apdone_blk : OUT STD_LOGIC );
    end component;



begin
    regslice_both_hs_input_V_U : component regslice_both
    generic map (
        DataWidth => 64)
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        data_in => hs_input_V_TDATA,
        vld_in => hs_input_V_TVALID,
        ack_in => regslice_both_hs_input_V_U_ack_in,
        data_out => hs_input_V_TDATA_int,
        vld_out => hs_input_V_TVALID_int,
        ack_out => hs_input_V_TREADY_int,
        apdone_blk => regslice_both_hs_input_V_U_apdone_blk);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state2);
                elsif ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_0_i_reg_87_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                i_0_i_reg_87 <= i_fu_104_p2;
            elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_i_reg_87 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln416_fu_120_p2 = ap_const_lv1_0) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                add_ln419_reg_154 <= add_ln419_fu_126_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_predicate_op16_read_state2 = ap_const_boolean_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                hs_input_V_read_1_reg_159 <= hs_input_V_TDATA_int;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                icmp_ln416_reg_150 <= icmp_ln416_fu_120_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, ap_enable_reg_pp0_iter0, icmp_ln412_fu_98_p2, ap_block_pp0_stage0_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if (not(((icmp_ln412_fu_98_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif (((icmp_ln412_fu_98_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    add_ln419_fu_126_p2 <= std_logic_vector(unsigned(i_0_i_reg_87) + unsigned(ap_const_lv8_C0));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state4 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_enable_reg_pp0_iter0, ap_predicate_op16_read_state2, ap_predicate_op18_read_state2, hs_input_V_TVALID_int)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (((hs_input_V_TVALID_int = ap_const_logic_0) and (ap_predicate_op18_read_state2 = ap_const_boolean_1)) or ((hs_input_V_TVALID_int = ap_const_logic_0) and (ap_predicate_op16_read_state2 = ap_const_boolean_1))));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_enable_reg_pp0_iter0, ap_predicate_op16_read_state2, ap_predicate_op18_read_state2, hs_input_V_TVALID_int)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (((hs_input_V_TVALID_int = ap_const_logic_0) and (ap_predicate_op18_read_state2 = ap_const_boolean_1)) or ((hs_input_V_TVALID_int = ap_const_logic_0) and (ap_predicate_op16_read_state2 = ap_const_boolean_1))));
    end process;


    ap_block_state1_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_block_state2_pp0_stage0_iter0_assign_proc : process(ap_predicate_op16_read_state2, ap_predicate_op18_read_state2, hs_input_V_TVALID_int)
    begin
                ap_block_state2_pp0_stage0_iter0 <= (((hs_input_V_TVALID_int = ap_const_logic_0) and (ap_predicate_op18_read_state2 = ap_const_boolean_1)) or ((hs_input_V_TVALID_int = ap_const_logic_0) and (ap_predicate_op16_read_state2 = ap_const_boolean_1)));
    end process;

        ap_block_state3_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln412_fu_98_p2)
    begin
        if ((icmp_ln412_fu_98_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_predicate_op16_read_state2_assign_proc : process(icmp_ln412_fu_98_p2, icmp_ln416_fu_120_p2)
    begin
                ap_predicate_op16_read_state2 <= ((icmp_ln416_fu_120_p2 = ap_const_lv1_0) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0));
    end process;


    ap_predicate_op18_read_state2_assign_proc : process(icmp_ln412_fu_98_p2, icmp_ln416_fu_120_p2)
    begin
                ap_predicate_op18_read_state2 <= ((icmp_ln416_fu_120_p2 = ap_const_lv1_1) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0));
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    hs_input_V_TDATA_blk_n_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0, icmp_ln412_fu_98_p2, icmp_ln416_fu_120_p2, hs_input_V_TVALID_int)
    begin
        if ((((icmp_ln416_fu_120_p2 = ap_const_lv1_0) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((icmp_ln416_fu_120_p2 = ap_const_lv1_1) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)))) then 
            hs_input_V_TDATA_blk_n <= hs_input_V_TVALID_int;
        else 
            hs_input_V_TDATA_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    hs_input_V_TREADY_assign_proc : process(hs_input_V_TVALID, regslice_both_hs_input_V_U_ack_in)
    begin
        if (((hs_input_V_TVALID = ap_const_logic_1) and (regslice_both_hs_input_V_U_ack_in = ap_const_logic_1))) then 
            hs_input_V_TREADY <= ap_const_logic_1;
        else 
            hs_input_V_TREADY <= ap_const_logic_0;
        end if; 
    end process;


    hs_input_V_TREADY_int_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_predicate_op16_read_state2, ap_predicate_op18_read_state2, ap_block_pp0_stage0_11001)
    begin
        if ((((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_predicate_op18_read_state2 = ap_const_boolean_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_predicate_op16_read_state2 = ap_const_boolean_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)))) then 
            hs_input_V_TREADY_int <= ap_const_logic_1;
        else 
            hs_input_V_TREADY_int <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_104_p2 <= std_logic_vector(unsigned(i_0_i_reg_87) + unsigned(ap_const_lv8_1));
    icmp_ln412_fu_98_p2 <= "1" when (i_0_i_reg_87 = ap_const_lv8_80) else "0";
    icmp_ln416_fu_120_p2 <= "1" when (tmp_4_fu_110_p4 = ap_const_lv2_0) else "0";
    lhs_digits_data_V_address0 <= zext_ln417_fu_132_p1(6 - 1 downto 0);

    lhs_digits_data_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            lhs_digits_data_V_ce0 <= ap_const_logic_1;
        else 
            lhs_digits_data_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    lhs_digits_data_V_d0 <= hs_input_V_TDATA_int;

    lhs_digits_data_V_we0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, icmp_ln412_fu_98_p2, icmp_ln416_fu_120_p2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln416_fu_120_p2 = ap_const_lv1_1) and (icmp_ln412_fu_98_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            lhs_digits_data_V_we0 <= ap_const_logic_1;
        else 
            lhs_digits_data_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    rhs_digits_data_V_address0 <= zext_ln419_fu_137_p1(6 - 1 downto 0);

    rhs_digits_data_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            rhs_digits_data_V_ce0 <= ap_const_logic_1;
        else 
            rhs_digits_data_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    rhs_digits_data_V_d0 <= hs_input_V_read_1_reg_159;

    rhs_digits_data_V_we0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, icmp_ln416_reg_150, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln416_reg_150 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            rhs_digits_data_V_we0 <= ap_const_logic_1;
        else 
            rhs_digits_data_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_4_fu_110_p4 <= i_0_i_reg_87(7 downto 6);
    zext_ln417_fu_132_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_i_reg_87),64));
    zext_ln419_fu_137_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln419_reg_154),64));
end behav;
