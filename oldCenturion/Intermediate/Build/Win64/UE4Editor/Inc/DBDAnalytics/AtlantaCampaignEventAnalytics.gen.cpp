// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaCampaignEventAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaCampaignEventAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FAtlantaCampaignEventAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaCampaignEventAnalytics"), sizeof(FAtlantaCampaignEventAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaCampaignEventAnalytics>()
{
	return FAtlantaCampaignEventAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaCampaignEventAnalytics(FAtlantaCampaignEventAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaCampaignEventAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaCampaignEventAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaCampaignEventAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaCampaignEventAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaCampaignEventAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaCampaignEventAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AffectedRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusGained_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusGained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGained_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGained;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaCampaignEventAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_AffectedRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_AffectedRole = { "AffectedRole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, AffectedRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_AffectedRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_AffectedRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BonusGained_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BonusGained = { "BonusGained", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, BonusGained), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BonusGained_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BonusGained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BaseGained_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BaseGained = { "BaseGained", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, BaseGained), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BaseGained_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BaseGained_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EffectType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, EffectType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaCampaignEventAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaCampaignEventAnalytics, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_AffectedRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BonusGained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_BaseGained,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::NewProp_EventName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"AtlantaCampaignEventAnalytics",
		sizeof(FAtlantaCampaignEventAnalytics),
		alignof(FAtlantaCampaignEventAnalytics),
		Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaCampaignEventAnalytics"), sizeof(FAtlantaCampaignEventAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaCampaignEventAnalytics_Hash() { return 161157892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
