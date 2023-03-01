// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CrowdChoiceSummaryResultAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdChoiceSummaryResultAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCrowdChoiceSummaryResultAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CrowdChoiceSummaryResultAnalytics"), sizeof(FCrowdChoiceSummaryResultAnalytics), Get_Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCrowdChoiceSummaryResultAnalytics>()
{
	return FCrowdChoiceSummaryResultAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics(FCrowdChoiceSummaryResultAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CrowdChoiceSummaryResultAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceSummaryResultAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceSummaryResultAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdChoiceSummaryResultAnalytics")),new UScriptStruct::TCppStructOps<FCrowdChoiceSummaryResultAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCrowdChoiceSummaryResultAnalytics;
	struct Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVotesPerTimestampInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewVotesPerTimestampInterval;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewVotesPerTimestampInterval_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoteTimestamps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoteTimestamps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoteTimestamps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PollDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PollType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PollId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdChoiceSummaryResultAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval = { "NewVotesPerTimestampInterval", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceSummaryResultAnalytics, NewVotesPerTimestampInterval), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval_Inner = { "NewVotesPerTimestampInterval", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps = { "VoteTimestamps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceSummaryResultAnalytics, VoteTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps_Inner = { "VoteTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollDuration = { "PollDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceSummaryResultAnalytics, PollDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceSummaryResultAnalytics, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollType_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollType = { "PollType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceSummaryResultAnalytics, PollType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrowdChoiceSummaryResultAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollId = { "PollId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdChoiceSummaryResultAnalytics, PollId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_NewVotesPerTimestampInterval_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_VoteTimestamps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::NewProp_PollId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CrowdChoiceSummaryResultAnalytics",
		sizeof(FCrowdChoiceSummaryResultAnalytics),
		alignof(FCrowdChoiceSummaryResultAnalytics),
		Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdChoiceSummaryResultAnalytics"), sizeof(FCrowdChoiceSummaryResultAnalytics), Get_Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdChoiceSummaryResultAnalytics_Hash() { return 1195589223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
