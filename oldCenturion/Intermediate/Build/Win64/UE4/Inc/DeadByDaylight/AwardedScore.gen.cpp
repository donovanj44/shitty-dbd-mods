// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AwardedScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAwardedScore() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAwardedScore();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FAwardedScore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAwardedScore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAwardedScore, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AwardedScore"), sizeof(FAwardedScore), Get_Z_Construct_UScriptStruct_FAwardedScore_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAwardedScore>()
{
	return FAwardedScore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAwardedScore(FAwardedScore::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AwardedScore"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAwardedScore
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAwardedScore()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AwardedScore")),new UScriptStruct::TCppStructOps<FAwardedScore>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAwardedScore;
	struct Z_Construct_UScriptStruct_FAwardedScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointsAwarded_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodpointsAwarded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreTypeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScoreTypeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAwardedScore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AwardedScore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAwardedScore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAwardedScore>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_BloodpointsAwarded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AwardedScore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_BloodpointsAwarded = { "BloodpointsAwarded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAwardedScore, BloodpointsAwarded), METADATA_PARAMS(Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_BloodpointsAwarded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_BloodpointsAwarded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_ScoreTypeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AwardedScore.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_ScoreTypeId = { "ScoreTypeId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAwardedScore, ScoreTypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_ScoreTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_ScoreTypeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAwardedScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_BloodpointsAwarded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAwardedScore_Statics::NewProp_ScoreTypeId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAwardedScore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AwardedScore",
		sizeof(FAwardedScore),
		alignof(FAwardedScore),
		Z_Construct_UScriptStruct_FAwardedScore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAwardedScore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAwardedScore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAwardedScore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAwardedScore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAwardedScore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AwardedScore"), sizeof(FAwardedScore), Get_Z_Construct_UScriptStruct_FAwardedScore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAwardedScore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAwardedScore_Hash() { return 3225481705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
