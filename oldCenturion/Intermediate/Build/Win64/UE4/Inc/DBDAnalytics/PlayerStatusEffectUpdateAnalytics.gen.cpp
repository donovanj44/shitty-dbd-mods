// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PlayerStatusEffectUpdateAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatusEffectUpdateAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPlayerStatusEffectUpdateAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PlayerStatusEffectUpdateAnalytics"), sizeof(FPlayerStatusEffectUpdateAnalytics), Get_Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPlayerStatusEffectUpdateAnalytics>()
{
	return FPlayerStatusEffectUpdateAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics(FPlayerStatusEffectUpdateAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PlayerStatusEffectUpdateAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPlayerStatusEffectUpdateAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPlayerStatusEffectUpdateAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerStatusEffectUpdateAnalytics")),new UScriptStruct::TCppStructOps<FPlayerStatusEffectUpdateAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPlayerStatusEffectUpdateAnalytics;
	struct Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatusEffects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbOfConcurrentStatusEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbOfConcurrentStatusEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElapsedMatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusEffectUpdateAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatusEffectUpdateAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusEffectUpdateAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects = { "StatusEffects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusEffectUpdateAnalytics, StatusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects_Inner = { "StatusEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_NbOfConcurrentStatusEffects_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusEffectUpdateAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_NbOfConcurrentStatusEffects = { "NbOfConcurrentStatusEffects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusEffectUpdateAnalytics, NbOfConcurrentStatusEffects), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_NbOfConcurrentStatusEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_NbOfConcurrentStatusEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusEffectUpdateAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_ElapsedMatchTime = { "ElapsedMatchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusEffectUpdateAnalytics, ElapsedMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusEffectUpdateAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusEffectUpdateAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_StatusEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_NbOfConcurrentStatusEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_ElapsedMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PlayerStatusEffectUpdateAnalytics",
		sizeof(FPlayerStatusEffectUpdateAnalytics),
		alignof(FPlayerStatusEffectUpdateAnalytics),
		Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerStatusEffectUpdateAnalytics"), sizeof(FPlayerStatusEffectUpdateAnalytics), Get_Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusEffectUpdateAnalytics_Hash() { return 2495177053U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
