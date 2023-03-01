// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/Gameplay_ChaseAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplay_ChaseAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGameplay_ChaseAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("Gameplay_ChaseAnalytics"), sizeof(FGameplay_ChaseAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGameplay_ChaseAnalytics>()
{
	return FGameplay_ChaseAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplay_ChaseAnalytics(FGameplay_ChaseAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("Gameplay_ChaseAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_ChaseAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_ChaseAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gameplay_ChaseAnalytics")),new UScriptStruct::TCppStructOps<FGameplay_ChaseAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_ChaseAnalytics;
	struct Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseEndTimeInSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseEndTimeInSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseStartTimeInSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseStartTimeInSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplacementSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceCoveredSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceCoveredSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesVisitedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TilesVisitedSurvivor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TilesVisitedSurvivor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountOfTilesVisitedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountOfTilesVisitedSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndingTileSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndingTileSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingTileSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartingTileSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountHealedOfSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountHealedOfSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndingHealthOfSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndingHealthOfSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingHealthOfSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartingHealthOfSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletsVaultedBySurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletsVaultedBySurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowsVaultedBySurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WindowsVaultedBySurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletsStunnedBySurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletsStunnedBySurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletsDroppedBySurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletsDroppedBySurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordZEndSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordZEndSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordYEndSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordYEndSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordXEndSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordXEndSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordZStartSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordZStartSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordYStartSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordYStartSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordXStartSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordXStartSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceCoveredKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceCoveredKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialAttackHitsByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialAttackHitsByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialAttackAttemptsByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialAttackAttemptsByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicAttackHitsByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasicAttackHitsByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicAttackSwingsByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasicAttackSwingsByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletsVaultedByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletsVaultedByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowsVaultedByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WindowsVaultedByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletsDestroyedByKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletsDestroyedByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordZEndKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordZEndKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordYEndKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordYEndKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordXEndKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordXEndKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordZStartKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordZStartKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordYStartKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordYStartKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordXStartKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordXStartKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsIdSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsIdSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsABot_MetaData[];
#endif
		static void NewProp_IsABot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplay_ChaseAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseEndTimeInSecond_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseEndTimeInSecond = { "ChaseEndTimeInSecond", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, ChaseEndTimeInSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseEndTimeInSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseEndTimeInSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseStartTimeInSecond_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseStartTimeInSecond = { "ChaseStartTimeInSecond", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, ChaseStartTimeInSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseStartTimeInSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseStartTimeInSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DisplacementSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DisplacementSurvivor = { "DisplacementSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, DisplacementSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DisplacementSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DisplacementSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredSurvivor = { "DistanceCoveredSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, DistanceCoveredSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor = { "TilesVisitedSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, TilesVisitedSurvivor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor_Inner = { "TilesVisitedSurvivor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountOfTilesVisitedSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountOfTilesVisitedSurvivor = { "AmountOfTilesVisitedSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, AmountOfTilesVisitedSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountOfTilesVisitedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountOfTilesVisitedSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingTileSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingTileSurvivor = { "EndingTileSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, EndingTileSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingTileSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingTileSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingTileSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingTileSurvivor = { "StartingTileSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, StartingTileSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingTileSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingTileSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountHealedOfSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountHealedOfSurvivor = { "AmountHealedOfSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, AmountHealedOfSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountHealedOfSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountHealedOfSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingHealthOfSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingHealthOfSurvivor = { "EndingHealthOfSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, EndingHealthOfSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingHealthOfSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingHealthOfSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingHealthOfSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingHealthOfSurvivor = { "StartingHealthOfSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, StartingHealthOfSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingHealthOfSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingHealthOfSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedBySurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedBySurvivor = { "PalletsVaultedBySurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, PalletsVaultedBySurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedBySurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedBySurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedBySurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedBySurvivor = { "WindowsVaultedBySurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, WindowsVaultedBySurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedBySurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedBySurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsStunnedBySurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsStunnedBySurvivor = { "PalletsStunnedBySurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, PalletsStunnedBySurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsStunnedBySurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsStunnedBySurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDroppedBySurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDroppedBySurvivor = { "PalletsDroppedBySurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, PalletsDroppedBySurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDroppedBySurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDroppedBySurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndSurvivor = { "CoordZEndSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordZEndSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndSurvivor = { "CoordYEndSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordYEndSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndSurvivor = { "CoordXEndSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordXEndSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartSurvivor = { "CoordZStartSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordZStartSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartSurvivor = { "CoordYStartSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordYStartSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartSurvivor = { "CoordXStartSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordXStartSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredKiller = { "DistanceCoveredKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, DistanceCoveredKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackHitsByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackHitsByKiller = { "SpecialAttackHitsByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, SpecialAttackHitsByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackHitsByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackHitsByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackAttemptsByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackAttemptsByKiller = { "SpecialAttackAttemptsByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, SpecialAttackAttemptsByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackAttemptsByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackAttemptsByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackHitsByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackHitsByKiller = { "BasicAttackHitsByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, BasicAttackHitsByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackHitsByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackHitsByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackSwingsByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackSwingsByKiller = { "BasicAttackSwingsByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, BasicAttackSwingsByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackSwingsByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackSwingsByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedByKiller = { "PalletsVaultedByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, PalletsVaultedByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedByKiller = { "WindowsVaultedByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, WindowsVaultedByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDestroyedByKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDestroyedByKiller = { "PalletsDestroyedByKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, PalletsDestroyedByKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDestroyedByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDestroyedByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndKiller = { "CoordZEndKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordZEndKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndKiller = { "CoordYEndKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordYEndKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndKiller = { "CoordXEndKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordXEndKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartKiller = { "CoordZStartKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordZStartKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartKiller = { "CoordYStartKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordYStartKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartKiller = { "CoordXStartKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, CoordXStartKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MirrorsIdSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MirrorsIdSurvivor = { "MirrorsIdSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, MirrorsIdSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MirrorsIdSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MirrorsIdSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot_SetBit(void* Obj)
	{
		((FGameplay_ChaseAnalytics*)Obj)->IsABot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot = { "IsABot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplay_ChaseAnalytics), &Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_ChaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_ChaseAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseEndTimeInSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_ChaseStartTimeInSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DisplacementSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_TilesVisitedSurvivor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountOfTilesVisitedSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingTileSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingTileSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_AmountHealedOfSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_EndingHealthOfSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_StartingHealthOfSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedBySurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedBySurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsStunnedBySurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDroppedBySurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_DistanceCoveredKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackHitsByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_SpecialAttackAttemptsByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackHitsByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_BasicAttackSwingsByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsVaultedByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_WindowsVaultedByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_PalletsDestroyedByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZEndKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYEndKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXEndKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordZStartKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordYStartKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_CoordXStartKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MirrorsIdSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_IsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"Gameplay_ChaseAnalytics",
		sizeof(FGameplay_ChaseAnalytics),
		alignof(FGameplay_ChaseAnalytics),
		Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gameplay_ChaseAnalytics"), sizeof(FGameplay_ChaseAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplay_ChaseAnalytics_Hash() { return 3632587503U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
