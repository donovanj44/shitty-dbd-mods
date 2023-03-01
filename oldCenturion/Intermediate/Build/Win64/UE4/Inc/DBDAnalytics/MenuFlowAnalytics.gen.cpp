// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MenuFlowAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuFlowAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMenuFlowAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FMenuFlowAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMenuFlowAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuFlowAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MenuFlowAnalytics"), sizeof(FMenuFlowAnalytics), Get_Z_Construct_UScriptStruct_FMenuFlowAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMenuFlowAnalytics>()
{
	return FMenuFlowAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMenuFlowAnalytics(FMenuFlowAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MenuFlowAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMenuFlowAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMenuFlowAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MenuFlowAnalytics")),new UScriptStruct::TCppStructOps<FMenuFlowAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMenuFlowAnalytics;
	struct Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextChangeTimetamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContextChangeTimetamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOnPreviousContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOnPreviousContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuFlowAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_LobbyId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuFlowAnalytics, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuFlowAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_ContextChangeTimetamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_ContextChangeTimetamp = { "ContextChangeTimetamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuFlowAnalytics, ContextChangeTimetamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_ContextChangeTimetamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_ContextChangeTimetamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_TimeOnPreviousContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_TimeOnPreviousContext = { "TimeOnPreviousContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuFlowAnalytics, TimeOnPreviousContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_TimeOnPreviousContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_TimeOnPreviousContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_PreviousContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_PreviousContext = { "PreviousContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuFlowAnalytics, PreviousContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_PreviousContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_PreviousContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_CurrentContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/MenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_CurrentContext = { "CurrentContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuFlowAnalytics, CurrentContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_CurrentContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_CurrentContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_ContextChangeTimetamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_TimeOnPreviousContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_PreviousContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::NewProp_CurrentContext,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"MenuFlowAnalytics",
		sizeof(FMenuFlowAnalytics),
		alignof(FMenuFlowAnalytics),
		Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuFlowAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMenuFlowAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MenuFlowAnalytics"), sizeof(FMenuFlowAnalytics), Get_Z_Construct_UScriptStruct_FMenuFlowAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMenuFlowAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMenuFlowAnalytics_Hash() { return 4169774043U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
