// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/KnockoutSurvivorFoundAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnockoutSurvivorFoundAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBasePerkAnalytics();
// End Cross Module References
class UScriptStruct* FKnockoutSurvivorFoundAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("KnockoutSurvivorFoundAnalytics"), sizeof(FKnockoutSurvivorFoundAnalytics), Get_Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FKnockoutSurvivorFoundAnalytics>()
{
	return FKnockoutSurvivorFoundAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKnockoutSurvivorFoundAnalytics(FKnockoutSurvivorFoundAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("KnockoutSurvivorFoundAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFKnockoutSurvivorFoundAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFKnockoutSurvivorFoundAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KnockoutSurvivorFoundAnalytics")),new UScriptStruct::TCppStructOps<FKnockoutSurvivorFoundAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFKnockoutSurvivorFoundAnalytics;
	struct Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoundSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FoundSurvivorMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RescuingSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RescuingSurvivorMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnockoutSurvivorFoundAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKnockoutSurvivorFoundAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_FoundSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/KnockoutSurvivorFoundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_FoundSurvivorMirrorsId = { "FoundSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKnockoutSurvivorFoundAnalytics, FoundSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_FoundSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_FoundSurvivorMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_RescuingSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/KnockoutSurvivorFoundAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_RescuingSurvivorMirrorsId = { "RescuingSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKnockoutSurvivorFoundAnalytics, RescuingSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_RescuingSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_RescuingSurvivorMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_FoundSurvivorMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::NewProp_RescuingSurvivorMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBasePerkAnalytics,
		&NewStructOps,
		"KnockoutSurvivorFoundAnalytics",
		sizeof(FKnockoutSurvivorFoundAnalytics),
		alignof(FKnockoutSurvivorFoundAnalytics),
		Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KnockoutSurvivorFoundAnalytics"), sizeof(FKnockoutSurvivorFoundAnalytics), Get_Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKnockoutSurvivorFoundAnalytics_Hash() { return 3919324379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
