// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ProceduralGenerationAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralGenerationAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralGenerationAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FProceduralGenerationAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ProceduralGenerationAnalytics"), sizeof(FProceduralGenerationAnalytics), Get_Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FProceduralGenerationAnalytics>()
{
	return FProceduralGenerationAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProceduralGenerationAnalytics(FProceduralGenerationAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ProceduralGenerationAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFProceduralGenerationAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFProceduralGenerationAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProceduralGenerationAnalytics")),new UScriptStruct::TCppStructOps<FProceduralGenerationAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFProceduralGenerationAnalytics;
	struct Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshGenerationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavmeshGenerationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFixedMaps_MetaData[];
#endif
		static void NewProp_UseFixedMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFixedMaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HookSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SurvivorSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KillerSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletGeneric_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletGeneric;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletGenerationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PalletGenerationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletProceduralSetCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletProceduralSetCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletProcedural_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletProcedural;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletProceduralMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletProceduralMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletProceduralMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletProceduralMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_QuadrantSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_QuadrantSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_Totems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_Totems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_BreakableWalls_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_BreakableWalls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_BookShelves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_BookShelves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_Hatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_Hatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_LivingWorldObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_LivingWorldObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_EdgeObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_EdgeObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_Searchable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_Searchable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_MeatLocker_Big_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_MeatLocker_Big;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Procedural_MeatLocker_Small_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Procedural_MeatLocker_Small;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GenerationSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralGenerationAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_NavmeshGenerationTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_NavmeshGenerationTime = { "NavmeshGenerationTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, NavmeshGenerationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_NavmeshGenerationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_NavmeshGenerationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps_SetBit(void* Obj)
	{
		((FProceduralGenerationAnalytics*)Obj)->UseFixedMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps = { "UseFixedMaps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProceduralGenerationAnalytics), &Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_HookSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_HookSpawned = { "HookSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, HookSpawned), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_HookSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_HookSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_SurvivorSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_SurvivorSpawn = { "SurvivorSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, SurvivorSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_SurvivorSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_SurvivorSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_KillerSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_KillerSpawn = { "KillerSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, KillerSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_KillerSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_KillerSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGeneric_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGeneric = { "PalletGeneric", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletGeneric), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGeneric_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGeneric_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGenerationId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGenerationId = { "PalletGenerationId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletGenerationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGenerationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGenerationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralSetCount = { "PalletProceduralSetCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletProceduralSetCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProcedural_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProcedural = { "PalletProcedural", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletProcedural), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProcedural_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProcedural_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMax = { "PalletProceduralMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletProceduralMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMin = { "PalletProceduralMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletProceduralMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletSpawned = { "PalletSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, PalletSpawned), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_QuadrantSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_QuadrantSpawn = { "Procedural_QuadrantSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_QuadrantSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_QuadrantSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_QuadrantSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Totems_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Totems = { "Procedural_Totems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_Totems), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Totems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Totems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BreakableWalls_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BreakableWalls = { "Procedural_BreakableWalls", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_BreakableWalls), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BreakableWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BreakableWalls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BookShelves_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BookShelves = { "Procedural_BookShelves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_BookShelves), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BookShelves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BookShelves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Hatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Hatch = { "Procedural_Hatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_Hatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Hatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Hatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_LivingWorldObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_LivingWorldObjects = { "Procedural_LivingWorldObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_LivingWorldObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_LivingWorldObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_LivingWorldObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_EdgeObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_EdgeObjects = { "Procedural_EdgeObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_EdgeObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_EdgeObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_EdgeObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Searchable_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Searchable = { "Procedural_Searchable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_Searchable), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Searchable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Searchable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Big_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Big = { "Procedural_MeatLocker_Big", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_MeatLocker_Big), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Big_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Big_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Small_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Small = { "Procedural_MeatLocker_Small", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, Procedural_MeatLocker_Small), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Small_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Small_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapSeed = { "MapSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, MapSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_GenerationSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralGenerationAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_GenerationSeed = { "GenerationSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralGenerationAnalytics, GenerationSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_GenerationSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_GenerationSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_NavmeshGenerationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_UseFixedMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_HookSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_SurvivorSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_KillerSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGeneric,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletGenerationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralSetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProcedural,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletProceduralMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_PalletSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_QuadrantSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Totems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BreakableWalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_BookShelves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Hatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_LivingWorldObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_EdgeObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_Searchable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Big,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_Procedural_MeatLocker_Small,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_MapSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::NewProp_GenerationSeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ProceduralGenerationAnalytics",
		sizeof(FProceduralGenerationAnalytics),
		alignof(FProceduralGenerationAnalytics),
		Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralGenerationAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProceduralGenerationAnalytics"), sizeof(FProceduralGenerationAnalytics), Get_Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProceduralGenerationAnalytics_Hash() { return 323670423U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
