// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLegion/Public/LegionSurvivorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegionSurvivorAnalytics() {}
// Cross Module References
	THELEGION_API UScriptStruct* Z_Construct_UScriptStruct_FLegionSurvivorAnalytics();
	UPackage* Z_Construct_UPackage__Script_TheLegion();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FLegionSurvivorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THELEGION_API uint32 Get_Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics, Z_Construct_UPackage__Script_TheLegion(), TEXT("LegionSurvivorAnalytics"), sizeof(FLegionSurvivorAnalytics), Get_Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Hash());
	}
	return Singleton;
}
template<> THELEGION_API UScriptStruct* StaticStruct<FLegionSurvivorAnalytics>()
{
	return FLegionSurvivorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegionSurvivorAnalytics(FLegionSurvivorAnalytics::StaticStruct, TEXT("/Script/TheLegion"), TEXT("LegionSurvivorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_TheLegion_StaticRegisterNativesFLegionSurvivorAnalytics
{
	FScriptStruct_TheLegion_StaticRegisterNativesFLegionSurvivorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegionSurvivorAnalytics")),new UScriptStruct::TCppStructOps<FLegionSurvivorAnalytics>);
	}
} ScriptStruct_TheLegion_StaticRegisterNativesFLegionSurvivorAnalytics;
	struct Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepWoundEscape_MetaData[];
#endif
		static void NewProp_DeepWoundEscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeepWoundEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepWoundDying_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeepWoundDying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrenzyEffectivements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrenzyEffectivements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeepWoundCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeepWoundCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegionSurvivorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape_SetBit(void* Obj)
	{
		((FLegionSurvivorAnalytics*)Obj)->DeepWoundEscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape = { "DeepWoundEscape", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLegionSurvivorAnalytics), &Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundDying_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundDying = { "DeepWoundDying", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegionSurvivorAnalytics, DeepWoundDying), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundDying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundDying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_FrenzyEffectivements_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_FrenzyEffectivements = { "FrenzyEffectivements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegionSurvivorAnalytics, FrenzyEffectivements), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_FrenzyEffectivements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_FrenzyEffectivements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundCount = { "DeepWoundCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegionSurvivorAnalytics, DeepWoundCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionSurvivorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegionSurvivorAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundDying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_FrenzyEffectivements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_DeepWoundCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheLegion,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LegionSurvivorAnalytics",
		sizeof(FLegionSurvivorAnalytics),
		alignof(FLegionSurvivorAnalytics),
		Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegionSurvivorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheLegion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegionSurvivorAnalytics"), sizeof(FLegionSurvivorAnalytics), Get_Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegionSurvivorAnalytics_Hash() { return 3013896906U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
