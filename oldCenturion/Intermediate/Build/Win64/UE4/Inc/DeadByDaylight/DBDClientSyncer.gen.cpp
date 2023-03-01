// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDClientSyncer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDClientSyncer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDClientSyncer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDClientSyncer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnInfo();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDClientSyncer::execMulticast_SyncActorToSpawnLocally)
	{
		P_GET_TARRAY(FSpawnInfo,Z_Param_spawnInfos);
		P_GET_PROPERTY(FInt16Property,Z_Param_startIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncActorToSpawnLocally_Implementation(Z_Param_spawnInfos,Z_Param_startIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDClientSyncer::execMulticast_SyncFinalLocallySpawnCount)
	{
		P_GET_PROPERTY(FInt16Property,Z_Param_numLocal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncFinalLocallySpawnCount_Implementation(Z_Param_numLocal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDClientSyncer::execMulticast_SyncSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_GET_OBJECT(UPaperTileMap,Z_Param_tileMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_generationPlayerCount);
		P_GET_PROPERTY(FStrProperty,Z_Param_premadeMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncSeed_Implementation(Z_Param_seed,Z_Param_tileMap,Z_Param_generationPlayerCount,Z_Param_premadeMap);
		P_NATIVE_END;
	}
	static FName NAME_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally = FName(TEXT("Multicast_SyncActorToSpawnLocally"));
	void ADBDClientSyncer::Multicast_SyncActorToSpawnLocally(TArray<FSpawnInfo> const& spawnInfos, int16 startIndex)
	{
		DBDClientSyncer_eventMulticast_SyncActorToSpawnLocally_Parms Parms;
		Parms.spawnInfos=spawnInfos;
		Parms.startIndex=startIndex;
		ProcessEvent(FindFunctionChecked(NAME_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally),&Parms);
	}
	static FName NAME_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount = FName(TEXT("Multicast_SyncFinalLocallySpawnCount"));
	void ADBDClientSyncer::Multicast_SyncFinalLocallySpawnCount(int16 numLocal)
	{
		DBDClientSyncer_eventMulticast_SyncFinalLocallySpawnCount_Parms Parms;
		Parms.numLocal=numLocal;
		ProcessEvent(FindFunctionChecked(NAME_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount),&Parms);
	}
	static FName NAME_ADBDClientSyncer_Multicast_SyncSeed = FName(TEXT("Multicast_SyncSeed"));
	void ADBDClientSyncer::Multicast_SyncSeed(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap)
	{
		DBDClientSyncer_eventMulticast_SyncSeed_Parms Parms;
		Parms.seed=seed;
		Parms.tileMap=tileMap;
		Parms.generationPlayerCount=generationPlayerCount;
		Parms.premadeMap=premadeMap;
		ProcessEvent(FindFunctionChecked(NAME_ADBDClientSyncer_Multicast_SyncSeed),&Parms);
	}
	void ADBDClientSyncer::StaticRegisterNativesADBDClientSyncer()
	{
		UClass* Class = ADBDClientSyncer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SyncActorToSpawnLocally", &ADBDClientSyncer::execMulticast_SyncActorToSpawnLocally },
			{ "Multicast_SyncFinalLocallySpawnCount", &ADBDClientSyncer::execMulticast_SyncFinalLocallySpawnCount },
			{ "Multicast_SyncSeed", &ADBDClientSyncer::execMulticast_SyncSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics
	{
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_startIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_startIndex = { "startIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncActorToSpawnLocally_Parms, startIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos = { "spawnInfos", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncActorToSpawnLocally_Parms, spawnInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos_Inner = { "spawnInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_startIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::NewProp_spawnInfos_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDClientSyncer, nullptr, "Multicast_SyncActorToSpawnLocally", nullptr, nullptr, sizeof(DBDClientSyncer_eventMulticast_SyncActorToSpawnLocally_Parms), Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics
	{
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_numLocal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::NewProp_numLocal = { "numLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncFinalLocallySpawnCount_Parms, numLocal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::NewProp_numLocal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDClientSyncer, nullptr, "Multicast_SyncFinalLocallySpawnCount", nullptr, nullptr, sizeof(DBDClientSyncer_eventMulticast_SyncFinalLocallySpawnCount_Parms), Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_premadeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_premadeMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_generationPlayerCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_premadeMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_premadeMap = { "premadeMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncSeed_Parms, premadeMap), METADATA_PARAMS(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_premadeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_premadeMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_generationPlayerCount = { "generationPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncSeed_Parms, generationPlayerCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_tileMap = { "tileMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncSeed_Parms, tileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClientSyncer_eventMulticast_SyncSeed_Parms, seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_premadeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_generationPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDClientSyncer, nullptr, "Multicast_SyncSeed", nullptr, nullptr, sizeof(DBDClientSyncer_eventMulticast_SyncSeed_Parms), Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDClientSyncer_NoRegister()
	{
		return ADBDClientSyncer::StaticClass();
	}
	struct Z_Construct_UClass_ADBDClientSyncer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tileMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__currentQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorsToSpawnLocally_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__actorsToSpawnLocally;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__actorsToSpawnLocally_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDClientSyncer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDClientSyncer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncActorToSpawnLocally, "Multicast_SyncActorToSpawnLocally" }, // 2838886462
		{ &Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount, "Multicast_SyncFinalLocallySpawnCount" }, // 2247389896
		{ &Z_Construct_UFunction_ADBDClientSyncer_Multicast_SyncSeed, "Multicast_SyncSeed" }, // 1305260287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDClientSyncer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDClientSyncer.h" },
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__tileMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__tileMap = { "_tileMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDClientSyncer, _tileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__tileMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__tileMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue = { "_currentQueue", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDClientSyncer, _currentQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue_Inner = { "_currentQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDClientSyncer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally = { "_actorsToSpawnLocally", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDClientSyncer, _actorsToSpawnLocally), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally_Inner = { "_actorsToSpawnLocally", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDClientSyncer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__tileMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__currentQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDClientSyncer_Statics::NewProp__actorsToSpawnLocally_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDClientSyncer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDClientSyncer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDClientSyncer_Statics::ClassParams = {
		&ADBDClientSyncer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDClientSyncer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDClientSyncer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDClientSyncer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDClientSyncer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDClientSyncer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDClientSyncer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDClientSyncer, 829363004);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDClientSyncer>()
	{
		return ADBDClientSyncer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDClientSyncer(Z_Construct_UClass_ADBDClientSyncer, &ADBDClientSyncer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDClientSyncer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDClientSyncer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
