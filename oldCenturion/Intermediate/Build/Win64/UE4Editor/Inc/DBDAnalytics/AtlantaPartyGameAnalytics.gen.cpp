// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaPartyGameAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPartyGameAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaPartyGameAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaPartyGameAnalytics"), sizeof(FAtlantaPartyGameAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaPartyGameAnalytics>()
{
	return FAtlantaPartyGameAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaPartyGameAnalytics(FAtlantaPartyGameAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaPartyGameAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPartyGameAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPartyGameAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaPartyGameAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaPartyGameAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPartyGameAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIdFour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendIdFour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIdThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendIdThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIdTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendIdTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIdOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendIdOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartySize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaPartyGameAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdFour_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdFour = { "FriendIdFour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPartyGameAnalytics, FriendIdFour), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdFour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdThree_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdThree = { "FriendIdThree", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPartyGameAnalytics, FriendIdThree), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdTwo_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdTwo = { "FriendIdTwo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPartyGameAnalytics, FriendIdTwo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdOne_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdOne = { "FriendIdOne", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPartyGameAnalytics, FriendIdOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_KrakenMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_KrakenMatchId = { "KrakenMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPartyGameAnalytics, KrakenMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_KrakenMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_KrakenMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_PartySize_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_PartySize = { "PartySize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPartyGameAnalytics, PartySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_PartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_PartySize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdFour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_FriendIdOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_KrakenMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::NewProp_PartySize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaPartyGameAnalytics",
		sizeof(FAtlantaPartyGameAnalytics),
		alignof(FAtlantaPartyGameAnalytics),
		Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaPartyGameAnalytics"), sizeof(FAtlantaPartyGameAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaPartyGameAnalytics_Hash() { return 1967531754U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
