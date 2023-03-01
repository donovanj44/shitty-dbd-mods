// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/WalesCypherAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalesCypherAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FWalesCypherAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FWalesCypherAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FWalesCypherAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWalesCypherAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("WalesCypherAnalytics"), sizeof(FWalesCypherAnalytics), Get_Z_Construct_UScriptStruct_FWalesCypherAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FWalesCypherAnalytics>()
{
	return FWalesCypherAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWalesCypherAnalytics(FWalesCypherAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("WalesCypherAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFWalesCypherAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFWalesCypherAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WalesCypherAnalytics")),new UScriptStruct::TCppStructOps<FWalesCypherAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFWalesCypherAnalytics;
	struct Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidCharacterSelcted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValidCharacterSelcted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmGranted_MetaData[];
#endif
		static void NewProp_CharmGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CharmGranted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static void NewProp_Timeout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeoutThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpectedSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnteredSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnteredSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWalesCypherAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ValidCharacterSelcted_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ValidCharacterSelcted = { "ValidCharacterSelcted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherAnalytics, ValidCharacterSelcted), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ValidCharacterSelcted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ValidCharacterSelcted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted_SetBit(void* Obj)
	{
		((FWalesCypherAnalytics*)Obj)->CharmGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted = { "CharmGranted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWalesCypherAnalytics), &Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout_SetBit(void* Obj)
	{
		((FWalesCypherAnalytics*)Obj)->Timeout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWalesCypherAnalytics), &Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FWalesCypherAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWalesCypherAnalytics), &Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_TimeoutThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_TimeoutThreshold = { "TimeoutThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherAnalytics, TimeoutThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_TimeoutThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_TimeoutThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ExpectedSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ExpectedSequence = { "ExpectedSequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherAnalytics, ExpectedSequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ExpectedSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ExpectedSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_EnteredSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_EnteredSequence = { "EnteredSequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherAnalytics, EnteredSequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_EnteredSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_EnteredSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ValidCharacterSelcted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_CharmGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_TimeoutThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_ExpectedSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::NewProp_EnteredSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"WalesCypherAnalytics",
		sizeof(FWalesCypherAnalytics),
		alignof(FWalesCypherAnalytics),
		Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWalesCypherAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWalesCypherAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WalesCypherAnalytics"), sizeof(FWalesCypherAnalytics), Get_Z_Construct_UScriptStruct_FWalesCypherAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWalesCypherAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWalesCypherAnalytics_Hash() { return 1356355391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
