// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CrowdChoiceVoteResultAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdChoiceVoteResultAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCrowdChoiceVoteResultAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CrowdChoiceVoteResultAnalytics"), sizeof(FCrowdChoiceVoteResultAnalytics), Get_Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCrowdChoiceVoteResultAnalytics>()
{
	return FCrowdChoiceVoteResultAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdChoiceVoteResultAnalytics(FCrowdChoiceVoteResultAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CrowdChoiceVoteResultAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceVoteResultAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceVoteResultAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdChoiceVoteResultAnalytics")),new UScriptStruct::TCppStructOps<FCrowdChoiceVoteResultAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceVoteResultAnalytics;
	struct Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoteCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoteCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoteOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VoteOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PollId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceVoteResultAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdChoiceVoteResultAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceVoteResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteCount = { "VoteCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceVoteResultAnalytics, VoteCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceVoteResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteOption = { "VoteOption", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceVoteResultAnalytics, VoteOption), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_PollId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceVoteResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_PollId = { "PollId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceVoteResultAnalytics, PollId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_PollId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_PollId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_VoteOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::NewProp_PollId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CrowdChoiceVoteResultAnalytics",
		sizeof(FCrowdChoiceVoteResultAnalytics),
		alignof(FCrowdChoiceVoteResultAnalytics),
		Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdChoiceVoteResultAnalytics"), sizeof(FCrowdChoiceVoteResultAnalytics), Get_Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceVoteResultAnalytics_Hash() { return 3728227691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
