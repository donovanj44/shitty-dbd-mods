// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/UniquelyIdentifiedAnalytic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniquelyIdentifiedAnalytic() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FUniquelyIdentifiedAnalytic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("UniquelyIdentifiedAnalytic"), sizeof(FUniquelyIdentifiedAnalytic), Get_Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FUniquelyIdentifiedAnalytic>()
{
	return FUniquelyIdentifiedAnalytic::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUniquelyIdentifiedAnalytic(FUniquelyIdentifiedAnalytic::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("UniquelyIdentifiedAnalytic"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFUniquelyIdentifiedAnalytic
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFUniquelyIdentifiedAnalytic()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UniquelyIdentifiedAnalytic")),new UScriptStruct::TCppStructOps<FUniquelyIdentifiedAnalytic>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFUniquelyIdentifiedAnalytic;
	struct Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendEnv_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackendEnv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Changelist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Branch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniquelyIdentifiedAnalytic>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_BackendEnv_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_BackendEnv = { "BackendEnv", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, BackendEnv), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_BackendEnv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_BackendEnv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Platform_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_ClientId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_MirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_MirrorsId = { "MirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, MirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_MirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_MirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Configuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, Configuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Changelist_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Changelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Changelist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Branch_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, Branch), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Branch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Branch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniquelyIdentifiedAnalytic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUniquelyIdentifiedAnalytic, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_BackendEnv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_MirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Configuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Changelist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Branch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"UniquelyIdentifiedAnalytic",
		sizeof(FUniquelyIdentifiedAnalytic),
		alignof(FUniquelyIdentifiedAnalytic),
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UniquelyIdentifiedAnalytic"), sizeof(FUniquelyIdentifiedAnalytic), Get_Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic_Hash() { return 435173819U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
