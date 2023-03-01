// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/GameInitAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInitAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FGameInitAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FGameInitAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FGameInitAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameInitAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("GameInitAnalytics"), sizeof(FGameInitAnalytics), Get_Z_Construct_UScriptStruct_FGameInitAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FGameInitAnalytics>()
{
	return FGameInitAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameInitAnalytics(FGameInitAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("GameInitAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameInitAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFGameInitAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameInitAnalytics")),new UScriptStruct::TCppStructOps<FGameInitAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFGameInitAnalytics;
	struct Z_Construct_UScriptStruct_FGameInitAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailureCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FailureCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadCompleteState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoadCompleteState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgressionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameInitAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_AdditionalInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_AdditionalInfo = { "AdditionalInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInitAnalytics, AdditionalInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_AdditionalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_AdditionalInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_FailureCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_FailureCount = { "FailureCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInitAnalytics, FailureCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_FailureCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_FailureCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInitAnalytics, ElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_LoadCompleteState_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_LoadCompleteState = { "LoadCompleteState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInitAnalytics, LoadCompleteState), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_LoadCompleteState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_LoadCompleteState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FGameInitAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameInitAnalytics), &Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ProgressionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ProgressionName = { "ProgressionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInitAnalytics, ProgressionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ProgressionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ProgressionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_InitGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameInitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_InitGuid = { "InitGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInitAnalytics, InitGuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_InitGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_InitGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_AdditionalInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_FailureCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_LoadCompleteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_ProgressionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::NewProp_InitGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"GameInitAnalytics",
		sizeof(FGameInitAnalytics),
		alignof(FGameInitAnalytics),
		Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameInitAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameInitAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameInitAnalytics"), sizeof(FGameInitAnalytics), Get_Z_Construct_UScriptStruct_FGameInitAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameInitAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameInitAnalytics_Hash() { return 3692378379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
