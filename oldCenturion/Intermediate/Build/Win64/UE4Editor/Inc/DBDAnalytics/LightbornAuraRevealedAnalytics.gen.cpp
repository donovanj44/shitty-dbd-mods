// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LightbornAuraRevealedAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightbornAuraRevealedAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBasePerkAnalytics();
// End Cross Module References
class UScriptStruct* FLightbornAuraRevealedAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LightbornAuraRevealedAnalytics"), sizeof(FLightbornAuraRevealedAnalytics), Get_Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLightbornAuraRevealedAnalytics>()
{
	return FLightbornAuraRevealedAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightbornAuraRevealedAnalytics(FLightbornAuraRevealedAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LightbornAuraRevealedAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLightbornAuraRevealedAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLightbornAuraRevealedAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightbornAuraRevealedAnalytics")),new UScriptStruct::TCppStructOps<FLightbornAuraRevealedAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLightbornAuraRevealedAnalytics;
	struct Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashlightedSlasherMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlashlightedSlasherMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevealedSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RevealedSurvivorMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightbornAuraRevealedAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightbornAuraRevealedAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_FlashlightedSlasherMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightbornAuraRevealedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_FlashlightedSlasherMirrorsId = { "FlashlightedSlasherMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightbornAuraRevealedAnalytics, FlashlightedSlasherMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_FlashlightedSlasherMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_FlashlightedSlasherMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_RevealedSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightbornAuraRevealedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_RevealedSurvivorMirrorsId = { "RevealedSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightbornAuraRevealedAnalytics, RevealedSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_RevealedSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_RevealedSurvivorMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_FlashlightedSlasherMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::NewProp_RevealedSurvivorMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBasePerkAnalytics,
		&NewStructOps,
		"LightbornAuraRevealedAnalytics",
		sizeof(FLightbornAuraRevealedAnalytics),
		alignof(FLightbornAuraRevealedAnalytics),
		Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightbornAuraRevealedAnalytics"), sizeof(FLightbornAuraRevealedAnalytics), Get_Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightbornAuraRevealedAnalytics_Hash() { return 3156479313U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
