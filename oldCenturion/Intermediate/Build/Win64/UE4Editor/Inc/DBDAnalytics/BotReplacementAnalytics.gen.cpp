// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/BotReplacementAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotReplacementAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBotReplacementAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FBotReplacementAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FBotReplacementAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBotReplacementAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("BotReplacementAnalytics"), sizeof(FBotReplacementAnalytics), Get_Z_Construct_UScriptStruct_FBotReplacementAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FBotReplacementAnalytics>()
{
	return FBotReplacementAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBotReplacementAnalytics(FBotReplacementAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("BotReplacementAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFBotReplacementAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFBotReplacementAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BotReplacementAnalytics")),new UScriptStruct::TCppStructOps<FBotReplacementAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFBotReplacementAnalytics;
	struct Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotDifficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BotDifficultyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BotDifficultyLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplacedCharacterMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplacedCharacterMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBotReplacementAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel = { "BotDifficultyLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, BotDifficultyLevel), Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_ReplacedCharacterMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_ReplacedCharacterMirrorsId = { "ReplacedCharacterMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, ReplacedCharacterMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_ReplacedCharacterMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_ReplacedCharacterMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, MatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_KrakenMatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_KrakenMatchId = { "KrakenMatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, KrakenMatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_KrakenMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_KrakenMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BotReplacementAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBotReplacementAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_BotDifficultyLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_ReplacedCharacterMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_KrakenMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"BotReplacementAnalytics",
		sizeof(FBotReplacementAnalytics),
		alignof(FBotReplacementAnalytics),
		Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBotReplacementAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBotReplacementAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BotReplacementAnalytics"), sizeof(FBotReplacementAnalytics), Get_Z_Construct_UScriptStruct_FBotReplacementAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBotReplacementAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBotReplacementAnalytics_Hash() { return 2224853019U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
