// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/InvalidLoadoutAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvalidLoadoutAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FInvalidLoadoutAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("InvalidLoadoutAnalytics"), sizeof(FInvalidLoadoutAnalytics), Get_Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FInvalidLoadoutAnalytics>()
{
	return FInvalidLoadoutAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInvalidLoadoutAnalytics(FInvalidLoadoutAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("InvalidLoadoutAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFInvalidLoadoutAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFInvalidLoadoutAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InvalidLoadoutAnalytics")),new UScriptStruct::TCppStructOps<FInvalidLoadoutAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFInvalidLoadoutAnalytics;
	struct Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CallingFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAddonCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemAddonCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperPerkCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamperPerkCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerAddonCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PowerAddonCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherPerkCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlasherPerkCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInvalidLoadoutAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CharacterId_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvalidLoadoutAnalytics, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CallingFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CallingFunctionName = { "CallingFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvalidLoadoutAnalytics, CallingFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CallingFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CallingFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_ItemAddonCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_ItemAddonCount = { "ItemAddonCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvalidLoadoutAnalytics, ItemAddonCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_ItemAddonCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_ItemAddonCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CamperPerkCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CamperPerkCount = { "CamperPerkCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvalidLoadoutAnalytics, CamperPerkCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CamperPerkCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CamperPerkCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_PowerAddonCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_PowerAddonCount = { "PowerAddonCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvalidLoadoutAnalytics, PowerAddonCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_PowerAddonCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_PowerAddonCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_SlasherPerkCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvalidLoadoutAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_SlasherPerkCount = { "SlasherPerkCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvalidLoadoutAnalytics, SlasherPerkCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_SlasherPerkCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_SlasherPerkCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CallingFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_ItemAddonCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_CamperPerkCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_PowerAddonCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::NewProp_SlasherPerkCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"InvalidLoadoutAnalytics",
		sizeof(FInvalidLoadoutAnalytics),
		alignof(FInvalidLoadoutAnalytics),
		Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InvalidLoadoutAnalytics"), sizeof(FInvalidLoadoutAnalytics), Get_Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInvalidLoadoutAnalytics_Hash() { return 1699550824U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
