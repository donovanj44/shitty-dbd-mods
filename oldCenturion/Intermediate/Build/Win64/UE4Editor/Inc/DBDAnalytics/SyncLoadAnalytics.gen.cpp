// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SyncLoadAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncLoadAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSyncLoadAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FSyncLoadAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSyncLoadAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSyncLoadAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SyncLoadAnalytics"), sizeof(FSyncLoadAnalytics), Get_Z_Construct_UScriptStruct_FSyncLoadAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSyncLoadAnalytics>()
{
	return FSyncLoadAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSyncLoadAnalytics(FSyncLoadAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SyncLoadAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSyncLoadAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSyncLoadAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SyncLoadAnalytics")),new UScriptStruct::TCppStructOps<FSyncLoadAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSyncLoadAnalytics;
	struct Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangelistNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangelistNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadTimeMilliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoadTimeMilliseconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSyncLoadAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncLoadAnalytics, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_ChangelistNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_ChangelistNumber = { "ChangelistNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncLoadAnalytics, ChangelistNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_ChangelistNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_ChangelistNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_BuildConfiguration_MetaData[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_BuildConfiguration = { "BuildConfiguration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncLoadAnalytics, BuildConfiguration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_BuildConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_BuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_DeviceProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_DeviceProfileName = { "DeviceProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncLoadAnalytics, DeviceProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_DeviceProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_DeviceProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_LoadTimeMilliseconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_LoadTimeMilliseconds = { "LoadTimeMilliseconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncLoadAnalytics, LoadTimeMilliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_LoadTimeMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_LoadTimeMilliseconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SyncLoadAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncLoadAnalytics, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_ChangelistNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_BuildConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_DeviceProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_LoadTimeMilliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::NewProp_AssetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"SyncLoadAnalytics",
		sizeof(FSyncLoadAnalytics),
		alignof(FSyncLoadAnalytics),
		Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSyncLoadAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSyncLoadAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SyncLoadAnalytics"), sizeof(FSyncLoadAnalytics), Get_Z_Construct_UScriptStruct_FSyncLoadAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSyncLoadAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSyncLoadAnalytics_Hash() { return 1782983522U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
