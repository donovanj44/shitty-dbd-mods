// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/RetentionReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetentionReward() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FRetentionReward();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
	REWARDUTILITIES_API UEnum* Z_Construct_UEnum_RewardUtilities_ERewardItemType();
// End Cross Module References
class UScriptStruct* FRetentionReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RETENTIONREWARDSUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FRetentionReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetentionReward, Z_Construct_UPackage__Script_RetentionRewardsUtilities(), TEXT("RetentionReward"), sizeof(FRetentionReward), Get_Z_Construct_UScriptStruct_FRetentionReward_Hash());
	}
	return Singleton;
}
template<> RETENTIONREWARDSUTILITIES_API UScriptStruct* StaticStruct<FRetentionReward>()
{
	return FRetentionReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRetentionReward(FRetentionReward::StaticStruct, TEXT("/Script/RetentionRewardsUtilities"), TEXT("RetentionReward"), false, nullptr, nullptr);
static struct FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFRetentionReward
{
	FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFRetentionReward()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RetentionReward")),new UScriptStruct::TCppStructOps<FRetentionReward>);
	}
} ScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFRetentionReward;
	struct Z_Construct_UScriptStruct_FRetentionReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSpecificData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameSpecificData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GameSpecificData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSpecificData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RewardType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RetentionReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRetentionReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetentionReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData = { "GameSpecificData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionReward, GameSpecificData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_Key_KeyProp = { "GameSpecificData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_ValueProp = { "GameSpecificData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType = { "RewardType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionReward, RewardType), Z_Construct_UEnum_RewardUtilities_ERewardItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_Amount_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionReward, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetentionReward.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetentionReward, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetentionReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_GameSpecificData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_RewardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetentionReward_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetentionReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
		nullptr,
		&NewStructOps,
		"RetentionReward",
		sizeof(FRetentionReward),
		alignof(FRetentionReward),
		Z_Construct_UScriptStruct_FRetentionReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRetentionReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetentionReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRetentionReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRetentionReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RetentionRewardsUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RetentionReward"), sizeof(FRetentionReward), Get_Z_Construct_UScriptStruct_FRetentionReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRetentionReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRetentionReward_Hash() { return 2077144421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
