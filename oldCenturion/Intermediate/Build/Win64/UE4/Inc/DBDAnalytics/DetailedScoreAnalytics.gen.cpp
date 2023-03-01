// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DetailedScoreAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailedScoreAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDetailedScoreAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDetailedScoreAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailedScoreAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DetailedScoreAnalytics"), sizeof(FDetailedScoreAnalytics), Get_Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDetailedScoreAnalytics>()
{
	return FDetailedScoreAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDetailedScoreAnalytics(FDetailedScoreAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DetailedScoreAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDetailedScoreAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDetailedScoreAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DetailedScoreAnalytics")),new UScriptStruct::TCppStructOps<FDetailedScoreAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDetailedScoreAnalytics;
	struct Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinateZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCoordinateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinateY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCoordinateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinateX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCoordinateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCoordinateZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorCoordinateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCoordinateY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorCoordinateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCoordinateX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorCoordinateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedMatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreTypeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScoreTypeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScorerMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScorerMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailedScoreAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateZ = { "TargetCoordinateZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, TargetCoordinateZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateY = { "TargetCoordinateY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, TargetCoordinateY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateX_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateX = { "TargetCoordinateX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, TargetCoordinateX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateZ = { "InstigatorCoordinateZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, InstigatorCoordinateZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateY = { "InstigatorCoordinateY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, InstigatorCoordinateY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateX_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateX = { "InstigatorCoordinateX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, InstigatorCoordinateX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ElapsedMatchTime = { "ElapsedMatchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, ElapsedMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreExperience = { "ScoreExperience", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, ScoreExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreTypeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreTypeId = { "ScoreTypeId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, ScoreTypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreTypeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetMirrorsId = { "TargetMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, TargetMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScorerMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedScoreAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScorerMirrorsId = { "ScorerMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedScoreAnalytics, ScorerMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScorerMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScorerMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetCoordinateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_InstigatorCoordinateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ElapsedMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScoreTypeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_TargetMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::NewProp_ScorerMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DetailedScoreAnalytics",
		sizeof(FDetailedScoreAnalytics),
		alignof(FDetailedScoreAnalytics),
		Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailedScoreAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DetailedScoreAnalytics"), sizeof(FDetailedScoreAnalytics), Get_Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDetailedScoreAnalytics_Hash() { return 1233997565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
