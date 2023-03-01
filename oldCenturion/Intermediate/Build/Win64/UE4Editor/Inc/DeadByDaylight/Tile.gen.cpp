// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Tile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPoint_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorVariationSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectRandomizer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBasementType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPathType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDensity();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EscapeStrategyType();
// End Cross Module References
	DEFINE_FUNCTION(ATile::execOnRep_Initialized)
	{
		P_GET_UBOOL(Z_Param_oldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Initialized(Z_Param_oldValue);
		P_NATIVE_END;
	}
	static FName NAME_ATile_InitOnSpawned = FName(TEXT("InitOnSpawned"));
	void ATile::InitOnSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATile_InitOnSpawned),NULL);
	}
	static FName NAME_ATile_OnAllTileSpawned = FName(TEXT("OnAllTileSpawned"));
	void ATile::OnAllTileSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATile_OnAllTileSpawned),NULL);
	}
	static FName NAME_ATile_OnSetSpawnObject = FName(TEXT("OnSetSpawnObject"));
	void ATile::OnSetSpawnObject(UTileSpawnPoint* tileSpawnPoint, AActor* spawnedObject)
	{
		Tile_eventOnSetSpawnObject_Parms Parms;
		Parms.tileSpawnPoint=tileSpawnPoint;
		Parms.spawnedObject=spawnedObject;
		ProcessEvent(FindFunctionChecked(NAME_ATile_OnSetSpawnObject),&Parms);
	}
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Initialized", &ATile::execOnRep_Initialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_InitOnSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_InitOnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_InitOnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "InitOnSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_InitOnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_InitOnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_InitOnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_InitOnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_OnAllTileSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnAllTileSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_OnAllTileSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "OnAllTileSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnAllTileSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnAllTileSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_OnAllTileSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_OnAllTileSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_OnRep_Initialized_Statics
	{
		struct Tile_eventOnRep_Initialized_Parms
		{
			bool oldValue;
		};
		static void NewProp_oldValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::NewProp_oldValue_SetBit(void* Obj)
	{
		((Tile_eventOnRep_Initialized_Parms*)Obj)->oldValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Tile_eventOnRep_Initialized_Parms), &Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::NewProp_oldValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::NewProp_oldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "OnRep_Initialized", nullptr, nullptr, sizeof(Tile_eventOnRep_Initialized_Parms), Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_OnRep_Initialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_OnRep_Initialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileSpawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_spawnedObject = { "spawnedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnSetSpawnObject_Parms, spawnedObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_tileSpawnPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_tileSpawnPoint = { "tileSpawnPoint", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventOnSetSpawnObject_Parms, tileSpawnPoint), Z_Construct_UClass_UTileSpawnPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_tileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_tileSpawnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_spawnedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::NewProp_tileSpawnPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "OnSetSpawnObject", nullptr, nullptr, sizeof(Tile_eventOnSetSpawnObject_Parms), Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_OnSetSpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_OnSetSpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialized_MetaData[];
#endif
		static void NewProp__initialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__initialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedTileRandomizer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedTileRandomizer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorVariationSpawnersCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorVariationSpawnersCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorVariationSpawnersCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSpawnersCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorSpawnersCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorSpawnersCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectRandomizersCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectRandomizersCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectRandomizersCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPointsCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPointsCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPointsCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BasementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BasementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadrantSpawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuadrantSpawnType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuadrantSpawnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPriorityTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnPriorityTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceHolder_MetaData[];
#endif
		static void NewProp_PlaceHolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlaceHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Path_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Density;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Density_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableEscapeTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableEscapeTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvailableEscapeTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvailableEscapeTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeSpacing_MetaData[];
#endif
		static void NewProp_TypeSpacing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TypeSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiagonalSpacing_MetaData[];
#endif
		static void NewProp_DiagonalSpacing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DiagonalSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RerunConstructionScript_MetaData[];
#endif
		static void NewProp_RerunConstructionScript_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RerunConstructionScript;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_InitOnSpawned, "InitOnSpawned" }, // 1970926348
		{ &Z_Construct_UFunction_ATile_OnAllTileSpawned, "OnAllTileSpawned" }, // 2068842075
		{ &Z_Construct_UFunction_ATile_OnRep_Initialized, "OnRep_Initialized" }, // 11152026
		{ &Z_Construct_UFunction_ATile_OnSetSpawnObject, "OnSetSpawnObject" }, // 2805787744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp__initialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp__initialized_SetBit(void* Obj)
	{
		((ATile*)Obj)->_initialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp__initialized = { "_initialized", "OnRep_Initialized", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp__initialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp__initialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp__initialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SharedTileRandomizer_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SharedTileRandomizer = { "SharedTileRandomizer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SharedTileRandomizer), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SharedTileRandomizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SharedTileRandomizer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache = { "ActorVariationSpawnersCache", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, ActorVariationSpawnersCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache_Inner = { "ActorVariationSpawnersCache", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorVariationSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache = { "ActorSpawnersCache", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, ActorSpawnersCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache_Inner = { "ActorSpawnersCache", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache = { "ObjectRandomizersCache", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, ObjectRandomizersCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache_Inner = { "ObjectRandomizersCache", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjectRandomizer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache = { "SpawnPointsCache", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SpawnPointsCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache_Inner = { "SpawnPointsCache", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTileSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_BasementType_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_BasementType = { "BasementType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, BasementType), Z_Construct_UEnum_DeadByDaylight_EBasementType, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_BasementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_BasementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_BasementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType = { "QuadrantSpawnType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, QuadrantSpawnType), Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Coord_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Coord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Coord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Weight), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SpawnPriorityTier_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnPriorityTier = { "SpawnPriorityTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SpawnPriorityTier), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPriorityTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPriorityTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder_SetBit(void* Obj)
	{
		((ATile*)Obj)->PlaceHolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder = { "PlaceHolder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Number), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Number_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Path), Z_Construct_UEnum_DeadByDaylight_EPathType, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Path_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Density), Z_Construct_UEnum_DeadByDaylight_EDensity, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Density_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Density_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Type), Z_Construct_UEnum_DeadByDaylight_ETileType, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes = { "AvailableEscapeTypes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, AvailableEscapeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_Inner = { "AvailableEscapeTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EscapeStrategyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Dimension_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Dimension), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Dimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Dimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_MaximumCount_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MaximumCount = { "MaximumCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, MaximumCount), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_MaximumCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_MaximumCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing_SetBit(void* Obj)
	{
		((ATile*)Obj)->TypeSpacing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing = { "TypeSpacing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing_SetBit(void* Obj)
	{
		((ATile*)Obj)->DiagonalSpacing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing = { "DiagonalSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_MaximumSpacing_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MaximumSpacing = { "MaximumSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, MaximumSpacing), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_MaximumSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_MaximumSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_MinimumSpacing_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MinimumSpacing = { "MinimumSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, MinimumSpacing), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_MinimumSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_MinimumSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript_SetBit(void* Obj)
	{
		((ATile*)Obj)->RerunConstructionScript = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript = { "RerunConstructionScript", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp__initialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SharedTileRandomizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ActorVariationSpawnersCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ActorSpawnersCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_ObjectRandomizersCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnPointsCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_BasementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_BasementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_QuadrantSpawnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Coord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnPriorityTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PlaceHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Path_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Density_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_AvailableEscapeTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Dimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MaximumCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TypeSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_DiagonalSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MaximumSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MinimumSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_RerunConstructionScript,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATile, 4166905510);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATile(Z_Construct_UClass_ATile, &ATile::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATile"), false, nullptr, nullptr, nullptr);

	void ATile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__initialized(TEXT("_initialized"));

		const bool bIsValid = true
			&& Name__initialized == ClassReps[(int32)ENetFields_Private::_initialized].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
