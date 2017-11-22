#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass Item_Heal_FirstAid.Item_Heal_FirstAid_C
	// 0x0004 (0x0204 - 0x0200)
	class UItem_Heal_FirstAid_C : public UInstantHealItem {
	public:
		int                                                PrintTime;                                                // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xcc4b76b3);
			return ptr;
		}


		void PrintCastingTime();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
