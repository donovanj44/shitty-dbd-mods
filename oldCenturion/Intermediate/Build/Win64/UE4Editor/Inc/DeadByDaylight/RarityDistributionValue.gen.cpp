// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RarityDistributionValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRarityDistributionValue() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRarityDistributionValue();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FRarityDistributionValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRarityDistributionValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRarityDistributionValue, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RarityDistributionValue"), sizeof(FRarityDistributionValue), Get_Z_Construct_UScriptStruct_FRarityDistributionValue_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRarityDistributionValue>()
{
	return FRarityDistributionValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRarityDistributionValue(FRarityDistributionValue::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RarityDistributionValue"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRarityDistributionValue
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRarityDistributionValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RarityDistributionValue")),new UScriptStruct::TCppStructOps<FRarityDistributionValue>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRarityDistributionValue;
	struct Z_Construct_UScriptStruct_FRarityDistributionValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RarityDistributionValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRarityDistributionValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_OuterRing_MetaData[] = {
		{ "Category", "RarityDistributionValue" },
		{ "ModuleRelativePath", "Public/RarityDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_OuterRing = { "OuterRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityDistributionValue, OuterRing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_OuterRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_OuterRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_MiddleRing_MetaData[] = {
		{ "Category", "RarityDistributionValue" },
		{ "ModuleRelativePath", "Public/RarityDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_MiddleRing = { "MiddleRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityDistributionValue, MiddleRing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_MiddleRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_MiddleRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_InnerRing_MetaData[] = {
		{ "Category", "RarityDistributionValue" },
		{ "ModuleRelativePath", "Public/RarityDistributionValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_InnerRing = { "InnerRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityDistributionValue, InnerRing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_InnerRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_InnerRing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_OuterRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_MiddleRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::NewProp_InnerRing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"RarityDistributionValue",
		sizeof(FRarityDistributionValue),
		alignof(FRarityDistributionValue),
		Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRarityDistributionValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRarityDistributionValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RarityDistributionValue"), sizeof(FRarityDistributionValue), Get_Z_Construct_UScriptStruct_FRarityDistributionValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRarityDistributionValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRarityDistributionValue_Hash() { return 2821867958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
