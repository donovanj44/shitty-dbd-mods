// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePlague/Public/PlagueSurvivorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlagueSurvivorAnalytics() {}
// Cross Module References
	THEPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics();
	UPackage* Z_Construct_UPackage__Script_ThePlague();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPlagueSurvivorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEPLAGUE_API uint32 Get_Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics, Z_Construct_UPackage__Script_ThePlague(), TEXT("PlagueSurvivorAnalytics"), sizeof(FPlagueSurvivorAnalytics), Get_Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Hash());
	}
	return Singleton;
}
template<> THEPLAGUE_API UScriptStruct* StaticStruct<FPlagueSurvivorAnalytics>()
{
	return FPlagueSurvivorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlagueSurvivorAnalytics(FPlagueSurvivorAnalytics::StaticStruct, TEXT("/Script/ThePlague"), TEXT("PlagueSurvivorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_ThePlague_StaticRegisterNativesFPlagueSurvivorAnalytics
{
	FScriptStruct_ThePlague_StaticRegisterNativesFPlagueSurvivorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlagueSurvivorAnalytics")),new UScriptStruct::TCppStructOps<FPlagueSurvivorAnalytics>);
	}
} ScriptStruct_ThePlague_StaticRegisterNativesFPlagueSurvivorAnalytics;
	struct Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInSuperMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSuperMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeWithMaximumSickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeWithMaximumSickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeWithSickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeWithSickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CleanSicknessCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CleanSicknessCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperVomitHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuperVomitHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularVomitHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegularVomitHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BecomeInfectCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BecomeInfectCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlagueSurvivorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeInSuperMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeInSuperMode = { "TimeInSuperMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, TimeInSuperMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeInSuperMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeInSuperMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithMaximumSickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithMaximumSickness = { "TimeWithMaximumSickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, TimeWithMaximumSickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithMaximumSickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithMaximumSickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithSickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithSickness = { "TimeWithSickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, TimeWithSickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithSickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithSickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_CleanSicknessCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_CleanSicknessCount = { "CleanSicknessCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, CleanSicknessCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_CleanSicknessCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_CleanSicknessCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_SuperVomitHits_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_SuperVomitHits = { "SuperVomitHits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, SuperVomitHits), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_SuperVomitHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_SuperVomitHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_RegularVomitHits_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_RegularVomitHits = { "RegularVomitHits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, RegularVomitHits), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_RegularVomitHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_RegularVomitHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_BecomeInfectCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_BecomeInfectCount = { "BecomeInfectCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, BecomeInfectCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_BecomeInfectCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_BecomeInfectCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlagueSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueSurvivorAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeInSuperMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithMaximumSickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_TimeWithSickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_CleanSicknessCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_SuperVomitHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_RegularVomitHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_BecomeInfectCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThePlague,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PlagueSurvivorAnalytics",
		sizeof(FPlagueSurvivorAnalytics),
		alignof(FPlagueSurvivorAnalytics),
		Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ThePlague();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlagueSurvivorAnalytics"), sizeof(FPlagueSurvivorAnalytics), Get_Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlagueSurvivorAnalytics_Hash() { return 4101699023U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
