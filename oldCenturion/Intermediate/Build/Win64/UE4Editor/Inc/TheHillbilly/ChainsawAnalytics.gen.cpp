// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/ChainsawAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawAnalytics() {}
// Cross Module References
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawAnalytics();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEventWhileCamping();
// End Cross Module References
class UScriptStruct* FChainsawAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEHILLBILLY_API uint32 Get_Z_Construct_UScriptStruct_FChainsawAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChainsawAnalytics, Z_Construct_UPackage__Script_TheHillbilly(), TEXT("ChainsawAnalytics"), sizeof(FChainsawAnalytics), Get_Z_Construct_UScriptStruct_FChainsawAnalytics_Hash());
	}
	return Singleton;
}
template<> THEHILLBILLY_API UScriptStruct* StaticStruct<FChainsawAnalytics>()
{
	return FChainsawAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChainsawAnalytics(FChainsawAnalytics::StaticStruct, TEXT("/Script/TheHillbilly"), TEXT("ChainsawAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawAnalytics
{
	FScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChainsawAnalytics")),new UScriptStruct::TCppStructOps<FChainsawAnalytics>);
	}
} ScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawAnalytics;
	struct Z_Construct_UScriptStruct_FChainsawAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownSurvivorsWithChainsawWhileCampingEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DownSurvivorsWithChainsawWhileCampingEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DownSurvivorsWithChainsawWhileCampingEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChainsawAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChainsawAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainsawAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents = { "DownSurvivorsWithChainsawWhileCampingEvents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainsawAnalytics, DownSurvivorsWithChainsawWhileCampingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents_Inner = { "DownSurvivorsWithChainsawWhileCampingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChainsawEventWhileCamping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainsawAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainsawAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_DownSurvivorsWithChainsawWhileCampingEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"ChainsawAnalytics",
		sizeof(FChainsawAnalytics),
		alignof(FChainsawAnalytics),
		Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChainsawAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChainsawAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheHillbilly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChainsawAnalytics"), sizeof(FChainsawAnalytics), Get_Z_Construct_UScriptStruct_FChainsawAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChainsawAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChainsawAnalytics_Hash() { return 2716220095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
