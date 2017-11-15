#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
	//---------------------------------------------------------------------------
	//Parameters
	//---------------------------------------------------------------------------

	// Function KillCamResultWidget.KillcamResultWidget_C.GetAliveTeamMemberCount
	struct UKillcamResultWidget_C_GetAliveTeamMemberCount_Params
	{
		int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.GetTslGameState
	struct UKillcamResultWidget_C_GetTslGameState_Params
	{
		class ATslGameState*                               TslGameState;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.GetTslPlayerState
	struct UKillcamResultWidget_C_GetTslPlayerState_Params
	{
		class ATslPlayerState*                             PlayerState;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.On_ButtonReportPrepass_1
	struct UKillcamResultWidget_C_On_ButtonReportPrepass_1_Params
	{
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.UpdateObserverMatchResult
	struct UKillcamResultWidget_C_UpdateObserverMatchResult_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.IsGameOver
	struct UKillcamResultWidget_C_IsGameOver_Params
	{
		bool                                               return_value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.SetResultScoreValues
	struct UKillcamResultWidget_C_SetResultScoreValues_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.SetReferences
	struct UKillcamResultWidget_C_SetReferences_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.On_MatchResultWindow_Prepass_1
	struct UKillcamResultWidget_C_On_MatchResultWindow_Prepass_1_Params
	{
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.On_DetailScoreLayer_Prepass_1
	struct UKillcamResultWidget_C_On_DetailScoreLayer_Prepass_1_Params
	{
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.On_BigRankBox_Prepass_1
	struct UKillcamResultWidget_C_On_BigRankBox_Prepass_1_Params
	{
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.SetResultDefaultValues
	struct UKillcamResultWidget_C_SetResultDefaultValues_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.On_ButtonSpectator_Prepass_1
	struct UKillcamResultWidget_C_On_ButtonSpectator_Prepass_1_Params
	{
		class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.GoToLobby
	struct UKillcamResultWidget_C_GoToLobby_Params
	{
		EPopupButtonID                                     ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.OnActionInput
	struct UKillcamResultWidget_C_OnActionInput_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.OnHiddenWidget
	struct UKillcamResultWidget_C_OnHiddenWidget_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.ShowLobbyPopup
	struct UKillcamResultWidget_C_ShowLobbyPopup_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.Destruct
	struct UKillcamResultWidget_C_Destruct_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	struct UKillcamResultWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
	struct UKillcamResultWidget_C_BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	struct UKillcamResultWidget_C_BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	struct UKillcamResultWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.Custom Event_1
	struct UKillcamResultWidget_C_Custom_Event_1_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.XBoxOnOk
	struct UKillcamResultWidget_C_XBoxOnOk_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	struct UKillcamResultWidget_C_BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.Tick
	struct UKillcamResultWidget_C_Tick_Params
	{
		struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
		float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.Construct
	struct UKillcamResultWidget_C_Construct_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonKillCamReplay_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
	struct UKillcamResultWidget_C_BndEvt__ButtonKillCamReplay_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	// Function KillCamResultWidget.KillcamResultWidget_C.ExecuteUbergraph_KillcamResultWidget
	struct UKillcamResultWidget_C_ExecuteUbergraph_KillcamResultWidget_Params
	{
		int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
