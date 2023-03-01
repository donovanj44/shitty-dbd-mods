// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/StoreMenuFlowAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreMenuFlowAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FStoreMenuFlowAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("StoreMenuFlowAnalytics"), sizeof(FStoreMenuFlowAnalytics), Get_Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FStoreMenuFlowAnalytics>()
{
	return FStoreMenuFlowAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreMenuFlowAnalytics(FStoreMenuFlowAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("StoreMenuFlowAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFStoreMenuFlowAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFStoreMenuFlowAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoreMenuFlowAnalytics")),new UScriptStruct::TCppStructOps<FStoreMenuFlowAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFStoreMenuFlowAnalytics;
	struct Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventTimestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreMenuFlowAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreMenuFlowAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreMenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreMenuFlowAnalytics, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreMenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreMenuFlowAnalytics, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreMenuFlowAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventTimestamp = { "EventTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreMenuFlowAnalytics, EventTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventTimestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::NewProp_EventTimestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"StoreMenuFlowAnalytics",
		sizeof(FStoreMenuFlowAnalytics),
		alignof(FStoreMenuFlowAnalytics),
		Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreMenuFlowAnalytics"), sizeof(FStoreMenuFlowAnalytics), Get_Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreMenuFlowAnalytics_Hash() { return 1488211775U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
