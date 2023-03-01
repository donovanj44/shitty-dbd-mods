// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLegion/Public/LegionKillerAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegionKillerAnalytics() {}
// Cross Module References
	THELEGION_API UScriptStruct* Z_Construct_UScriptStruct_FLegionKillerAnalytics();
	UPackage* Z_Construct_UPackage__Script_TheLegion();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FLegionKillerAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THELEGION_API uint32 Get_Z_Construct_UScriptStruct_FLegionKillerAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegionKillerAnalytics, Z_Construct_UPackage__Script_TheLegion(), TEXT("LegionKillerAnalytics"), sizeof(FLegionKillerAnalytics), Get_Z_Construct_UScriptStruct_FLegionKillerAnalytics_Hash());
	}
	return Singleton;
}
template<> THELEGION_API UScriptStruct* StaticStruct<FLegionKillerAnalytics>()
{
	return FLegionKillerAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegionKillerAnalytics(FLegionKillerAnalytics::StaticStruct, TEXT("/Script/TheLegion"), TEXT("LegionKillerAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_TheLegion_StaticRegisterNativesFLegionKillerAnalytics
{
	FScriptStruct_TheLegion_StaticRegisterNativesFLegionKillerAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegionKillerAnalytics")),new UScriptStruct::TCppStructOps<FLegionKillerAnalytics>);
	}
} ScriptStruct_TheLegion_StaticRegisterNativesFLegionKillerAnalytics;
	struct Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pallet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegionKillerAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegionKillerAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_Pallet_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_Pallet = { "Pallet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegionKillerAnalytics, Pallet), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_Pallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_Pallet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegionKillerAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegionKillerAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_Pallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheLegion,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LegionKillerAnalytics",
		sizeof(FLegionKillerAnalytics),
		alignof(FLegionKillerAnalytics),
		Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegionKillerAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegionKillerAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheLegion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegionKillerAnalytics"), sizeof(FLegionKillerAnalytics), Get_Z_Construct_UScriptStruct_FLegionKillerAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegionKillerAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegionKillerAnalytics_Hash() { return 382333730U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
