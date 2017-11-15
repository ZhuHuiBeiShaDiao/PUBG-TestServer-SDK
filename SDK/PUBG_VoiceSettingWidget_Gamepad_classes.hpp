#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass VoiceSettingWidget_Gamepad.VoiceSettingWidget_Gamepad_C
	// 0x009C (0x0388 - 0x02EC)
	class UVoiceSettingWidget_Gamepad_C : public UBaseOptionWidget_C
	{
	public:
		unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
		class UChildOptionTitleWidget_C*                   ChildOptionTitleWidget;                                   // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UTslCheckBox_C*                              MY_VOICE_ALWAYS_TALK;                                     // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		class UTslCheckBox_C*                              VOICE_CHANEL;                                             // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
		struct FString                                     MyVoiceAlwaysOptionString;                                // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
		struct FString                                     MyVoicePushToTalkOptionString;                            // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
		struct FString                                     MyVoiceMuteOptionString;                                  // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
		struct FString                                     VoiceChannelAllOptionString;                              // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
		struct FString                                     VoiceChannelOnlyTeamOptionString;                         // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
		struct FString                                     VoiceChannelNoneOptionString;                             // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
		int                                                FocusIndex;                                               // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
		TArray<class UWidget*>                             FocusableList;                                            // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x116d87c9);
			return ptr;
		}


		void GetGamePadHelpWidgetClass(class UClass** GuideClass);
		void OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget);
		void GetCurrentFocusWidget(class UWidget** FocusWidget);
		void GetVoiceChannelByOption(bool* GlobalChannel, bool* TeamChannel);
		void GetMyVoiceByOption(bool* bIsMuted, bool* bUsePushToTalk);
		void GetVoiceChannelOptionString(struct FString* OptionString);
		void GetMyVoiceOptionString(struct FString* OptionString);
		bool IsChanged();
		void UpdateVoiceSettingWidget();
		void Construct();
		void OnApply();
		void OnDefault();
		void OnReset();
		void ExecuteUbergraph_VoiceSettingWidget_Gamepad(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
