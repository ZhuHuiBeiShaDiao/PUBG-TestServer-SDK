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

// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVoiceSettingWidget_Gamepad_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x6ffb6ce9);

	UVoiceSettingWidget_Gamepad_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnPrevOrNextFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNext                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 FocusableWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVoiceSettingWidget_Gamepad_C::OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xbc591329);

	UVoiceSettingWidget_Gamepad_C_OnPrevOrNextFocusableWidget_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetCurrentFocusWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVoiceSettingWidget_Gamepad_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3b799f80);

	UVoiceSettingWidget_Gamepad_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetVoiceChannelByOption
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           GlobalChannel                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TeamChannel                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVoiceSettingWidget_Gamepad_C::GetVoiceChannelByOption(bool* GlobalChannel, bool* TeamChannel)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x24cb9b66);

	UVoiceSettingWidget_Gamepad_C_GetVoiceChannelByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalChannel != nullptr)
		*GlobalChannel = params.GlobalChannel;
	if (TeamChannel != nullptr)
		*TeamChannel = params.TeamChannel;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetMyVoiceByOption
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsMuted                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUsePushToTalk                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVoiceSettingWidget_Gamepad_C::GetMyVoiceByOption(bool* bIsMuted, bool* bUsePushToTalk)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x7f076c7);

	UVoiceSettingWidget_Gamepad_C_GetMyVoiceByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsMuted != nullptr)
		*bIsMuted = params.bIsMuted;
	if (bUsePushToTalk != nullptr)
		*bUsePushToTalk = params.bUsePushToTalk;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetVoiceChannelOptionString
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 OptionString                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVoiceSettingWidget_Gamepad_C::GetVoiceChannelOptionString(struct FString* OptionString)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb885fc52);

	UVoiceSettingWidget_Gamepad_C_GetVoiceChannelOptionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetMyVoiceOptionString
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 OptionString                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVoiceSettingWidget_Gamepad_C::GetMyVoiceOptionString(struct FString* OptionString)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x90c1b72f);

	UVoiceSettingWidget_Gamepad_C_GetMyVoiceOptionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.IsChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVoiceSettingWidget_Gamepad_C::IsChanged()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xfd02a9b5);

	UVoiceSettingWidget_Gamepad_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.UpdateVoiceSettingWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVoiceSettingWidget_Gamepad_C::UpdateVoiceSettingWidget()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdceb5ca6);

	UVoiceSettingWidget_Gamepad_C_UpdateVoiceSettingWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVoiceSettingWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x3d51aba2);

	UVoiceSettingWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnApply
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVoiceSettingWidget_Gamepad_C::OnApply()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x75a59268);

	UVoiceSettingWidget_Gamepad_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnDefault
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVoiceSettingWidget_Gamepad_C::OnDefault()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x1d5d038b);

	UVoiceSettingWidget_Gamepad_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnReset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVoiceSettingWidget_Gamepad_C::OnReset()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9f2cc5a9);

	UVoiceSettingWidget_Gamepad_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.ExecuteUbergraph_VoiceSettingWidget_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVoiceSettingWidget_Gamepad_C::ExecuteUbergraph_VoiceSettingWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xf9be0bad);

	UVoiceSettingWidget_Gamepad_C_ExecuteUbergraph_VoiceSettingWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
