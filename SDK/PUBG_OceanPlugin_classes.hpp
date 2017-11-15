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

	// Class OceanPlugin.BuoyancyForceComponent
	// 0x00A0 (0x0480 - 0x03E0)
	class UBuoyancyForceComponent : public USceneComponent
	{
	public:
		class AOceanManager*                               OceanManager;                                             // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MeshDensity;                                              // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidDensity;                                             // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidLinearDamping;                                       // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidAngularDamping;                                      // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     VelocityDamper;                                           // 0x03F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		bool                                               ClampMaxVelocity;                                         // 0x0404(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
		float                                              MaxUnderwaterVelocity;                                    // 0x0408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              TestPointRadius;                                          // 0x040C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TArray<struct FVector>                             TestPoints;                                               // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               ApplyForceToBones;                                        // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               SnapToSurfaceIfNoPhysics;                                 // 0x0421(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               TwoGerstnerIterations;                                    // 0x0422(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x5];                                       // 0x0423(0x0005) MISSED OFFSET
		TArray<float>                                      PointDensityOverride;                                     // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<struct FStructBoneOverride>                 BoneOverride;                                             // 0x0438(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               DrawDebugPoints;                                          // 0x0448(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               EnableStayUprightConstraint;                              // 0x0449(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
		float                                              StayUprightStiffness;                                     // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              StayUprightDamping;                                       // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FRotator                                    StayUprightDesiredRotation;                               // 0x0454(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		bool                                               EnableWaveForces;                                         // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
		float                                              WaveForceMultiplier;                                      // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData04[0x17];                                      // 0x0469(0x0017) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x85888168);
			return ptr;
		}

	};


	// Class OceanPlugin.OceanManager
	// 0x0088 (0x0430 - 0x03A8)
	class AOceanManager : public AActor
	{
	public:
		bool                                               EnableGerstnerWaves;                                      // 0x03A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
		struct FVector2D                                   GlobalWaveDirection;                                      // 0x03AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		float                                              GlobalWaveSpeed;                                          // 0x03B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              GlobalWaveAmplitude;                                      // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              DistanceCheck;                                            // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TArray<struct FWaveParameter>                      WaveClusters;                                             // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<struct FWaveSetParameters>                  WaveSetOffsetsOverride;                                   // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		float                                              NetWorkTimeOffset;                                        // 0x03E0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bEnableLandscapeModulation;                               // 0x03E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
		float                                              ModulationStartHeight;                                    // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ModulationMaxHeight;                                      // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ModulationPower;                                          // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
		class ALandscape*                                  Landscape;                                                // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		class UTexture2D*                                  HeightmapTexture;                                         // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0x28];                                      // 0x0408(0x0028) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xbc14f367);
			return ptr;
		}


		void LoadLandscapeHeightmap(class UTexture2D* Tex2D);
		struct FVector GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations);
		struct FLinearColor GetHeightmapPixel(float U, float V);
	};


	// Class OceanPlugin.AdvancedBuoyancyComponent
	// 0x0120 (0x0500 - 0x03E0)
	class UAdvancedBuoyancyComponent : public USceneComponent
	{
	public:
		bool                                               bUseDrag;                                                 // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDebugOn;                                                 // 0x03E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
		class AOceanManager*                               TheOcean;                                                 // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              WaterDensity;                                             // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Gravity;                                                  // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MeshDensity;                                              // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x14];                                      // 0x03FC(0x0014) MISSED OFFSET
		class UStaticMeshComponent*                        BuoyantMesh;                                              // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
		struct FTransform                                  MeshTransform;                                            // 0x0420(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		float                                              FalseVolume;                                              // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              BuoyancyReductionCoefficient;                             // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              BuoyancyPitchReductionCoefficient;                        // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              DensityCorrection;                                        // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              DensityCorrectionModifier;                                // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SubmergedVolume;                                          // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ImpactCoefficient;                                        // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     DragCoefficient;                                          // 0x046C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FVector                                     SuctionCoefficient;                                       // 0x0478(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		float                                              ViscousDragCoefficient;                                   // 0x0484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MaxSlamAcceleration;                                      // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
		TArray<struct FVector>                             AdvancedGridHeight;                                       // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<struct FForceTriangle>                      SubmergedTris;                                            // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<float>                                      TriSizes;                                                 // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<float>                                      TriSubmergedArea;                                         // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		unsigned char                                      UnknownData04[0x30];                                      // 0x04D0(0x0030) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x5f5177ed);
			return ptr;
		}


		float TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C);
		TArray<struct FForceTriangle> SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow);
		void SetMeshDensity(float NewDensity, float NewWaterDensity);
		float GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation);
		void GetOcean();
		void DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor);
		void ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter);
		void ApplyForce(const struct FForceTriangle& TriForce);
	};


	// Class OceanPlugin.BuoyancyComponent
	// 0x0090 (0x02B0 - 0x0220)
	class UBuoyancyComponent : public UMovementComponent
	{
	public:
		class AOceanManager*                               OceanManager;                                             // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MeshDensity;                                              // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidDensity;                                             // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidLinearDamping;                                       // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidAngularDamping;                                      // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     VelocityDamper;                                           // 0x0238(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		bool                                               ClampMaxVelocity;                                         // 0x0244(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
		float                                              MaxUnderwaterVelocity;                                    // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              TestPointRadius;                                          // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TArray<struct FVector>                             TestPoints;                                               // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<float>                                      PointDensityOverride;                                     // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		bool                                               DrawDebugPoints;                                          // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               EnableStayUprightConstraint;                              // 0x0271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
		float                                              StayUprightStiffness;                                     // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              StayUprightDamping;                                       // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FRotator                                    StayUprightDesiredRotation;                               // 0x027C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		bool                                               EnableWaveForces;                                         // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
		float                                              WaveForceMultiplier;                                      // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0x20];                                      // 0x0290(0x0020) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x89656e7f);
			return ptr;
		}

	};


	// Class OceanPlugin.BuoyantDestructibleComponent
	// 0x0050 (0x0BD0 - 0x0B80)
	class UBuoyantDestructibleComponent : public UDestructibleComponent
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0B80(0x0008) MISSED OFFSET
		class AOceanManager*                               OceanManager;                                             // 0x0B88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ChunkDensity;                                             // 0x0B90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidDensity;                                             // 0x0B94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidLinearDamping;                                       // 0x0B98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FluidAngularDamping;                                      // 0x0B9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     VelocityDamper;                                           // 0x0BA0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		bool                                               ClampMaxVelocity;                                         // 0x0BAC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x3];                                       // 0x0BAD(0x0003) MISSED OFFSET
		float                                              MaxUnderwaterVelocity;                                    // 0x0BB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              TestPointRadius;                                          // 0x0BB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               DrawDebugPoints;                                          // 0x0BB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               EnableWaveForces;                                         // 0x0BB9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x2];                                       // 0x0BBA(0x0002) MISSED OFFSET
		float                                              WaveForceMultiplier;                                      // 0x0BBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ChunkSleepThreshold;                                      // 0x0BC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ChunkStabilizationThreshold;                              // 0x0BC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0x8];                                       // 0x0BC8(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd0568395);
			return ptr;
		}

	};


	// Class OceanPlugin.BuoyantDestructible
	// 0x0008 (0x03B0 - 0x03A8)
	class ABuoyantDestructible : public AActor
	{
	public:
		class UBuoyantDestructibleComponent*               BuoyantDestructibleComponent;                             // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x7c40a4b8);
			return ptr;
		}

	};


	// Class OceanPlugin.BuoyantMeshComponent
	// 0x0070 (0x0A30 - 0x09C0)
	class UBuoyantMeshComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET
		bool                                               bVerticalForcesOnly;                                      // 0x09C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bUseWaterPatch;                                           // 0x09C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bUseStaticForces;                                         // 0x09CA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bUseDynamicForces;                                        // 0x09CB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
		class AOceanManager*                               OceanManager;                                             // 0x09D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawForceArrows;                                         // 0x09D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawWaterline;                                           // 0x09D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawVertices;                                            // 0x09DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawTriangles;                                           // 0x09DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawSubtriangles;                                        // 0x09DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x3];                                       // 0x09DD(0x0003) MISSED OFFSET
		float                                              ForceArrowSize;                                           // 0x09E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bOverrideMeshDensity;                                     // 0x09E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
		float                                              MeshDensity;                                              // 0x09E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bOverrideMass;                                            // 0x09EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData04[0x3];                                       // 0x09ED(0x0003) MISSED OFFSET
		float                                              Mass;                                                     // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              WaterDensity;                                             // 0x09F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData05[0x28];                                      // 0x09F8(0x0028) MISSED OFFSET
		class UWaterHeightmapComponent*                    WaterHeightmap;                                           // 0x0A20(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
		unsigned char                                      UnknownData06[0x8];                                       // 0x0A28(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xe6f89efa);
			return ptr;
		}

	};


	// Class OceanPlugin.CustomVehicleController
	// 0x0008 (0x06F0 - 0x06E8)
	class ACustomVehicleController : public APlayerController
	{
	public:
		class APawn*                                       PlayerPawn;                                               // 0x06E8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xc43163b7);
			return ptr;
		}


		bool GetIsDriving();
		void ExitVehicle();
		void EnterVehicle(class APawn* Vehicle);
		void EnableBuoyancy();
		void DrawBuoyancyPoints();
	};


	// Class OceanPlugin.FishManager
	// 0x0058 (0x0400 - 0x03A8)
	class AFishManager : public AActor
	{
	public:
		TArray<class UClass*>                              flockTypes;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<float>                                      numInFlock;                                               // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		float                                              minZ;                                                     // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              maxZ;                                                     // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              underwaterBoxLength;                                      // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               attachToPlayer;                                           // 0x03D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               DebugMode;                                                // 0x03D5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
		class UClass*                                      playerType;                                               // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xcf538e83);
			return ptr;
		}

	};


	// Class OceanPlugin.FlockFish
	// 0x0180 (0x0588 - 0x0408)
	class AFlockFish : public APawn
	{
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
		class USphereComponent*                            FishInteractionSphere;                                    // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
		bool                                               isLeader;                                                 // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
		TArray<class UClass*>                              enemyTypes;                                               // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		TArray<class UClass*>                              preyTypes;                                                // 0x0438(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
		class UClass*                                      neighborType;                                             // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              followDist;                                               // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Speed;                                                    // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MaxSpeed;                                                 // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              turnSpeed;                                                // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              turnFrequency;                                            // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              hungerResetTime;                                          // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              distBehindSpeedUpRange;                                   // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SeperationDistanceMultiplier;                             // 0x046C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FleeDistanceMultiplier;                                   // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              FleeAccelerationMultiplier;                               // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ChaseAccelerationMultiplier;                              // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SeekDecelerationMultiplier;                               // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              AvoidForceMultiplier;                                     // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              AvoidanceForce;                                           // 0x0484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		class UClass*                                      playerType;                                               // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		struct FVector                                     underwaterMin;                                            // 0x0490(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		struct FVector                                     underwaterMax;                                            // 0x049C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
		float                                              CustomZSeekMin;                                           // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              CustomZSeekMax;                                           // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              NumNeighborsToEvaluate;                                   // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              UpdateEveryTick;                                          // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET
		bool                                               DebugMode;                                                // 0x04C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData03[0xBF];                                      // 0x04C9(0x00BF) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x94f68ff1);
			return ptr;
		}


		void OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	};


	// Class OceanPlugin.InfiniteSystemComponent
	// 0x0030 (0x0410 - 0x03E0)
	class UInfiniteSystemComponent : public USceneComponent
	{
	public:
		bool                                               UpdateInEditor;                                           // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TEnumAsByte<EFollowMethod>                         FollowMethod;                                             // 0x03E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
		float                                              GridSnapSize;                                             // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              MaxLookAtDistance;                                        // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               ScaleByDistance;                                          // 0x03EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
		float                                              ScaleDistanceFactor;                                      // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ScaleStartDistance;                                       // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ScaleMin;                                                 // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              ScaleMax;                                                 // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData02[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x63362c4);
			return ptr;
		}

	};


	// Class OceanPlugin.TimeManager
	// 0x00C8 (0x0470 - 0x03A8)
	class ATimeManager : public AActor
	{
	public:
		struct FTimeDate                                   CurrentLocalTime;                                         // 0x03A8(0x001C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
		float                                              Latitude;                                                 // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              Longitude;                                                // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                OffsetUTC;                                                // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                OffsetDST;                                                // 0x03D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bAllowDaylightSavings;                                    // 0x03D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDaylightSavingsActive;                                   // 0x03D5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
		float                                              TimeScaleMultiplier;                                      // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SolarTime;                                                // 0x03DC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LocalClockTime;                                           // 0x03E0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              TimeCorrection;                                           // 0x03E4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                LSTM;                                                     // 0x03E8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		int                                                DayOfYear;                                                // 0x03EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              EoT;                                                      // 0x03F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SolarAltAngle;                                            // 0x03F4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SolarDeclination;                                         // 0x03F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SolarAzimuth;                                             // 0x03FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SolarHRA;                                                 // 0x0400(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              SiderealTime;                                             // 0x0404(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LunarAltAngle;                                            // 0x0408(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LunarHRA;                                                 // 0x040C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LunarDeclination;                                         // 0x0410(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LunarAzimuth;                                             // 0x0414(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LunarRightAsc;                                            // 0x0418(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              LunarElapsedDays;                                         // 0x041C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              EcLongitude;                                              // 0x0420(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              EcLatitude;                                               // 0x0424(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              EcDistance;                                               // 0x0428(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PartL;                                                    // 0x042C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PartM;                                                    // 0x0430(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		float                                              PartF;                                                    // 0x0434(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData01[0x38];                                      // 0x0438(0x0038) MISSED OFFSET

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xd91fe338);
			return ptr;
		}


		void SetCurrentLocalTime(float Time);
		bool IsLeapYear(int Year);
		void InitializeCalendar(const struct FTimeDate& Time);
		void IncrementTime(float DeltaSeconds);
		float GetYearPhase();
		float GetElapsedDayInMinutes();
		int GetDaysInYear(int Year);
		int GetDaysInMonth(int Year, int Month);
		float GetDayPhase();
		int GetDayOfYear(const struct FTimeDate& Time);
		struct FRotator CalculateSunAngle();
		float CalculateMoonPhase();
		struct FRotator CalculateMoonAngle();
	};


	// Class OceanPlugin.WaterHeightmapComponent
	// 0x0070 (0x0250 - 0x01E0)
	class UWaterHeightmapComponent : public UActorComponent
	{
	public:
		float                                              GridSizeMultiplier;                                       // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawUsedTriangles;                                       // 0x01E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		bool                                               bDrawHeightmap;                                           // 0x01E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
		unsigned char                                      UnknownData00[0x62];                                      // 0x01E6(0x0062) MISSED OFFSET
		class AOceanManager*                               OceanManager;                                             // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x1844b99f);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
