// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/RTMAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FRTMAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FRTMAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FRTMAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTMAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("RTMAnalytics"), sizeof(FRTMAnalytics), Get_Z_Construct_UScriptStruct_FRTMAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FRTMAnalytics>()
{
	return FRTMAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRTMAnalytics(FRTMAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("RTMAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFRTMAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFRTMAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RTMAnalytics")),new UScriptStruct::TCppStructOps<FRTMAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFRTMAnalytics;
	struct Z_Construct_UScriptStruct_FRTMAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGameFlowStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentGameFlowStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTMSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RTMSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTMType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTMType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTMAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTMAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTMAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_CurrentGameFlowStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTMAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_CurrentGameFlowStep = { "CurrentGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRTMAnalytics, CurrentGameFlowStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_CurrentGameFlowStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_CurrentGameFlowStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTMAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMSize = { "RTMSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRTMAnalytics, RTMSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTMAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMType = { "RTMType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRTMAnalytics, RTMType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTMAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_CurrentGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMAnalytics_Statics::NewProp_RTMType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTMAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"RTMAnalytics",
		sizeof(FRTMAnalytics),
		alignof(FRTMAnalytics),
		Z_Construct_UScriptStruct_FRTMAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTMAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRTMAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RTMAnalytics"), sizeof(FRTMAnalytics), Get_Z_Construct_UScriptStruct_FRTMAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRTMAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRTMAnalytics_Hash() { return 258470790U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
