// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/Gameplay_SurvivorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplay_SurvivorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGameplay_SurvivorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("Gameplay_SurvivorAnalytics"), sizeof(FGameplay_SurvivorAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGameplay_SurvivorAnalytics>()
{
	return FGameplay_SurvivorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplay_SurvivorAnalytics(FGameplay_SurvivorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("Gameplay_SurvivorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_SurvivorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_SurvivorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gameplay_SurvivorAnalytics")),new UScriptStruct::TCppStructOps<FGameplay_SurvivorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGameplay_SurvivorAnalytics;
	struct Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrawlingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrawlingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchingCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CrouchingCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmoteCome_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmoteCome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmotePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmotePoint;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBySlasherCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitBySlasherCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChases_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChases;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckCountGreat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillCheckCountGreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckCountGood_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillCheckCountGood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillCheckCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosetEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClosetEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealCountSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HealCountSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HealCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnhookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnhookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletStun_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletStun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalletDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PalletDrop;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KODuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KODuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthyDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthyDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuredDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InjuredDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuredSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InjuredSpeed;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplay_SurvivorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrawlingDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrawlingDuration = { "CrawlingDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, CrawlingDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrawlingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrawlingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingCount = { "CrouchingCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, CrouchingCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingDuration = { "CrouchingDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, CrouchingDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmoteCome_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmoteCome = { "EmoteCome", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, EmoteCome), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmoteCome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmoteCome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmotePoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmotePoint = { "EmotePoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, EmotePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmotePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmotePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartZ = { "StartZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, StartZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, StartY), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, StartX), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_AmountTilesVisited_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_AmountTilesVisited = { "AmountTilesVisited", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, AmountTilesVisited), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_AmountTilesVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_AmountTilesVisited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HitBySlasherCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HitBySlasherCount = { "HitBySlasherCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, HitBySlasherCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HitBySlasherCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HitBySlasherCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_NumChases_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_NumChases = { "NumChases", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, NumChases), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_NumChases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_NumChases_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ChaseDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ChaseDuration = { "ChaseDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, ChaseDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ChaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ChaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGreat_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGreat = { "SkillCheckCountGreat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, SkillCheckCountGreat), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGood_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGood = { "SkillCheckCountGood", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, SkillCheckCountGood), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGood_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCount = { "SkillCheckCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, SkillCheckCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Hatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Hatch = { "Hatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, Hatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Hatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Hatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ClosetEnter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ClosetEnter = { "ClosetEnter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, ClosetEnter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ClosetEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ClosetEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCountSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCountSuccess = { "HealCountSuccess", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, HealCountSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCountSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCountSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCount = { "HealCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, HealCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_UnhookCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_UnhookCount = { "UnhookCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, UnhookCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_UnhookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_UnhookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletStun_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletStun = { "PalletStun", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletStun), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletStun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletStun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletDrop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletDrop = { "PalletDrop", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletDrop), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGeneric_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGeneric = { "PalletGeneric", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletGeneric), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGeneric_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGeneric_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGenerationId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGenerationId = { "PalletGenerationId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletGenerationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGenerationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGenerationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProceduralSetCount = { "PalletProceduralSetCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletProceduralSetCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProceduralSetCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProcedural_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProcedural = { "PalletProcedural", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletProcedural), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProcedural_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProcedural_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletSpawned = { "PalletSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, PalletSpawned), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_KODuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_KODuration = { "KODuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, KODuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_KODuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_KODuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealthyDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealthyDuration = { "HealthyDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, HealthyDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealthyDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealthyDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredDuration = { "InjuredDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, InjuredDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredSpeed = { "InjuredSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, InjuredSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay_SurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplay_SurvivorAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrawlingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_CrouchingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmoteCome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_EmotePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_AmountTilesVisited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HitBySlasherCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_NumChases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ChaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCountGood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_SkillCheckCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Hatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_ClosetEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCountSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_UnhookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletStun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGeneric,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletGenerationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProceduralSetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletProcedural,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_PalletSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_KODuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_HealthyDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_InjuredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"Gameplay_SurvivorAnalytics",
		sizeof(FGameplay_SurvivorAnalytics),
		alignof(FGameplay_SurvivorAnalytics),
		Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gameplay_SurvivorAnalytics"), sizeof(FGameplay_SurvivorAnalytics), Get_Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplay_SurvivorAnalytics_Hash() { return 4277764848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
