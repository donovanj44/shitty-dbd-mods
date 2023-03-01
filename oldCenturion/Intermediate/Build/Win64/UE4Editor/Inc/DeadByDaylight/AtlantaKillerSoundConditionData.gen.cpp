// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaKillerSoundConditionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaKillerSoundConditionData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType();
// End Cross Module References
class UScriptStruct* FAtlantaKillerSoundConditionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaKillerSoundConditionData"), sizeof(FAtlantaKillerSoundConditionData), Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaKillerSoundConditionData>()
{
	return FAtlantaKillerSoundConditionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaKillerSoundConditionData(FAtlantaKillerSoundConditionData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaKillerSoundConditionData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundConditionData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundConditionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaKillerSoundConditionData")),new UScriptStruct::TCppStructOps<FAtlantaKillerSoundConditionData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaKillerSoundConditionData;
	struct Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueComparisonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueComparisonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueComparisonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComparisonValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCAudioID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RTPCAudioID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundConditionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaKillerSoundConditionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType_MetaData[] = {
		{ "Category", "AtlantaKillerSoundConditionData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundConditionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType = { "ValueComparisonType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundConditionData, ValueComparisonType), Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ComparisonValue_MetaData[] = {
		{ "Category", "AtlantaKillerSoundConditionData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundConditionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ComparisonValue = { "ComparisonValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundConditionData, ComparisonValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ComparisonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ComparisonValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_RTPCAudioID_MetaData[] = {
		{ "Category", "AtlantaKillerSoundConditionData" },
		{ "ModuleRelativePath", "Public/AtlantaKillerSoundConditionData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_RTPCAudioID = { "RTPCAudioID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaKillerSoundConditionData, RTPCAudioID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_RTPCAudioID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_RTPCAudioID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ValueComparisonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_ComparisonValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::NewProp_RTPCAudioID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AtlantaKillerSoundConditionData",
		sizeof(FAtlantaKillerSoundConditionData),
		alignof(FAtlantaKillerSoundConditionData),
		Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaKillerSoundConditionData"), sizeof(FAtlantaKillerSoundConditionData), Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaKillerSoundConditionData_Hash() { return 2125781747U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
