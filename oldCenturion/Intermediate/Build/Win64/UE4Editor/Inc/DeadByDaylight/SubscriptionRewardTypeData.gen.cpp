// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SubscriptionRewardTypeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptionRewardTypeData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionRewardTypeData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMonthlyPassRewardItemWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FSubscriptionRewardTypeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubscriptionRewardTypeData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SubscriptionRewardTypeData"), sizeof(FSubscriptionRewardTypeData), Get_Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSubscriptionRewardTypeData>()
{
	return FSubscriptionRewardTypeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubscriptionRewardTypeData(FSubscriptionRewardTypeData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SubscriptionRewardTypeData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubscriptionRewardTypeData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubscriptionRewardTypeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubscriptionRewardTypeData")),new UScriptStruct::TCppStructOps<FSubscriptionRewardTypeData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSubscriptionRewardTypeData;
	struct Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_RewardItemWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubscriptionRewardTypeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubscriptionRewardTypeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::NewProp_RewardItemWidget_MetaData[] = {
		{ "Category", "SubscriptionRewardTypeData" },
		{ "ModuleRelativePath", "Public/SubscriptionRewardTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::NewProp_RewardItemWidget = { "RewardItemWidget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionRewardTypeData, RewardItemWidget), Z_Construct_UClass_UUMGMonthlyPassRewardItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::NewProp_RewardItemWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::NewProp_RewardItemWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::NewProp_RewardItemWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SubscriptionRewardTypeData",
		sizeof(FSubscriptionRewardTypeData),
		alignof(FSubscriptionRewardTypeData),
		Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionRewardTypeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubscriptionRewardTypeData"), sizeof(FSubscriptionRewardTypeData), Get_Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardTypeData_Hash() { return 3432158300U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
