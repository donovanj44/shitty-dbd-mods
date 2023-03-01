// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DailyRitualAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDailyRitualAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDailyRitualAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDailyRitualAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DailyRitualAnalytics"), sizeof(FDailyRitualAnalytics), Get_Z_Construct_UScriptStruct_FDailyRitualAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDailyRitualAnalytics>()
{
	return FDailyRitualAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDailyRitualAnalytics(FDailyRitualAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DailyRitualAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDailyRitualAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDailyRitualAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DailyRitualAnalytics")),new UScriptStruct::TCppStructOps<FDailyRitualAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDailyRitualAnalytics;
	struct Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecificCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingRituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PendingRituals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbGameElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbGameElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoursElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoursElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RitualId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RitualId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDailyRitualAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_SpecificCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_SpecificCharacter = { "SpecificCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, SpecificCharacter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_SpecificCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_SpecificCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_PendingRituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_PendingRituals = { "PendingRituals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, PendingRituals), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_PendingRituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_PendingRituals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Threshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Progress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_NbGameElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_NbGameElapsed = { "NbGameElapsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, NbGameElapsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_NbGameElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_NbGameElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_HoursElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_HoursElapsed = { "HoursElapsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, HoursElapsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_HoursElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_HoursElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_RitualId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_RitualId = { "RitualId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, RitualId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_RitualId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_RitualId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/DailyRitualAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDailyRitualAnalytics, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_SpecificCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_PendingRituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_NbGameElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_HoursElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_RitualId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DailyRitualAnalytics",
		sizeof(FDailyRitualAnalytics),
		alignof(FDailyRitualAnalytics),
		Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDailyRitualAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDailyRitualAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DailyRitualAnalytics"), sizeof(FDailyRitualAnalytics), Get_Z_Construct_UScriptStruct_FDailyRitualAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDailyRitualAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDailyRitualAnalytics_Hash() { return 1492486179U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
