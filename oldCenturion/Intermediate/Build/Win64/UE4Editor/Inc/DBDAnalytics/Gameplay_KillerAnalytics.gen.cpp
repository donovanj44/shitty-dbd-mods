// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/Gameplay_KillerAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplay_KillerAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplay_KillerAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGameplay_KillerAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("Gameplay_KillerAnalytics"), sizeof(FGameplay_KillerAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGameplay_KillerAnalytics>()
{
	return FGameplay_KillerAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplay_KillerAnalytics(FGameplay_KillerAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("Gameplay_KillerAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_KillerAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_KillerAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gameplay_KillerAnalytics")),new UScriptStruct::TCppStructOps<FGameplay_KillerAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_KillerAnalytics;
	struct Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountTilesVisited_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmountTilesVisited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondesAtLeastOneSurvivorHooked_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondesAtLeastOneSurvivorHooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeesHatchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EscapeesHatchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosetOpenSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClosetOpenSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosetOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClosetOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSpecialCountSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitSpecialCountSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSpecialCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitSpecialCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFarCountSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitFarCountSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFarCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitFarCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCloseCountSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitCloseCountSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCloseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitCloseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DropCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakableWallDestroyed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BreakableWallDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakableWallSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BreakableWallSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletDestroyed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletDestroyed;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MurderCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MurderCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountTier3Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountTier3Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountTier3Fail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountTier3Fail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountTier2Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountTier2Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountTier2Fail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountTier2Fail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountTier1Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountTier1Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountTier1Fail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountTier1Fail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCountFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCountFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChaseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodlustSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustTier3Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodlustTier3Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustTier2Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodlustTier2Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustTier1Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodlustTier1Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustTier3Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodlustTier3Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustTier2Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodlustTier2Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodlustTier1Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodlustTier1Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplay_KillerAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartZ = { "StartZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, StartZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, StartY), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, StartX), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_AmountTilesVisited_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_AmountTilesVisited = { "AmountTilesVisited", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, AmountTilesVisited), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_AmountTilesVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_AmountTilesVisited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_SecondesAtLeastOneSurvivorHooked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_SecondesAtLeastOneSurvivorHooked = { "SecondesAtLeastOneSurvivorHooked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, SecondesAtLeastOneSurvivorHooked), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_SecondesAtLeastOneSurvivorHooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_SecondesAtLeastOneSurvivorHooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_EscapeesHatchCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_EscapeesHatchCount = { "EscapeesHatchCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, EscapeesHatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_EscapeesHatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_EscapeesHatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpenSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpenSuccess = { "ClosetOpenSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ClosetOpenSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpenSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpenSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpen = { "ClosetOpen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ClosetOpen), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCountSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCountSuccess = { "HitSpecialCountSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HitSpecialCountSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCountSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCountSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCount = { "HitSpecialCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HitSpecialCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCountSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCountSuccess = { "HitFarCountSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HitFarCountSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCountSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCountSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCount = { "HitFarCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HitFarCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCountSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCountSuccess = { "HitCloseCountSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HitCloseCountSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCountSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCountSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCount = { "HitCloseCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HitCloseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_DropCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_DropCount = { "DropCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, DropCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_DropCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_DropCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallDestroyed = { "BreakableWallDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BreakableWallDestroyed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallSpawned = { "BreakableWallSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BreakableWallSpawned), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletDestroyed = { "PalletDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, PalletDestroyed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGeneric_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGeneric = { "PalletGeneric", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, PalletGeneric), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGeneric_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGeneric_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGenerationId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGenerationId = { "PalletGenerationId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, PalletGenerationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGenerationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGenerationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProceduralSetCount = { "PalletProceduralSetCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, PalletProceduralSetCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProcedural_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProcedural = { "PalletProcedural", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, PalletProcedural), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProcedural_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProcedural_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletSpawned = { "PalletSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, PalletSpawned), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MurderCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MurderCount = { "MurderCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, MurderCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MurderCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MurderCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HookCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HookCount = { "HookCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, HookCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Success = { "ChaseCountTier3Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountTier3Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Fail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Fail = { "ChaseCountTier3Fail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountTier3Fail), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Fail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Fail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Success = { "ChaseCountTier2Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountTier2Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Fail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Fail = { "ChaseCountTier2Fail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountTier2Fail), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Fail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Fail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Success = { "ChaseCountTier1Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountTier1Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Fail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Fail = { "ChaseCountTier1Fail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountTier1Fail), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Fail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Fail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountSuccess = { "ChaseCountSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountFail = { "ChaseCountFail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCountFail), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCount = { "ChaseCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, ChaseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustSpeed = { "BloodlustSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Duration = { "BloodlustTier3Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustTier3Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Duration = { "BloodlustTier2Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustTier2Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Duration = { "BloodlustTier1Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustTier1Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Count = { "BloodlustTier3Count", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustTier3Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Count = { "BloodlustTier2Count", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustTier2Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Count = { "BloodlustTier1Count", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, BloodlustTier1Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_KillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_KillerAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_AmountTilesVisited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_SecondesAtLeastOneSurvivorHooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_EscapeesHatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpenSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ClosetOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCountSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitSpecialCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCountSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitFarCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCountSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HitCloseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_DropCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BreakableWallSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGeneric,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletGenerationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProceduralSetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletProcedural,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_PalletSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MurderCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_HookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier3Fail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier2Fail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountTier1Fail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCountFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_ChaseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier3Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier2Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_BloodlustTier1Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"Gameplay_KillerAnalytics",
		sizeof(FGameplay_KillerAnalytics),
		alignof(FGameplay_KillerAnalytics),
		Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplay_KillerAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gameplay_KillerAnalytics"), sizeof(FGameplay_KillerAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplay_KillerAnalytics_Hash() { return 633469643U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
