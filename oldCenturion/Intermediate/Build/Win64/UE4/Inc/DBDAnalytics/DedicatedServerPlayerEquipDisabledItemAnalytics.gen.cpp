// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DedicatedServerPlayerEquipDisabledItemAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedServerPlayerEquipDisabledItemAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDedicatedServerPlayerEquipDisabledItemAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DedicatedServerPlayerEquipDisabledItemAnalytics"), sizeof(FDedicatedServerPlayerEquipDisabledItemAnalytics), Get_Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDedicatedServerPlayerEquipDisabledItemAnalytics>()
{
	return FDedicatedServerPlayerEquipDisabledItemAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics(FDedicatedServerPlayerEquipDisabledItemAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DedicatedServerPlayerEquipDisabledItemAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDedicatedServerPlayerEquipDisabledItemAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDedicatedServerPlayerEquipDisabledItemAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DedicatedServerPlayerEquipDisabledItemAnalytics")),new UScriptStruct::TCppStructOps<FDedicatedServerPlayerEquipDisabledItemAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDedicatedServerPlayerEquipDisabledItemAnalytics;
	struct Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipedDisabledItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EquipedDisabledItemIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerPlayerEquipDisabledItemAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDedicatedServerPlayerEquipDisabledItemAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_EquipedDisabledItemIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerPlayerEquipDisabledItemAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_EquipedDisabledItemIds = { "EquipedDisabledItemIds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerPlayerEquipDisabledItemAnalytics, EquipedDisabledItemIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_EquipedDisabledItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_EquipedDisabledItemIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_PlayerMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerPlayerEquipDisabledItemAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_PlayerMirrorsId = { "PlayerMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDedicatedServerPlayerEquipDisabledItemAnalytics, PlayerMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_PlayerMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_PlayerMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_EquipedDisabledItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::NewProp_PlayerMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DedicatedServerPlayerEquipDisabledItemAnalytics",
		sizeof(FDedicatedServerPlayerEquipDisabledItemAnalytics),
		alignof(FDedicatedServerPlayerEquipDisabledItemAnalytics),
		Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DedicatedServerPlayerEquipDisabledItemAnalytics"), sizeof(FDedicatedServerPlayerEquipDisabledItemAnalytics), Get_Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerPlayerEquipDisabledItemAnalytics_Hash() { return 1396644076U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
