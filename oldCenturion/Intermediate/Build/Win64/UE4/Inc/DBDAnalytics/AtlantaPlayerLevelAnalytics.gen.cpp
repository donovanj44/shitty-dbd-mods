// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaPlayerLevelAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPlayerLevelAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaPlayerLevelAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaPlayerLevelAnalytics"), sizeof(FAtlantaPlayerLevelAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaPlayerLevelAnalytics>()
{
	return FAtlantaPlayerLevelAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaPlayerLevelAnalytics(FAtlantaPlayerLevelAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaPlayerLevelAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPlayerLevelAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPlayerLevelAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaPlayerLevelAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaPlayerLevelAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPlayerLevelAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerPrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPlayerLevelAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaPlayerLevelAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerPrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPlayerLevelAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerPrestigeLevel = { "PlayerPrestigeLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPlayerLevelAnalytics, PlayerPrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerPrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerPrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPlayerLevelAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPlayerLevelAnalytics, PlayerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerPrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::NewProp_PlayerLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaPlayerLevelAnalytics",
		sizeof(FAtlantaPlayerLevelAnalytics),
		alignof(FAtlantaPlayerLevelAnalytics),
		Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaPlayerLevelAnalytics"), sizeof(FAtlantaPlayerLevelAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaPlayerLevelAnalytics_Hash() { return 3745276387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
