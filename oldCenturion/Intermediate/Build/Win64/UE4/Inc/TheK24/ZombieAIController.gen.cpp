// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAIController() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_AZombieAIController_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_AZombieAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AZombieAIController::execAuthority_OnTargetPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnTargetPerceptionUpdated(Z_Param_actor,Z_Param_stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieAIController::execOnSlasherSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherSet(Z_Param_slasher);
		P_NATIVE_END;
	}
	void AZombieAIController::StaticRegisterNativesAZombieAIController()
	{
		UClass* Class = AZombieAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnTargetPerceptionUpdated", &AZombieAIController::execAuthority_OnTargetPerceptionUpdated },
			{ "OnSlasherSet", &AZombieAIController::execOnSlasherSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics
	{
		struct ZombieAIController_eventAuthority_OnTargetPerceptionUpdated_Parms
		{
			AActor* actor;
			FAIStimulus stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::NewProp_stimulus = { "stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventAuthority_OnTargetPerceptionUpdated_Parms, stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventAuthority_OnTargetPerceptionUpdated_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::NewProp_stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "Authority_OnTargetPerceptionUpdated", nullptr, nullptr, sizeof(ZombieAIController_eventAuthority_OnTargetPerceptionUpdated_Parms), Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics
	{
		struct ZombieAIController_eventOnSlasherSet_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAIController_eventOnSlasherSet_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "OnSlasherSet", nullptr, nullptr, sizeof(ZombieAIController_eventOnSlasherSet_Parms), Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieAIController_OnSlasherSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieAIController_OnSlasherSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombieAIController_NoRegister()
	{
		return AZombieAIController::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieAttackCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieAttackCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieFallSmashTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieFallSmashTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieVisionHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieVisionHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieLoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieLoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieAnimDyingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieAnimDyingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieAnimSpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieAnimSpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieAttackOpenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieAttackOpenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieAttackHitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieAttackHitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorsInAttackDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorsInAttackDetector;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorsInAttackDetector_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__goToLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__goToLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chaseTargetSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chaseTargetSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorInVision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorInVision;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorInVision_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiPerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiPerceptionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombieBehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieAIController_Authority_OnTargetPerceptionUpdated, "Authority_OnTargetPerceptionUpdated" }, // 520875141
		{ &Z_Construct_UFunction_AZombieAIController_OnSlasherSet, "OnSlasherSet" }, // 2797963548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombieAIController.h" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackCooldownTime_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackCooldownTime = { "_zombieAttackCooldownTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieAttackCooldownTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieFallSmashTime_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieFallSmashTime = { "_zombieFallSmashTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieFallSmashTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieFallSmashTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieFallSmashTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieVisionHalfAngle_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieVisionHalfAngle = { "_zombieVisionHalfAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieVisionHalfAngle), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieVisionHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieVisionHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieLoseSightRadius_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieLoseSightRadius = { "_zombieLoseSightRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieLoseSightRadius), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieLoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieLoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieSightRadius_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieSightRadius = { "_zombieSightRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieSightRadius), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimDyingTime_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimDyingTime = { "_zombieAnimDyingTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieAnimDyingTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimDyingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimDyingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimSpawnTime_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimSpawnTime = { "_zombieAnimSpawnTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieAnimSpawnTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimSpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackOpenTime_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackOpenTime = { "_zombieAttackOpenTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieAttackOpenTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackOpenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackOpenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackHitTime_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackHitTime = { "_zombieAttackHitTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieAttackHitTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackHitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackHitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector = { "_survivorsInAttackDetector", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _survivorsInAttackDetector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector_Inner = { "_survivorsInAttackDetector", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__goToLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__goToLocation = { "_goToLocation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _goToLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__goToLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__goToLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__chaseTargetSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__chaseTargetSurvivor = { "_chaseTargetSurvivor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _chaseTargetSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__chaseTargetSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__chaseTargetSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision = { "_survivorInVision", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _survivorInVision), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision_Inner = { "_survivorInVision", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__aiPerceptionComponent_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__aiPerceptionComponent = { "_aiPerceptionComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _aiPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__aiPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__aiPerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieBehaviorTree_MetaData[] = {
		{ "Category", "ZombieAIController" },
		{ "ModuleRelativePath", "Public/ZombieAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieBehaviorTree = { "_zombieBehaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieAIController, _zombieBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieBehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieFallSmashTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieVisionHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieLoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimDyingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAnimSpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackOpenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieAttackHitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorsInAttackDetector_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__goToLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__chaseTargetSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__survivorInVision_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__aiPerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp__zombieBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieAIController_Statics::ClassParams = {
		&AZombieAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombieAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieAIController, 1568434565);
	template<> THEK24_API UClass* StaticClass<AZombieAIController>()
	{
		return AZombieAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieAIController(Z_Construct_UClass_AZombieAIController, &AZombieAIController::StaticClass, TEXT("/Script/TheK24"), TEXT("AZombieAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
