// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CrossfriendsAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossfriendsAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCrossfriendsAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCrossfriendsAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrossfriendsAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CrossfriendsAnalytics"), sizeof(FCrossfriendsAnalytics), Get_Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCrossfriendsAnalytics>()
{
	return FCrossfriendsAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrossfriendsAnalytics(FCrossfriendsAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CrossfriendsAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrossfriendsAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCrossfriendsAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrossfriendsAnalytics")),new UScriptStruct::TCppStructOps<FCrossfriendsAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCrossfriendsAnalytics;
	struct Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKrakenUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetKrakenUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrossfriendsAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrossfriendsAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_TargetKrakenUserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrossfriendsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_TargetKrakenUserId = { "TargetKrakenUserId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrossfriendsAnalytics, TargetKrakenUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_TargetKrakenUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_TargetKrakenUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrossfriendsAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrossfriendsAnalytics, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_TargetKrakenUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CrossfriendsAnalytics",
		sizeof(FCrossfriendsAnalytics),
		alignof(FCrossfriendsAnalytics),
		Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrossfriendsAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrossfriendsAnalytics"), sizeof(FCrossfriendsAnalytics), Get_Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrossfriendsAnalytics_Hash() { return 4236095985U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
