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

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetGamePadHelpWidgetClass
	struct UVoiceSettingWidget_Gamepad_C_GetGamePadHelpWidgetClass_Params
	{
		class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnPrevOrNextFocusableWidget
	struct UVoiceSettingWidget_Gamepad_C_OnPrevOrNextFocusableWidget_Params
	{
		bool*                                              bNext;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		class UWidget*                                     FocusableWidget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetCurrentFocusWidget
	struct UVoiceSettingWidget_Gamepad_C_GetCurrentFocusWidget_Params
	{
		class UWidget*                                     FocusWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetVoiceChannelByOption
	struct UVoiceSettingWidget_Gamepad_C_GetVoiceChannelByOption_Params
	{
		bool                                               GlobalChannel;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               TeamChannel;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetMyVoiceByOption
	struct UVoiceSettingWidget_Gamepad_C_GetMyVoiceByOption_Params
	{
		bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bUsePushToTalk;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetVoiceChannelOptionString
	struct UVoiceSettingWidget_Gamepad_C_GetVoiceChannelOptionString_Params
	{
		struct FString                                     OptionString;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.GetMyVoiceOptionString
	struct UVoiceSettingWidget_Gamepad_C_GetMyVoiceOptionString_Params
	{
		struct FString                                     OptionString;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.IsChanged
	struct UVoiceSettingWidget_Gamepad_C_IsChanged_Params
	{
		bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.UpdateVoiceSettingWidget
	struct UVoiceSettingWidget_Gamepad_C_UpdateVoiceSettingWidget_Params
	{
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.Construct
	struct UVoiceSettingWidget_Gamepad_C_Construct_Params
	{
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnApply
	struct UVoiceSettingWidget_Gamepad_C_OnApply_Params
	{
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnDefault
	struct UVoiceSettingWidget_Gamepad_C_OnDefault_Params
	{
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.OnReset
	struct UVoiceSettingWidget_Gamepad_C_OnReset_Params
	{
	};

	// Function VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C.ExecuteUbergraph_VoiceSettingWidget_Gamepad
	struct UVoiceSettingWidget_Gamepad_C_ExecuteUbergraph_VoiceSettingWidget_Gamepad_Params
	{
		int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
