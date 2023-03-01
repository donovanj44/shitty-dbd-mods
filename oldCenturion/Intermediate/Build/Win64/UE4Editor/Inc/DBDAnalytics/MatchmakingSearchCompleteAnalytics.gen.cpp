// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingSearchCompleteAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingSearchCompleteAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMatchmakingSearchCompleteAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingSearchCompleteAnalytics"), sizeof(FMatchmakingSearchCompleteAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingSearchCompleteAnalytics>()
{
	return FMatchmakingSearchCompleteAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingSearchCompleteAnalytics(FMatchmakingSearchCompleteAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingSearchCompleteAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingSearchCompleteAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingSearchCompleteAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingSearchCompleteAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingSearchCompleteAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingSearchCompleteAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResultSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchResultSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectingToUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectingToUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedFallback_MetaData[];
#endif
		static void NewProp_UsedFallback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsedFallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMatches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingSearchCompleteAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchResultSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchResultSettings = { "SearchResultSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingSearchCompleteAnalytics, SearchResultSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchResultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchResultSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingSearchCompleteAnalytics, SearchParams), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_ConnectingToUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_ConnectingToUser = { "ConnectingToUser", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingSearchCompleteAnalytics, ConnectingToUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_ConnectingToUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_ConnectingToUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback_SetBit(void* Obj)
	{
		((FMatchmakingSearchCompleteAnalytics*)Obj)->UsedFallback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback = { "UsedFallback", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingSearchCompleteAnalytics), &Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_NumMatches_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_NumMatches = { "NumMatches", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingSearchCompleteAnalytics, NumMatches), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_NumMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_NumMatches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingSearchCompleteAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FMatchmakingSearchCompleteAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingSearchCompleteAnalytics), &Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchResultSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_SearchParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_ConnectingToUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_UsedFallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_NumMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::NewProp_Success,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MatchmakingSearchCompleteAnalytics",
		sizeof(FMatchmakingSearchCompleteAnalytics),
		alignof(FMatchmakingSearchCompleteAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingSearchCompleteAnalytics"), sizeof(FMatchmakingSearchCompleteAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingSearchCompleteAnalytics_Hash() { return 2780388879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
