// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/TinkererUndetectableHitNearGeneratorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinkererUndetectableHitNearGeneratorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBasePerkAnalytics();
// End Cross Module References
class UScriptStruct* FTinkererUndetectableHitNearGeneratorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("TinkererUndetectableHitNearGeneratorAnalytics"), sizeof(FTinkererUndetectableHitNearGeneratorAnalytics), Get_Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FTinkererUndetectableHitNearGeneratorAnalytics>()
{
	return FTinkererUndetectableHitNearGeneratorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics(FTinkererUndetectableHitNearGeneratorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("TinkererUndetectableHitNearGeneratorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFTinkererUndetectableHitNearGeneratorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFTinkererUndetectableHitNearGeneratorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TinkererUndetectableHitNearGeneratorAnalytics")),new UScriptStruct::TCppStructOps<FTinkererUndetectableHitNearGeneratorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFTinkererUndetectableHitNearGeneratorAnalytics;
	struct Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackingSlasherMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttackingSlasherMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HitSurvivorMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TinkererUndetectableHitNearGeneratorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTinkererUndetectableHitNearGeneratorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_AttackingSlasherMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TinkererUndetectableHitNearGeneratorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_AttackingSlasherMirrorsId = { "AttackingSlasherMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTinkererUndetectableHitNearGeneratorAnalytics, AttackingSlasherMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_AttackingSlasherMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_AttackingSlasherMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_HitSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TinkererUndetectableHitNearGeneratorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_HitSurvivorMirrorsId = { "HitSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTinkererUndetectableHitNearGeneratorAnalytics, HitSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_HitSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_HitSurvivorMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_AttackingSlasherMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_HitSurvivorMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBasePerkAnalytics,
		&NewStructOps,
		"TinkererUndetectableHitNearGeneratorAnalytics",
		sizeof(FTinkererUndetectableHitNearGeneratorAnalytics),
		alignof(FTinkererUndetectableHitNearGeneratorAnalytics),
		Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TinkererUndetectableHitNearGeneratorAnalytics"), sizeof(FTinkererUndetectableHitNearGeneratorAnalytics), Get_Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTinkererUndetectableHitNearGeneratorAnalytics_Hash() { return 2512491817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
