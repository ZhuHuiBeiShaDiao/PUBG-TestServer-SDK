// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillCamResultWidget.KillcamResultWidget_C.GetAliveTeamMemberCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::GetAliveTeamMemberCount(int* Count)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x58797cea);

	UKillcamResultWidget_C_GetAliveTeamMemberCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function KillCamResultWidget.KillcamResultWidget_C.GetTslGameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslGameState*           TslGameState                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::GetTslGameState(class ATslGameState** TslGameState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9e5ce2eb);

	UKillcamResultWidget_C_GetTslGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslGameState != nullptr)
		*TslGameState = params.TslGameState;
}


// Function KillCamResultWidget.KillcamResultWidget_C.GetTslPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslPlayerState*         PlayerState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::GetTslPlayerState(class ATslPlayerState** PlayerState)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf3ff8c78);

	UKillcamResultWidget_C_GetTslPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function KillCamResultWidget.KillcamResultWidget_C.On_ButtonReportPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::On_ButtonReportPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4345a1d3);

	UKillcamResultWidget_C_On_ButtonReportPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.UpdateObserverMatchResult
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::UpdateObserverMatchResult()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x836403c2);

	UKillcamResultWidget_C_UpdateObserverMatchResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.IsGameOver
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           return_value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::IsGameOver(bool* return_value)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x8b76aacf);

	UKillcamResultWidget_C_IsGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function KillCamResultWidget.KillcamResultWidget_C.SetResultScoreValues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::SetResultScoreValues()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3dae2bda);

	UKillcamResultWidget_C_SetResultScoreValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.SetReferences
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::SetReferences()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb6acfbbb);

	UKillcamResultWidget_C_SetReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.On_MatchResultWindow_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::On_MatchResultWindow_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbfb27ec8);

	UKillcamResultWidget_C_On_MatchResultWindow_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.On_DetailScoreLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::On_DetailScoreLayer_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd54a1c3c);

	UKillcamResultWidget_C_On_DetailScoreLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.On_BigRankBox_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::On_BigRankBox_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1c3741bd);

	UKillcamResultWidget_C_On_BigRankBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.SetResultDefaultValues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::SetResultDefaultValues()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x35b55cef);

	UKillcamResultWidget_C_SetResultDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.On_ButtonSpectator_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::On_ButtonSpectator_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb641b2f7);

	UKillcamResultWidget_C_On_ButtonSpectator_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.GoToLobby
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::GoToLobby(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef9d7192);

	UKillcamResultWidget_C_GoToLobby_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.OnActionInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::OnActionInput()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xa3384462);

	UKillcamResultWidget_C_OnActionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.OnHiddenWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::OnHiddenWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x2ec49540);

	UKillcamResultWidget_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.ShowLobbyPopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::ShowLobbyPopup()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xef676c1a);

	UKillcamResultWidget_C_ShowLobbyPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::Destruct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5c21f12d);

	UKillcamResultWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillcamResultWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4445520f);

	UKillcamResultWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillcamResultWidget_C::BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x13a6f275);

	UKillcamResultWidget_C_BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillcamResultWidget_C::BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x82b84ae2);

	UKillcamResultWidget_C_BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillcamResultWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xc3aa438f);

	UKillcamResultWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.Custom Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::Custom_Event_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x4de90902);

	UKillcamResultWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.XBoxOnOk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::XBoxOnOk()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xab5edc61);

	UKillcamResultWidget_C_XBoxOnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillcamResultWidget_C::BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x518a9ca0);

	UKillcamResultWidget_C_BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x63eaa3d4);

	UKillcamResultWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKillcamResultWidget_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xd0bd3d0e);

	UKillcamResultWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.BndEvt__ButtonKillCamReplay_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UKillcamResultWidget_C::BndEvt__ButtonKillCamReplay_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x36c3f852);

	UKillcamResultWidget_C_BndEvt__ButtonKillCamReplay_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamResultWidget.KillcamResultWidget_C.ExecuteUbergraph_KillcamResultWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKillcamResultWidget_C::ExecuteUbergraph_KillcamResultWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x601a275b);

	UKillcamResultWidget_C_ExecuteUbergraph_KillcamResultWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
