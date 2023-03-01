// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/HookAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FHookAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FHookAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FHookAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHookAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("HookAnalytics"), sizeof(FHookAnalytics), Get_Z_Construct_UScriptStruct_FHookAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FHookAnalytics>()
{
	return FHookAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHookAnalytics(FHookAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("HookAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFHookAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFHookAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HookAnalytics")),new UScriptStruct::TCppStructOps<FHookAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFHookAnalytics;
	struct Z_Construct_UScriptStruct_FHookAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseBearTrapOn_MetaData[];
#endif
		static void NewProp_ReverseBearTrapOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReverseBearTrapOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeForFirstRescuer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeForFirstRescuer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRescuers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRescuers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationCampSoft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationCampSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationCampHard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationCampHard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationCampFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationCampFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfActiveSurvivorsTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfActiveSurvivorsTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfActiveSurvivorsEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfActiveSurvivorsEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfActiveSurvivorsStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfActiveSurvivorsStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorsRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorsRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeAttemptFull_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EscapeAttemptFull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeAttemptStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EscapeAttemptStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HookDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Outcome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesOnHook_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesOnHook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RescuerIsABot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RescuerIsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsIdRescuer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsIdRescuer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerIsABot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KillerIsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsIdKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsIdKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorIsABot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurvivorIsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsIdSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsIdSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HookStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHookAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn_SetBit(void* Obj)
	{
		((FHookAnalytics*)Obj)->ReverseBearTrapOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn = { "ReverseBearTrapOn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHookAnalytics), &Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimeForFirstRescuer_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimeForFirstRescuer = { "TimeForFirstRescuer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, TimeForFirstRescuer), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimeForFirstRescuer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimeForFirstRescuer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfRescuers_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfRescuers = { "NumberOfRescuers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, NumberOfRescuers), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfRescuers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfRescuers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampSoft_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampSoft = { "DurationCampSoft", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, DurationCampSoft), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampHard_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampHard = { "DurationCampHard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, DurationCampHard), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampHard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampHard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampFace_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampFace = { "DurationCampFace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, DurationCampFace), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsTotal_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsTotal = { "NumberOfActiveSurvivorsTotal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, NumberOfActiveSurvivorsTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsEnd = { "NumberOfActiveSurvivorsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, NumberOfActiveSurvivorsEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsStart = { "NumberOfActiveSurvivorsStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, NumberOfActiveSurvivorsStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorsRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorsRemaining = { "SurvivorsRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, SurvivorsRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorsRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorsRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptFull_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptFull = { "EscapeAttemptFull", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, EscapeAttemptFull), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptFull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptFull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptStart = { "EscapeAttemptStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, EscapeAttemptStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookDuration = { "HookDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, HookDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_Outcome_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, Outcome), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_Outcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_Outcome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimesOnHook_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimesOnHook = { "TimesOnHook", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, TimesOnHook), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimesOnHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimesOnHook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_RescuerIsABot_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_RescuerIsABot = { "RescuerIsABot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, RescuerIsABot), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_RescuerIsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_RescuerIsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdRescuer_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdRescuer = { "MirrorsIdRescuer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, MirrorsIdRescuer), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdRescuer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdRescuer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_KillerIsABot_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_KillerIsABot = { "KillerIsABot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, KillerIsABot), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_KillerIsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_KillerIsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdKiller = { "MirrorsIdKiller", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, MirrorsIdKiller), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorIsABot_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorIsABot = { "SurvivorIsABot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, SurvivorIsABot), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorIsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorIsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdSurvivor = { "MirrorsIdSurvivor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, MirrorsIdSurvivor), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookStartTime = { "HookStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookAnalytics, HookStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHookAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_ReverseBearTrapOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimeForFirstRescuer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfRescuers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampHard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_DurationCampFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_NumberOfActiveSurvivorsStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorsRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptFull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_EscapeAttemptStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_Outcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_TimesOnHook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_RescuerIsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdRescuer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_KillerIsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_SurvivorIsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_MirrorsIdSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookAnalytics_Statics::NewProp_HookStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHookAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"HookAnalytics",
		sizeof(FHookAnalytics),
		alignof(FHookAnalytics),
		Z_Construct_UScriptStruct_FHookAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHookAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHookAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHookAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HookAnalytics"), sizeof(FHookAnalytics), Get_Z_Construct_UScriptStruct_FHookAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHookAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHookAnalytics_Hash() { return 32167462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
