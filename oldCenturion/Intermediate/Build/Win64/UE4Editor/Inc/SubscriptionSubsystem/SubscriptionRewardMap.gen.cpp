// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubscriptionSubsystem/Public/SubscriptionRewardMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptionRewardMap() {}
// Cross Module References
	SUBSCRIPTIONSUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionRewardMap();
	UPackage* Z_Construct_UPackage__Script_SubscriptionSubsystem();
	SUBSCRIPTIONSUBSYSTEM_API UEnum* Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType();
	SUBSCRIPTIONSUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionReward();
// End Cross Module References
class UScriptStruct* FSubscriptionRewardMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSCRIPTIONSUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubscriptionRewardMap, Z_Construct_UPackage__Script_SubscriptionSubsystem(), TEXT("SubscriptionRewardMap"), sizeof(FSubscriptionRewardMap), Get_Z_Construct_UScriptStruct_FSubscriptionRewardMap_Hash());
	}
	return Singleton;
}
template<> SUBSCRIPTIONSUBSYSTEM_API UScriptStruct* StaticStruct<FSubscriptionRewardMap>()
{
	return FSubscriptionRewardMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubscriptionRewardMap(FSubscriptionRewardMap::StaticStruct, TEXT("/Script/SubscriptionSubsystem"), TEXT("SubscriptionRewardMap"), false, nullptr, nullptr);
static struct FScriptStruct_SubscriptionSubsystem_StaticRegisterNativesFSubscriptionRewardMap
{
	FScriptStruct_SubscriptionSubsystem_StaticRegisterNativesFSubscriptionRewardMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubscriptionRewardMap")),new UScriptStruct::TCppStructOps<FSubscriptionRewardMap>);
	}
} ScriptStruct_SubscriptionSubsystem_StaticRegisterNativesFSubscriptionRewardMap;
	struct Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsByClaimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RewardsByClaimType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RewardsByClaimType_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardsByClaimType_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardsByClaimType_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubscriptionRewardMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubscriptionRewardMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType = { "RewardsByClaimType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubscriptionRewardMap, RewardsByClaimType), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_Key_KeyProp = { "RewardsByClaimType_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_ValueProp = { "RewardsByClaimType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSubscriptionReward, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::NewProp_RewardsByClaimType_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubscriptionSubsystem,
		nullptr,
		&NewStructOps,
		"SubscriptionRewardMap",
		sizeof(FSubscriptionRewardMap),
		alignof(FSubscriptionRewardMap),
		Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubscriptionRewardMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubscriptionSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubscriptionRewardMap"), sizeof(FSubscriptionRewardMap), Get_Z_Construct_UScriptStruct_FSubscriptionRewardMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubscriptionRewardMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubscriptionRewardMap_Hash() { return 1780991581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
