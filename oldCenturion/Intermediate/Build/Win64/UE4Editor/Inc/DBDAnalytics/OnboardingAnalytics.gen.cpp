// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/OnboardingAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FOnboardingAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FOnboardingAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnboardingAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("OnboardingAnalytics"), sizeof(FOnboardingAnalytics), Get_Z_Construct_UScriptStruct_FOnboardingAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FOnboardingAnalytics>()
{
	return FOnboardingAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnboardingAnalytics(FOnboardingAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("OnboardingAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFOnboardingAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFOnboardingAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnboardingAnalytics")),new UScriptStruct::TCppStructOps<FOnboardingAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFOnboardingAnalytics;
	struct Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameManualIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameManualIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnboardingAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_EventTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnboardingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_EventTimeStamp = { "EventTimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingAnalytics, EventTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_EventTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_EventTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_GameManualIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnboardingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_GameManualIndex = { "GameManualIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingAnalytics, GameManualIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_GameManualIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_GameManualIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_TabIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnboardingAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_TabIndex = { "TabIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingAnalytics, TabIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_TabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_TabIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_EventTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_GameManualIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::NewProp_TabIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"OnboardingAnalytics",
		sizeof(FOnboardingAnalytics),
		alignof(FOnboardingAnalytics),
		Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnboardingAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnboardingAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnboardingAnalytics"), sizeof(FOnboardingAnalytics), Get_Z_Construct_UScriptStruct_FOnboardingAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnboardingAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnboardingAnalytics_Hash() { return 1092222961U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
