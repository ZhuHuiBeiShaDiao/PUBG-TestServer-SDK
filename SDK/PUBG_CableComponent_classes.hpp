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

	// Class CableComponent.CableActor
	// 0x0008 (0x03B0 - 0x03A8)
	class ACableActor : public AActor
	{
	public:
		class UCableComponent*                             CableComponent;                                           // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc93468f9);
			return ptr;
		}

	};


	// Class CableComponent.CableComponent
	// 0x0080 (0x09B0 - 0x0930)
	class UCableComponent : public UMeshComponent
	{
	public:
		bool                                               bAttachStart;                                             // 0x0930(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bAttachEnd;                                               // 0x0931(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x6];                                       // 0x0932(0x0006) MISSED OFFSET
		struct FComponentReference                         AttachEndTo;                                              // 0x0938(0x0018) (CPF_Edit)
		struct FName                                       AttachEndToSocketName;                                    // 0x0950(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     EndLocation;                                              // 0x0958(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		float                                              CableLength;                                              // 0x0964(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                NumSegments;                                              // 0x0968(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SubstepTime;                                              // 0x096C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                SolverIterations;                                         // 0x0970(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bEnableStiffness;                                         // 0x0974(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bEnableCollision;                                         // 0x0975(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x2];                                       // 0x0976(0x0002) MISSED OFFSET
		float                                              CollisionFriction;                                        // 0x0978(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     CableForce;                                               // 0x097C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		float                                              CableGravityScale;                                        // 0x0988(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              CableWidth;                                               // 0x098C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                NumSides;                                                 // 0x0990(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              TileMaterial;                                             // 0x0994(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x18];                                      // 0x0998(0x0018) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xfeb13f83);
			return ptr;
		}


		void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
		void GetCableParticleLocations(TArray<struct FVector>* Locations);
		class USceneComponent* GetAttachedComponent();
		class AActor* GetAttachedActor();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
