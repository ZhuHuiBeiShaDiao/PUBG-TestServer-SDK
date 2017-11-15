#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Script Structs
	//---------------------------------------------------------------------------

	// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
	// 0x0014
	struct FClothCollisionPrim_Sphere
	{
		int                                                BoneIndex;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Radius;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     LocalPosition;                                            // 0x0008(0x000C) (CPF_IsPlainOldData)
	};

	// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
	// 0x0008
	struct FClothCollisionPrim_SphereConnection
	{
		int                                                SphereIndices[0x2];                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	};

	// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
	// 0x0018
	struct FClothCollisionPrim_Convex
	{
		TArray<struct FPlane>                              Planes;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
		int                                                BoneIndex;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	};

	// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
	// 0x0030
	struct FClothCollisionData
	{
		TArray<struct FClothCollisionPrim_Sphere>          Spheres;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
		TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                        // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
		TArray<struct FClothCollisionPrim_Convex>          Convexes;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
