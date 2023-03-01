// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubscriptionSubsystem/Public/SubscriptionReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptionReward() {}
// Cross Module References
	SUBSCRIPTIONSUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionReward();
	UPackage* Z_Construct_UPackage__Script_SubscriptionSubsystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	REWARDUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItem();
// End Cross Module References
class UScriptStruct* FSubscriptionReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSCRIPTIONSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSubscriptionReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubscriptionReward, Z_Construct_UPackage__Script_SubscriptionSubsystem(), TEXT("SubscriptionReward"), sizeof(FSubscriptionReward), Get_Z_Construct_UScriptStruct_FSubscriptionReward_Hash());
	}
	return Singleton;
}
template<> SUBSCRIPTIONSUBSYSTEM_API UScriptStruct* StaticStruct<FSubscriptionReward>()
{
	return FSubscriptionReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubscriptionReward(FSubscriptionReward::StaticStruct, TEXT("/Script/SubscriptionSubsystem"), TEXT("SubscriptionReward"), false, nullptr, nullptr);
static struct FScriptStruct_SubscriptionSubsystem_StaticRegisterNativesFSubscriptionReward
{
	FScriptStruct_SubscriptionSubsystem_StaticRegisterNativesFSubscriptionReward()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubscriptionReward")),new UScriptStruct::TCppStructOps<FSubscriptionReward>);
	}
} ScriptStruct_SubscriptionSubsystem_StaticRegisterNativesFSubscriptionReward;
	struct Z_Construct_UScriptStruct_FSubscriptionReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsEventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnalyticsEventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextClaimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextClaimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubscriptionReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubscriptionReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_AnalyticsEventId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_AnalyticsEventId = { "AnalyticsEventId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionReward, AnalyticsEventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_AnalyticsEventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_AnalyticsEventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_NextClaimTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_NextClaimTime = { "NextClaimTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionReward, NextClaimTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_NextClaimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_NextClaimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionReward, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubscriptionReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_AnalyticsEventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_NextClaimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionReward_Statics::NewProp_Rewards_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubscriptionReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubscriptionSubsystem,
		nullptr,
		&NewStructOps,
		"SubscriptionReward",
		sizeof(FSubscriptionReward),
		alignof(FSubscriptionReward),
		Z_Construct_UScriptStruct_FSubscriptionReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubscriptionReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubscriptionSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubscriptionReward"), sizeof(FSubscriptionReward), Get_Z_Construct_UScriptStruct_FSubscriptionReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubscriptionReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubscriptionReward_Hash() { return 3023461937U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
