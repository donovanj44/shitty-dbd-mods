// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/LoadoutBaseAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadoutBaseAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FLoadoutBaseAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FLoadoutBaseAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("LoadoutBaseAnalytics"), sizeof(FLoadoutBaseAnalytics), Get_Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FLoadoutBaseAnalytics>()
{
	return FLoadoutBaseAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadoutBaseAnalytics(FLoadoutBaseAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("LoadoutBaseAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadoutBaseAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadoutBaseAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoadoutBaseAnalytics")),new UScriptStruct::TCppStructOps<FLoadoutBaseAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFLoadoutBaseAnalytics;
	struct Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutOffering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutOffering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutPerk4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutPerk4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutPerk3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutPerk3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutPerk2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutPerk2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutPerk1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutPerk1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutItemAddOn2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutItemAddOn2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutItemAddOn1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutItemAddOn1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadoutItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadoutBaseAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutOffering_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutOffering = { "LoadoutOffering", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutOffering), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutOffering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutOffering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk4_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk4 = { "LoadoutPerk4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutPerk4), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk3_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk3 = { "LoadoutPerk3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutPerk3), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk2_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk2 = { "LoadoutPerk2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutPerk2), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk1_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk1 = { "LoadoutPerk1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutPerk1), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn2_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn2 = { "LoadoutItemAddOn2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutItemAddOn2), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn1_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn1 = { "LoadoutItemAddOn1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutItemAddOn1), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadoutBaseAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItem = { "LoadoutItem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadoutBaseAnalytics, LoadoutItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutOffering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutPerk1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItemAddOn1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::NewProp_LoadoutItem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"LoadoutBaseAnalytics",
		sizeof(FLoadoutBaseAnalytics),
		alignof(FLoadoutBaseAnalytics),
		Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadoutBaseAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadoutBaseAnalytics"), sizeof(FLoadoutBaseAnalytics), Get_Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadoutBaseAnalytics_Hash() { return 3912103065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
