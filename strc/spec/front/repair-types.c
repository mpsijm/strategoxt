#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Path_1;
Symbol sym_Undefined_0;
Symbol sym_Hashtable_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_s_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_f_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_o_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_x_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_f_1);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_k_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_c_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_x_10);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_f_1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_f_1);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_f_1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_t_12);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_f_1);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_112 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_3 (ATerm o_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_4 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm m_22, ATerm k_22, ATerm j_22, ATerm l_22, ATerm t);
ATerm RepairVarDec_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm u_111 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm k_98 (ATerm), ATerm t);
static ATerm m_4 (ATerm j_31, ATerm k_31, ATerm t);
static ATerm n_4 (ATerm b_30, ATerm c_30, ATerm t);
static ATerm p_4 (ATerm g_104 (ATerm), ATerm j_218, ATerm h_30, ATerm t);
static ATerm o_4 (ATerm x_29, ATerm y_29, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_125 (ATerm), ATerm t);
static ATerm d_14 (ATerm w_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_4 (ATerm d_30, ATerm t);
static ATerm r_4 (ATerm x_65, ATerm y_65, ATerm t);
static ATerm s_4 (ATerm l_31, ATerm m_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_16 (ATerm a_15, ATerm t);
static ATerm p_16 (ATerm f_15, ATerm g_15, ATerm j_15, ATerm t);
static ATerm s_16 (ATerm v_15, ATerm y_15, ATerm z_15, ATerm t);
static ATerm t_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_112 (ATerm), ATerm t);
static ATerm y_4 (ATerm h_42, ATerm i_42, ATerm t);
ATerm if_verbose2_1_0 (ATerm x_105 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm e_35, ATerm f_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_4 (ATerm o_40, ATerm p_40, ATerm n_40, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_4 (ATerm w_37, ATerm x_37, ATerm t);
ATerm foldr_2_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_105 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm need_help_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm c_5 (ATerm g_45, ATerm h_45, ATerm i_45, ATerm t);
static ATerm d_5 (ATerm j_45, ATerm k_45, ATerm t);
ATerm lookup_table_0_1 (ATerm a_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_45, ATerm p_45, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_4 (ATerm l_45, ATerm m_45, ATerm t);
static ATerm x_4 (ATerm q_45, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_128 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm parse_options_1_0 (ATerm h_128 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm iowrap_3_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_f_1;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_i_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_6), b_0), term_j_6);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_n_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm i_0 = NULL,q_0 = NULL;
  t = term_i_6;
  i_0 = t;
  t = (ATerm) ATinsert(ATempty, term_o_6);
  q_0 = t;
  t = SSL_printnl(i_0, q_0);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, term_o_6));
  return(t);
}
ATerm at_end_1_0 (ATerm j_112 (ATerm), ATerm t)
{
  static ATerm k_2 (ATerm t)
  {
    ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
    i_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_2 = ATgetFirst((ATermList) t);
        h_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_0 = NULL,c_1 = NULL,k_0 = NULL;
          t = SSLgetAnnotations(i_2);
          y_0 = t;
          t = h_2;
          t = k_2(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(c_1), g_2);
          k_0 = t;
          t = SSLsetAnnotations(k_0, y_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        t = j_112(t);
      }
    return(t);
  }
  t = k_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  s_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_0;
    }
  else
    {
      static ATerm n_0 (ATerm t)
      {
        t = not_null(u_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          if(((u_0 != NULL) && (u_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_0;
      t = at_end_1_0(n_0, t);
    }
  return(t);
}
static ATerm d_3 (ATerm o_2, ATerm t)
{
  ATerm p_2 = NULL;
  t = SSL_explode_term(o_2);
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_2 = NULL,z_2 = NULL,a_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_0 (ATerm t)
            {
              t = z_2;
              return(t);
            }
            t = v_2;
            t = at_end_1_0(r_0, t);
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            t = d_3(a_3, t);
          }
      }
    }
  else
    {
      t = d_3(a_3, t);
    }
  return(t);
}
static ATerm k_4 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm m_22, ATerm k_22, ATerm j_22, ATerm l_22, ATerm t)
{
  ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,o_3 = NULL;
  h_3 = t;
  t = r_94(t);
  i_3 = t;
  t = h_3;
  t = s_94(t);
  k_3 = t;
  t = term_i_6;
  l_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_7), k_3), term_z_6), i_3), term_y_6), m_22), term_x_6);
  o_3 = t;
  t = SSL_printnl(l_3, o_3);
  t = (ATerm) ATmakeAppl(sym__2, j_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, k_22)));
  t = conc_0_0(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_22, (ATerm) ATmakeAppl(sym_FunType_2, e_3, l_22));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_3 = ATgetArgument(t, 0);
      {
        ATerm c_7 = ATgetArgument(t, 1);
        if(match_cons(c_7, sym_FunType_2))
          {
            ATerm e_7 = ATgetArgument(c_7, 0);
            if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
              {
                ATerm f_7 = ATgetFirst((ATermList) e_7);
                if(match_cons(f_7, sym_ConstType_1))
                  {
                    w_3 = ATgetArgument(f_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_7 = (ATerm) ATgetNext((ATermList) e_7);
                  y_3 = h_7;
                  if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
                    {
                      ATerm i_7 = ATgetFirst((ATermList) h_7);
                      if(match_cons(i_7, sym_FunType_2))
                        {
                          ATerm k_7 = ATgetArgument(i_7, 0);
                          ATerm m_7 = ATgetArgument(i_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_7 = (ATerm) ATgetNext((ATermList) h_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            z_3 = ATgetArgument(c_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_4(r_94, s_94, p_3, w_3, y_3, z_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm u_111 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,q_6 = NULL,t_6 = NULL;
  m_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_6 = ATgetFirst((ATermList) t);
      t_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,s_1 = NULL,t_1 = NULL,v_1 = NULL,u_1 = NULL;
        t = SSLgetAnnotations(m_6);
        p_1 = t;
        t = q_6;
        t = u_111(t);
        s_1 = t;
        t = (ATerm) ATinsert(CheckATermList(t_6), s_1);
        u_1 = t;
        t = SSLsetAnnotations(u_1, p_1);
        t_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_1 = ATgetFirst((ATermList) t);
            n_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_1);
        l_1 = t;
        t = n_1;
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(u_111, t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
            }
        }
        o_1 = t;
        t = (ATerm) ATinsert(CheckATermList(o_1), m_1);
        v_1 = t;
        t = SSLsetAnnotations(v_1, l_1);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm s_2 = NULL,x_2 = NULL,x_1 = NULL;
          t = SSLgetAnnotations(m_6);
          s_2 = t;
          t = t_6;
          t = map1_1_0(u_111, t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), q_6);
          x_1 = t;
          t = SSLsetAnnotations(x_1, s_2);
        }
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_u_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_u_7;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_v_7;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_v_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm g_7 = NULL,l_7 = NULL,n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      l_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
      o_7 = ATgetArgument(t, 2);
      g_7 = ATgetArgument(t, 3);
      {
        ATerm t_7 = NULL;
        t = n_7;
        {
          static ATerm v_0 (ATerm t)
          {
            static ATerm x_0 (ATerm t)
            {
              t = l_7;
              return(t);
            }
            t = RepairVarDec_2_0(w_0, x_0, t);
            return(t);
          }
          t = map1_1_0(v_0, t);
        }
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_7, t_7, o_7, g_7);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          l_7 = ATgetArgument(t, 0);
          n_7 = ATgetArgument(t, 1);
          o_7 = ATgetArgument(t, 2);
          {
            ATerm x_7 = NULL;
            t = n_7;
            {
              static ATerm z_0 (ATerm t)
              {
                static ATerm b_1 (ATerm t)
                {
                  t = l_7;
                  return(t);
                }
                t = RepairVarDec_2_0(a_1, b_1, t);
                return(t);
              }
              t = map1_1_0(z_0, t);
            }
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, l_7, x_7, o_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_7 = ATgetArgument(t, 0);
              n_7 = ATgetArgument(t, 1);
              o_7 = ATgetArgument(t, 2);
              g_7 = ATgetArgument(t, 3);
              {
                ATerm l_8 = NULL;
                t = n_7;
                {
                  static ATerm d_1 (ATerm t)
                  {
                    static ATerm g_1 (ATerm t)
                    {
                      t = l_7;
                      return(t);
                    }
                    t = RepairVarDec_2_0(e_1, g_1, t);
                    return(t);
                  }
                  t = map1_1_0(d_1, t);
                }
                l_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_7, l_8, o_7, g_7);
              }
            }
          else
            {
              ATerm x_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  l_7 = ATgetArgument(t, 0);
                  n_7 = ATgetArgument(t, 1);
                  o_7 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_7;
              {
                static ATerm h_1 (ATerm t)
                {
                  static ATerm j_1 (ATerm t)
                  {
                    t = l_7;
                    return(t);
                  }
                  t = RepairVarDec_2_0(i_1, j_1, t);
                  return(t);
                }
                t = map1_1_0(h_1, t);
              }
              x_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, l_7, x_8, o_7);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  static ATerm y_8 (ATerm t)
  {
    ATerm w_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_98(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = w_7;
        t = SRTS_some(y_8, t);
      }
    return(t);
  }
  t = y_8(t);
  return(t);
}
static ATerm m_4 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_fputc(j_31, k_31);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
static ATerm n_4 (ATerm b_30, ATerm c_30, ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_write_term_to_stream_text(b_30, c_30);
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_9);
  return(t);
}
static ATerm p_4 (ATerm g_104 (ATerm), ATerm j_218, ATerm h_30, ATerm t)
{
  ATerm n_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_218, term_z_7);
  t = t_4(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, h_30);
  t = g_104(t);
  t = fclose_0_0(t);
  t = h_30;
  return(t);
}
static ATerm o_4 (ATerm x_29, ATerm y_29, ATerm t)
{
  ATerm p_9 = NULL;
  t = SSL_write_term_to_stream_baf(x_29, y_29);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_9);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          a_4 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(a_4, b_4, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm a_5 = NULL,g_5 = NULL,h_5 = NULL,p_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          p_5 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(p_5, q_5, t);
  a_5 = t;
  t = term_d_8;
  g_5 = t;
  t = a_5;
  if(match_cons(t, sym_Stream_1))
    {
      h_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, a_5);
  t = m_4(g_5, h_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL,y_9 = NULL,a_10 = NULL,e_10 = NULL,i_10 = NULL,m_10 = NULL,o_10 = NULL,r_10 = NULL,s_10 = NULL,r_12 = NULL,s_12 = NULL,e_2 = NULL,c_2 = NULL;
  v_9 = t;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_9);
  m_10 = t;
  t = o_10;
  {
    ATerm e_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_9 != NULL) && (t_9 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_1, t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = e_8;
        t = term_h_8;
        t_9 = t;
      }
  }
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, r_10);
  c_2 = t;
  t = SSLsetAnnotations(c_2, m_10);
  t = v_9;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_9);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_10, (ATerm) ATmakeAppl(sym__2, not_null(t_9), e_10));
  e_2 = t;
  t = SSLsetAnnotations(e_2, y_9);
  i_10 = t;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,l_2 = NULL;
        t = SSLgetAnnotations(i_10);
        q_3 = t;
        t = r_12;
        t = fetch_1_0(q_1, t);
        t_3 = t;
        t = s_12;
        if(match_cons(t, sym__2))
          {
            v_3 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_4(r_1, v_3, x_3, t);
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_3, u_3);
        l_2 = t;
        t = SSLsetAnnotations(l_2, q_3);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm g_4 = NULL,j_4 = NULL,l_4 = NULL,v_4 = NULL,e_5 = NULL;
          t = SSLgetAnnotations(i_10);
          g_4 = t;
          t = s_12;
          if(match_cons(t, sym__2))
            {
              l_4 = ATgetArgument(t, 0);
              v_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_4(w_1, l_4, v_4, t);
          j_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_12, j_4);
          e_5 = t;
          t = SSLsetAnnotations(e_5, g_4);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,z_12 = NULL,b_13 = NULL,d_13 = NULL;
  d_13 = t;
  t = dtime_0_0(t);
  t = d_13;
  t = h_125(t);
  b_13 = t;
  t = dtime_0_0(t);
  v_12 = t;
  t = b_13;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_12), (ATerm) ATmakeAppl(sym_Runtime_1, v_12)), z_12);
  return(t);
}
static ATerm d_14 (ATerm w_13, ATerm t)
{
  t = SSL_fclose(w_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_14 = ATgetArgument(t, 0);
      {
        ATerm k_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_14);
            LocalPopChoice(p_8);
          }
        else
          {
            t = k_8;
            t = d_14(b_14, t);
          }
      }
    }
  else
    {
      t = d_14(b_14, t);
    }
  return(t);
}
static ATerm q_4 (ATerm d_30, ATerm t)
{
  t = SSL_read_term_from_stream(d_30);
  return(t);
}
static ATerm r_4 (ATerm x_65, ATerm y_65, ATerm t)
{
  t = SSL_strcat(x_65, y_65);
  return(t);
}
static ATerm s_4 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_fopen(l_31, m_31);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_14 = NULL;
  t = SSL_stdin_stream();
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_stdout_stream();
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_stderr_stream();
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
static ATerm o_16 (ATerm a_15, ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_explode_term(a_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
          {
            b_15 = ATgetFirst((ATermList) t_8);
            {
              ATerm u_8 = (ATerm) ATgetNext((ATermList) t_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_16 (ATerm f_15, ATerm g_15, ATerm j_15, ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,o_15 = NULL,t_15 = NULL,l_5 = NULL;
  t = SSLgetAnnotations(j_15);
  o_15 = t;
  t = f_15;
  if(match_cons(t, sym_Path_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_15, g_15);
  l_5 = t;
  t = SSLsetAnnotations(l_5, o_15);
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(k_15, l_15, t);
  return(t);
}
static ATerm s_16 (ATerm v_15, ATerm y_15, ATerm z_15, ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL,m_5 = NULL;
  t = SSLgetAnnotations(z_15);
  c_16 = t;
  t = SSL_is_string(v_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, y_15);
  m_5 = t;
  t = SSLsetAnnotations(m_5, c_16);
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(a_16, b_16, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm j_16 = NULL,m_16 = NULL,n_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_16(j_16, t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm z_8 = t;
              int a_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_16(m_16, n_16, j_16, t);
                  LocalPopChoice(a_9);
                }
              else
                {
                  t = z_8;
                  t = s_16(m_16, n_16, j_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_16(j_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,y_16 = NULL,m_17 = NULL;
  m_17 = t;
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_17, term_d_9);
        t = t_4(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm r_6 = NULL,s_6 = NULL;
          t = term_e_9;
          s_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_9, m_17);
          t = r_4(s_6, m_17, t);
          r_6 = t;
          t = SSL_perror(r_6);
          _fail(t);
        }
      }
  }
  v_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(y_16, t);
  u_16 = t;
  t = v_16;
  t = fclose_0_0(t);
  t = u_16;
  return(t);
}
ATerm fetch_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  static ATerm n_19 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
    k_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_19 = ATgetFirst((ATermList) t);
        m_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_7 = NULL,d_7 = NULL,r_5 = NULL;
          t = SSLgetAnnotations(k_19);
          a_7 = t;
          t = l_19;
          t = c_112(t);
          d_7 = t;
          t = (ATerm) ATinsert(CheckATermList(m_19), d_7);
          r_5 = t;
          t = SSLsetAnnotations(r_5, a_7);
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          {
            ATerm b_8 = NULL,f_8 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(k_19);
            b_8 = t;
            t = m_19;
            t = n_19(t);
            f_8 = t;
            t = (ATerm) ATinsert(CheckATermList(f_8), l_19);
            s_5 = t;
            t = SSLsetAnnotations(s_5, b_8);
          }
        }
    }
    return(t);
  }
  t = n_19(t);
  return(t);
}
static ATerm y_4 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm s_19 = NULL;
  t = lookup_table_0_1(h_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(i_42, s_19, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm i_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL;
        t = term_m_9;
        f_20 = t;
        t = term_o_9;
        i_20 = t;
        t = term_q_9;
        t = y_4(f_20, i_20, t);
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_20, term_r_9);
        t = geq_0_0(t);
        t = a_20;
        t = x_105(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = i_9;
        t = a_20;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "-k"))
    {
      t = n_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_20;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_20 = NULL,q_20 = NULL,r_20 = NULL;
  o_20 = t;
  t = SSL_string_to_int(o_20);
  q_20 = t;
  t = term_u_9;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, q_20);
  t = b_5(r_20, q_20, t);
  t = o_20;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, z_1, a_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  if(match_string(t, "-S"))
    {
      t = t_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_20;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_20 = NULL,a_21 = NULL;
  t = term_o_9;
  x_20 = t;
  t = term_x_9;
  a_21 = t;
  t = term_z_9;
  t = b_5(x_20, a_21, t);
  t = term_c_10;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm b_21 = NULL,d_21 = NULL,e_21 = NULL;
  b_21 = t;
  t = SSL_string_to_int(b_21);
  d_21 = t;
  t = term_o_9;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, d_21);
  t = b_5(e_21, d_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_21);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  t = term_g_10;
  f_21 = t;
  t = term_f_1;
  g_21 = t;
  t = term_h_10;
  t = b_5(f_21, g_21, t);
  t = term_k_10;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_2, d_2, f_2, t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = q_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_2, m_2, n_2, t);
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = Option_3_0(q_2, r_2, t_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  t = term_m_9;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, e_35, f_35);
  t = lookup_table_0_1(h_21, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(e_35, f_35, i_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_9, e_35, f_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
      t = term_f_1;
      t = h_0(t);
      o_21 = t;
      t = term_w_10;
      p_21 = t;
      t = term_x_10;
      q_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, o_21);
      t = z_4(p_21, q_21, o_21, t);
      _fail(t);
    }
  else
    {
      ATerm o_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_21 = ATgetFirst((ATermList) t);
          n_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_21;
      t = d_0(t);
      t = term_f_1;
      t = g_0(t);
      o_22 = t;
      t = (ATerm) ATinsert(CheckATermList(n_21), o_22);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  if(match_string(t, "-o"))
    {
      t = q_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_22;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  t = term_y_10;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, r_22);
  t = b_5(s_22, r_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_22);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, w_2, y_2, t);
  return(t);
}
static ATerm z_4 (ATerm o_40, ATerm p_40, ATerm n_40, ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, p_40);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_11 = ATgetArgument(t, 0);
            ATerm d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_40, p_40);
        t = y_4(o_40, p_40, t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
  }
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_40, p_40, (ATerm) ATinsert(CheckATermList(v_22), n_40));
  t = lookup_table_0_1(o_40, t);
  y_22 = t;
  t = (ATerm) ATinsert(CheckATermList(v_22), n_40);
  w_22 = t;
  t = y_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(p_40, w_22, x_22, t);
  t = u_22;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
      t = term_f_1;
      t = p_0(t);
      j_23 = t;
      t = term_w_10;
      k_23 = t;
      t = term_x_10;
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, j_23);
      t = z_4(k_23, l_23, j_23, t);
      _fail(t);
    }
  else
    {
      ATerm p_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_23 = ATgetFirst((ATermList) t);
          g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      t = m_0(t);
      t = h_23;
      t = o_0(t);
      p_23 = t;
      t = (ATerm) ATinsert(CheckATermList(i_23), p_23);
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  if(match_string(t, "-i"))
    {
      t = r_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  t = term_h_11;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, s_23);
  t = b_5(t_23, s_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_23);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, c_3, f_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_1;
  t = whoami_0_0(t);
  u_23 = t;
  t = term_i_6;
  w_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_11), u_23);
  x_23 = t;
  t = SSL_printnl(w_23, x_23);
  t = term_n_6;
  v_23 = t;
  t = SSL_exit(v_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  t = term_m_9;
  y_23 = t;
  t = term_k_11;
  z_23 = t;
  t = term_o_11;
  t = y_4(y_23, z_23, t);
  return(t);
}
static ATerm u_4 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_37, x_37);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = SSL_addr(w_37, x_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_24;
      t = p_117(t);
    }
  else
    {
      ATerm g_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_24;
      t = foldr_2_0(p_117, q_117, t);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_24, g_24);
      t = q_117(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_x_9;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm q_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(q_8, s_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_24 = NULL,m_8 = NULL,n_8 = NULL;
  t = times_0_0(t);
  n_8 = t;
  t = SSL_explode_term(n_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8;
  t = foldr_2_0(g_3, j_3, t);
  j_24 = t;
  t = SSL_TicksToSeconds(j_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_24;
        if((v_24 != t))
          {
            _fail(t);
          }
        t = u_24;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATmakeAppl(sym__2, v_24, w_24);
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_24, w_24);
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(v_24, w_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_24, w_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
        t = term_m_9;
        d_25 = t;
        t = term_o_9;
        e_25 = t;
        t = term_q_9;
        t = y_4(d_25, e_25, t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_n_6);
        t = geq_0_0(t);
        t = a_25;
        t = w_105(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = a_25;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = run_time_0_0(t);
  g_25 = t;
  t = term_f_1;
  t = whoami_0_0(t);
  h_25 = t;
  t = term_i_6;
  j_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), g_25), term_y_11), h_25);
  k_25 = t;
  t = SSL_printnl(j_25, k_25);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), g_25), term_y_11), h_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_9;
  l_25 = t;
  t = SSL_exit(l_25);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_25 = ATgetArgument(t, 0);
          {
            ATerm k_9 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(w_25);
            k_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_25);
            v_5 = t;
            t = SSLsetAnnotations(v_5, k_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL,p_25 = NULL;
      t = term_m_9;
      o_25 = t;
      t = term_c_12;
      p_25 = t;
      t = term_d_12;
      t = y_4(o_25, p_25, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = fetch_1_0(n_3, t);
    }
  t = f_126(t);
  return(t);
}
static ATerm c_5 (ATerm g_45, ATerm h_45, ATerm i_45, ATerm t)
{
  ATerm y_25 = NULL;
  t = SSL_hashtable_put(i_45, g_45, h_45);
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_25);
  return(t);
}
static ATerm d_5 (ATerm j_45, ATerm k_45, ATerm t)
{
  t = SSL_hashtable_get(k_45, j_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_42, ATerm t)
{
  ATerm h_26 = NULL;
  t = table_hashtable_0_0(t);
  h_26 = t;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL;
        t = h_26;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_5(a_42, s_9, t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        {
          ATerm b_10 = NULL;
          t = a_42;
          t = table_create_0_0(t);
          t = h_26;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_5(a_42, b_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_hashtable_create(o_45, p_45);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_26);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL;
  l_26 = t;
  t = term_g_12;
  p_26 = t;
  t = term_h_12;
  q_26 = t;
  t = l_26;
  t = new_hashtable_0_2(p_26, q_26, t);
  m_26 = t;
  t = l_26;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(l_26, m_26, n_26, t);
  t = l_26;
  return(t);
}
static ATerm w_4 (ATerm l_45, ATerm m_45, ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_hashtable_remove(m_45, l_45);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_26);
  return(t);
}
static ATerm x_4 (ATerm q_45, ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_hashtable_destroy(q_45);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_26);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_table_hashtable();
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_26);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  u_26 = t;
  t = table_hashtable_0_0(t);
  v_26 = t;
  t = lookup_table_0_1(u_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(x_26, t);
  t = v_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(u_26, w_26, t);
  t = u_26;
  return(t);
}
ATerm map_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  static ATerm m_27 (ATerm t)
  {
    ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
    j_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_27;
      }
    else
      {
        ATerm j_10 = NULL,n_10 = NULL,p_10 = NULL,x_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_27 = ATgetFirst((ATermList) t);
            l_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_27);
        j_10 = t;
        t = k_27;
        t = s_111(t);
        n_10 = t;
        t = l_27;
        t = m_27(t);
        p_10 = t;
        t = (ATerm) ATinsert(CheckATermList(p_10), n_10);
        x_5 = t;
        t = SSLsetAnnotations(x_5, j_10);
      }
    return(t);
  }
  t = m_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_27 = ATgetFirst((ATermList) t);
      q_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_27 = NULL,v_27 = NULL;
        static ATerm r_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_27)), not_null(v_27));
          return(t);
        }
        t = q_27;
        t = l_0(t);
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
        t = p_27;
        t = j_0(t);
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = q_27;
        t = reverse_acc_2_0(j_0, r_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_1;
      t = l_0(t);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,c_6 = NULL;
  d_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_28);
  c_6 = t;
  t = SSLsetAnnotations(c_6, b_28);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_28), term_i_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_27 = NULL,a_28 = NULL;
      t = term_m_9;
      z_27 = t;
      t = term_k_11;
      a_28 = t;
      t = term_o_11;
      t = y_4(z_27, a_28, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = fetch_1_0(s_3, t);
    }
  t = term_l_12;
  t = echo_0_0(t);
  t = term_w_10;
  x_27 = t;
  t = term_x_10;
  y_27 = t;
  t = term_m_12;
  t = y_4(x_27, y_27, t);
  t = reverse_acc_2_0(_id, c_4, t);
  t = map_1_0(d_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_12 = ATgetFirst((ATermList) t);
                ATerm q_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_28;
          }
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATinsert(ATempty, h_28);
      }
  }
  i_28 = t;
  t = term_h_8;
  j_28 = t;
  t = SSL_printnl(j_28, i_28);
  t = h_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  t = term_m_9;
  n_28 = t;
  t = term_k_11;
  o_28 = t;
  t = term_o_11;
  t = y_4(n_28, o_28, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  t = term_t_12;
  p_28 = t;
  t = term_f_1;
  q_28 = t;
  t = term_u_12;
  t = b_5(p_28, q_28, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  t = term_t_12;
  t_28 = t;
  t = term_f_1;
  u_28 = t;
  t = term_u_12;
  t = b_5(t_28, u_28, t);
  t = term_y_12;
  r_28 = t;
  t = term_f_1;
  s_28 = t;
  t = term_a_13;
  t = b_5(r_28, s_28, t);
  t = term_c_13;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, h_4, t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = Option_3_0(i_4, f_5, i_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,g_6 = NULL;
  a_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  v_28 = t;
  t = w_28;
  t = f_82(t);
  y_28 = t;
  t = x_28;
  t = g_82(t);
  z_28 = t;
  t = (ATerm) ATinsert(CheckATermList(z_28), y_28);
  g_6 = t;
  t = SSLsetAnnotations(g_6, v_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_128 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,k_29 = NULL,l_29 = NULL,k_6 = NULL;
  f_29 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_13;
        t = i_128(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
      }
  }
  t = f_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_29 = ATgetFirst((ATermList) t);
      i_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  g_29 = t;
  t = term_k_11;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, h_29);
  t = b_5(l_29, h_29, t);
  t = i_29;
  {
    static ATerm v_29 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_29 = NULL;
              o_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_29;
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = i_128(t);
              t = Cons_2_0(_id, v_29, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          {
            ATerm r_29 = NULL,s_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_29 = ATgetFirst((ATermList) t);
                s_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_29), (ATerm) ATmakeAppl(sym_Undefined_1, r_29));
          }
        }
      return(t);
    }
    t = v_29(t);
  }
  k_29 = t;
  t = (ATerm) ATinsert(CheckATermList(k_29), (ATerm) ATmakeAppl(sym_Program_1, h_29));
  k_6 = t;
  t = SSLsetAnnotations(k_6, g_29);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  if(match_string(t, "--help"))
    {
      t = p_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_30;
        }
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  t = term_c_12;
  q_30 = t;
  t = term_f_1;
  r_30 = t;
  t = term_o_13;
  t = b_5(q_30, r_30, t);
  t = term_p_13;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_128 (ATerm), ATerm t)
{
  ATerm f_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  j_30 = t;
  t = term_w_10;
  k_30 = t;
  t = term_r_13;
  t = lookup_table_0_1(k_30, t);
  o_30 = t;
  t = term_x_10;
  l_30 = t;
  t = (ATerm) ATempty;
  m_30 = t;
  t = o_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(l_30, m_30, n_30, t);
  t = j_30;
  {
    static ATerm j_5 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_128(t);
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_5, n_5, o_5, t);
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_5, t);
  }
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL;
        c_31 = t;
        {
          ATerm z_13 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_11 = NULL;
              t = c_31;
              {
                ATerm f_14 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_11 = NULL,g_11 = NULL;
                    t = term_m_9;
                    f_11 = t;
                    t = term_c_12;
                    g_11 = t;
                    t = term_d_12;
                    t = y_4(f_11, g_11, t);
                    LocalPopChoice(g_14);
                  }
                else
                  {
                    t = f_14;
                    t = fetch_1_0(t_5, t);
                  }
              }
              t = c_31;
              t = default_system_usage_0_0(t);
              t = term_x_9;
              e_11 = t;
              t = SSL_exit(e_11);
              LocalPopChoice(c_14);
            }
          else
            {
              t = z_13;
              {
                ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
                t = term_m_9;
                m_11 = t;
                t = term_t_12;
                n_11 = t;
                t = term_h_14;
                t = y_4(m_11, n_11, t);
                t = c_31;
                t = default_system_about_0_0(t);
                t = term_x_9;
                l_11 = t;
                t = SSL_exit(l_11);
              }
            }
        }
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
              static ATerm u_5 (ATerm t)
              {
                ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,u_6 = NULL;
                i_31 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_31);
                g_31 = t;
                t = h_31;
                if(((f_30 != NULL) && (f_30 != t)))
                  _fail(t);
                else
                  f_30 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_31);
                u_6 = t;
                t = SSLsetAnnotations(u_6, g_31);
                return(t);
              }
              t = fetch_1_0(u_5, t);
              t = term_i_6;
              e_31 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), term_k_14);
              f_31 = t;
              t = SSL_printnl(e_31, f_31);
              t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), term_k_14));
              t = default_system_usage_0_0(t);
              t = term_n_6;
              d_31 = t;
              t = SSL_exit(d_31);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
            }
        }
      }
  }
  i_30 = t;
  t = term_w_10;
  t = table_destroy_0_0(t);
  t = i_30;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t = parse_options_1_0(h_126, t);
  t_31 = t;
  t = term_l_14;
  t = table_create_0_0(t);
  t = term_l_14;
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_m_14, t_31);
  t = lookup_table_0_1(u_31, t);
  x_31 = t;
  t = term_m_14;
  v_31 = t;
  t = x_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(v_31, t_31, w_31, t);
  t = t_31;
  t = j_126(t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_126, t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_126(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = if_verbose2_1_0(e_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = term_u_14;
  y_31 = t;
  t = term_f_1;
  z_31 = t;
  t = term_v_14;
  t = b_5(y_31, z_31, t);
  t = term_w_14;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  a_32 = t;
  t = term_m_9;
  e_32 = t;
  t = term_k_11;
  f_32 = t;
  t = term_o_11;
  t = y_4(e_32, f_32, t);
  b_32 = t;
  t = term_i_6;
  c_32 = t;
  t = (ATerm) ATinsert(ATempty, b_32);
  d_32 = t;
  t = SSL_printnl(c_32, d_32);
  t = a_32;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  static ATerm w_5 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_125(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              {
                ATerm e_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = e_15;
                    {
                      ATerm i_15 = t;
                      int m_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_6, b_6, d_6, t);
                          LocalPopChoice(m_15);
                        }
                      else
                        {
                          t = i_15;
                          {
                            ATerm n_15 = t;
                            int p_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_15);
                              }
                            else
                              {
                                t = n_15;
                                t = keep_option_0_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm z_5 (ATerm t)
  {
    ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
    h_32 = t;
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm f_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_32 != NULL) && (g_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_6, t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = term_s_15;
          g_32 = t;
        }
    }
    t = not_null(g_32);
    t = ReadFromFile_0_0(t);
    i_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
    t = apply_strategy_1_0(q_125, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_5, s_125, y_5, z_5, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,o_8 = NULL;
  o_32 = t;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_32);
  k_32 = t;
  t = m_32;
  {
    ATerm u_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        p_32 = t;
        t = explanation_0_0(t);
        t = p_32;
        LocalPopChoice(w_15);
      }
    else
      {
        t = u_15;
      }
  }
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_32, n_32);
  o_8 = t;
  t = SSLsetAnnotations(o_8, k_32);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_6, _fail, default_usage_0_0, t);
  return(t);
}
