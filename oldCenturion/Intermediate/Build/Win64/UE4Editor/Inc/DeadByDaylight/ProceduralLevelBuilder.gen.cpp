// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ProceduralLevelBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralLevelBuilder() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AProceduralLevelBuilder_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AProceduralLevelBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGenerationParams();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEdgeObjectHandlingStrategy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDClientSyncer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AProceduralLevelData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileBank_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileMatrix_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDependency();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedLevelData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDesignTunables_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UProceduralGenerationData_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProceduralLevelBuilder::execBuildFromSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFromSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralLevelBuilder::execMulticast_DebugShareGenerationData)
	{
		P_GET_STRUCT(FGenerationParams,Z_Param_usedParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DebugShareGenerationData_Implementation(Z_Param_usedParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralLevelBuilder::execOnMapLevelLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapLevelLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralLevelBuilder::execSpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_actorClass);
		P_GET_ENUM(ETileSpawnPointType,Z_Param_spawnPointType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnActor(Z_Param_actorClass,ETileSpawnPointType(Z_Param_spawnPointType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralLevelBuilder::execStartGenerationOnSyncerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGenerationOnSyncerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProceduralLevelBuilder::execSyncSeeds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncSeeds();
		P_NATIVE_END;
	}
	static FName NAME_AProceduralLevelBuilder_ApplyMist = FName(TEXT("ApplyMist"));
	void AProceduralLevelBuilder::ApplyMist(float modifier)
	{
		ProceduralLevelBuilder_eventApplyMist_Parms Parms;
		Parms.modifier=modifier;
		ProcessEvent(FindFunctionChecked(NAME_AProceduralLevelBuilder_ApplyMist),&Parms);
	}
	static FName NAME_AProceduralLevelBuilder_Multicast_DebugShareGenerationData = FName(TEXT("Multicast_DebugShareGenerationData"));
	void AProceduralLevelBuilder::Multicast_DebugShareGenerationData(FGenerationParams usedParams)
	{
		ProceduralLevelBuilder_eventMulticast_DebugShareGenerationData_Parms Parms;
		Parms.usedParams=usedParams;
		ProcessEvent(FindFunctionChecked(NAME_AProceduralLevelBuilder_Multicast_DebugShareGenerationData),&Parms);
	}
	static FName NAME_AProceduralLevelBuilder_RemoveMist = FName(TEXT("RemoveMist"));
	void AProceduralLevelBuilder::RemoveMist()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProceduralLevelBuilder_RemoveMist),NULL);
	}
	void AProceduralLevelBuilder::StaticRegisterNativesAProceduralLevelBuilder()
	{
		UClass* Class = AProceduralLevelBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildFromSeed", &AProceduralLevelBuilder::execBuildFromSeed },
			{ "Multicast_DebugShareGenerationData", &AProceduralLevelBuilder::execMulticast_DebugShareGenerationData },
			{ "OnMapLevelLoaded", &AProceduralLevelBuilder::execOnMapLevelLoaded },
			{ "SpawnActor", &AProceduralLevelBuilder::execSpawnActor },
			{ "StartGenerationOnSyncerReady", &AProceduralLevelBuilder::execStartGenerationOnSyncerReady },
			{ "SyncSeeds", &AProceduralLevelBuilder::execSyncSeeds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::NewProp_modifier = { "modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelBuilder_eventApplyMist_Parms, modifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::NewProp_modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "ApplyMist", nullptr, nullptr, sizeof(ProceduralLevelBuilder_eventApplyMist_Parms), Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "BuildFromSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_usedParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::NewProp_usedParams = { "usedParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelBuilder_eventMulticast_DebugShareGenerationData_Parms, usedParams), Z_Construct_UScriptStruct_FGenerationParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::NewProp_usedParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "Multicast_DebugShareGenerationData", nullptr, nullptr, sizeof(ProceduralLevelBuilder_eventMulticast_DebugShareGenerationData_Parms), Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "OnMapLevelLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "RemoveMist", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics
	{
		struct ProceduralLevelBuilder_eventSpawnActor_Parms
		{
			UClass* actorClass;
			ETileSpawnPointType spawnPointType;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_spawnPointType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_spawnPointType_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelBuilder_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_spawnPointType = { "spawnPointType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelBuilder_eventSpawnActor_Parms, spawnPointType), Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_spawnPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralLevelBuilder_eventSpawnActor_Parms, actorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_spawnPointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_spawnPointType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::NewProp_actorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "SpawnActor", nullptr, nullptr, sizeof(ProceduralLevelBuilder_eventSpawnActor_Parms), Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "StartGenerationOnSyncerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralLevelBuilder, nullptr, "SyncSeeds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProceduralLevelBuilder_NoRegister()
	{
		return AProceduralLevelBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralLevelBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__edgeObjectHandlingStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__edgeObjectHandlingStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blackboardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__syncer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__syncer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugProceduralDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__debugProceduralDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tilesThatHaveBeenSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tilesThatHaveBeenSpawned;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tilesThatHaveBeenSpawned_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__slasherPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__slasherPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chestItemAssetReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__chestItemAssetReferences;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__chestItemAssetReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__preloadAssetReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__preloadAssetReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__preloadAssetReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerLairSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerLairSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tileBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tileMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__escapeDependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__escapeDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__designTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__designTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesignTunableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DesignTunableClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableDerivedTileLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availableDerivedTileLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableTilesLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availableTilesLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__tileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadTileWeightRateOfDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QuadTileWeightRateOfDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileWeightRateOfDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileWeightRateOfDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralGenerationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralGenerationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightAmplifierActivationHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightAmplifierActivationHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightAmplifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightAmplifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorToAdjustToWhenInLineOfSight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FactorToAdjustToWhenInLineOfSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorToAdjustToWhenOutOfProximity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FactorToAdjustToWhenOutOfProximity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallMeatLockerMinProximityFromKillerLair_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmallMeatLockerMinProximityFromKillerLair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugTiles;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DebugTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DebugMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialBehaviourItemMinProximityFromKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecialBehaviourItemMinProximityFromKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialBehaviourItemMinProximityFromSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecialBehaviourItemMinProximityFromSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinProximityBetweenSpecialBehaviourItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinProximityBetweenSpecialBehaviourItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorMaxLineOfSightFromTotem_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvivorMaxLineOfSightFromTotem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorMinProximityFromTotem_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvivorMinProximityFromTotem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorMinProximityFromGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvivorMinProximityFromGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinProximityBetweenTotems_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinProximityBetweenTotems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinProximityBetweenChests_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinProximityBetweenChests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinProximityBetweenGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinProximityBetweenGenerators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorMinProximityFromOtherCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurvivorMinProximityFromOtherCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerMinProximityFromCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillerMinProximityFromCamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToTilesDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToTilesDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToMapDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToMapDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralLevelBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProceduralLevelBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_ApplyMist, "ApplyMist" }, // 201182686
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_BuildFromSeed, "BuildFromSeed" }, // 3002174334
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_Multicast_DebugShareGenerationData, "Multicast_DebugShareGenerationData" }, // 893122742
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_OnMapLevelLoaded, "OnMapLevelLoaded" }, // 2204934764
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_RemoveMist, "RemoveMist" }, // 741913150
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_SpawnActor, "SpawnActor" }, // 2582812877
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_StartGenerationOnSyncerReady, "StartGenerationOnSyncerReady" }, // 1836637100
		{ &Z_Construct_UFunction_AProceduralLevelBuilder_SyncSeeds, "SyncSeeds" }, // 4114120855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralLevelBuilder.h" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__edgeObjectHandlingStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__edgeObjectHandlingStrategy = { "_edgeObjectHandlingStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _edgeObjectHandlingStrategy), Z_Construct_UClass_UEdgeObjectHandlingStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__edgeObjectHandlingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__edgeObjectHandlingStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__blackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__blackboardComp = { "_blackboardComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _blackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__blackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__blackboardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__syncer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__syncer = { "_syncer", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _syncer), Z_Construct_UClass_ADBDClientSyncer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__syncer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__syncer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__debugProceduralDatas_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__debugProceduralDatas = { "_debugProceduralDatas", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _debugProceduralDatas), Z_Construct_UClass_AProceduralLevelData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__debugProceduralDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__debugProceduralDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned = { "_tilesThatHaveBeenSpawned", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _tilesThatHaveBeenSpawned), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned_Inner = { "_tilesThatHaveBeenSpawned", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__slasherPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__slasherPawn = { "_slasherPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _slasherPawn), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__slasherPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__slasherPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences = { "_chestItemAssetReferences", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _chestItemAssetReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences_Inner = { "_chestItemAssetReferences", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences = { "_preloadAssetReferences", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _preloadAssetReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences_Inner = { "_preloadAssetReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__killerLairSpawner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__killerLairSpawner = { "_killerLairSpawner", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _killerLairSpawner), Z_Construct_UClass_UActorSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__killerLairSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__killerLairSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileBank_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileBank = { "_tileBank", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _tileBank), Z_Construct_UClass_UTileBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileMatrix_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileMatrix = { "_tileMatrix", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _tileMatrix), Z_Construct_UClass_UTileMatrix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileMatrix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies = { "_escapeDependencies", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _escapeDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies_Inner = { "_escapeDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDependency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__generatedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__generatedData = { "_generatedData", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _generatedData), Z_Construct_UScriptStruct_FGeneratedLevelData, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__generatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__generatedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__designTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__designTunables = { "_designTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _designTunables), Z_Construct_UClass_UDBDDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__designTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__designTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DesignTunableClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DesignTunableClass = { "DesignTunableClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, DesignTunableClass), Z_Construct_UClass_UDBDDesignTunables_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DesignTunableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DesignTunableClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableDerivedTileLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableDerivedTileLibrary = { "_availableDerivedTileLibrary", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _availableDerivedTileLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableDerivedTileLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableDerivedTileLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableTilesLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableTilesLibrary = { "_availableTilesLibrary", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _availableTilesLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableTilesLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableTilesLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__mapData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__mapData = { "_mapData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _mapData), Z_Construct_UClass_UMapData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__mapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__mapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileClass = { "_tileClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, _tileClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_QuadTileWeightRateOfDecay_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_QuadTileWeightRateOfDecay = { "QuadTileWeightRateOfDecay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, QuadTileWeightRateOfDecay), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_QuadTileWeightRateOfDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_QuadTileWeightRateOfDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_TileWeightRateOfDecay_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_TileWeightRateOfDecay = { "TileWeightRateOfDecay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, TileWeightRateOfDecay), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_TileWeightRateOfDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_TileWeightRateOfDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_ProceduralGenerationData_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_ProceduralGenerationData = { "ProceduralGenerationData", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, ProceduralGenerationData), Z_Construct_UClass_UProceduralGenerationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_ProceduralGenerationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_ProceduralGenerationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifierActivationHeight_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifierActivationHeight = { "HeightAmplifierActivationHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, HeightAmplifierActivationHeight), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifierActivationHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifierActivationHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifier_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifier = { "HeightAmplifier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, HeightAmplifier), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenInLineOfSight_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenInLineOfSight = { "FactorToAdjustToWhenInLineOfSight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, FactorToAdjustToWhenInLineOfSight), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenInLineOfSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenInLineOfSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenOutOfProximity_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenOutOfProximity = { "FactorToAdjustToWhenOutOfProximity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, FactorToAdjustToWhenOutOfProximity), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenOutOfProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenOutOfProximity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SmallMeatLockerMinProximityFromKillerLair_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SmallMeatLockerMinProximityFromKillerLair = { "SmallMeatLockerMinProximityFromKillerLair", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SmallMeatLockerMinProximityFromKillerLair), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SmallMeatLockerMinProximityFromKillerLair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SmallMeatLockerMinProximityFromKillerLair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles = { "DebugTiles", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, DebugTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles_Inner = { "DebugTiles", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugMap_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugMap = { "DebugMap", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, DebugMap), Z_Construct_UClass_UPaperTileMap_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromKiller_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromKiller = { "SpecialBehaviourItemMinProximityFromKiller", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SpecialBehaviourItemMinProximityFromKiller), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromSurvivor_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromSurvivor = { "SpecialBehaviourItemMinProximityFromSurvivor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SpecialBehaviourItemMinProximityFromSurvivor), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenSpecialBehaviourItems_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenSpecialBehaviourItems = { "MinProximityBetweenSpecialBehaviourItems", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, MinProximityBetweenSpecialBehaviourItems), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenSpecialBehaviourItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenSpecialBehaviourItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMaxLineOfSightFromTotem_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMaxLineOfSightFromTotem = { "SurvivorMaxLineOfSightFromTotem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SurvivorMaxLineOfSightFromTotem), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMaxLineOfSightFromTotem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMaxLineOfSightFromTotem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromTotem_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromTotem = { "SurvivorMinProximityFromTotem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SurvivorMinProximityFromTotem), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromTotem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromTotem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromGenerator_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromGenerator = { "SurvivorMinProximityFromGenerator", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SurvivorMinProximityFromGenerator), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenTotems_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenTotems = { "MinProximityBetweenTotems", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, MinProximityBetweenTotems), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenTotems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenTotems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenChests_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenChests = { "MinProximityBetweenChests", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, MinProximityBetweenChests), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenChests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenChests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenGenerators_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenGenerators = { "MinProximityBetweenGenerators", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, MinProximityBetweenGenerators), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenGenerators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromOtherCamper_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromOtherCamper = { "SurvivorMinProximityFromOtherCamper", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, SurvivorMinProximityFromOtherCamper), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromOtherCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromOtherCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_KillerMinProximityFromCamper_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_KillerMinProximityFromCamper = { "KillerMinProximityFromCamper", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, KillerMinProximityFromCamper), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_KillerMinProximityFromCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_KillerMinProximityFromCamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToTilesDirectory_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToTilesDirectory = { "PathToTilesDirectory", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, PathToTilesDirectory), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToTilesDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToTilesDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToMapDirectory_MetaData[] = {
		{ "Category", "ProceduralLevelBuilder" },
		{ "ModuleRelativePath", "Public/ProceduralLevelBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToMapDirectory = { "PathToMapDirectory", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralLevelBuilder, PathToMapDirectory), METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToMapDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToMapDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralLevelBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__edgeObjectHandlingStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__blackboardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__syncer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__debugProceduralDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tilesThatHaveBeenSpawned_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__slasherPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__chestItemAssetReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__preloadAssetReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__killerLairSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__escapeDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__generatedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__designTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DesignTunableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableDerivedTileLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__availableTilesLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__mapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp__tileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_QuadTileWeightRateOfDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_TileWeightRateOfDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_ProceduralGenerationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifierActivationHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_HeightAmplifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenInLineOfSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_FactorToAdjustToWhenOutOfProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SmallMeatLockerMinProximityFromKillerLair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_DebugMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SpecialBehaviourItemMinProximityFromSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenSpecialBehaviourItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMaxLineOfSightFromTotem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromTotem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenTotems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenChests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_MinProximityBetweenGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_SurvivorMinProximityFromOtherCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_KillerMinProximityFromCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToTilesDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLevelBuilder_Statics::NewProp_PathToMapDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralLevelBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralLevelBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralLevelBuilder_Statics::ClassParams = {
		&AProceduralLevelBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProceduralLevelBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralLevelBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLevelBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralLevelBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralLevelBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralLevelBuilder, 563713179);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AProceduralLevelBuilder>()
	{
		return AProceduralLevelBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralLevelBuilder(Z_Construct_UClass_AProceduralLevelBuilder, &AProceduralLevelBuilder::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AProceduralLevelBuilder"), false, nullptr, nullptr, nullptr);

	void AProceduralLevelBuilder::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__syncer(TEXT("_syncer"));

		const bool bIsValid = true
			&& Name__syncer == ClassReps[(int32)ENetFields_Private::_syncer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AProceduralLevelBuilder"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralLevelBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
