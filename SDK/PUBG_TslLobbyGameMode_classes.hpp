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

	// BlueprintGeneratedClass TslLobbyGameMode.TSLLobbyGameMode_C
	// 0x0008 (0x0480 - 0x0478)
	class ATSLLobbyGameMode_C : public ATslEntryGameMode
	{
	public:
		class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2e30ac25);
			return ptr;
		}


		void UserConstructionScript();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
