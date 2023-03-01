// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MatchmakingQueueAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingQueueAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingAnalytics();
// End Cross Module References
class UScriptStruct* FMatchmakingQueueAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MatchmakingQueueAnalytics"), sizeof(FMatchmakingQueueAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMatchmakingQueueAnalytics>()
{
	return FMatchmakingQueueAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakingQueueAnalytics(FMatchmakingQueueAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MatchmakingQueueAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingQueueAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingQueueAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchmakingQueueAnalytics")),new UScriptStruct::TCppStructOps<FMatchmakingQueueAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMatchmakingQueueAnalytics;
	struct Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossPlayEnabled_MetaData[];
#endif
		static void NewProp_CrossPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrossPlayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingQueueAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakingQueueAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingQueueAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled_SetBit(void* Obj)
	{
		((FMatchmakingQueueAnalytics*)Obj)->CrossPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled = { "CrossPlayEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakingQueueAnalytics), &Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingQueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueResult = { "QueueResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingQueueAnalytics, QueueResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingQueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueEndTime = { "QueueEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingQueueAnalytics, QueueEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchmakingQueueAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueStartTime = { "QueueStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakingQueueAnalytics, QueueStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_CrossPlayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::NewProp_QueueStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FMatchmakingAnalytics,
		&NewStructOps,
		"MatchmakingQueueAnalytics",
		sizeof(FMatchmakingQueueAnalytics),
		alignof(FMatchmakingQueueAnalytics),
		Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakingQueueAnalytics"), sizeof(FMatchmakingQueueAnalytics), Get_Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakingQueueAnalytics_Hash() { return 3733099986U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
