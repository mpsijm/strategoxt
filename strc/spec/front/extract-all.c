#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_Con1_2;
Symbol sym_Con_3;
Symbol sym_Con3_3;
Symbol sym_Con4_4;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_RDecT_3;
Symbol sym_UndefineDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_AddDynRule_2;
Symbol sym_DynRuleId_1;
Symbol sym_CallNoArgs_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Rec_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_EmptyTupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_Mod_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
}
ATerm term_c_48;
ATerm term_b_48;
ATerm term_w_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_e_47;
ATerm term_s_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_k_46;
ATerm term_f_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_b_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_s_42;
ATerm term_p_42;
ATerm term_h_42;
ATerm term_d_42;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_z_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_g_38;
ATerm term_e_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_p_34;
ATerm term_g_34;
ATerm term_g_33;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_h_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_n_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_m_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Call_2, term_g_22, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_29, (ATerm) ATempty);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_f_41);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_k_41);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_p_42);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_g_43, term_u_19);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_19);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_m_43, term_a_30);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_f_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_g_43);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_z_44);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_w_43, term_x_43);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym__2, term_t_45, term_a_30);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_x_45, term_a_30);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_a_30);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym__3, term_w_43, term_x_43, (ATerm) ATempty);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym__2, term_e_41, term_t_45);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__2, term_k_41, term_a_30);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm k_9 (ATerm j_25, ATerm l_25, ATerm m_25, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm o_114 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm q_9 (ATerm x_39, ATerm w_39, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_132 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm t_48 (ATerm a_42, ATerm c_42, ATerm t);
static ATerm u_48 (ATerm j_42, ATerm k_42, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm l_113 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm z_9 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t);
static ATerm i_61 (ATerm z_60, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm u_116 (ATerm), ATerm t);
static ATerm d_10 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_115 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm s_119 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm e_10 (ATerm q_54, ATerm r_54, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm copy_1_0 (ATerm g_138 (ATerm), ATerm t);
static ATerm f_10 (ATerm e_24, ATerm h_24, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_80 (ATerm b_77, ATerm c_77, ATerm d_77, ATerm e_77, ATerm t);
static ATerm i_80 (ATerm t_78, ATerm u_78, ATerm v_78, ATerm w_78, ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm v_127 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_122 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm i_117 (ATerm), ATerm t);
static ATerm r_9 (ATerm b_73, ATerm c_73, ATerm t);
ATerm end_scope_1_0 (ATerm f_148 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_148 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_148 (ATerm), ATerm h_148 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm v_9 (ATerm t_26, ATerm u_26, ATerm y_26, ATerm v_26, ATerm x_26, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm u_82 (ATerm c_81, ATerm d_81, ATerm e_81, ATerm f_81, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm a_128 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_84 (ATerm e_84, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_10 (ATerm o_134 (ATerm), ATerm i_65, ATerm h_65, ATerm t);
ATerm genzip_4_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm q_10 (ATerm t_779, ATerm y_779, ATerm d_79, ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm o_88 (ATerm i_87, ATerm j_87, ATerm k_87, ATerm t);
static ATerm a_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm s_10 (ATerm z_147 (ATerm), ATerm a_148 (ATerm), ATerm b_148 (ATerm), ATerm u_80, ATerm r_80, ATerm z_80, ATerm v_80, ATerm s_80, ATerm t_80, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm z_147 (ATerm), ATerm a_148 (ATerm), ATerm b_148 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm i_32 (ATerm j_31, ATerm l_31, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm v_10 (ATerm i_148 (ATerm), ATerm s_81, ATerm q_81, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm x_10 (ATerm h_73, ATerm i_73, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm y_10 (ATerm w_134 (ATerm), ATerm x_134 (ATerm), ATerm o_65, ATerm n_65, ATerm t);
static ATerm z_10 (ATerm t_134 (ATerm), ATerm k_65, ATerm j_65, ATerm t);
ATerm foldr_3_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm), ATerm u_137 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
static ATerm a_11 (ATerm x_47, ATerm y_47, ATerm t);
static ATerm b_11 (ATerm p_46, ATerm q_46, ATerm t);
static ATerm d_11 (ATerm a_123 (ATerm), ATerm t_339, ATerm v_46, ATerm t);
static ATerm c_11 (ATerm l_46, ATerm m_46, ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm output_1_0 (ATerm p_143 (ATerm), ATerm t);
static ATerm s_99 (ATerm m_99, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_11 (ATerm r_46, ATerm t);
static ATerm f_11 (ATerm s_64, ATerm t_64, ATerm t);
static ATerm g_11 (ATerm z_47, ATerm a_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_101 (ATerm c_100, ATerm t);
static ATerm g_101 (ATerm g_100, ATerm h_100, ATerm i_100, ATerm t);
static ATerm h_101 (ATerm q_100, ATerm r_100, ATerm s_100, ATerm t);
static ATerm h_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_143 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_11 (ATerm s_51, ATerm t_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_11 (ATerm w_72, ATerm x_72, ATerm v_72, ATerm t);
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_11 (ATerm k_54, ATerm l_54, ATerm t);
ATerm foldr_2_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_124 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm need_help_1_0 (ATerm g_143 (ATerm), ATerm t);
static ATerm r_11 (ATerm o_77, ATerm p_77, ATerm q_77, ATerm t);
ATerm lookup_table_0_1 (ATerm i_74, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_77, ATerm x_77, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_11 (ATerm t_77, ATerm u_77, ATerm t);
static ATerm l_11 (ATerm y_77, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_127 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_11 (ATerm r_77, ATerm s_77, ATerm t);
static ATerm n_11 (ATerm p_74, ATerm q_74, ATerm t);
static ATerm r_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm j_145 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm parse_options_1_0 (ATerm i_145 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm k_9 (ATerm j_25, ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL;
  t = term_h_16;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), m_25), term_m_16), l_25), term_k_16), j_25), term_i_16);
  i_0 = t;
  t = SSL_printnl(c_0, i_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), m_25), term_m_16), l_25), term_k_16), j_25), term_i_16);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if(((ATgetType(p_16) != AT_INT) || (ATgetInt((ATermInt) p_16) != 0)))
        _fail(t);
      {
        ATerm q_16 = ATgetArgument(t, 1);
        if(((ATgetType(q_16) != AT_INT) || (ATgetInt((ATermInt) q_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,c_2 = NULL,e_2 = NULL,g_2 = NULL;
  y_1 = t;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_2;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = g_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm r_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        t = a_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_16 = ATgetFirst((ATermList) t);
            ATerm z_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(z_16) == AT_LIST) && !(ATisEmpty(z_16))))
              {
                ATerm b_17 = ATgetFirst((ATermList) z_16);
                ATerm c_17 = (ATerm) ATgetNext((ATermList) z_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm l_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_17;
            }
        }
        t = term_h_16;
        v_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_m_17);
        w_0 = t;
        t = SSL_printnl(v_0, w_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_m_17);
        t = giving_up_0_0(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = r_16;
        {
          ATerm c_1 = NULL,f_1 = NULL;
          t = a_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_17 = ATgetFirst((ATermList) t);
              if(match_cons(n_17, sym__2))
                {
                  c_1 = ATgetArgument(n_17, 0);
                  f_1 = ATgetArgument(n_17, 1);
                }
              else
                _fail(t);
              {
                ATerm o_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(o_17) != AT_LIST) || !(ATisEmpty(o_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_2, (ATerm) ATmakeAppl(sym__2, c_1, f_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_2, (ATerm) ATmakeAppl(sym__2, c_1, f_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,i_8 = NULL;
  d_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      {
        ATerm p_1 = NULL,t_1 = NULL,v_1 = NULL,n_0 = NULL;
        t = SSLgetAnnotations(d_8);
        p_1 = t;
        t = e_8;
        t = k_114(t);
        t_1 = t;
        t = i_8;
        t = k_114(t);
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_1, v_1);
        n_0 = t;
        t = SSLsetAnnotations(n_0, p_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_8 = ATgetArgument(t, 0);
          i_8 = ATgetArgument(t, 1);
          c_8 = ATgetArgument(t, 2);
          {
            ATerm n_2 = NULL,r_2 = NULL,s_2 = NULL,g_3 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(d_8);
            n_2 = t;
            t = e_8;
            t = m_114(t);
            r_2 = t;
            t = i_8;
            t = m_114(t);
            s_2 = t;
            t = c_8;
            t = k_114(t);
            g_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, r_2, s_2, g_3);
            d_1 = t;
            t = SSLsetAnnotations(d_1, n_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_8 = ATgetArgument(t, 0);
              i_8 = ATgetArgument(t, 1);
              c_8 = ATgetArgument(t, 2);
              b_8 = ATgetArgument(t, 3);
              {
                ATerm a_6 = NULL,h_6 = NULL,i_6 = NULL,l_6 = NULL,m_6 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(d_8);
                a_6 = t;
                t = e_8;
                t = m_114(t);
                h_6 = t;
                t = i_8;
                t = m_114(t);
                i_6 = t;
                t = c_8;
                t = m_114(t);
                l_6 = t;
                t = b_8;
                t = k_114(t);
                m_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_6, i_6, l_6, m_6);
                e_1 = t;
                t = SSLsetAnnotations(e_1, a_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  e_8 = ATgetArgument(t, 0);
                  i_8 = ATgetArgument(t, 1);
                  c_8 = ATgetArgument(t, 2);
                  b_8 = ATgetArgument(t, 3);
                  {
                    ATerm q_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,f_8 = NULL,g_1 = NULL;
                    t = SSLgetAnnotations(d_8);
                    q_7 = t;
                    t = e_8;
                    t = m_114(t);
                    w_7 = t;
                    t = i_8;
                    t = m_114(t);
                    x_7 = t;
                    t = c_8;
                    t = m_114(t);
                    y_7 = t;
                    t = b_8;
                    t = k_114(t);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_7, x_7, y_7, f_8);
                    g_1 = t;
                    t = SSLsetAnnotations(g_1, q_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      e_8 = ATgetArgument(t, 0);
                      i_8 = ATgetArgument(t, 1);
                      c_8 = ATgetArgument(t, 2);
                      {
                        ATerm x_8 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,i_1 = NULL;
                        t = SSLgetAnnotations(d_8);
                        x_8 = t;
                        t = e_8;
                        t = m_114(t);
                        d_9 = t;
                        t = i_8;
                        t = m_114(t);
                        e_9 = t;
                        t = c_8;
                        t = m_114(t);
                        f_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_9, e_9, f_9);
                        i_1 = t;
                        t = SSLsetAnnotations(i_1, x_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_8 = ATgetArgument(t, 0);
                          i_8 = ATgetArgument(t, 1);
                          {
                            ATerm s_9 = NULL,w_9 = NULL,x_9 = NULL,j_1 = NULL;
                            t = SSLgetAnnotations(d_8);
                            s_9 = t;
                            t = e_8;
                            t = m_114(t);
                            w_9 = t;
                            t = i_8;
                            t = k_114(t);
                            x_9 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, w_9, x_9);
                            j_1 = t;
                            t = SSLsetAnnotations(j_1, s_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_8 = ATgetArgument(t, 0);
                              i_8 = ATgetArgument(t, 1);
                              {
                                ATerm j_10 = NULL,n_10 = NULL,o_10 = NULL,n_1 = NULL;
                                t = SSLgetAnnotations(d_8);
                                j_10 = t;
                                t = e_8;
                                t = m_114(t);
                                n_10 = t;
                                t = i_8;
                                t = k_114(t);
                                o_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_10, o_10);
                                n_1 = t;
                                t = SSLsetAnnotations(n_1, j_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_8 = ATgetArgument(t, 0);
                                  i_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_11 = NULL,v_11 = NULL,w_11 = NULL,s_1 = NULL;
                                    t = SSLgetAnnotations(d_8);
                                    p_11 = t;
                                    t = e_8;
                                    t = m_114(t);
                                    v_11 = t;
                                    t = i_8;
                                    t = k_114(t);
                                    w_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, v_11, w_11);
                                    s_1 = t;
                                    t = SSLsetAnnotations(s_1, p_11);
                                  }
                                }
                              else
                                {
                                  ATerm e_12 = NULL,r_12 = NULL,s_12 = NULL,u_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      e_8 = ATgetArgument(t, 0);
                                      i_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(d_8);
                                  e_12 = t;
                                  t = e_8;
                                  t = m_114(t);
                                  r_12 = t;
                                  t = i_8;
                                  t = k_114(t);
                                  s_12 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_12, s_12);
                                  u_1 = t;
                                  t = SSLsetAnnotations(u_1, e_12);
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
ATerm dynrule_sargs_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,k_12 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          h_12 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
      t = h_12;
      if(match_cons(t, sym_DynRuleId_1))
        {
          i_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_12;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_17 = ATgetArgument(t, 0);
          k_12 = ATgetArgument(t, 1);
          {
            ATerm v_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_12;
    }
  else
    {
      t = p_17;
      {
        ATerm w_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm z_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_17);
            t = h_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm b_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
        else
          {
            t = w_17;
            if(match_cons(t, sym_AddDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm c_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = h_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm e_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
      }
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm f_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_13 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = d_13;
    }
  else
    {
      t = f_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_13;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm t_13 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_13 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = t_13;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_13;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm q_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = v_12;
      t = map_1_0(e_0, t);
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm s_18 = ATgetArgument(t, 2);
          }
          {
            ATerm u_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_12;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm y_18 = ATgetArgument(t, 1);
          }
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_18);
      t = y_13;
    }
  else
    {
      t = v_18;
      if(match_cons(t, sym_SDefT_4))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
          {
            ATerm b_19 = ATgetArgument(t, 2);
          }
          {
            ATerm c_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_13;
    }
  return(t);
}
static ATerm q_9 (ATerm x_39, ATerm w_39, ATerm t)
{
  t = x_39;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(h_1, c_14, d_14, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      if((g_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(m_1, x_14, y_14, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      if((a_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      if((m_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm e_132 (ATerm), ATerm f_132 (ATerm), ATerm g_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_132 (ATerm), ATerm t)
{
  static ATerm q_15 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
    u_14 = t;
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_132(t);
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          t = (ATerm) ATempty;
        }
    }
    s_14 = t;
    t = u_14;
    {
      ATerm f_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL,p_13 = NULL,q_13 = NULL;
          t = f_132(t);
          v_14 = t;
          t = u_14;
          {
            static ATerm y_0 (ATerm t)
            {
              ATerm i_13 = NULL;
              t = q_15(t);
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_13, v_14);
              t = l_10(h_132, i_13, v_14, t);
              return(t);
            }
            t = g_132(y_0, q_15, z_0, t);
          }
          q_13 = t;
          t = SSL_explode_term(q_13);
          if(match_cons(t, sym__2))
            {
              ATerm i_19 = ATgetArgument(t, 0);
              p_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_13;
          t = foldr_3_0(a_1, b_1, _id, t);
          LocalPopChoice(h_19);
        }
      else
        {
          t = f_19;
          {
            ATerm m_14 = NULL;
            t = SSL_explode_term(u_14);
            if(match_cons(t, sym__2))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                m_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_14;
            t = foldr_3_0(k_1, l_1, q_15, t);
          }
        }
    }
    t_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
    t = z_10(o_1, s_14, t_14, t);
    return(t);
  }
  t = q_15(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm g_16 = NULL,j_16 = NULL,s_16 = NULL,t_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(match_cons(k_19, sym_SVar_1))
        {
          g_16 = ATgetArgument(k_19, 0);
        }
      else
        _fail(t);
      j_16 = ATgetArgument(t, 1);
      s_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_16;
  t = foldr_3_0(x_1, z_1, b_2, t);
  t_16 = t;
  t = s_16;
  t = foldr_3_0(d_2, f_2, h_2, t);
  w_16 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_16, (ATerm) ATmakeAppl(sym__2, t_16, w_16)));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm l_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
      g_17 = t;
      if(match_cons(t, sym_Let_2))
        {
          h_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
          t = g_17;
          t = q_9(h_17, i_17, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
              j_17 = ATgetArgument(t, 2);
              t = i_17;
              t = map_1_0(i_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  h_17 = ATgetArgument(t, 0);
                  i_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, h_17);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_17 = ATgetArgument(t, 0);
                      i_17 = ATgetArgument(t, 1);
                      j_17 = ATgetArgument(t, 2);
                      k_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_17;
                  t = map_1_0(j_2, t);
                }
            }
        }
      LocalPopChoice(n_19);
    }
  else
    {
      t = l_19;
      {
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(match_cons(r_19, sym__2))
        {
          x_19 = ATgetArgument(r_19, 0);
          {
            ATerm s_19 = ATgetArgument(r_19, 1);
          }
        }
      else
        _fail(t);
      if((x_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm a_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(a_17, d_17, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(e_17, f_17, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm s_17 = NULL;
  ATerm w_19 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_17 = ATgetArgument(t, 0);
          {
            ATerm e_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_20);
      t = s_17;
    }
  else
    {
      t = w_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_17;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = g_19;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_19;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = map_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_19 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_19 = ATgetArgument(t, 0);
          {
            ATerm o_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = p_19;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_19;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(q_1, r_1, sboundin_3_0, w_1, t);
  return(t);
}
static ATerm t_48 (ATerm a_42, ATerm c_42, ATerm t)
{
  t = a_42;
  {
    ATerm t_20 = t;
    if((PushChoice() == 0))
      {
        ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,i_42 = NULL,y_2 = NULL;
        i_42 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_42 = ATgetFirst((ATermList) t);
            g_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_42);
        e_42 = t;
        t = g_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_42), f_42);
        y_2 = t;
        t = SSLsetAnnotations(y_2, e_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, a_42);
  return(t);
}
static ATerm u_48 (ATerm j_42, ATerm k_42, ATerm t)
{
  t = j_42;
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm n_42 = NULL,o_42 = NULL,q_42 = NULL,r_42 = NULL,z_2 = NULL;
        r_42 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_42 = ATgetFirst((ATermList) t);
            q_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_42);
        n_42 = t;
        t = q_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_42), o_42);
        z_2 = t;
        t = SSLsetAnnotations(z_2, n_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, j_42);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm q_43 = NULL,v_43 = NULL,y_16 = NULL;
  q_43 = t;
  t = SSL_explode_term(q_43);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            v_43 = ATgetFirst((ATermList) a_21);
            {
              ATerm b_21 = (ATerm) ATgetNext((ATermList) a_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(q_43);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            ATerm e_21 = ATgetFirst((ATermList) d_21);
            ATerm f_21 = (ATerm) ATgetNext((ATermList) d_21);
            if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
              {
                y_16 = ATgetFirst((ATermList) f_21);
                {
                  ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, y_16), v_43));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, m_44), l_44));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, r_44), q_44));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym__2))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, p_45), o_45));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm r_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, v_45), r_45));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm t_42 = NULL,w_42 = NULL,z_42 = NULL,a_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  if(match_cons(t, sym_Anno_2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
      {
        ATerm l_43 = NULL;
        t = f_43;
        t = foldr_2_0(m_2, o_2, t);
        l_43 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, e_43, l_43);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          e_43 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, e_43, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              e_43 = ATgetArgument(t, 0);
              {
                ATerm u_17 = NULL;
                t = e_43;
                {
                  ATerm l_21 = t;
                  int m_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_n_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_o_21;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_p_21;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_q_21;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_21;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(m_21);
                    }
                  else
                    {
                      t = l_21;
                      {
                        ATerm x_17 = NULL;
                        t = SSL_explode_string(e_43);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_21 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_21) != AT_INT) || (ATgetInt((ATermInt) s_21) != 39)))
                              _fail(t);
                            {
                              ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
                                {
                                  x_17 = ATgetFirst((ATermList) t_21);
                                  {
                                    ATerm u_21 = (ATerm) ATgetNext((ATermList) t_21);
                                    if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                                      {
                                        ATerm v_21 = ATgetFirst((ATermList) u_21);
                                        if(((ATgetType(v_21) != AT_INT) || (ATgetInt((ATermInt) v_21) != 39)))
                                          _fail(t);
                                        {
                                          ATerm w_21 = (ATerm) ATgetNext((ATermList) u_21);
                                          if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = x_17;
                      }
                    }
                }
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, u_17);
              }
            }
          else
            {
              ATerm y_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      e_43 = ATgetArgument(t, 0);
                      {
                        ATerm a_22 = ATgetArgument(t, 1);
                      }
                      c_43 = ATgetArgument(t, 2);
                      t_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_21);
                  t = (ATerm) ATmakeAppl(sym_Con_3, e_43, c_43, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_42), (ATerm) ATempty));
                }
              else
                {
                  t = y_21;
                  {
                    ATerm c_22 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            e_43 = ATgetArgument(t, 0);
                            {
                              ATerm e_22 = ATgetArgument(t, 1);
                            }
                            c_43 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_22);
                        t = (ATerm) ATmakeAppl(sym_Con_3, e_43, c_43, term_h_22);
                      }
                    else
                      {
                        t = c_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            e_43 = ATgetArgument(t, 0);
                            f_43 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, e_43, f_43, term_h_22);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                e_43 = ATgetArgument(t, 0);
                                f_43 = ATgetArgument(t, 1);
                                {
                                  static ATerm p_2 (ATerm t)
                                  {
                                    t = f_43;
                                    return(t);
                                  }
                                  t = e_43;
                                  t = foldr_2_0(p_2, q_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    e_43 = ATgetArgument(t, 0);
                                    t = e_43;
                                    t = foldr_2_0(t_2, u_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        e_43 = ATgetArgument(t, 0);
                                        t = e_43;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            w_42 = ATgetFirst((ATermList) t);
                                            z_42 = (ATerm) ATgetNext((ATermList) t);
                                            t = z_42;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_22 = t;
                                                int j_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = t_48(e_43, d_43, t);
                                                    LocalPopChoice(j_22);
                                                  }
                                                else
                                                  {
                                                    t = i_22;
                                                    t = w_42;
                                                  }
                                              }
                                            else
                                              {
                                                t = t_48(e_43, d_43, t);
                                              }
                                          }
                                        else
                                          {
                                            t = t_48(e_43, d_43, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            e_43 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, e_43));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                e_43 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, e_43));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    e_43 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, e_43));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        e_43 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, e_43));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            e_43 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_43), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                e_43 = ATgetArgument(t, 0);
                                                                f_43 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_43), f_43);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    e_43 = ATgetArgument(t, 0);
                                                                    f_43 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm v_2 (ATerm t)
                                                                      {
                                                                        t = f_43;
                                                                        return(t);
                                                                      }
                                                                      t = e_43;
                                                                      t = foldr_2_0(v_2, w_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        e_43 = ATgetArgument(t, 0);
                                                                        t = e_43;
                                                                        t = foldr_2_0(x_2, a_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            e_43 = ATgetArgument(t, 0);
                                                                            f_43 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATinsert(CheckATermList(f_43), e_43));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                e_43 = ATgetArgument(t, 0);
                                                                                t = e_43;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    w_42 = ATgetFirst((ATermList) t);
                                                                                    z_42 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = z_42;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm k_22 = t;
                                                                                        int m_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = u_48(e_43, d_43, t);
                                                                                            LocalPopChoice(m_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_22;
                                                                                            t = w_42;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_48(e_43, d_43, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_48(e_43, d_43, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_n_22;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        e_43 = ATgetArgument(t, 0);
                                                                                        f_43 = ATgetArgument(t, 1);
                                                                                        t = f_43;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            a_43 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, a_43), e_43));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            e_43 = ATgetArgument(t, 0);
                                                                                            t = e_43;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                e_43 = ATgetArgument(t, 0);
                                                                                                f_43 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, e_43, f_43, term_w_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    e_43 = ATgetArgument(t, 0);
                                                                                                    f_43 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, e_43, f_43, term_w_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        e_43 = ATgetArgument(t, 0);
                                                                                                        f_43 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, e_43, (ATerm)ATempty, f_43);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            e_43 = ATgetArgument(t, 0);
                                                                                                            f_43 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, f_43, e_43);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                e_43 = ATgetArgument(t, 0);
                                                                                                                f_43 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, e_43, f_43, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    e_43 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, e_43, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        e_43 = ATgetArgument(t, 0);
                                                                                                                        f_43 = ATgetArgument(t, 1);
                                                                                                                        c_43 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_43, f_43, (ATerm)ATempty, c_43);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            e_43 = ATgetArgument(t, 0);
                                                                                                                            f_43 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, e_43, (ATerm)ATempty, (ATerm)ATempty, f_43);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                e_43 = ATgetArgument(t, 0);
                                                                                                                                f_43 = ATgetArgument(t, 1);
                                                                                                                                c_43 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, e_43, f_43, (ATerm)ATempty, c_43);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    e_43 = ATgetArgument(t, 0);
                                                                                                                                    f_43 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, e_43, (ATerm)ATempty, (ATerm)ATempty, f_43);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        e_43 = ATgetArgument(t, 0);
                                                                                                                                        f_43 = ATgetArgument(t, 1);
                                                                                                                                        c_43 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_43, f_43, (ATerm)ATempty, c_43);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            e_43 = ATgetArgument(t, 0);
                                                                                                                                            f_43 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, e_43, (ATerm)ATempty, (ATerm)ATempty, f_43);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm x_22 = ATgetArgument(t, 0);
                                                                                                                                                f_43 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, f_43);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm Expl_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  y_48 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
      {
        ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
        t = y_48;
        t = new_0_0(t);
        g_49 = t;
        t = new_0_0(t);
        h_49 = t;
        t = new_0_0(t);
        i_49 = t;
        t = new_0_0(t);
        j_49 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_49), i_49), h_49), g_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, g_49), (ATerm) ATmakeAppl(sym_Var_1, i_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_48, (ATerm)ATmakeAppl(sym_Var_1, g_49), (ATerm) ATmakeAppl(sym_Var_1, h_49)), (ATerm) ATmakeAppl(sym_BAM_3, x_48, (ATerm)ATmakeAppl(sym_Var_1, i_49), (ATerm) ATmakeAppl(sym_Var_1, j_49)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_49)), (ATerm) ATmakeAppl(sym_Var_1, h_49))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_48 = ATgetArgument(t, 0);
          {
            ATerm o_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL;
            t = y_48;
            t = new_0_0(t);
            r_49 = t;
            t = z_48;
            {
              static ATerm b_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((o_49 != NULL) && (o_49 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_49 = ATgetArgument(t, 0);
                    if(((p_49 != NULL) && (p_49 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_49);
                return(t);
              }
              t = oncetd_1_0(b_3, t);
            }
            s_49 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_49)), not_null(o_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_49)), (ATerm) ATmakeAppl(sym_Build_1, s_49))));
          }
        }
      else
        {
          ATerm u_49 = NULL,v_49 = NULL,x_49 = NULL,y_49 = NULL,b_50 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_48;
          t = new_0_0(t);
          x_49 = t;
          t = new_0_0(t);
          y_49 = t;
          t = z_48;
          {
            static ATerm i_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((u_49 != NULL) && (u_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_49 = ATgetArgument(t, 0);
                  if(((v_49 != NULL) && (v_49 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_49);
              return(t);
            }
            t = oncetd_1_0(i_3, t);
          }
          b_50 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_49)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_49))))), (ATerm)ATmakeAppl(sym_Var_1, x_49), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_49)), not_null(u_49)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
        t = d_50;
        t = new_0_0(t);
        m_50 = t;
        t = e_50;
        {
          static ATerm k_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_50 != NULL) && (k_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_50 = ATgetArgument(t, 0);
                if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_50), k_50);
            return(t);
          }
          t = pat_td_1_0(k_3, t);
        }
        n_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_50))))));
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
              t = d_50;
              t = new_0_0(t);
              q_50 = t;
              t = e_50;
              {
                static ATerm l_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_50);
                  return(t);
                }
                t = pat_td_1_0(l_3, t);
              }
              r_50 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_50)), not_null(p_50))));
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                ATerm w_50 = NULL,y_50 = NULL,g_51 = NULL,o_51 = NULL;
                t = d_50;
                t = new_0_0(t);
                g_51 = t;
                t = e_50;
                {
                  static ATerm m_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_50 = ATgetArgument(t, 0);
                        if(((w_50 != NULL) && (w_50 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_50 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_51);
                    return(t);
                  }
                  t = pat_td_1_0(m_3, t);
                }
                o_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, g_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_50)), not_null(y_50)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_113(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm r_55 = NULL,v_55 = NULL,w_55 = NULL,d_56 = NULL;
        v_55 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_55 = ATgetArgument(t, 0);
            d_56 = ATgetArgument(t, 1);
            {
              ATerm g_18 = NULL,j_18 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(v_55);
              g_18 = t;
              t = d_56;
              {
                static ATerm n_3 (ATerm t)
                {
                  t = pat_td_1_0(l_113, t);
                  return(t);
                }
                t = fetch_1_0(n_3, t);
              }
              j_18 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_55, j_18);
              c_3 = t;
              t = SSLsetAnnotations(c_3, g_18);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                w_55 = ATgetArgument(t, 0);
                d_56 = ATgetArgument(t, 1);
                {
                  ATerm j_23 = t;
                  int k_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_18 = NULL,w_18 = NULL,d_3 = NULL;
                      t = SSLgetAnnotations(v_55);
                      t_18 = t;
                      t = d_56;
                      t = pat_td_1_0(l_113, t);
                      w_18 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, w_55, w_18);
                      d_3 = t;
                      t = SSLsetAnnotations(d_3, t_18);
                      LocalPopChoice(k_23);
                    }
                  else
                    {
                      t = j_23;
                      {
                        ATerm m_19 = NULL,t_19 = NULL,e_3 = NULL;
                        t = SSLgetAnnotations(v_55);
                        m_19 = t;
                        t = w_55;
                        t = pat_td_1_0(l_113, t);
                        t_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, t_19, d_56);
                        e_3 = t;
                        t = SSLsetAnnotations(e_3, m_19);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    w_55 = ATgetArgument(t, 0);
                    d_56 = ATgetArgument(t, 1);
                    r_55 = ATgetArgument(t, 2);
                    {
                      ATerm l_20 = NULL,p_20 = NULL,f_3 = NULL;
                      t = SSLgetAnnotations(v_55);
                      l_20 = t;
                      t = r_55;
                      {
                        static ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1_0(l_113, t);
                          return(t);
                        }
                        t = fetch_1_0(o_3, t);
                      }
                      p_20 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, w_55, d_56, p_20);
                      f_3 = t;
                      t = SSLsetAnnotations(f_3, l_20);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        w_55 = ATgetArgument(t, 0);
                        d_56 = ATgetArgument(t, 1);
                        r_55 = ATgetArgument(t, 2);
                        {
                          ATerm x_21 = NULL,b_22 = NULL,h_3 = NULL;
                          t = SSLgetAnnotations(v_55);
                          x_21 = t;
                          t = r_55;
                          {
                            static ATerm p_3 (ATerm t)
                            {
                              t = pat_td_1_0(l_113, t);
                              return(t);
                            }
                            t = fetch_1_0(p_3, t);
                          }
                          b_22 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, w_55, d_56, b_22);
                          h_3 = t;
                          t = SSLsetAnnotations(h_3, x_21);
                        }
                      }
                    else
                      {
                        ATerm y_22 = NULL,b_23 = NULL,j_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            w_55 = ATgetArgument(t, 0);
                            d_56 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_55);
                        y_22 = t;
                        t = d_56;
                        t = pat_td_1_0(l_113, t);
                        b_23 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, w_55, b_23);
                        j_3 = t;
                        t = SSLsetAnnotations(j_3, y_22);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  x_56 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_56 = NULL,a_57 = NULL,c_57 = NULL,f_57 = NULL;
        t = x_56;
        t = new_0_0(t);
        c_57 = t;
        t = y_56;
        {
          static ATerm s_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_56 != NULL) && (z_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_56 = ATgetArgument(t, 0);
                if(((a_57 != NULL) && (a_57 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_57 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, c_57);
            return(t);
          }
          t = pat_td_1_0(s_3, t);
        }
        f_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_57)), not_null(z_56))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_57)))), (ATerm) ATmakeAppl(sym_Build_1, f_57)));
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm b_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_57 = NULL,j_57 = NULL,o_57 = NULL;
              t = x_56;
              t = new_0_0(t);
              j_57 = t;
              t = y_56;
              {
                static ATerm t_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_57 != NULL) && (h_57 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_57);
                  return(t);
                }
                t = pat_td_1_0(t_3, t);
              }
              o_57 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_57), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_57)))), (ATerm) ATmakeAppl(sym_Build_1, o_57)));
              LocalPopChoice(r_24);
            }
          else
            {
              t = b_24;
              {
                ATerm s_57 = NULL,u_57 = NULL,a_58 = NULL,b_58 = NULL;
                t = x_56;
                t = new_0_0(t);
                a_58 = t;
                t = y_56;
                {
                  static ATerm v_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_57 != NULL) && (s_57 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_57 = ATgetArgument(t, 0);
                        if(((u_57 != NULL) && (u_57 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_57 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_58);
                    return(t);
                  }
                  t = pat_td_1_0(v_3, t);
                }
                b_58 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_57), not_null(u_57), (ATerm) ATmakeAppl(sym_Var_1, a_58))), (ATerm) ATmakeAppl(sym_Build_1, b_58)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,k_58 = NULL,l_58 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_58 = ATgetArgument(t, 0);
      l_58 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_58, l_58);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_58 = ATgetArgument(t, 0);
          t = k_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_58 = ATgetFirst((ATermList) t);
              h_58 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_58, (ATerm) ATmakeAppl(sym_LChoices_1, h_58));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_58 = ATgetArgument(t, 0);
              t = k_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_58 = ATgetFirst((ATermList) t);
                  h_58 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_58, (ATerm) ATmakeAppl(sym_Choices_1, h_58));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_u_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_58 = ATgetArgument(t, 0);
                  t = k_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_58 = ATgetFirst((ATermList) t);
                      h_58 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_58, (ATerm) ATmakeAppl(sym_Seqs_1, h_58));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      k_58 = ATgetArgument(t, 0);
                      l_58 = ATgetArgument(t, 1);
                      i_58 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, l_58, (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, i_58), k_58)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          k_58 = ATgetArgument(t, 0);
                          l_58 = ATgetArgument(t, 1);
                          i_58 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_58)), k_58), (ATerm) ATmakeAppl(sym_Build_1, l_58)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              k_58 = ATgetArgument(t, 0);
                              l_58 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_58, (ATerm) ATmakeAppl(sym_Match_1, l_58));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  k_58 = ATgetArgument(t, 0);
                                  l_58 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_58), l_58);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      k_58 = ATgetArgument(t, 0);
                                      l_58 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_58), k_58);
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
static ATerm w_3 (ATerm t)
{
  ATerm w_24 = t;
  if((PushChoice() == 0))
    {
      ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,q_3 = NULL;
      a_60 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_60);
      y_59 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_59);
      q_3 = t;
      t = SSLsetAnnotations(q_3, y_59);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_24;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_60 = ATgetFirst((ATermList) t);
      i_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_60, i_60);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if(match_cons(y_24, sym__2))
        {
          j_60 = ATgetArgument(y_24, 0);
          k_60 = ATgetArgument(y_24, 1);
        }
      else
        _fail(t);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(match_cons(a_25, sym__2))
          {
            l_60 = ATgetArgument(a_25, 0);
            m_60 = ATgetArgument(a_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_60), j_60), (ATerm) ATinsert(CheckATermList(m_60), k_60));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm p_60 = NULL,r_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_60 = ATgetFirst((ATermList) t);
      r_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_60, r_60);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(match_cons(b_25, sym__2))
        {
          s_60 = ATgetArgument(b_25, 0);
          t_60 = ATgetArgument(b_25, 1);
        }
      else
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(match_cons(d_25, sym__2))
          {
            u_60 = ATgetArgument(d_25, 0);
            v_60 = ATgetArgument(d_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_60), s_60), (ATerm) ATinsert(CheckATermList(v_60), t_60));
  return(t);
}
static ATerm z_9 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,w_59 = NULL,x_59 = NULL,r_3 = NULL;
  t = a_34;
  t = fetch_1_0(w_3, t);
  t = a_34;
  t = genzip_4_0(b_4, c_4, d_4, LiftPrimArg_0_0, t);
  x_59 = t;
  if(match_cons(t, sym__2))
    {
      r_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_59);
  q_59 = t;
  t = r_59;
  t = concat_0_0(t);
  t_59 = t;
  t = s_59;
  t = genzip_4_0(e_4, f_4, g_4, _id, t);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_59, w_59);
  r_3 = t;
  t = SSLsetAnnotations(r_3, q_59);
  if(match_cons(t, sym__2))
    {
      n_59 = ATgetArgument(t, 0);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(match_cons(h_25, sym__2))
          {
            o_59 = ATgetArgument(h_25, 0);
            p_59 = ATgetArgument(h_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_59, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_59), (ATerm) ATmakeAppl(sym_CallT_3, y_33, z_33, p_59)));
  return(t);
}
static ATerm i_61 (ATerm z_60, ATerm t)
{
  ATerm b_61 = NULL;
  t = z_60;
  {
    ATerm k_25 = t;
    if((PushChoice() == 0))
      {
        ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,u_3 = NULL;
        e_61 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_61);
        c_61 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_61);
        u_3 = t;
        t = SSLsetAnnotations(u_3, c_61);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_25;
      }
  }
  t = new_0_0(t);
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, b_61), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_61)))), (ATerm) ATmakeAppl(sym_Var_1, b_61)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL;
  f_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_61 = ATgetArgument(t, 0);
      {
        ATerm q_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_61(f_61, t);
            LocalPopChoice(s_26);
          }
        else
          {
            t = q_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_22, (ATerm) ATmakeAppl(sym_Var_1, g_61)));
          }
      }
    }
  else
    {
      t = i_61(f_61, t);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm w_26 = t;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,x_3 = NULL;
      z_23 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_23);
      x_23 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_23);
      x_3 = t;
      t = SSLsetAnnotations(x_3, x_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_26;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_24 = ATgetFirst((ATermList) t);
      d_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym__2))
        {
          f_24 = ATgetArgument(z_26, 0);
          g_24 = ATgetArgument(z_26, 1);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(match_cons(a_27, sym__2))
          {
            i_24 = ATgetArgument(a_27, 0);
            j_24 = ATgetArgument(a_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_24), f_24), (ATerm) ATinsert(CheckATermList(j_24), g_24));
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_24 = ATgetFirst((ATermList) t);
      l_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_24, l_24);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          m_24 = ATgetArgument(b_27, 0);
          n_24 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(match_cons(c_27, sym__2))
          {
            o_24 = ATgetArgument(c_27, 0);
            q_24 = ATgetArgument(c_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_24), m_24), (ATerm) ATinsert(CheckATermList(q_24), n_24));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_27 = t;
  if((PushChoice() == 0))
    {
      ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,z_3 = NULL;
      a_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_26);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_25);
      z_3 = t;
      t = SSLsetAnnotations(z_3, y_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_27;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_26 = NULL,g_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_26, g_26);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if(match_cons(e_27, sym__2))
        {
          h_26 = ATgetArgument(e_27, 0);
          i_26 = ATgetArgument(e_27, 1);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(match_cons(f_27, sym__2))
          {
            j_26 = ATgetArgument(f_27, 0);
            k_26 = ATgetArgument(f_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_26), h_26), (ATerm) ATinsert(CheckATermList(k_26), i_26));
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_26 = ATgetFirst((ATermList) t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_26, m_26);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      if(match_cons(g_27, sym__2))
        {
          n_26 = ATgetArgument(g_27, 0);
          o_26 = ATgetArgument(g_27, 1);
        }
      else
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(match_cons(j_27, sym__2))
          {
            p_26 = ATgetArgument(j_27, 0);
            r_26 = ATgetArgument(j_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_26), n_26), (ATerm) ATinsert(CheckATermList(r_26), o_26));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm r_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
      r_64 = ATgetArgument(t, 2);
      {
        ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,y_3 = NULL;
        t = r_64;
        t = fetch_1_0(i_4, t);
        t = r_64;
        t = genzip_4_0(l_4, m_4, o_4, LiftPrimArg_0_0, t);
        w_23 = t;
        if(match_cons(t, sym__2))
          {
            s_23 = ATgetArgument(t, 0);
            t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_23);
        r_23 = t;
        t = s_23;
        t = concat_0_0(t);
        u_23 = t;
        t = t_23;
        t = genzip_4_0(p_4, s_4, t_4, _id, t);
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_23, v_23);
        y_3 = t;
        t = SSLsetAnnotations(y_3, r_23);
        if(match_cons(t, sym__2))
          {
            o_23 = ATgetArgument(t, 0);
            {
              ATerm k_27 = ATgetArgument(t, 1);
              if(match_cons(k_27, sym__2))
                {
                  p_23 = ATgetArgument(k_27, 0);
                  q_23 = ATgetArgument(k_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_23), (ATerm) ATmakeAppl(sym_PrimT_3, v_64, w_64, q_23)));
      }
    }
  else
    {
      ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,a_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          v_64 = ATgetArgument(t, 0);
          w_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_64;
      t = fetch_1_0(u_4, t);
      t = w_64;
      t = genzip_4_0(v_4, x_4, z_4, LiftPrimArg_0_0, t);
      w_25 = t;
      if(match_cons(t, sym__2))
        {
          s_25 = ATgetArgument(t, 0);
          t_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_25);
      r_25 = t;
      t = s_25;
      t = concat_0_0(t);
      u_25 = t;
      t = t_25;
      t = genzip_4_0(b_5, d_5, g_5, _id, t);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
      a_4 = t;
      t = SSLsetAnnotations(a_4, r_25);
      if(match_cons(t, sym__2))
        {
          n_25 = ATgetArgument(t, 0);
          {
            ATerm l_27 = ATgetArgument(t, 1);
            if(match_cons(l_27, sym__2))
              {
                o_25 = ATgetArgument(l_27, 0);
                p_25 = ATgetArgument(l_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, n_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_25), (ATerm) ATmakeAppl(sym_PrimT_3, v_64, (ATerm)ATempty, p_25)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t)
{
  static ATerm z_64 (ATerm t)
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_121(t);
        t = z_64(t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = m_121(t);
      }
    return(t);
  }
  t = z_64(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,d_66 = NULL,e_66 = NULL;
  e_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
      d_66 = ATgetArgument(t, 2);
      {
        ATerm i_27 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(e_66);
        i_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, z_65, a_66, d_66);
        h_4 = t;
        t = SSLsetAnnotations(h_4, i_27);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = e_66;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_27;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
  i_68 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_68 = ATgetArgument(t, 0);
      k_68 = ATgetArgument(t, 1);
      h_68 = ATgetArgument(t, 2);
      {
        ATerm b_28 = NULL,j_4 = NULL;
        t = SSLgetAnnotations(i_68);
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, j_68, k_68, h_68);
        j_4 = t;
        t = SSLsetAnnotations(j_4, b_28);
      }
    }
  else
    {
      ATerm s_28 = NULL,k_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          j_68 = ATgetArgument(t, 0);
          k_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_68);
      s_28 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, j_68, k_68);
      k_4 = t;
      t = SSLsetAnnotations(k_4, s_28);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,b_69 = NULL,c_69 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      w_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_68;
  if(match_cons(t, sym_StratRule_3))
    {
      x_68 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
      c_69 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_69), (ATerm) ATmakeAppl(sym_Where_1, c_69)), x_68));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          x_68 = ATgetArgument(t, 0);
          b_69 = ATgetArgument(t, 1);
          c_69 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_68;
      t = pureterm_0_0(t);
      t = b_69;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, b_69)), (ATerm) ATmakeAppl(sym_Where_1, c_69)), (ATerm) ATmakeAppl(sym_Match_1, x_68)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  static ATerm y_69 (ATerm t)
  {
    ATerm r_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_116(t);
        LocalPopChoice(t_27);
      }
    else
      {
        t = r_27;
        t = SRTS_one(y_69, t);
      }
    return(t);
  }
  t = y_69(t);
  return(t);
}
static ATerm d_10 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
  t = new_0_0(t);
  d_70 = t;
  t = l_29;
  {
    static ATerm l_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_27 = ATgetArgument(t, 0);
          if(match_cons(u_27, sym_Var_1))
            {
              if(((c_70 != NULL) && (c_70 != ATgetArgument(u_27, 0))))
                _fail(ATgetArgument(u_27, 0));
              else
                c_70 = ATgetArgument(u_27, 0);
            }
          else
            _fail(t);
          if(((a_70 != NULL) && (a_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_70 = ATgetArgument(t, 1);
          {
            ATerm y_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_70);
      return(t);
    }
    t = oncetd_1_0(l_5, t);
  }
  e_70 = t;
  t = m_29;
  {
    static ATerm n_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_27 = ATgetArgument(t, 0);
          if(match_cons(z_27, sym_Var_1))
            {
              if(((c_70 != NULL) && (c_70 != ATgetArgument(z_27, 0))))
                _fail(ATgetArgument(z_27, 0));
              else
                c_70 = ATgetArgument(z_27, 0);
            }
          else
            _fail(t);
          if(((b_70 != NULL) && (b_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_70 = ATgetArgument(t, 1);
          {
            ATerm c_28 = ATgetArgument(t, 2);
            if(match_cons(c_28, sym_CallT_3))
              {
                if(((z_69 != NULL) && (z_69 != ATgetArgument(c_28, 0))))
                  _fail(ATgetArgument(c_28, 0));
                else
                  z_69 = ATgetArgument(c_28, 0);
                {
                  ATerm d_28 = ATgetArgument(c_28, 1);
                  if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
                    _fail(t);
                }
                {
                  ATerm e_28 = ATgetArgument(c_28, 2);
                  if(((ATgetType(e_28) != AT_LIST) || !(ATisEmpty(e_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, d_70);
      return(t);
    }
    t = oncetd_1_0(n_5, t);
  }
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_70), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, e_70, f_70, (ATerm) ATmakeAppl(sym_Seq_2, n_29, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(z_69), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_70), not_null(b_70), term_w_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_70)), (ATerm) ATmakeAppl(sym_Var_1, d_70))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
          y_70 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_70 = ATgetArgument(t, 0);
              t = z_70;
              if(match_cons(t, sym_Rule_3))
                {
                  v_70 = ATgetArgument(t, 0);
                  w_70 = ATgetArgument(t, 1);
                  x_70 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_70;
              t = d_10(v_70, w_70, x_70, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm i_29 = NULL,p_29 = NULL,n_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_70 = ATgetArgument(t, 0);
                  a_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_70);
              i_29 = t;
              t = a_71;
              t = desugarRule_0_0(t);
              p_29 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_70, p_29);
              n_4 = t;
              t = SSLsetAnnotations(n_4, i_29);
            }
          LocalPopChoice(j_28);
        }
      else
        {
          t = h_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    t = topdown_1_0(q_115, t);
    return(t);
  }
  t = q_115(t);
  t = SRTS_all(o_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
    }
  t = repeat_2_0(r_5, _id, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_72 = NULL,d_72 = NULL,j_72 = NULL,n_72 = NULL;
            c_72 = t;
            if(match_cons(t, sym_CallT_3))
              {
                d_72 = ATgetArgument(t, 0);
                j_72 = ATgetArgument(t, 1);
                n_72 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = c_72;
            t = z_9(d_72, j_72, n_72, t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm q_28 = t;
              int r_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_28);
                }
              else
                {
                  t = q_28;
                  {
                    ATerm t_28 = t;
                    int u_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(u_28);
                      }
                    else
                      {
                        t = t_28;
                        {
                          ATerm v_28 = t;
                          int w_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_28 = t;
                              int y_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_72 = NULL,d_73 = NULL,g_73 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      u_72 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_72;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_73 = ATgetArgument(t, 0);
                                      t = d_73;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_73 = ATgetArgument(t, 0);
                                          g_73 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_73, g_73);
                                    }
                                  LocalPopChoice(y_28);
                                }
                              else
                                {
                                  t = x_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(w_28);
                            }
                          else
                            {
                              t = v_28;
                              {
                                ATerm z_28 = t;
                                int a_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(a_29);
                                  }
                                else
                                  {
                                    t = z_28;
                                    t = Desugar_0_0(t);
                                  }
                              }
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(q_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL;
  o_74 = t;
  t = SSL_explode_term(o_74);
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_29 = ATgetArgument(t, 1);
        if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
          {
            n_74 = ATgetFirst((ATermList) c_29);
            {
              ATerm d_29 = (ATerm) ATgetNext((ATermList) c_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_74;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_29 = NULL,w_29 = NULL,y_29 = NULL;
  y_29 = t;
  t = SSL_explode_term(y_29);
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
        if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
          {
            ATerm g_29 = ATgetFirst((ATermList) f_29);
            u_29 = (ATerm) ATgetNext((ATermList) f_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_u_20;
  w_29 = t;
  t = SSL_mkterm(w_29, u_29);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  ATerm z_73 = NULL,b_74 = NULL;
  static ATerm r_74 (ATerm t)
  {
    ATerm h_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_74 = NULL,f_74 = NULL,h_74 = NULL;
        c_74 = t;
        t = map_1_0(s_5, t);
        t = s_119(t);
        f_74 = t;
        t = c_74;
        t = map_1_0(u_5, t);
        t = r_74(t);
        h_74 = t;
        t = (ATerm) ATinsert(CheckATermList(h_74), f_74);
        LocalPopChoice(j_29);
      }
    else
      {
        t = h_29;
        t = map_1_0(w_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = r_74(t);
  b_74 = t;
  t = term_u_20;
  z_73 = t;
  t = SSL_mkterm(z_73, b_74);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm s_74 = NULL;
  s_74 = t;
  {
    ATerm k_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL;
        t = s_74;
        t = new_0_0(t);
        u_74 = t;
        t = new_0_0(t);
        v_74 = t;
        t = new_0_0(t);
        w_74 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_74), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, s_74), (ATerm) ATmakeAppl(sym_Var_1, v_74))), (ATerm) ATmakeAppl(sym_Var_1, w_74)), (ATerm)ATmakeAppl(sym_VarDec_2, u_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_29), term_s_29)), v_74, (ATerm)ATmakeAppl(sym_Var_1, v_74), w_74, (ATerm) ATmakeAppl(sym_Var_1, w_74));
        LocalPopChoice(o_29);
      }
    else
      {
        t = k_29;
        {
          ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
          t = s_74;
          t = new_0_0(t);
          a_75 = t;
          t = new_0_0(t);
          b_75 = t;
          t = new_0_0(t);
          c_75 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_75), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, s_74), (ATerm) ATmakeAppl(sym_Var_1, b_75))), (ATerm) ATmakeAppl(sym_Var_1, c_75)), (ATerm)ATmakeAppl(sym_VarDec_2, a_75, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_29), term_s_29)), b_75, (ATerm)ATmakeAppl(sym_Var_1, b_75), c_75, (ATerm) ATmakeAppl(sym_Var_1, c_75));
        }
      }
  }
  return(t);
}
static ATerm e_10 (ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm t_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_54, r_54);
      LocalPopChoice(v_29);
    }
  else
    {
      t = t_29;
      t = SSL_subtr(q_54, r_54);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  if(match_cons(t, sym__2))
    {
      e_75 = ATgetArgument(t, 0);
      f_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_75, f_75, (ATerm) ATempty);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm i_75 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if(((ATgetType(x_29) != AT_INT) || (ATgetInt((ATermInt) x_29) != 0)))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
      }
      i_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_75;
  return(t);
}
ATerm copy_1_0 (ATerm g_138 (ATerm), ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm j_75 = NULL,k_75 = NULL,m_75 = NULL,n_75 = NULL,t_75 = NULL,u_75 = NULL;
    if(match_cons(t, sym__3))
      {
        j_75 = ATgetArgument(t, 0);
        k_75 = ATgetArgument(t, 1);
        m_75 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, j_75, term_v_19);
    t = geq_0_0(t);
    t = term_v_19;
    u_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_75, term_v_19);
    t = e_10(j_75, u_75, t);
    n_75 = t;
    t = k_75;
    t = g_138(t);
    t_75 = t;
    t = (ATerm) ATmakeAppl(sym__3, n_75, k_75, (ATerm) ATinsert(CheckATermList(m_75), t_75));
    return(t);
  }
  t = for_3_0(y_5, c_6, d_6, t);
  return(t);
}
static ATerm f_10 (ATerm e_24, ATerm h_24, ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
  t = new_0_0(t);
  v_75 = t;
  t = new_0_0(t);
  w_75 = t;
  t = new_0_0(t);
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_75), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_24)), (ATerm) ATmakeAppl(sym_Var_1, w_75))), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_24)), (ATerm) ATmakeAppl(sym_Var_1, x_75)))), (ATerm)ATmakeAppl(sym_VarDec_2, v_75, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_29), term_s_29)), w_75, (ATerm)ATmakeAppl(sym_Var_1, w_75), x_75, (ATerm) ATmakeAppl(sym_Var_1, x_75));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_76 = ATgetFirst((ATermList) t);
      e_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_76;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_76;
    }
  else
    {
      t = e_76;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_80 (ATerm b_77, ATerm c_77, ATerm d_77, ATerm e_77, ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,l_77 = NULL,n_77 = NULL,v_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL;
  t = term_v_19;
  h_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_77, term_v_19);
  t = i_11(c_77, h_78, t);
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_78, term_a_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_77 = ATgetFirst((ATermList) t);
      l_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_77;
  t = last_0_0(t);
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_77), j_77), l_77);
  t = genzip_4_0(e_6, f_6, g_6, j_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      n_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
      z_77 = ATgetArgument(t, 2);
      a_78 = ATgetArgument(t, 3);
      b_78 = ATgetArgument(t, 4);
      e_78 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_78), z_77), l_77);
  t = concat_0_0(t);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, b_77, term_b_30), v_77, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(f_78), j_77), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_77)), (ATerm) ATmakeAppl(sym_Op_2, b_77, a_78))), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_77)), (ATerm) ATmakeAppl(sym_Op_2, b_77, e_78))), (ATerm) ATmakeAppl(sym_Seqs_1, n_77)))));
  return(t);
}
static ATerm i_80 (ATerm t_78, ATerm u_78, ATerm v_78, ATerm w_78, ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL;
  t = w_78;
  t = new_0_0(t);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_78, (ATerm) ATmakeAppl(sym_Var_1, f_79));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      g_79 = ATgetArgument(t, 0);
      h_79 = ATgetArgument(t, 1);
      i_79 = ATgetArgument(t, 2);
      k_79 = ATgetArgument(t, 3);
      l_79 = ATgetArgument(t, 4);
      m_79 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_79, l_79);
  t = conc_0_0(t);
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_78, term_h_30), h_79, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(n_79), f_79), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_79)), (ATerm) ATmakeAppl(sym_Op_2, t_78, k_79))), (ATerm)ATmakeAppl(sym_Op_2, t_78, m_79), (ATerm) ATmakeAppl(sym_Seqs_1, g_79)))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_30 = ATgetArgument(t, 0);
      ATerm j_30 = ATgetArgument(t, 1);
      if(((ATgetType(j_30) != AT_LIST) || !(ATisEmpty(j_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
        {
          k_78 = ATgetFirst((ATermList) k_30);
          l_78 = (ATerm) ATgetNext((ATermList) k_30);
        }
      else
        _fail(t);
      {
        ATerm m_30 = ATgetArgument(t, 1);
        if(((ATgetType(m_30) == AT_LIST) && !(ATisEmpty(m_30))))
          {
            m_78 = ATgetFirst((ATermList) m_30);
            n_78 = (ATerm) ATgetNext((ATermList) m_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_78, m_78), (ATerm) ATmakeAppl(sym__2, l_78, n_78));
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL;
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_78), o_78);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      r_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(q_78, r_78, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm p_79 = NULL,s_79 = NULL,t_79 = NULL,a_80 = NULL,d_80 = NULL,e_80 = NULL;
  p_79 = t;
  if(match_cons(t, sym__3))
    {
      s_79 = ATgetArgument(t, 0);
      t_79 = ATgetArgument(t, 1);
      a_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_79;
  if(match_string(t, "T"))
    {
      t = a_80;
      if(match_cons(t, sym__2))
        {
          d_80 = ATgetArgument(t, 0);
          e_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_80;
      if(match_int(t, 0))
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_80(s_79, d_80, e_80, p_79, t);
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              {
                ATerm g_80 = NULL;
                t = p_79;
                t = new_0_0(t);
                g_80 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_79, term_b_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_80), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_80)), (ATerm) ATmakeAppl(sym_Op_2, s_79, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_80)), (ATerm) ATmakeAppl(sym_Op_2, s_79, (ATerm) ATempty))), term_w_22))));
              }
            }
        }
      else
        {
          t = h_80(s_79, d_80, e_80, p_79, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = a_80;
      if(match_cons(t, sym__2))
        {
          d_80 = ATgetArgument(t, 0);
          e_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_80(s_79, d_80, e_80, p_79, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm y_19 = NULL;
  static ATerm n_6 (ATerm t)
  {
    t = v_127(t);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    return(t);
  }
  t = fetch_1_0(n_6, t);
  t = not_null(y_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  t = term_h_16;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_p_30);
  b_20 = t;
  t = SSL_printnl(a_20, b_20);
  t = term_v_19;
  z_19 = t;
  t = SSL_exit(z_19);
  t = (ATerm) ATinsert(ATempty, term_p_30);
  return(t);
}
ATerm debug_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  c_20 = t;
  t = y_122(t);
  f_20 = t;
  t = term_h_16;
  g_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_20), f_20);
  h_20 = t;
  t = SSL_printnl(g_20, h_20);
  t = c_20;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm u_30 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          p_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(s_30);
      t = p_15;
      t = foldr_3_0(s_6, u_6, v_6, t);
      t = o_15;
      t = foldr_3_0(x_6, a_7, b_7, t);
    }
  else
    {
      t = r_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm v_30 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          p_15 = ATgetArgument(t, 2);
          {
            ATerm x_30 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_15;
      t = foldr_3_0(c_7, d_7, e_7, t);
      t = o_15;
      t = foldr_3_0(f_7, g_7, h_7, t);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(u_15, v_15, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(w_15, x_15, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(a_16, b_16, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(c_16, d_16, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      ATerm z_30 = ATgetArgument(t, 1);
      ATerm a_31 = ATgetArgument(t, 2);
      ATerm b_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL;
      static ATerm o_6 (ATerm t)
      {
        ATerm r_20 = NULL,s_20 = NULL;
        r_20 = t;
        {
          ATerm e_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  s_20 = ATgetArgument(t, 0);
                  {
                    ATerm h_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm i_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(g_31);
              t = s_20;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = r_20;
            }
          else
            {
              t = e_31;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  s_20 = ATgetArgument(t, 0);
                  {
                    ATerm k_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm m_31 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm n_31 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = s_20;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = r_20;
            }
        }
        return(t);
      }
      t = fetch_1_0(o_6, t);
      {
        static ATerm p_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_20 = ATgetArgument(t, 0);
              {
                ATerm x_31 = ATgetArgument(t, 1);
              }
              {
                ATerm f_32 = ATgetArgument(t, 2);
              }
              {
                ATerm g_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_6, t);
      }
      t = not_null(q_20);
      t = debug_1_0(q_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm l_22 = NULL;
        l_22 = t;
        t = map_1_0(r_6, t);
        t = l_22;
        {
          ATerm h_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(i_7, t);
              LocalPopChoice(j_32);
            }
          else
            {
              t = h_32;
              {
                ATerm f_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm k_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = f_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_u_24;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,l_16 = NULL;
  p_22 = t;
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      ATerm l_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_32 = ATgetArgument(t, 1);
        if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
          {
            q_22 = ATgetFirst((ATermList) m_32);
            {
              ATerm n_32 = (ATerm) ATgetNext((ATermList) m_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      ATerm o_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
          {
            ATerm s_32 = ATgetFirst((ATermList) q_32);
            ATerm t_32 = (ATerm) ATgetNext((ATermList) q_32);
            if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
              {
                l_16 = ATgetFirst((ATermList) t_32);
                {
                  ATerm v_32 = (ATerm) ATgetNext((ATermList) t_32);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Choice_2, q_22, l_16);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(j_7, k_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  static ATerm r_22 (ATerm t)
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_117(t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = SRTS_all(r_22, t);
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
static ATerm r_9 (ATerm b_73, ATerm c_73, ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  t_22 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
        t = n_11(b_73, c_73, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_33 = ATgetFirst((ATermList) t);
            s_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_32);
        {
          ATerm u_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_73, c_73, s_22);
          t = lookup_table_0_1(b_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_11(c_73, s_22, u_22, t);
          t = (ATerm) ATmakeAppl(sym__3, b_73, c_73, s_22);
        }
      }
    else
      {
        t = y_32;
        {
          ATerm a_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
          t = lookup_table_0_1(b_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_11(c_73, a_24, t);
          t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
        }
      }
  }
  t = t_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL,z_24 = NULL,c_25 = NULL,e_25 = NULL;
  v_24 = t;
  t = f_148(t);
  t_24 = t;
  {
    ATerm d_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        t = term_g_33;
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_24, term_g_33);
        t = n_11(t_24, f_25, t);
        LocalPopChoice(f_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_24 = ATgetFirst((ATermList) t);
      p_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_24, term_g_33, p_24);
  t = lookup_table_0_1(t_24, t);
  e_25 = t;
  t = term_g_33;
  z_24 = t;
  t = e_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(z_24, p_24, c_25, t);
  t = s_24;
  {
    static ATerm l_7 (ATerm t)
    {
      ATerm g_25 = NULL;
      g_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, g_25);
      t = r_9(t_24, g_25, t);
      return(t);
    }
    t = map_1_0(l_7, t);
  }
  t = v_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_118(t);
      t = y_118(t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = y_118(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_148 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,q_25 = NULL,x_25 = NULL,b_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  q_25 = t;
  t = e_148(t);
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, term_g_33);
  {
    ATerm k_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_33 = ATgetArgument(t, 0);
            ATerm p_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_33;
        h_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, term_g_33);
        t = n_11(i_25, h_27, t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = k_33;
        t = (ATerm) ATempty;
      }
  }
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_25, term_g_33, (ATerm) ATinsert(CheckATermList(x_25), (ATerm) ATempty));
  t = lookup_table_0_1(i_25, t);
  f_26 = t;
  t = term_g_33;
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_25), (ATerm) ATempty);
  d_26 = t;
  t = f_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(b_26, d_26, e_26, t);
  t = q_25;
  return(t);
}
ATerm scope_2_0 (ATerm g_148 (ATerm), ATerm h_148 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t)
  {
    t = end_scope_1_0(g_148, t);
    return(t);
  }
  t = begin_scope_1_0(g_148, t);
  t = restore_always_2_0(h_148, m_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_27 = NULL,s_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,i_28 = NULL;
  v_27 = t;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      i_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_28;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_27;
            if((w_27 != t))
              {
                _fail(t);
              }
            t = s_27;
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = (ATerm) ATmakeAppl(sym__2, w_27, i_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, w_27, i_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
        _fail(t);
      {
        ATerm u_33 = ATgetArgument(t, 1);
        if(((ATgetType(u_33) != AT_LIST) || !(ATisEmpty(u_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
        {
          p_31 = ATgetFirst((ATermList) w_33);
          q_31 = (ATerm) ATgetNext((ATermList) w_33);
        }
      else
        _fail(t);
      {
        ATerm x_33 = ATgetArgument(t, 1);
        if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
          {
            r_31 = ATgetFirst((ATermList) x_33);
            s_31 = (ATerm) ATgetNext((ATermList) x_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_31, r_31), (ATerm) ATmakeAppl(sym__2, q_31, s_31));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  if(match_cons(t, sym__2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_31), t_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,f_30 = NULL,g_30 = NULL;
  c_30 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            ATerm e_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_34);
        t = c_30;
      }
    else
      {
        t = b_34;
        {
          ATerm o_31 = NULL;
          if(match_cons(t, sym__3))
            {
              d_30 = ATgetArgument(t, 0);
              f_30 = ATgetArgument(t, 1);
              g_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_30, f_30);
          t = genzip_4_0(n_7, o_7, p_7, _id, t);
          o_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_31, g_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  static ATerm r_7 (ATerm t)
  {
    ATerm o_16 = NULL;
    t = z_114(t);
    o_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_16, not_null(z_31));
    t = lookup_0_0(t);
    t = a_115(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((z_31 != NULL) && (z_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_31;
  t = alltd_1_0(r_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm a_33 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_33 = ATgetArgument(t, 0);
      {
        ATerm f_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_33;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_33;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if(((ATgetType(h_34) != AT_LIST) || !(ATisEmpty(h_34))))
        _fail(t);
      {
        ATerm i_34 = ATgetArgument(t, 1);
        if(((ATgetType(i_34) != AT_LIST) || !(ATisEmpty(i_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_34 = ATgetArgument(t, 0);
      if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
        {
          x_34 = ATgetFirst((ATermList) j_34);
          y_34 = (ATerm) ATgetNext((ATermList) j_34);
        }
      else
        _fail(t);
      {
        ATerm k_34 = ATgetArgument(t, 1);
        if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
          {
            z_34 = ATgetFirst((ATermList) k_34);
            a_35 = (ATerm) ATgetNext((ATermList) k_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_34, z_34), (ATerm) ATmakeAppl(sym__2, y_34, a_35));
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_35), b_35);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      if(match_cons(m_34, sym_VarDec_2))
        {
          d_35 = ATgetArgument(m_34, 0);
          {
            ATerm n_34 = ATgetArgument(m_34, 1);
          }
        }
      else
        _fail(t);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, d_35);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, e_35);
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, d_35), (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, e_35));
  t = v_10(j_8, q_35, r_35, t);
  t = p_35;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,v_16 = NULL;
  s_35 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm q_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_g_34;
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_34, s_35);
  t = x_10(v_16, s_35, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_35;
  return(t);
}
static ATerm v_9 (ATerm t_26, ATerm u_26, ATerm y_26, ATerm v_26, ATerm x_26, ATerm t)
{
  ATerm p_32 = NULL,r_32 = NULL,u_32 = NULL;
  t = v_26;
  t = map_1_0(s_7, t);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_32, u_26, x_26);
  t = substitute_2_0(t_7, _id, t);
  r_32 = t;
  {
    static ATerm v_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, y_26, t_26);
      t = genzip_4_0(z_7, a_8, g_8, h_8, t);
      t = r_32;
      t = alltd_1_0(k_8, t);
      if(((u_32 != NULL) && (u_32 != t)))
        _fail(t);
      else
        u_32 = t;
      return(t);
    }
    t = scope_2_0(u_7, v_7, t);
  }
  t = not_null(u_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm n_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,q_4 = NULL;
  t_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_39);
  n_39 = t;
  t = q_39;
  t = new_0_0(t);
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_39, r_39);
  q_4 = t;
  t = SSLsetAnnotations(q_4, n_39);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,r_4 = NULL;
  d_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_39 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_40);
  y_39 = t;
  t = z_39;
  t = new_0_0(t);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_40, b_40);
  r_4 = t;
  t = SSLsetAnnotations(r_4, y_39);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm e_40 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_40 = ATgetArgument(t, 0);
      {
        ATerm t_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, e_40);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_40 = ATgetArgument(t, 0);
      {
        ATerm u_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_40);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm n_36 = NULL,s_36 = NULL,f_38 = NULL,s_38 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,l_39 = NULL;
  h_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_34 = ATgetFirst((ATermList) t);
      if(match_cons(w_34, sym_SDefT_4))
        {
          n_36 = ATgetArgument(w_34, 0);
          s_36 = ATgetArgument(w_34, 1);
          f_38 = ATgetArgument(w_34, 2);
          {
            ATerm g_35 = ATgetArgument(w_34, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm f_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_36;
  t = map_1_0(l_8, t);
  s_38 = t;
  t = f_38;
  t = map_1_0(m_8, t);
  g_39 = t;
  t = s_38;
  t = map_1_0(n_8, t);
  i_39 = t;
  t = g_39;
  t = map_1_0(o_8, t);
  j_39 = t;
  t = h_39;
  {
    static ATerm p_8 (ATerm t)
    {
      ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm i_35 = ATgetArgument(t, 0);
          i_40 = ATgetArgument(t, 1);
          j_40 = ATgetArgument(t, 2);
          k_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_9(i_39, j_39, i_40, j_40, k_40, t);
      return(t);
    }
    t = map_1_0(p_8, t);
  }
  t = choices_0_0(t);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_36, s_38, g_39, l_39);
  return(t);
}
static ATerm u_82 (ATerm c_81, ATerm d_81, ATerm e_81, ATerm f_81, ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,v_81 = NULL,w_81 = NULL,w_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_81, d_81);
  t = Definitions_0_0(t);
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, e_81);
  w_81 = t;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      ATerm l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_81);
  k_81 = t;
  t = j_81;
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_82 = NULL,b_82 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_82 = ATgetFirst((ATermList) t);
            b_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_82;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_82;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        {
          ATerm o_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(v_35);
            }
          else
            {
              t = o_35;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_81, e_81);
  w_4 = t;
  t = SSLsetAnnotations(w_4, k_81);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,m_82 = NULL;
  h_82 = t;
  if(match_cons(t, sym__2))
    {
      i_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_82;
  if(match_cons(t, sym__2))
    {
      j_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_82;
  if(match_cons(t, sym_Mod_2))
    {
      f_82 = ATgetArgument(t, 0);
      g_82 = ATgetArgument(t, 1);
      {
        ATerm w_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_82 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, f_82, g_82, k_82);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            t_82 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_82, m_82);
            LocalPopChoice(y_35);
          }
        else
          {
            t = w_35;
            t = u_82(j_82, k_82, m_82, h_82, t);
          }
      }
    }
  else
    {
      t = u_82(j_82, k_82, m_82, h_82, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  static ATerm a_84 (ATerm t)
  {
    ATerm u_83 = NULL,x_83 = NULL,z_83 = NULL;
    z_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_83 = ATgetFirst((ATermList) t);
        x_83 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_30 = NULL,l_30 = NULL,y_4 = NULL;
          t = SSLgetAnnotations(z_83);
          e_30 = t;
          t = x_83;
          t = a_84(t);
          l_30 = t;
          t = (ATerm) ATinsert(CheckATermList(l_30), u_83);
          y_4 = t;
          t = SSLsetAnnotations(y_4, e_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_83;
        t = a_128(t);
      }
    return(t);
  }
  t = a_84(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_82;
    }
  else
    {
      static ATerm q_8 (ATerm t)
      {
        t = not_null(y_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_82 = ATgetFirst((ATermList) t);
          if(((y_82 != NULL) && (y_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_82;
      t = at_end_1_0(q_8, t);
    }
  return(t);
}
static ATerm x_84 (ATerm e_84, ATerm t)
{
  ATerm g_84 = NULL;
  t = SSL_explode_term(e_84);
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_84;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_84 = NULL,n_84 = NULL,q_84 = NULL;
  q_84 = t;
  if(match_cons(t, sym__2))
    {
      i_84 = ATgetArgument(t, 0);
      n_84 = ATgetArgument(t, 1);
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_8 (ATerm t)
            {
              t = n_84;
              return(t);
            }
            t = i_84;
            t = at_end_1_0(r_8, t);
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            t = x_84(q_84, t);
          }
      }
    }
  else
    {
      t = x_84(q_84, t);
    }
  return(t);
}
static ATerm l_10 (ATerm o_134 (ATerm), ATerm i_65, ATerm h_65, ATerm t)
{
  static ATerm z_85 (ATerm t)
  {
    ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
    r_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_85;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_85 = ATgetFirst((ATermList) t);
            t_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_85;
              {
                static ATerm s_8 (ATerm t)
                {
                  t = h_65;
                  return(t);
                }
                t = y_10(o_134, s_8, s_85, t_85, t);
              }
              t = z_85(t);
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
              {
                ATerm t_30 = NULL,w_30 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(r_85);
                t_30 = t;
                t = t_85;
                t = z_85(t);
                w_30 = t;
                t = (ATerm) ATinsert(CheckATermList(w_30), s_85);
                a_5 = t;
                t = SSLsetAnnotations(a_5, t_30);
              }
            }
        }
      }
    return(t);
  }
  t = i_65;
  t = z_85(t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm t)
{
  static ATerm h_86 (ATerm t)
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_120(t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
        {
          ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,c_5 = NULL;
          t = d_120(t);
          g_86 = t;
          if(match_cons(t, sym__2))
            {
              c_86 = ATgetArgument(t, 0);
              d_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_86);
          b_86 = t;
          t = c_86;
          t = f_120(t);
          e_86 = t;
          t = d_86;
          t = h_86(t);
          f_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_86, f_86);
          c_5 = t;
          t = SSLsetAnnotations(c_5, b_86);
          t = e_120(t);
        }
      }
    return(t);
  }
  t = h_86(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(((ATgetType(g_36) != AT_LIST) || !(ATisEmpty(g_36))))
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(((ATgetType(h_36) != AT_LIST) || !(ATisEmpty(h_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
        {
          o_86 = ATgetFirst((ATermList) i_36);
          p_86 = (ATerm) ATgetNext((ATermList) i_36);
        }
      else
        _fail(t);
      {
        ATerm j_36 = ATgetArgument(t, 1);
        if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
          {
            q_86 = ATgetFirst((ATermList) j_36);
            r_86 = (ATerm) ATgetNext((ATermList) j_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_86, q_86), (ATerm) ATmakeAppl(sym__2, p_86, r_86));
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL;
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      t_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_86), s_86);
  return(t);
}
static ATerm q_10 (ATerm t_779, ATerm y_779, ATerm d_79, ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL;
  t = SSL_explode_term(y_779);
  if(match_cons(t, sym__2))
    {
      j_86 = ATgetArgument(t, 0);
      l_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_779);
  if(match_cons(t, sym__2))
    {
      if((j_86 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_86, l_86);
  t = genzip_4_0(t_8, u_8, v_8, _id, t);
  m_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_86, d_79);
  t = conc_0_0(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm b_87 = NULL;
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_87);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,e_5 = NULL;
  f_87 = t;
  if(match_cons(t, sym__2))
    {
      d_87 = ATgetArgument(t, 0);
      e_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_87);
  c_87 = t;
  t = e_87;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_87, e_87);
  e_5 = t;
  t = SSLsetAnnotations(e_5, c_87);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL;
  a_88 = t;
  if(match_cons(t, sym__2))
    {
      b_88 = ATgetArgument(t, 0);
      c_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_88 = ATgetFirst((ATermList) t);
      e_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_88(b_88, c_88, a_88, t);
            LocalPopChoice(q_36);
          }
        else
          {
            t = m_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_88), d_88), e_88);
          }
      }
    }
  else
    {
      t = o_88(b_88, c_88, a_88, t);
    }
  return(t);
}
static ATerm o_88 (ATerm i_87, ATerm j_87, ATerm k_87, ATerm t)
{
  ATerm l_87 = NULL,o_87 = NULL,f_5 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL;
  t = SSLgetAnnotations(k_87);
  l_87 = t;
  t = j_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_87 = ATgetFirst((ATermList) t);
      u_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_87;
  if(match_cons(t, sym__2))
    {
      s_87 = ATgetArgument(t, 0);
      t_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_87;
        if((s_87 != t))
          {
            _fail(t);
          }
        t = u_87;
        LocalPopChoice(v_36);
      }
    else
      {
        t = r_36;
        t = j_87;
        t = q_10(s_87, t_87, u_87, t);
      }
  }
  o_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_87, o_87);
  f_5 = t;
  t = SSLsetAnnotations(f_5, l_87);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm n_88 = NULL;
  if(match_cons(t, sym__2))
    {
      n_88 = ATgetArgument(t, 0);
      if((n_88 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_8, y_8, z_8, t);
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
        i_88 = t;
        if(match_cons(t, sym__2))
          {
            j_88 = ATgetArgument(t, 0);
            k_88 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_88;
        t = l_10(a_9, j_88, k_88, t);
      }
    }
  return(t);
}
static ATerm s_10 (ATerm z_147 (ATerm), ATerm a_148 (ATerm), ATerm b_148 (ATerm), ATerm u_80, ATerm r_80, ATerm z_80, ATerm v_80, ATerm s_80, ATerm t_80, ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_80, v_80);
  t = z_147(t);
  if(match_cons(t, sym__2))
    {
      q_88 = ATgetArgument(t, 0);
      p_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_88;
  t = a_148(t);
  r_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_88, z_80);
  t = diff_0_0(t);
  s_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_88, r_80);
  t = conc_0_0(t);
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_88, z_80);
  t = conc_0_0(t);
  u_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_80, q_88, s_80);
  t = b_148(t);
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_88, u_88, p_88, v_88, t_80);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm z_147 (ATerm), ATerm a_148 (ATerm), ATerm b_148 (ATerm), ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_36 = ATgetArgument(t, 0);
      if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
        {
          x_88 = ATgetFirst((ATermList) y_36);
          y_88 = (ATerm) ATgetNext((ATermList) y_36);
        }
      else
        _fail(t);
      z_88 = ATgetArgument(t, 1);
      a_89 = ATgetArgument(t, 2);
      b_89 = ATgetArgument(t, 3);
      c_89 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = s_10(z_147, a_148, b_148, x_88, y_88, z_88, a_89, b_89, c_89, t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t)
{
  static ATerm d_89 (ATerm t)
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_122(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = d_122(t);
        t = d_89(t);
      }
    return(t);
  }
  t = d_89(t);
  return(t);
}
ATerm for_3_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t)
{
  t = f_122(t);
  t = while_not_2_0(g_122, h_122, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  if(match_cons(t, sym__3))
    {
      n_89 = ATgetArgument(t, 0);
      o_89 = ATgetArgument(t, 1);
      p_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, n_89, n_89, o_89, p_89, (ATerm) ATempty);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm s_89 = NULL,t_89 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if(((ATgetType(b_37) != AT_LIST) || !(ATisEmpty(b_37))))
        _fail(t);
      {
        ATerm c_37 = ATgetArgument(t, 1);
      }
      {
        ATerm d_37 = ATgetArgument(t, 2);
      }
      s_89 = ATgetArgument(t, 3);
      t_89 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_89, t_89);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, h_9, i_9, t);
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
        if(match_cons(t, sym__5))
          {
            z_89 = ATgetArgument(t, 0);
            c_90 = ATgetArgument(t, 1);
            d_90 = ATgetArgument(t, 2);
            e_90 = ATgetArgument(t, 3);
            f_90 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = z_89;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_90 = ATgetFirst((ATermList) t);
            b_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, b_90, c_90, d_90, e_90, (ATerm) ATinsert(CheckATermList(f_90), a_90));
      }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(j_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      w_89 = ATgetArgument(t, 1);
      x_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_89), w_89);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_32;
  if(match_cons(t, sym_Mod_2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_32;
            t = k_9(a_32, b_32, e_32, t);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = i_32(d_32, e_32, t);
          }
      }
    }
  else
    {
      t = i_32(d_32, e_32, t);
    }
  return(t);
}
static ATerm i_32 (ATerm j_31, ATerm l_31, ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = term_h_16;
  v_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), l_31), term_m_16), j_31), term_i_16);
  w_31 = t;
  t = SSL_printnl(v_31, w_31);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), l_31), term_m_16), j_31), term_i_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
  t = for_3_0(b_9, c_9, g_9, t);
  i_91 = t;
  if(match_cons(t, sym__2))
    {
      j_91 = ATgetArgument(t, 0);
      k_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_91;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_91;
    }
  else
    {
      ATerm f_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_91 = ATgetFirst((ATermList) t);
          m_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_91), l_91);
      t = map_1_0(l_9, t);
      t = term_v_19;
      f_31 = t;
      t = SSL_exit(f_31);
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL;
  if(match_cons(t, sym__2))
    {
      e_92 = ATgetArgument(t, 0);
      f_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(e_92, f_92, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL;
  if(match_cons(t, sym__2))
    {
      g_92 = ATgetArgument(t, 0);
      h_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(g_92, h_92, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm i_92 = NULL;
  if(match_cons(t, sym__2))
    {
      i_92 = ATgetArgument(t, 0);
      if((i_92 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL;
  s_91 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      v_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
      r_91 = ATgetArgument(t, 2);
      {
        ATerm p_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  x_91 = t;
  t = q_91;
  t = foldr_3_0(m_9, n_9, o_9, t);
  t_91 = t;
  t = r_91;
  t = foldr_3_0(p_9, t_9, u_9, t);
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, (ATerm) ATmakeAppl(sym__2, t_91, u_91));
  {
    ATerm q_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = q_37;
        t = (ATerm) ATempty;
      }
  }
  z_91 = t;
  t = v_91;
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        t = (ATerm) ATempty;
      }
  }
  y_91 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_91, u_91));
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_91, u_91)), y_91);
  t = z_10(y_9, d_92, y_91, t);
  w_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, (ATerm) ATmakeAppl(sym__2, t_91, u_91));
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_37, (ATerm) ATinsert(CheckATermList(z_91), s_91));
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_91, (ATerm) ATmakeAppl(sym__2, t_91, u_91)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_37, (ATerm) ATinsert(CheckATermList(z_91), s_91)));
  t = v_10(a_10, b_92, c_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_37, w_91);
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, (ATerm) ATmakeAppl(sym_Defined_2, term_x_37, w_91));
  t = v_10(b_10, v_91, a_92, t);
  t = x_91;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL;
  if(match_cons(t, sym__2))
    {
      x_92 = ATgetArgument(t, 0);
      y_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(x_92, y_92, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL;
  if(match_cons(t, sym__2))
    {
      z_92 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(z_92, a_93, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm b_93 = NULL;
  if(match_cons(t, sym__2))
    {
      b_93 = ATgetArgument(t, 0);
      if((b_93 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  l_92 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      o_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
      k_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  q_92 = t;
  t = j_92;
  t = foldr_3_0(c_10, g_10, h_10, t);
  m_92 = t;
  t = k_92;
  t = foldr_3_0(i_10, k_10, m_10, t);
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  {
    ATerm y_37 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = y_37;
        t = (ATerm) ATempty;
      }
  }
  s_92 = t;
  t = o_92;
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = (ATerm) ATempty;
      }
  }
  r_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  w_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_92, n_92)), r_92);
  t = z_10(p_10, w_92, r_92, t);
  p_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_38, (ATerm) ATinsert(CheckATermList(s_92), l_92));
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_38, (ATerm) ATinsert(CheckATermList(s_92), l_92)));
  t = v_10(r_10, u_92, v_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_38, p_92);
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym_Defined_2, term_g_38, p_92));
  t = v_10(t_10, o_92, t_92, t);
  t = q_92;
  return(t);
}
static ATerm v_10 (ATerm i_148 (ATerm), ATerm s_81, ATerm q_81, ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  f_93 = t;
  t = i_148(t);
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_93, s_81, q_81);
  t = o_11(c_93, s_81, q_81, t);
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_93 = NULL;
        t = term_g_33;
        k_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_93, term_g_33);
        t = n_11(c_93, k_93, t);
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_93 = ATgetFirst((ATermList) t);
      e_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_93, term_g_33, (ATerm) ATinsert(CheckATermList(e_93), (ATerm) ATinsert(CheckATermList(d_93), s_81)));
  t = lookup_table_0_1(c_93, t);
  j_93 = t;
  t = term_g_33;
  g_93 = t;
  t = (ATerm) ATinsert(CheckATermList(e_93), (ATerm) ATinsert(CheckATermList(d_93), s_81));
  h_93 = t;
  t = j_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(g_93, h_93, i_93, t);
  t = f_93;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm x_93 = NULL;
  x_93 = t;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_33 = NULL,h_33 = NULL;
        t = term_o_37;
        h_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_37, x_93);
        t = x_10(h_33, x_93, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_38) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
            e_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_33;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_33 = NULL,o_33 = NULL;
              t = term_o_37;
              o_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_37, x_93);
              t = x_10(o_33, x_93, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_38 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  l_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_33;
              LocalPopChoice(p_38);
            }
          else
            {
              t = o_38;
              {
                ATerm s_33 = NULL,v_33 = NULL;
                t = term_o_37;
                v_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_37, x_93);
                t = x_10(v_33, x_93, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    s_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_33;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_10 (ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm b_94 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_73, i_73);
  t = n_11(h_73, i_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_94 = ATgetFirst((ATermList) t);
      {
        ATerm t_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_94;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm s_94 = NULL,u_94 = NULL;
  s_94 = t;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      u_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_94;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      ATerm x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL,o_34 = NULL;
        t = term_n_37;
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_37, s_94);
        t = x_10(o_34, s_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_39) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            l_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_34;
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_34 = NULL,v_34 = NULL;
              t = term_n_37;
              v_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_n_37, s_94);
              t = x_10(v_34, s_94, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("k_0", 0, ATtrue)))
                    _fail(t);
                  s_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_34;
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
              {
                ATerm h_35 = NULL,k_35 = NULL;
                t = term_n_37;
                k_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_37, s_94);
                t = x_10(k_35, s_94, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm k_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_39) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                    h_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_35;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  if(match_cons(t, sym__2))
    {
      o_95 = ATgetArgument(t, 0);
      p_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(o_95, p_95, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  if(match_cons(t, sym__2))
    {
      q_95 = ATgetArgument(t, 0);
      r_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(q_95, r_95, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm s_95 = NULL;
  if(match_cons(t, sym__2))
    {
      s_95 = ATgetArgument(t, 0);
      if((s_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_n_37;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL;
  c_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_95 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
      b_95 = ATgetArgument(t, 2);
      {
        ATerm m_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  h_95 = t;
  t = a_95;
  t = foldr_3_0(u_10, w_10, j_11, t);
  d_95 = t;
  t = b_95;
  t = foldr_3_0(m_11, t_11, u_11, t);
  e_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_95, (ATerm) ATmakeAppl(sym__2, d_95, e_95));
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
  }
  j_95 = t;
  t = f_95;
  {
    ATerm a_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = a_40;
        t = (ATerm) ATempty;
      }
  }
  i_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_95, e_95));
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_95, e_95)), i_95);
  t = z_10(x_11, n_95, i_95, t);
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_95, (ATerm) ATmakeAppl(sym__2, d_95, e_95));
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_40, (ATerm) ATinsert(CheckATermList(j_95), c_95));
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_95, (ATerm) ATmakeAppl(sym__2, d_95, e_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_40, (ATerm) ATinsert(CheckATermList(j_95), c_95)));
  t = v_10(y_11, l_95, m_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_40, g_95);
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_95, (ATerm) ATmakeAppl(sym_Defined_2, term_o_40, g_95));
  t = v_10(z_11, f_95, k_95, t);
  t = h_95;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL;
  if(match_cons(t, sym__2))
    {
      f_96 = ATgetArgument(t, 0);
      g_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(f_96, g_96, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL;
  if(match_cons(t, sym__2))
    {
      h_96 = ATgetArgument(t, 0);
      i_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(h_96, i_96, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(o_96, p_96, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL;
  if(match_cons(t, sym__2))
    {
      q_96 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(q_96, r_96, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL;
  if(match_cons(t, sym__2))
    {
      y_96 = ATgetArgument(t, 0);
      z_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(y_96, z_96, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL;
  if(match_cons(t, sym__2))
    {
      a_97 = ATgetArgument(t, 0);
      b_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(a_97, b_97, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
  u_95 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            v_95 = ATgetArgument(t, 0);
            w_95 = ATgetArgument(t, 1);
            x_95 = ATgetArgument(t, 2);
            {
              ATerm r_40 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_40);
        {
          ATerm c_96 = NULL,d_96 = NULL;
          t = w_95;
          t = foldr_3_0(a_12, b_12, c_12, t);
          c_96 = t;
          t = x_95;
          t = foldr_3_0(d_12, f_12, g_12, t);
          d_96 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_95, (ATerm) ATmakeAppl(sym__2, c_96, d_96)));
        }
      }
    else
      {
        t = p_40;
        if(match_cons(t, sym_ExtSDef_3))
          {
            v_95 = ATgetArgument(t, 0);
            w_95 = ATgetArgument(t, 1);
            x_95 = ATgetArgument(t, 2);
            {
              ATerm m_96 = NULL,n_96 = NULL;
              t = w_95;
              t = foldr_3_0(j_12, l_12, m_12, t);
              m_96 = t;
              t = x_95;
              t = foldr_3_0(n_12, o_12, p_12, t);
              n_96 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_95, (ATerm) ATmakeAppl(sym__2, m_96, n_96)));
            }
          }
        else
          {
            ATerm v_96 = NULL,w_96 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                v_95 = ATgetArgument(t, 0);
                w_95 = ATgetArgument(t, 1);
                x_95 = ATgetArgument(t, 2);
                {
                  ATerm s_40 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = w_95;
            t = foldr_3_0(q_12, t_12, u_12, t);
            v_96 = t;
            t = x_95;
            t = foldr_3_0(w_12, x_12, y_12, t);
            w_96 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_95, (ATerm) ATmakeAppl(sym__2, v_96, w_96)));
          }
      }
  }
  return(t);
}
static ATerm y_10 (ATerm w_134 (ATerm), ATerm x_134 (ATerm), ATerm o_65, ATerm n_65, ATerm t)
{
  t = x_134(t);
  {
    static ATerm z_12 (ATerm t)
    {
      ATerm c_97 = NULL;
      c_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_65, c_97);
      t = w_134(t);
      return(t);
    }
    t = fetch_1_0(z_12, t);
  }
  t = n_65;
  return(t);
}
static ATerm z_10 (ATerm t_134 (ATerm), ATerm k_65, ATerm j_65, ATerm t)
{
  static ATerm s_97 (ATerm t)
  {
    ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
    n_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_65;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_97 = ATgetFirst((ATermList) t);
            p_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_97;
              {
                static ATerm a_13 (ATerm t)
                {
                  t = j_65;
                  return(t);
                }
                t = y_10(t_134, a_13, o_97, p_97, t);
              }
              t = s_97(t);
              LocalPopChoice(u_40);
            }
          else
            {
              t = t_40;
              {
                ATerm u_35 = NULL,x_35 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(n_97);
                u_35 = t;
                t = p_97;
                t = s_97(t);
                x_35 = t;
                t = (ATerm) ATinsert(CheckATermList(x_35), o_97);
                i_5 = t;
                t = SSLsetAnnotations(i_5, u_35);
              }
            }
        }
      }
    return(t);
  }
  t = k_65;
  t = s_97(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm), ATerm u_137 (ATerm), ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL;
  v_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_97;
      t = s_137(t);
    }
  else
    {
      ATerm a_98 = NULL,b_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_97 = ATgetFirst((ATermList) t);
          x_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_97;
      t = u_137(t);
      a_98 = t;
      t = x_97;
      t = foldr_3_0(s_137, t_137, u_137, t);
      b_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_98, b_98);
      t = t_137(t);
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm f_98 = NULL,g_98 = NULL;
  if(match_cons(t, sym__2))
    {
      f_98 = ATgetArgument(t, 0);
      g_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(e_13, f_98, g_98, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm h_98 = NULL;
  if(match_cons(t, sym__2))
    {
      h_98 = ATgetArgument(t, 0);
      if((h_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      {
        ATerm x_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(y_40);
          }
        else
          {
            t = x_40;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
  e_98 = t;
  t = foldr_3_0(b_13, c_13, DefinitionName_0_0, t);
  c_98 = t;
  t = e_98;
  t = map_1_0(f_13, t);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_98, d_98, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,k_5 = NULL;
  n_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_98 = ATgetFirst((ATermList) t);
      k_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_98);
  i_98 = t;
  t = j_98;
  t = w_100(t);
  l_98 = t;
  t = k_98;
  t = x_100(t);
  m_98 = t;
  t = (ATerm) ATinsert(CheckATermList(m_98), l_98);
  k_5 = t;
  t = SSLsetAnnotations(k_5, i_98);
  return(t);
}
static ATerm a_11 (ATerm x_47, ATerm y_47, ATerm t)
{
  ATerm o_98 = NULL;
  t = SSL_fputc(x_47, y_47);
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_98);
  return(t);
}
static ATerm b_11 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm p_98 = NULL;
  t = SSL_write_term_to_stream_text(p_46, q_46);
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_98);
  return(t);
}
static ATerm d_11 (ATerm a_123 (ATerm), ATerm t_339, ATerm v_46, ATerm t)
{
  ATerm q_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_339, term_z_40);
  t = h_11(t);
  q_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_98, v_46);
  t = a_123(t);
  t = fclose_0_0(t);
  t = v_46;
  return(t);
}
static ATerm c_11 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm r_98 = NULL;
  t = SSL_write_term_to_stream_baf(l_46, m_46);
  r_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_98);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_41 = ATgetArgument(t, 0);
      if(match_cons(a_41, sym_Stream_1))
        {
          y_98 = ATgetArgument(a_41, 0);
        }
      else
        _fail(t);
      z_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(y_98, z_98, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if(match_cons(b_41, sym_Stream_1))
        {
          d_99 = ATgetArgument(b_41, 0);
        }
      else
        _fail(t);
      e_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(d_99, e_99, t);
  a_99 = t;
  t = term_q_21;
  b_99 = t;
  t = a_99;
  if(match_cons(t, sym_Stream_1))
    {
      c_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, a_99);
  t = a_11(b_99, c_99, t);
  return(t);
}
ATerm output_1_0 (ATerm p_143 (ATerm), ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL;
  t = p_143(t);
  t_98 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_98 = NULL,v_98 = NULL;
        t = term_e_41;
        u_98 = t;
        t = term_f_41;
        v_98 = t;
        t = term_g_41;
        t = n_11(u_98, v_98, t);
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = term_h_41;
      }
  }
  s_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_98, t_98);
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_98 = NULL,x_98 = NULL;
        t = term_e_41;
        w_98 = t;
        t = term_k_41;
        x_98 = t;
        t = term_l_41;
        t = n_11(w_98, x_98, t);
        t = (ATerm) ATmakeAppl(sym__2, s_98, t_98);
        LocalPopChoice(j_41);
        if(match_cons(t, sym__2))
          {
            ATerm m_41 = ATgetArgument(t, 0);
            ATerm n_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_11(g_13, s_98, t_98, t);
      }
    else
      {
        t = i_41;
        if(match_cons(t, sym__2))
          {
            ATerm o_41 = ATgetArgument(t, 0);
            ATerm p_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_11(h_13, s_98, t_98, t);
      }
  }
  return(t);
}
static ATerm s_99 (ATerm m_99, ATerm t)
{
  t = SSL_fclose(m_99);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL;
  q_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_99 = ATgetArgument(t, 0);
      {
        ATerm q_41 = t;
        int r_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_99);
            LocalPopChoice(r_41);
          }
        else
          {
            t = q_41;
            t = s_99(q_99, t);
          }
      }
    }
  else
    {
      t = s_99(q_99, t);
    }
  return(t);
}
static ATerm e_11 (ATerm r_46, ATerm t)
{
  t = SSL_read_term_from_stream(r_46);
  return(t);
}
static ATerm f_11 (ATerm s_64, ATerm t_64, ATerm t)
{
  t = SSL_strcat(s_64, t_64);
  return(t);
}
static ATerm g_11 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm t_99 = NULL;
  t = SSL_fopen(z_47, a_48);
  t_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_99 = NULL;
  t = SSL_stdin_stream();
  u_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_99 = NULL;
  t = SSL_stdout_stream();
  v_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_99 = NULL;
  t = SSL_stderr_stream();
  w_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_99);
  return(t);
}
static ATerm f_101 (ATerm c_100, ATerm t)
{
  ATerm d_100 = NULL;
  t = SSL_explode_term(c_100);
  if(match_cons(t, sym__2))
    {
      ATerm s_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_41 = ATgetArgument(t, 1);
        if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
          {
            d_100 = ATgetFirst((ATermList) t_41);
            {
              ATerm u_41 = (ATerm) ATgetNext((ATermList) t_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_100;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_100;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_100;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_100;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_101 (ATerm g_100, ATerm h_100, ATerm i_100, ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL,o_100 = NULL,m_5 = NULL;
  t = SSLgetAnnotations(i_100);
  l_100 = t;
  t = g_100;
  if(match_cons(t, sym_Path_1))
    {
      o_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_100, h_100);
  m_5 = t;
  t = SSLsetAnnotations(m_5, l_100);
  if(match_cons(t, sym__2))
    {
      j_100 = ATgetArgument(t, 0);
      k_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(j_100, k_100, t);
  return(t);
}
static ATerm h_101 (ATerm q_100, ATerm r_100, ATerm s_100, ATerm t)
{
  ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL,a_101 = NULL,p_5 = NULL;
  t = SSLgetAnnotations(s_100);
  v_100 = t;
  t = SSL_is_string(q_100);
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_101, r_100);
  p_5 = t;
  t = SSLsetAnnotations(p_5, v_100);
  if(match_cons(t, sym__2))
    {
      t_100 = ATgetArgument(t, 0);
      u_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(t_100, u_100, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  if(match_cons(t, sym__2))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
      {
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_101(c_101, t);
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
            {
              ATerm x_41 = t;
              int y_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_101(d_101, e_101, c_101, t);
                  LocalPopChoice(y_41);
                }
              else
                {
                  t = x_41;
                  t = h_101(d_101, e_101, c_101, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_101(c_101, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL,q_101 = NULL;
  q_101 = t;
  {
    ATerm z_41 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_101, term_d_42);
        t = h_11(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = z_41;
        {
          ATerm k_36 = NULL,l_36 = NULL;
          t = term_h_42;
          l_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_42, q_101);
          t = f_11(l_36, q_101, t);
          k_36 = t;
          t = SSL_perror(k_36);
          _fail(t);
        }
      }
  }
  k_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(l_101, t);
  j_101 = t;
  t = k_101;
  t = fclose_0_0(t);
  t = j_101;
  return(t);
}
ATerm input_1_0 (ATerm q_143 (ATerm), ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_101 = NULL,u_101 = NULL;
      t = term_e_41;
      t_101 = t;
      t = term_p_42;
      u_101 = t;
      t = term_s_42;
      t = n_11(t_101, u_101, t);
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      t = term_u_42;
    }
  t = ReadFromFile_0_0(t);
  t = q_143(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL;
  v_101 = t;
  t = term_a_30;
  t = whoami_0_0(t);
  w_101 = t;
  t = term_h_16;
  y_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_42), w_101), term_v_42);
  z_101 = t;
  t = SSL_printnl(y_101, z_101);
  t = term_v_19;
  x_101 = t;
  t = SSL_exit(x_101);
  t = v_101;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm b_102 = NULL;
  b_102 = t;
  if(match_string(t, "-k"))
    {
      t = b_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_102;
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm c_102 = NULL,d_102 = NULL,e_102 = NULL;
  c_102 = t;
  t = SSL_string_to_int(c_102);
  d_102 = t;
  t = term_y_42;
  e_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_42, d_102);
  t = q_11(e_102, d_102, t);
  t = c_102;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_13, k_13, l_13, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm g_102 = NULL;
  g_102 = t;
  if(match_string(t, "-S"))
    {
      t = g_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_102;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL;
  t = term_g_43;
  h_102 = t;
  t = term_u_19;
  i_102 = t;
  t = term_h_43;
  t = q_11(h_102, i_102, t);
  t = term_i_43;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_j_43;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL;
  j_102 = t;
  t = SSL_string_to_int(j_102);
  k_102 = t;
  t = term_g_43;
  l_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_43, k_102);
  t = q_11(l_102, k_102, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_102);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL;
  t = term_m_43;
  m_102 = t;
  t = term_a_30;
  n_102 = t;
  t = term_n_43;
  t = q_11(m_102, n_102, t);
  t = term_o_43;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_13, n_13, o_13, t);
      LocalPopChoice(s_43);
    }
  else
    {
      t = r_43;
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_13, s_13, u_13, t);
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            t = Option_3_0(v_13, w_13, x_13, t);
          }
      }
    }
  return(t);
}
static ATerm q_11 (ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL;
  t = term_e_41;
  o_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_41, s_51, t_51);
  t = lookup_table_0_1(o_102, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(s_51, t_51, p_102, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_41, s_51, t_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL;
      t = term_a_30;
      t = j_0(t);
      v_102 = t;
      t = term_w_43;
      w_102 = t;
      t = term_x_43;
      x_102 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_43, term_x_43, v_102);
      t = o_11(w_102, x_102, v_102, t);
      _fail(t);
    }
  else
    {
      ATerm a_103 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_102 = ATgetFirst((ATermList) t);
          u_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_102;
      t = d_0(t);
      t = term_a_30;
      t = g_0(t);
      a_103 = t;
      t = (ATerm) ATinsert(CheckATermList(u_102), a_103);
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm c_103 = NULL;
  c_103 = t;
  if(match_string(t, "-o"))
    {
      t = c_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_103;
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL;
  d_103 = t;
  t = term_f_41;
  e_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_41, d_103);
  t = q_11(e_103, d_103, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_103);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_y_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, a_14, b_14, t);
  return(t);
}
static ATerm o_11 (ATerm w_72, ATerm x_72, ATerm v_72, ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL;
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_44 = ATgetArgument(t, 0);
            ATerm c_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
        t = n_11(w_72, x_72, t);
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        t = (ATerm) ATempty;
      }
  }
  h_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_72, x_72, (ATerm) ATinsert(CheckATermList(h_103), v_72));
  t = lookup_table_0_1(w_72, t);
  k_103 = t;
  t = (ATerm) ATinsert(CheckATermList(h_103), v_72);
  i_103 = t;
  t = k_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(x_72, i_103, j_103, t);
  t = g_103;
  return(t);
}
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL;
      t = term_a_30;
      t = u_0(t);
      v_103 = t;
      t = term_w_43;
      w_103 = t;
      t = term_x_43;
      x_103 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_43, term_x_43, v_103);
      t = o_11(w_103, x_103, v_103, t);
      _fail(t);
    }
  else
    {
      ATerm b_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_103 = ATgetFirst((ATermList) t);
          s_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_103;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_103 = ATgetFirst((ATermList) t);
          u_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_103;
      t = q_0(t);
      t = t_103;
      t = r_0(t);
      b_104 = t;
      t = (ATerm) ATinsert(CheckATermList(u_103), b_104);
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm d_104 = NULL;
  d_104 = t;
  if(match_string(t, "-i"))
    {
      t = d_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_104;
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL;
  e_104 = t;
  t = term_p_42;
  f_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_42, e_104);
  t = q_11(f_104, e_104, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_104);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_d_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_14, f_14, h_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_30;
  t = whoami_0_0(t);
  g_104 = t;
  t = term_h_16;
  i_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_44), g_104);
  j_104 = t;
  t = SSL_printnl(i_104, j_104);
  t = term_v_19;
  h_104 = t;
  t = SSL_exit(h_104);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL;
  t = term_e_41;
  k_104 = t;
  t = term_f_44;
  l_104 = t;
  t = term_g_44;
  t = n_11(k_104, l_104, t);
  return(t);
}
static ATerm i_11 (ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_54, l_54);
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
      t = SSL_addr(k_54, l_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_104;
      t = q_137(t);
    }
  else
    {
      ATerm s_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_104 = ATgetFirst((ATermList) t);
          p_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_104;
      t = foldr_2_0(q_137, r_137, t);
      s_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_104, s_104);
      t = r_137(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(t_36, u_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_104 = NULL,o_36 = NULL,p_36 = NULL;
  t = times_0_0(t);
  p_36 = t;
  t = SSL_explode_term(p_36);
  if(match_cons(t, sym__2))
    {
      ATerm j_44 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_36;
  t = foldr_2_0(i_14, j_14, t);
  v_104 = t;
  t = SSL_TicksToSeconds(v_104);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  g_105 = t;
  if(match_cons(t, sym__2))
    {
      h_105 = ATgetArgument(t, 0);
      i_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_105;
        if((h_105 != t))
          {
            _fail(t);
          }
        t = g_105;
        LocalPopChoice(n_44);
      }
    else
      {
        t = k_44;
        t = (ATerm) ATmakeAppl(sym__2, h_105, i_105);
        {
          ATerm o_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_105, i_105);
              LocalPopChoice(p_44);
            }
          else
            {
              t = o_44;
              t = SSL_gtr(h_105, i_105);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_105, i_105);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_124 (ATerm), ATerm t)
{
  ATerm m_105 = NULL;
  m_105 = t;
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
        t = term_e_41;
        p_105 = t;
        t = term_g_43;
        q_105 = t;
        t = term_u_44;
        t = n_11(p_105, q_105, t);
        o_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_105, term_v_19);
        t = geq_0_0(t);
        t = m_105;
        t = q_124(t);
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = m_105;
      }
  }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,v_105 = NULL,w_105 = NULL;
  t = run_time_0_0(t);
  s_105 = t;
  t = term_a_30;
  t = whoami_0_0(t);
  t_105 = t;
  t = term_h_16;
  v_105 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_44), s_105), term_v_44), t_105);
  w_105 = t;
  t = SSL_printnl(v_105, w_105);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_44), s_105), term_v_44), t_105));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_105 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_19;
  x_105 = t;
  t = SSL_exit(x_105);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL;
  i_106 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_106;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_106 = ATgetArgument(t, 0);
          {
            ATerm g_37 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(i_106);
            g_37 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_106);
            t_5 = t;
            t = SSLsetAnnotations(t_5, g_37);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_106;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_143 (ATerm), ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_106 = NULL,b_106 = NULL;
      t = term_e_41;
      a_106 = t;
      t = term_z_44;
      b_106 = t;
      t = term_a_45;
      t = n_11(a_106, b_106, t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      t = fetch_1_0(l_14, t);
    }
  t = g_143(t);
  return(t);
}
static ATerm r_11 (ATerm o_77, ATerm p_77, ATerm q_77, ATerm t)
{
  ATerm k_106 = NULL;
  t = SSL_hashtable_put(q_77, o_77, p_77);
  k_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_106);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_74, ATerm t)
{
  ATerm t_106 = NULL;
  t = table_hashtable_0_0(t);
  t_106 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_37 = NULL;
        t = t_106;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_11(i_74, m_37, t);
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        {
          ATerm r_37 = NULL;
          t = i_74;
          t = table_create_0_0(t);
          t = t_106;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11(i_74, r_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_77, ATerm x_77, ATerm t)
{
  ATerm w_106 = NULL;
  t = SSL_hashtable_create(w_77, x_77);
  w_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_106);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL,b_107 = NULL,c_107 = NULL;
  x_106 = t;
  t = term_d_45;
  b_107 = t;
  t = term_e_45;
  c_107 = t;
  t = x_106;
  t = new_hashtable_0_2(b_107, c_107, t);
  y_106 = t;
  t = x_106;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(x_106, y_106, z_106, t);
  t = x_106;
  return(t);
}
static ATerm k_11 (ATerm t_77, ATerm u_77, ATerm t)
{
  ATerm d_107 = NULL;
  t = SSL_hashtable_remove(u_77, t_77);
  d_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_107);
  return(t);
}
static ATerm l_11 (ATerm y_77, ATerm t)
{
  ATerm e_107 = NULL;
  t = SSL_hashtable_destroy(y_77);
  e_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_107);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_107 = NULL;
  t = SSL_table_hashtable();
  f_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_107);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL;
  g_107 = t;
  t = table_hashtable_0_0(t);
  h_107 = t;
  t = lookup_table_0_1(g_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11(j_107, t);
  t = h_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_11(g_107, i_107, t);
  t = g_107;
  return(t);
}
ATerm map_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  static ATerm y_107 (ATerm t)
  {
    ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL;
    v_107 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_107;
      }
    else
      {
        ATerm w_37 = NULL,z_37 = NULL,a_38 = NULL,v_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_107 = ATgetFirst((ATermList) t);
            x_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_107);
        w_37 = t;
        t = w_107;
        t = j_127(t);
        z_37 = t;
        t = x_107;
        t = y_107(t);
        a_38 = t;
        t = (ATerm) ATinsert(CheckATermList(a_38), z_37);
        v_5 = t;
        t = SSLsetAnnotations(v_5, w_37);
      }
    return(t);
  }
  t = y_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_108 = NULL,c_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_108 = ATgetFirst((ATermList) t);
      c_108 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_108 = NULL,h_108 = NULL;
        static ATerm n_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_108)), not_null(h_108));
          return(t);
        }
        t = c_108;
        t = o_0(t);
        if(((g_108 != NULL) && (g_108 != t)))
          _fail(t);
        else
          g_108 = t;
        t = b_108;
        t = l_0(t);
        if(((h_108 != NULL) && (h_108 != t)))
          _fail(t);
        else
          h_108 = t;
        t = c_108;
        t = reverse_acc_2_0(l_0, n_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_30;
      t = o_0(t);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL,x_5 = NULL;
  p_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_108);
  n_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_108);
  x_5 = t;
  t = SSLsetAnnotations(x_5, n_108);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm r_108 = NULL;
  r_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_108), term_f_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL;
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_108 = NULL,m_108 = NULL;
      t = term_e_41;
      l_108 = t;
      t = term_f_44;
      m_108 = t;
      t = term_g_44;
      t = n_11(l_108, m_108, t);
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      t = fetch_1_0(o_14, t);
    }
  t = term_i_45;
  t = echo_0_0(t);
  t = term_w_43;
  j_108 = t;
  t = term_x_43;
  k_108 = t;
  t = term_j_45;
  t = n_11(j_108, k_108, t);
  t = reverse_acc_2_0(_id, p_14, t);
  t = map_1_0(q_14, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  static ATerm o_109 (ATerm t)
  {
    ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL;
    l_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_109 = ATgetFirst((ATermList) t);
        n_109 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_45 = t;
      int l_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_38 = NULL,m_38 = NULL,z_5 = NULL;
          t = SSLgetAnnotations(l_109);
          j_38 = t;
          t = m_109;
          t = t_127(t);
          m_38 = t;
          t = (ATerm) ATinsert(CheckATermList(n_109), m_38);
          z_5 = t;
          t = SSLsetAnnotations(z_5, j_38);
          LocalPopChoice(l_45);
        }
      else
        {
          t = k_45;
          {
            ATerm v_38 = NULL,y_38 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(l_109);
            v_38 = t;
            t = n_109;
            t = o_109(t);
            y_38 = t;
            t = (ATerm) ATinsert(CheckATermList(y_38), m_109);
            b_6 = t;
            t = SSLsetAnnotations(b_6, v_38);
          }
        }
    }
    return(t);
  }
  t = o_109(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
  s_109 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_109;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_45 = ATgetFirst((ATermList) t);
                ATerm s_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_109;
          }
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        t = (ATerm) ATinsert(ATempty, s_109);
      }
  }
  t_109 = t;
  t = term_h_41;
  u_109 = t;
  t = SSL_printnl(u_109, t_109);
  t = s_109;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL;
  t = term_e_41;
  y_109 = t;
  t = term_f_44;
  z_109 = t;
  t = term_g_44;
  t = n_11(y_109, z_109, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_11 (ATerm r_77, ATerm s_77, ATerm t)
{
  t = SSL_hashtable_get(s_77, r_77);
  return(t);
}
static ATerm n_11 (ATerm p_74, ATerm q_74, ATerm t)
{
  ATerm a_110 = NULL;
  t = lookup_table_0_1(p_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(q_74, a_110, t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL;
  t = term_t_45;
  c_110 = t;
  t = term_a_30;
  d_110 = t;
  t = term_u_45;
  t = q_11(c_110, d_110, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_w_45;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL,h_110 = NULL;
  t = term_t_45;
  g_110 = t;
  t = term_a_30;
  h_110 = t;
  t = term_u_45;
  t = q_11(g_110, h_110, t);
  t = term_x_45;
  e_110 = t;
  t = term_a_30;
  f_110 = t;
  t = term_y_45;
  t = q_11(e_110, f_110, t);
  t = term_z_45;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_a_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_14, w_14, z_14, t);
      LocalPopChoice(c_46);
    }
  else
    {
      t = b_46;
      t = Option_3_0(b_15, c_15, d_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_145 (ATerm), ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,r_110 = NULL,s_110 = NULL,k_6 = NULL;
  m_110 = t;
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_46;
        t = j_145(t);
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
      }
  }
  t = m_110;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_110 = ATgetFirst((ATermList) t);
      p_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_110);
  n_110 = t;
  t = term_f_44;
  s_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_44, o_110);
  t = q_11(s_110, o_110, t);
  t = p_110;
  {
    static ATerm c_111 (ATerm t)
    {
      ATerm g_46 = t;
      int h_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_110 = NULL;
              v_110 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_110;
              LocalPopChoice(j_46);
            }
          else
            {
              t = i_46;
              t = j_145(t);
              t = Cons_2_0(_id, c_111, t);
            }
          LocalPopChoice(h_46);
        }
      else
        {
          t = g_46;
          {
            ATerm y_110 = NULL,z_110 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_110 = ATgetFirst((ATermList) t);
                z_110 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_110), (ATerm) ATmakeAppl(sym_Undefined_1, y_110));
          }
        }
      return(t);
    }
    t = c_111(t);
  }
  r_110 = t;
  t = (ATerm) ATinsert(CheckATermList(r_110), (ATerm) ATmakeAppl(sym_Program_1, o_110));
  k_6 = t;
  t = SSLsetAnnotations(k_6, n_110);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm p_111 = NULL;
  p_111 = t;
  if(match_string(t, "--help"))
    {
      t = p_111;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_111;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_111;
        }
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL;
  t = term_z_44;
  q_111 = t;
  t = term_a_30;
  r_111 = t;
  t = term_k_46;
  t = q_11(q_111, r_111, t);
  t = term_n_46;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL;
  j_111 = t;
  t = term_w_43;
  k_111 = t;
  t = term_s_46;
  t = lookup_table_0_1(k_111, t);
  o_111 = t;
  t = term_x_43;
  l_111 = t;
  t = (ATerm) ATempty;
  m_111 = t;
  t = o_111;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(l_111, m_111, n_111, t);
  t = j_111;
  {
    static ATerm e_15 (ATerm t)
    {
      ATerm t_46 = t;
      int u_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_145(t);
          LocalPopChoice(u_46);
        }
      else
        {
          t = t_46;
          {
            ATerm w_46 = t;
            int x_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_15, g_15, h_15, t);
                LocalPopChoice(x_46);
              }
            else
              {
                t = w_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_15, t);
  }
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_112 = NULL;
        c_112 = t;
        {
          ATerm a_47 = t;
          int b_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_39 = NULL;
              t = c_112;
              {
                ATerm c_47 = t;
                int d_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_39 = NULL,p_39 = NULL;
                    t = term_e_41;
                    o_39 = t;
                    t = term_z_44;
                    p_39 = t;
                    t = term_a_45;
                    t = n_11(o_39, p_39, t);
                    LocalPopChoice(d_47);
                  }
                else
                  {
                    t = c_47;
                    t = fetch_1_0(i_15, t);
                  }
              }
              t = c_112;
              t = default_system_usage_0_0(t);
              t = term_u_19;
              f_39 = t;
              t = SSL_exit(f_39);
              LocalPopChoice(b_47);
            }
          else
            {
              t = a_47;
              {
                ATerm f_40 = NULL,g_40 = NULL,l_40 = NULL;
                t = term_e_41;
                g_40 = t;
                t = term_t_45;
                l_40 = t;
                t = term_e_47;
                t = n_11(g_40, l_40, t);
                t = c_112;
                t = default_system_about_0_0(t);
                t = term_u_19;
                f_40 = t;
                t = SSL_exit(f_40);
              }
            }
        }
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        {
          ATerm f_47 = t;
          int g_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL;
              static ATerm j_15 (ATerm t)
              {
                ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,t_6 = NULL;
                i_112 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_112 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_112);
                g_112 = t;
                t = h_112;
                if(((h_111 != NULL) && (h_111 != t)))
                  _fail(t);
                else
                  h_111 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_112);
                t_6 = t;
                t = SSLsetAnnotations(t_6, g_112);
                return(t);
              }
              t = fetch_1_0(j_15, t);
              t = term_h_16;
              e_112 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_111)), term_h_47);
              f_112 = t;
              t = SSL_printnl(e_112, f_112);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_111)), term_h_47));
              t = default_system_usage_0_0(t);
              t = term_v_19;
              d_112 = t;
              t = SSL_exit(d_112);
              LocalPopChoice(g_47);
            }
          else
            {
              t = f_47;
            }
        }
      }
  }
  i_111 = t;
  t = term_w_43;
  t = table_destroy_0_0(t);
  t = i_111;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t)
{
  ATerm n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
  t = parse_options_1_0(i_143, t);
  n_112 = t;
  t = term_i_47;
  t = table_create_0_0(t);
  t = term_i_47;
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_47, term_j_47, n_112);
  t = lookup_table_0_1(o_112, t);
  r_112 = t;
  t = term_j_47;
  p_112 = t;
  t = r_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(p_112, n_112, q_112, t);
  t = n_112;
  t = k_143(t);
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_143, t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        {
          ATerm m_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_143(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_47);
            }
          else
            {
              t = m_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm o_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_47);
    }
  else
    {
      t = o_47;
      {
        ATerm q_47 = t;
        int r_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_47);
          }
        else
          {
            t = q_47;
            {
              ATerm s_47 = t;
              int t_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_15, r_15, s_15, t);
                  LocalPopChoice(t_47);
                }
              else
                {
                  t = s_47;
                  {
                    ATerm u_47 = t;
                    int v_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_47);
                      }
                    else
                      {
                        t = u_47;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = input_1_0(t_15, t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL;
  t = term_k_41;
  t_112 = t;
  t = term_a_30;
  u_112 = t;
  t = term_w_47;
  t = q_11(t_112, u_112, t);
  t = term_b_48;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = output_1_0(y_15, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,z_6 = NULL,y_6 = NULL;
  d_113 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_113);
  w_112 = t;
  t = x_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_112 = ATgetFirst((ATermList) t);
      a_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_112);
  y_112 = t;
  t = a_113;
  t = Cons_2_0(z_15, e_16, t);
  b_113 = t;
  t = (ATerm) ATinsert(CheckATermList(b_113), z_112);
  y_6 = t;
  t = SSLsetAnnotations(y_6, y_112);
  c_113 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_113);
  z_6 = t;
  t = SSLsetAnnotations(z_6, w_112);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,w_6 = NULL;
  h_113 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_113);
  e_113 = t;
  t = f_113;
  t = all_defs_0_0(t);
  g_113 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_113);
  w_6 = t;
  t = SSLsetAnnotations(w_6, e_113);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_15, default_usage_0_0, _id, l_15, t);
  return(t);
}
