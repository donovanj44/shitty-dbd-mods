// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PerkAcquisitionAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkAcquisitionAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FPerkAcquisitionAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("PerkAcquisitionAnalytics"), sizeof(FPerkAcquisitionAnalytics), Get_Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FPerkAcquisitionAnalytics>()
{
	return FPerkAcquisitionAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerkAcquisitionAnalytics(FPerkAcquisitionAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("PerkAcquisitionAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFPerkAcquisitionAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFPerkAcquisitionAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerkAcquisitionAnalytics")),new UScriptStruct::TCppStructOps<FPerkAcquisitionAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFPerkAcquisitionAnalytics;
	struct Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duplicate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Duplicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerkSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerkId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAcquisitionAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkAcquisitionAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkAcquisitionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkLevel = { "PerkLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkAcquisitionAnalytics, PerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_Duplicate_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkAcquisitionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_Duplicate = { "Duplicate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkAcquisitionAnalytics, Duplicate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_Duplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_Duplicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkAcquisitionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkSource = { "PerkSource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkAcquisitionAnalytics, PerkSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkAcquisitionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkId = { "PerkId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkAcquisitionAnalytics, PerkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkAcquisitionAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkAcquisitionAnalytics, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_Duplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_PerkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::NewProp_CharacterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"PerkAcquisitionAnalytics",
		sizeof(FPerkAcquisitionAnalytics),
		alignof(FPerkAcquisitionAnalytics),
		Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerkAcquisitionAnalytics"), sizeof(FPerkAcquisitionAnalytics), Get_Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerkAcquisitionAnalytics_Hash() { return 3078625502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
