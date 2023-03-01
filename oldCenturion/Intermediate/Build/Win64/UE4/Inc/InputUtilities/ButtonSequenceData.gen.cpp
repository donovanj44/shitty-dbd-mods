// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputUtilities/Public/ButtonSequenceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonSequenceData() {}
// Cross Module References
	INPUTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FButtonSequenceData();
	UPackage* Z_Construct_UPackage__Script_InputUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FButtonSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FButtonSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonSequenceData, Z_Construct_UPackage__Script_InputUtilities(), TEXT("ButtonSequenceData"), sizeof(FButtonSequenceData), Get_Z_Construct_UScriptStruct_FButtonSequenceData_Hash());
	}
	return Singleton;
}
template<> INPUTUTILITIES_API UScriptStruct* StaticStruct<FButtonSequenceData>()
{
	return FButtonSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FButtonSequenceData(FButtonSequenceData::StaticStruct, TEXT("/Script/InputUtilities"), TEXT("ButtonSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_InputUtilities_StaticRegisterNativesFButtonSequenceData
{
	FScriptStruct_InputUtilities_StaticRegisterNativesFButtonSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ButtonSequenceData")),new UScriptStruct::TCppStructOps<FButtonSequenceData>);
	}
} ScriptStruct_InputUtilities_StaticRegisterNativesFButtonSequenceData;
	struct Z_Construct_UScriptStruct_FButtonSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinKeysForFailedAttempt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinKeysForFailedAttempt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Sequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SequenceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ButtonSequenceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonSequenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_MinKeysForFailedAttempt_MetaData[] = {
		{ "Category", "ButtonSequenceData" },
		{ "ModuleRelativePath", "Public/ButtonSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_MinKeysForFailedAttempt = { "MinKeysForFailedAttempt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonSequenceData, MinKeysForFailedAttempt), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_MinKeysForFailedAttempt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_MinKeysForFailedAttempt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "ButtonSequenceData" },
		{ "ModuleRelativePath", "Public/ButtonSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonSequenceData, Platforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms_Inner = { "Platforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "ButtonSequenceData" },
		{ "ModuleRelativePath", "Public/ButtonSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonSequenceData, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "ButtonSequenceData" },
		{ "ModuleRelativePath", "Public/ButtonSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonSequenceData, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_SequenceId_MetaData[] = {
		{ "Category", "ButtonSequenceData" },
		{ "ModuleRelativePath", "Public/ButtonSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_SequenceId = { "SequenceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonSequenceData, SequenceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_SequenceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_SequenceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FButtonSequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_MinKeysForFailedAttempt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Platforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_Sequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonSequenceData_Statics::NewProp_SequenceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FButtonSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputUtilities,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ButtonSequenceData",
		sizeof(FButtonSequenceData),
		alignof(FButtonSequenceData),
		Z_Construct_UScriptStruct_FButtonSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FButtonSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FButtonSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ButtonSequenceData"), sizeof(FButtonSequenceData), Get_Z_Construct_UScriptStruct_FButtonSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FButtonSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FButtonSequenceData_Hash() { return 138806343U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
