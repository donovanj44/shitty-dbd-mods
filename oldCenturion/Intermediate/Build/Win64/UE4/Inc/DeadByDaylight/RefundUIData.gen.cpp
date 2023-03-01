// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RefundUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRefundUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRefundUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRewardUIData();
// End Cross Module References
class UScriptStruct* FRefundUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FRefundUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRefundUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("RefundUIData"), sizeof(FRefundUIData), Get_Z_Construct_UScriptStruct_FRefundUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FRefundUIData>()
{
	return FRefundUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRefundUIData(FRefundUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("RefundUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFRefundUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFRefundUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RefundUIData")),new UScriptStruct::TCppStructOps<FRefundUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFRefundUIData;
	struct Z_Construct_UScriptStruct_FRefundUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FragmentRequiredAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FragmentRequiredAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FragmentAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FragmentAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refund_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Refund;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalRewards_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefundUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RefundUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRefundUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRefundUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentRequiredAmount_MetaData[] = {
		{ "Category", "RefundUIData" },
		{ "ModuleRelativePath", "Public/RefundUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentRequiredAmount = { "FragmentRequiredAmount", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRefundUIData, FragmentRequiredAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentRequiredAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentRequiredAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentAmount_MetaData[] = {
		{ "Category", "RefundUIData" },
		{ "ModuleRelativePath", "Public/RefundUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentAmount = { "FragmentAmount", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRefundUIData, FragmentAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_Refund_MetaData[] = {
		{ "Category", "RefundUIData" },
		{ "ModuleRelativePath", "Public/RefundUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_Refund = { "Refund", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRefundUIData, Refund), Z_Construct_UScriptStruct_FAtlantaRewardUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_Refund_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_Refund_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards_MetaData[] = {
		{ "Category", "RefundUIData" },
		{ "ModuleRelativePath", "Public/RefundUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards = { "OriginalRewards", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRefundUIData, OriginalRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards_Inner = { "OriginalRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaRewardUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRefundUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentRequiredAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_FragmentAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_Refund,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefundUIData_Statics::NewProp_OriginalRewards_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRefundUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"RefundUIData",
		sizeof(FRefundUIData),
		alignof(FRefundUIData),
		Z_Construct_UScriptStruct_FRefundUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefundUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRefundUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefundUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRefundUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRefundUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RefundUIData"), sizeof(FRefundUIData), Get_Z_Construct_UScriptStruct_FRefundUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRefundUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRefundUIData_Hash() { return 2651308425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
