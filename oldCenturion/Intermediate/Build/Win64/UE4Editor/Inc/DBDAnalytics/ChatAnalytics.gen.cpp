// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/ChatAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FChatAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FChatAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FChatAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("ChatAnalytics"), sizeof(FChatAnalytics), Get_Z_Construct_UScriptStruct_FChatAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FChatAnalytics>()
{
	return FChatAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatAnalytics(FChatAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("ChatAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFChatAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFChatAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatAnalytics")),new UScriptStruct::TCppStructOps<FChatAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFChatAnalytics;
	struct Z_Construct_UScriptStruct_FChatAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGameTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalChatContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalChatContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderPlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_InGameTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_InGameTimestamp = { "InGameTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, InGameTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_InGameTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_InGameTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContext = { "ChatContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, ChatContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_OriginalChatContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_OriginalChatContent = { "OriginalChatContent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, OriginalChatContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_OriginalChatContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_OriginalChatContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContent = { "ChatContent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, ChatContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderPlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderPlayerName = { "SenderPlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, SenderPlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderPlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderMirrorsId = { "SenderMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatAnalytics, SenderMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_InGameTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_OriginalChatContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_ChatContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderPlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatAnalytics_Statics::NewProp_SenderMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ChatAnalytics",
		sizeof(FChatAnalytics),
		alignof(FChatAnalytics),
		Z_Construct_UScriptStruct_FChatAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatAnalytics"), sizeof(FChatAnalytics), Get_Z_Construct_UScriptStruct_FChatAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatAnalytics_Hash() { return 3900429888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
