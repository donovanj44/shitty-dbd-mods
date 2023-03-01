// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MobilePostGameAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobilePostGameAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMobilePostGameAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FMobilePostGameAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMobilePostGameAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MobilePostGameAnalytics"), sizeof(FMobilePostGameAnalytics), Get_Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMobilePostGameAnalytics>()
{
	return FMobilePostGameAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMobilePostGameAnalytics(FMobilePostGameAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MobilePostGameAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobilePostGameAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobilePostGameAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MobilePostGameAnalytics")),new UScriptStruct::TCppStructOps<FMobilePostGameAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMobilePostGameAnalytics;
	struct Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostGameCharacterEarnedXp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostGameCharacterEarnedXp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostGamePlayerEarnedXp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostGamePlayerEarnedXp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostGameEarnedBp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostGameEarnedBp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMobilePostGameAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_KrakenMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_KrakenMatchId = { "KrakenMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, KrakenMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_KrakenMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_KrakenMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_TicketId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_TicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameCharacterEarnedXp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameCharacterEarnedXp = { "PostGameCharacterEarnedXp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, PostGameCharacterEarnedXp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameCharacterEarnedXp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameCharacterEarnedXp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGamePlayerEarnedXp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGamePlayerEarnedXp = { "PostGamePlayerEarnedXp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, PostGamePlayerEarnedXp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGamePlayerEarnedXp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGamePlayerEarnedXp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameEarnedBp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobilePostGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameEarnedBp = { "PostGameEarnedBp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobilePostGameAnalytics, PostGameEarnedBp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameEarnedBp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameEarnedBp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_KrakenMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_TicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameCharacterEarnedXp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGamePlayerEarnedXp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::NewProp_PostGameEarnedBp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"MobilePostGameAnalytics",
		sizeof(FMobilePostGameAnalytics),
		alignof(FMobilePostGameAnalytics),
		Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMobilePostGameAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MobilePostGameAnalytics"), sizeof(FMobilePostGameAnalytics), Get_Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMobilePostGameAnalytics_Hash() { return 2866881259U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
