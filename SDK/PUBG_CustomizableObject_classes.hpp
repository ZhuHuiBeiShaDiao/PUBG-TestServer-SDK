#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class CustomizableObject.CustomizableSkeletalComponent
	// 0x0050 (0x0430 - 0x03E0)
	class UCustomizableSkeletalComponent : public USceneComponent {
	public:
		class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x48];                                      // 0x03E8(0x0048) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7819def2);
			return ptr;
		}


		void UpdateSkeletalMeshAsync(bool bForceReuseResources);
		void UpdateSkeletalMesh(bool bForceReuseResources);
	};


	// Class CustomizableObject.CustomizableObjectInstance
	// 0x0188 (0x01B0 - 0x0028)
	class UCustomizableObjectInstance : public UObject {
	public:
		class UCustomizableObject*                         CustomizableObject;                                       // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
		class USkeletalMesh*                               SkeletalMesh;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
		int                                                State;                                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
		TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0040(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
		TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0050(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
		TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0060(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
		TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0070(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
		TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x0080(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
		bool                                               bBuildRawData;                                            // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
		bool                                               bBuildRenderData;                                         // 0x0091(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x116];                                     // 0x0092(0x0116) MISSED OFFSET
		class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xeb5a3a94);
			return ptr;
		}


		void SetRandomValues();
	};


	// Class CustomizableObject.CustomizableInstancePrivateData
	// 0x00E8 (0x0110 - 0x0028)
	class UCustomizableInstancePrivateData : public UObject {
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
		TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
		TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient)
		TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
		unsigned char                                      UnknownData01[0xB0];                                      // 0x0060(0x00B0) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x2308bdda);
			return ptr;
		}

	};


	// Class CustomizableObject.CustomizableObject
	// 0x00C8 (0x00F0 - 0x0028)
	class UCustomizableObject : public UObject {
	public:
		class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		ECustomizableObjectRelevancy                       Relevancy;                                                // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDisableTextureLayoutManagement;                          // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
		TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
		TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
		TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0060(0x0050) (CPF_ZeroConstructor)
		struct FCompilationOptions                         CompileOptions;                                           // 0x00B0(0x000C)
		struct FGuid                                       VersionId;                                                // 0x00BC(0x0010) (CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
		TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x00D0(0x0010) (CPF_ZeroConstructor)
		unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xcbbbb06d);
			return ptr;
		}

	};


	// Class CustomizableObject.CustomizableObjectSystem
	// 0x00C8 (0x00F0 - 0x0028)
	class UCustomizableObjectSystem : public UObject {
	public:
		unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
		TArray<struct FMutableTextureTracker>              TextureTrackerArray;                                      // 0x0050(0x0010) (CPF_ZeroConstructor)
		TArray<class UTexture2D*>                          ProtectedCachedTextures;                                  // 0x0060(0x0010) (CPF_ZeroConstructor)
		unsigned char                                      UnknownData01[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x6dbf909a);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
