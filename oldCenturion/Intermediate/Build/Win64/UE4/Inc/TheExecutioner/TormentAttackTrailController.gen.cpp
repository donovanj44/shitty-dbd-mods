// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentAttackTrailController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentAttackTrailController() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentAttackTrailController_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentAttackTrailController();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATrailControllerBase();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister();
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnedAttackPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentAttackTrailPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATormentAttackTrailController::execDisplayAttackTrailSpawnSign)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayAttackTrailSpawnSign_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentAttackTrailController::execMulticast_StartAttackTrail)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_serverTimeSpawn);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartAttackTrail_Implementation(Z_Param_serverTimeSpawn,Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentAttackTrailController::execOnIntervalBetweenPointsTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIntervalBetweenPointsTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentAttackTrailController::execOnStartTrailTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartTrailTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATormentAttackTrailController::execOnTrailPointRemovedCosmetic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrailPointRemovedCosmetic_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	static FName NAME_ATormentAttackTrailController_DisplayAttackTrailSpawnSign = FName(TEXT("DisplayAttackTrailSpawnSign"));
	void ATormentAttackTrailController::DisplayAttackTrailSpawnSign()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentAttackTrailController_DisplayAttackTrailSpawnSign),NULL);
	}
	static FName NAME_ATormentAttackTrailController_Multicast_StartAttackTrail = FName(TEXT("Multicast_StartAttackTrail"));
	void ATormentAttackTrailController::Multicast_StartAttackTrail(const float serverTimeSpawn, const FVector_NetQuantize10 location, const FRotator rotation)
	{
		TormentAttackTrailController_eventMulticast_StartAttackTrail_Parms Parms;
		Parms.serverTimeSpawn=serverTimeSpawn;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_ATormentAttackTrailController_Multicast_StartAttackTrail),&Parms);
	}
	static FName NAME_ATormentAttackTrailController_OnAttackTrailStartCosmetic = FName(TEXT("OnAttackTrailStartCosmetic"));
	void ATormentAttackTrailController::OnAttackTrailStartCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATormentAttackTrailController_OnAttackTrailStartCosmetic),NULL);
	}
	static FName NAME_ATormentAttackTrailController_OnTrailPointRemovedCosmetic = FName(TEXT("OnTrailPointRemovedCosmetic"));
	void ATormentAttackTrailController::OnTrailPointRemovedCosmetic(int32 index)
	{
		TormentAttackTrailController_eventOnTrailPointRemovedCosmetic_Parms Parms;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_ATormentAttackTrailController_OnTrailPointRemovedCosmetic),&Parms);
	}
	void ATormentAttackTrailController::StaticRegisterNativesATormentAttackTrailController()
	{
		UClass* Class = ATormentAttackTrailController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayAttackTrailSpawnSign", &ATormentAttackTrailController::execDisplayAttackTrailSpawnSign },
			{ "Multicast_StartAttackTrail", &ATormentAttackTrailController::execMulticast_StartAttackTrail },
			{ "OnIntervalBetweenPointsTimerDone", &ATormentAttackTrailController::execOnIntervalBetweenPointsTimerDone },
			{ "OnStartTrailTimerDone", &ATormentAttackTrailController::execOnStartTrailTimerDone },
			{ "OnTrailPointRemovedCosmetic", &ATormentAttackTrailController::execOnTrailPointRemovedCosmetic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailController, nullptr, "DisplayAttackTrailSpawnSign", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverTimeSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_serverTimeSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentAttackTrailController_eventMulticast_StartAttackTrail_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentAttackTrailController_eventMulticast_StartAttackTrail_Parms, location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_serverTimeSpawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_serverTimeSpawn = { "serverTimeSpawn", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentAttackTrailController_eventMulticast_StartAttackTrail_Parms, serverTimeSpawn), METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_serverTimeSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_serverTimeSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::NewProp_serverTimeSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailController, nullptr, "Multicast_StartAttackTrail", nullptr, nullptr, sizeof(TormentAttackTrailController_eventMulticast_StartAttackTrail_Parms), Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailController, nullptr, "OnAttackTrailStartCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailController, nullptr, "OnIntervalBetweenPointsTimerDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailController, nullptr, "OnStartTrailTimerDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentAttackTrailController_eventOnTrailPointRemovedCosmetic_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentAttackTrailController, nullptr, "OnTrailPointRemovedCosmetic", nullptr, nullptr, sizeof(TormentAttackTrailController_eventOnTrailPointRemovedCosmetic_Parms), Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATormentAttackTrailController_NoRegister()
	{
		return ATormentAttackTrailController::StaticClass();
	}
	struct Z_Construct_UClass_ATormentAttackTrailController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mobileTormentTrailRenderer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mobileTormentTrailRenderer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__soundDistanceOnTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__soundDistanceOnTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailSpawnStarted_MetaData[];
#endif
		static void NewProp__trailSpawnStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__trailSpawnStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedAttackPointList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnedAttackPointList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__spawnedAttackPointList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slopeCompensationVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slopeCompensationVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__groundDetectionEndVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__groundDetectionEndVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slopeDetectionOverGroundVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__slopeDetectionOverGroundVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pointsTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pointsTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pointsTransform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__consideredAsSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__consideredAsSlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackTrailLenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackTrailLenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeIntervalBetweenPointsSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeIntervalBetweenPointsSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailSpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__trailSpawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailAttackSign_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__tormentTrailAttackSign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailAttackPointClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__tormentTrailAttackPointClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATormentAttackTrailController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATrailControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATormentAttackTrailController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATormentAttackTrailController_DisplayAttackTrailSpawnSign, "DisplayAttackTrailSpawnSign" }, // 3912682399
		{ &Z_Construct_UFunction_ATormentAttackTrailController_Multicast_StartAttackTrail, "Multicast_StartAttackTrail" }, // 4070418398
		{ &Z_Construct_UFunction_ATormentAttackTrailController_OnAttackTrailStartCosmetic, "OnAttackTrailStartCosmetic" }, // 2303833707
		{ &Z_Construct_UFunction_ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone, "OnIntervalBetweenPointsTimerDone" }, // 3171885876
		{ &Z_Construct_UFunction_ATormentAttackTrailController_OnStartTrailTimerDone, "OnStartTrailTimerDone" }, // 1365075605
		{ &Z_Construct_UFunction_ATormentAttackTrailController_OnTrailPointRemovedCosmetic, "OnTrailPointRemovedCosmetic" }, // 3048630934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentAttackTrailController.h" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__mobileTormentTrailRenderer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__mobileTormentTrailRenderer = { "_mobileTormentTrailRenderer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _mobileTormentTrailRenderer), Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__mobileTormentTrailRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__mobileTormentTrailRenderer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__soundDistanceOnTrail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__soundDistanceOnTrail = { "_soundDistanceOnTrail", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _soundDistanceOnTrail), METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__soundDistanceOnTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__soundDistanceOnTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	void Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted_SetBit(void* Obj)
	{
		((ATormentAttackTrailController*)Obj)->_trailSpawnStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted = { "_trailSpawnStarted", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATormentAttackTrailController), &Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList = { "_spawnedAttackPointList", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _spawnedAttackPointList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList_Inner = { "_spawnedAttackPointList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnedAttackPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeCompensationVector_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeCompensationVector = { "_slopeCompensationVector", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _slopeCompensationVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeCompensationVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeCompensationVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__groundDetectionEndVector_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__groundDetectionEndVector = { "_groundDetectionEndVector", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _groundDetectionEndVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__groundDetectionEndVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__groundDetectionEndVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeDetectionOverGroundVector_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeDetectionOverGroundVector = { "_slopeDetectionOverGroundVector", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _slopeDetectionOverGroundVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeDetectionOverGroundVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeDetectionOverGroundVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform = { "_pointsTransform", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _pointsTransform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform_Inner = { "_pointsTransform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__consideredAsSlopeAngle_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__consideredAsSlopeAngle = { "_consideredAsSlopeAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _consideredAsSlopeAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__consideredAsSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__consideredAsSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__attackTrailLenght_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__attackTrailLenght = { "_attackTrailLenght", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _attackTrailLenght), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__attackTrailLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__attackTrailLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__timeIntervalBetweenPointsSpawn_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__timeIntervalBetweenPointsSpawn = { "_timeIntervalBetweenPointsSpawn", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _timeIntervalBetweenPointsSpawn), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__timeIntervalBetweenPointsSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__timeIntervalBetweenPointsSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnDelay_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnDelay = { "_trailSpawnDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _trailSpawnDelay), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackSign_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackSign = { "_tormentTrailAttackSign", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _tormentTrailAttackSign), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackSign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackSign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackPointClass_MetaData[] = {
		{ "Category", "TormentAttackTrailController" },
		{ "ModuleRelativePath", "Public/TormentAttackTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackPointClass = { "_tormentTrailAttackPointClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentAttackTrailController, _tormentTrailAttackPointClass), Z_Construct_UClass_ATormentAttackTrailPoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackPointClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackPointClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATormentAttackTrailController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__mobileTormentTrailRenderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__soundDistanceOnTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__spawnedAttackPointList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeCompensationVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__groundDetectionEndVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__slopeDetectionOverGroundVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__pointsTransform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__consideredAsSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__attackTrailLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__timeIntervalBetweenPointsSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__trailSpawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentAttackTrailController_Statics::NewProp__tormentTrailAttackPointClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATormentAttackTrailController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATormentAttackTrailController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATormentAttackTrailController_Statics::ClassParams = {
		&ATormentAttackTrailController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATormentAttackTrailController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATormentAttackTrailController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentAttackTrailController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATormentAttackTrailController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATormentAttackTrailController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATormentAttackTrailController, 3186132497);
	template<> THEEXECUTIONER_API UClass* StaticClass<ATormentAttackTrailController>()
	{
		return ATormentAttackTrailController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATormentAttackTrailController(Z_Construct_UClass_ATormentAttackTrailController, &ATormentAttackTrailController::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ATormentAttackTrailController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATormentAttackTrailController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
