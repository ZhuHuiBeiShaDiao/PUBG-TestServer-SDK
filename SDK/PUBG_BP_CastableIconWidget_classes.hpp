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

	// WidgetBlueprintGeneratedClass BP_CastableIconWidget.BP_CastableIconWidget_C
	// 0x0008 (0x0340 - 0x0338)
	class UBP_CastableIconWidget_C : public UTslCastableItemIconWidget
	{
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (CPF_Transient, CPF_DuplicateTransient)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x8bccc34d);
			return ptr;
		}


		void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
		void ExecuteUbergraph_BP_CastableIconWidget(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
