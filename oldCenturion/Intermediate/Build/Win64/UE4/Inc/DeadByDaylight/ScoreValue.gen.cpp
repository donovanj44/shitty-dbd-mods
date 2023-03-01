// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScoreValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreValue() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScoreValue();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
// End Cross Module References
class UScriptStruct* FScoreValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FScoreValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreValue, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ScoreValue"), sizeof(FScoreValue), Get_Z_Construct_UScriptStruct_FScoreValue_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FScoreValue>()
{
	return FScoreValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreValue(FScoreValue::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ScoreValue"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreValue
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreValue")),new UScriptStruct::TCppStructOps<FScoreValue>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreValue;
	struct Z_Construct_UScriptStruct_FScoreValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OngoingWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OngoingWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointDepreciationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodpointDepreciationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBloodpointValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBloodpointValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodpointValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodpointValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_OngoingWaitTime_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_OngoingWaitTime = { "OngoingWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, OngoingWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_OngoingWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_OngoingWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointDepreciationCurve_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointDepreciationCurve = { "BloodpointDepreciationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, BloodpointDepreciationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointDepreciationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointDepreciationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_MaxBloodpointValue_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_MaxBloodpointValue = { "MaxBloodpointValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, MaxBloodpointValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_MaxBloodpointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_MaxBloodpointValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointValue_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointValue = { "BloodpointValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, BloodpointValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, Category), Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ScoreValue" },
		{ "ModuleRelativePath", "Public/ScoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreValue, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_OngoingWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointDepreciationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_MaxBloodpointValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_BloodpointValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreValue_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ScoreValue",
		sizeof(FScoreValue),
		alignof(FScoreValue),
		Z_Construct_UScriptStruct_FScoreValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreValue"), sizeof(FScoreValue), Get_Z_Construct_UScriptStruct_FScoreValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreValue_Hash() { return 2025909384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
