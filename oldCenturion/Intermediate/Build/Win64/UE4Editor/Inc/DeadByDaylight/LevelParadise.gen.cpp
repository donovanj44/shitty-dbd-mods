// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LevelParadise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelParadise() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALevelParadise_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALevelParadise();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FParadiseData();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALevelParadise::execOnInterpolationDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInterpolationDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelParadise::execParadiseEntered)
	{
		P_GET_STRUCT_REF(FParadiseData,Z_Param_Out_playerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParadiseEntered(Z_Param_Out_playerData);
		P_NATIVE_END;
	}
	static FName NAME_ALevelParadise_EnterParadise = FName(TEXT("EnterParadise"));
	void ALevelParadise::EnterParadise(FParadiseData const& playerData)
	{
		LevelParadise_eventEnterParadise_Parms Parms;
		Parms.playerData=playerData;
		ProcessEvent(FindFunctionChecked(NAME_ALevelParadise_EnterParadise),&Parms);
	}
	void ALevelParadise::StaticRegisterNativesALevelParadise()
	{
		UClass* Class = ALevelParadise::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpolationDone", &ALevelParadise::execOnInterpolationDone },
			{ "ParadiseEntered", &ALevelParadise::execParadiseEntered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::NewProp_playerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::NewProp_playerData = { "playerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelParadise_eventEnterParadise_Parms, playerData), Z_Construct_UScriptStruct_FParadiseData, METADATA_PARAMS(Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::NewProp_playerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::NewProp_playerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::NewProp_playerData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelParadise, nullptr, "EnterParadise", nullptr, nullptr, sizeof(LevelParadise_eventEnterParadise_Parms), Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelParadise_EnterParadise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelParadise_EnterParadise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelParadise_OnInterpolationDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelParadise_OnInterpolationDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelParadise_OnInterpolationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelParadise, nullptr, "OnInterpolationDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelParadise_OnInterpolationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_OnInterpolationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelParadise_OnInterpolationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelParadise_OnInterpolationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics
	{
		struct LevelParadise_eventParadiseEntered_Parms
		{
			FParadiseData playerData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::NewProp_playerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::NewProp_playerData = { "playerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelParadise_eventParadiseEntered_Parms, playerData), Z_Construct_UScriptStruct_FParadiseData, METADATA_PARAMS(Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::NewProp_playerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::NewProp_playerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::NewProp_playerData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelParadise, nullptr, "ParadiseEntered", nullptr, nullptr, sizeof(LevelParadise_eventParadiseEntered_Parms), Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelParadise_ParadiseEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelParadise_ParadiseEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelParadise_NoRegister()
	{
		return ALevelParadise::StaticClass();
	}
	struct Z_Construct_UClass_ALevelParadise_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__runnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__runnerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedMainPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnedMainPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParadiseViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParadiseViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParadiseTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParadiseTiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParadiseTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherSurvivorSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OtherSurvivorSpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherSurvivorSpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainPlayerSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainPlayerSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopStartDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelParadise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelParadise_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelParadise_EnterParadise, "EnterParadise" }, // 273207753
		{ &Z_Construct_UFunction_ALevelParadise_OnInterpolationDone, "OnInterpolationDone" }, // 3244835665
		{ &Z_Construct_UFunction_ALevelParadise_ParadiseEntered, "ParadiseEntered" }, // 4264861969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelParadise.h" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp__runnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp__runnerComponent = { "_runnerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, _runnerComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp__runnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp__runnerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp__spawnedMainPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp__spawnedMainPawn = { "_spawnedMainPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, _spawnedMainPawn), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp__spawnedMainPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp__spawnedMainPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseViewTarget_MetaData[] = {
		{ "Category", "LevelParadise" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseViewTarget = { "ParadiseViewTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, ParadiseViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles_MetaData[] = {
		{ "Category", "LevelParadise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles = { "ParadiseTiles", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, ParadiseTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles_Inner = { "ParadiseTiles", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints_MetaData[] = {
		{ "Category", "LevelParadise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints = { "OtherSurvivorSpawnPoints", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, OtherSurvivorSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints_Inner = { "OtherSurvivorSpawnPoints", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp_MainPlayerSpawnPoint_MetaData[] = {
		{ "Category", "LevelParadise" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_MainPlayerSpawnPoint = { "MainPlayerSpawnPoint", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, MainPlayerSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp_MainPlayerSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp_MainPlayerSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopDistance_MetaData[] = {
		{ "Category", "LevelParadise" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopDistance = { "LoopDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, LoopDistance), METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopStartDistance_MetaData[] = {
		{ "Category", "LevelParadise" },
		{ "ModuleRelativePath", "Public/LevelParadise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopStartDistance = { "LoopStartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelParadise, LoopStartDistance), METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopStartDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelParadise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp__runnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp__spawnedMainPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_ParadiseTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_OtherSurvivorSpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_MainPlayerSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelParadise_Statics::NewProp_LoopStartDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelParadise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelParadise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelParadise_Statics::ClassParams = {
		&ALevelParadise::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelParadise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelParadise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelParadise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelParadise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelParadise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelParadise, 1043815360);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ALevelParadise>()
	{
		return ALevelParadise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelParadise(Z_Construct_UClass_ALevelParadise, &ALevelParadise::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ALevelParadise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelParadise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
