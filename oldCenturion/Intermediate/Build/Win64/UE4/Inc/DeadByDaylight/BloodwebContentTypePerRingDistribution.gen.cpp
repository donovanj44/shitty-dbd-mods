// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebContentTypePerRingDistribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebContentTypePerRingDistribution() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FBloodwebContentTypePerRingDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebContentTypePerRingDistribution"), sizeof(FBloodwebContentTypePerRingDistribution), Get_Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebContentTypePerRingDistribution>()
{
	return FBloodwebContentTypePerRingDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebContentTypePerRingDistribution(FBloodwebContentTypePerRingDistribution::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebContentTypePerRingDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebContentTypePerRingDistribution
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebContentTypePerRingDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebContentTypePerRingDistribution")),new UScriptStruct::TCppStructOps<FBloodwebContentTypePerRingDistribution>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebContentTypePerRingDistribution;
	struct Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IridiscentShardsPackPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IridiscentShardsPackPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IridiscentShardsPackPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IridiscentShardsPackPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IridiscentShardsPackPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IridiscentShardsPackPerRingMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksPackPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerksPackPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksPackPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerksPackPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksPackPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerksPackPerRingMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChestPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChestPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChestPerRingMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOnPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddOnPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOnPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddOnPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddOnPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddOnPerRingMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemPerRingMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OfferingPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OfferingPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OfferingPerRingMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkPerRingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkPerRingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkPerRingMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkPerRingMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkPerRingMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkPerRingMinCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebContentTypePerRingDistribution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingWeight = { "IridiscentShardsPackPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, IridiscentShardsPackPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMaxCount = { "IridiscentShardsPackPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, IridiscentShardsPackPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMinCount = { "IridiscentShardsPackPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, IridiscentShardsPackPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingWeight = { "PerksPackPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, PerksPackPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMaxCount = { "PerksPackPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, PerksPackPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMinCount = { "PerksPackPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, PerksPackPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingWeight = { "ChestPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, ChestPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMaxCount = { "ChestPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, ChestPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMinCount = { "ChestPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, ChestPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingWeight = { "AddOnPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, AddOnPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMaxCount = { "AddOnPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, AddOnPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMinCount = { "AddOnPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, AddOnPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingWeight = { "ItemPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, ItemPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMaxCount = { "ItemPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, ItemPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMinCount = { "ItemPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, ItemPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingWeight = { "OfferingPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, OfferingPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMaxCount = { "OfferingPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, OfferingPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMinCount = { "OfferingPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, OfferingPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingWeight_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingWeight = { "PerkPerRingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, PerkPerRingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMaxCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMaxCount = { "PerkPerRingMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, PerkPerRingMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMinCount_MetaData[] = {
		{ "Category", "BloodwebContentTypePerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebContentTypePerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMinCount = { "PerkPerRingMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebContentTypePerRingDistribution, PerkPerRingMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMinCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_IridiscentShardsPackPerRingMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerksPackPerRingMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ChestPerRingMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_AddOnPerRingMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_ItemPerRingMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_OfferingPerRingMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::NewProp_PerkPerRingMinCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebContentTypePerRingDistribution",
		sizeof(FBloodwebContentTypePerRingDistribution),
		alignof(FBloodwebContentTypePerRingDistribution),
		Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebContentTypePerRingDistribution"), sizeof(FBloodwebContentTypePerRingDistribution), Get_Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebContentTypePerRingDistribution_Hash() { return 3144185047U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
