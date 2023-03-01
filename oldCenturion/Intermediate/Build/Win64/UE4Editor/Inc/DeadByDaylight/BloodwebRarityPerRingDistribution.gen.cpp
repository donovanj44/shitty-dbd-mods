// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebRarityPerRingDistribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebRarityPerRingDistribution() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FBloodwebRarityPerRingDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebRarityPerRingDistribution"), sizeof(FBloodwebRarityPerRingDistribution), Get_Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebRarityPerRingDistribution>()
{
	return FBloodwebRarityPerRingDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebRarityPerRingDistribution(FBloodwebRarityPerRingDistribution::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebRarityPerRingDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebRarityPerRingDistribution
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebRarityPerRingDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebRarityPerRingDistribution")),new UScriptStruct::TCppStructOps<FBloodwebRarityPerRingDistribution>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebRarityPerRingDistribution;
	struct Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraEpicWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UltraEpicWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraEpicMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UltraEpicMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraEpicMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UltraEpicMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperEpicWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuperEpicWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperEpicMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuperEpicMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperEpicMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuperEpicMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EpicWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EpicMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EpicMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegendaryWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LegendaryWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegendaryMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LegendaryMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegendaryMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LegendaryMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialEventWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialEventMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialEventMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectralWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpectralWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectralMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpectralMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectralMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpectralMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtefactWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArtefactWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtefactMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArtefactMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtefactMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArtefactMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraRareWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UltraRareWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraRareMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UltraRareMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraRareMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UltraRareMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VeryRareWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VeryRareWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VeryRareMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VeryRareMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VeryRareMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VeryRareMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RareWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RareWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RareMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RareMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RareMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RareMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncommonWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncommonWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncommonMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncommonMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncommonMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncommonMinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommonWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommonMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonMinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommonMinCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebRarityPerRingDistribution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicWeight = { "UltraEpicWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UltraEpicWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMaxCount = { "UltraEpicMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UltraEpicMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMinCount = { "UltraEpicMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UltraEpicMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicWeight = { "SuperEpicWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SuperEpicWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMaxCount = { "SuperEpicMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SuperEpicMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMinCount = { "SuperEpicMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SuperEpicMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicWeight = { "EpicWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, EpicWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMaxCount = { "EpicMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, EpicMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMinCount = { "EpicMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, EpicMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryWeight = { "LegendaryWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, LegendaryWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMaxCount = { "LegendaryMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, LegendaryMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMinCount = { "LegendaryMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, LegendaryMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventWeight = { "SpecialEventWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SpecialEventWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMaxCount = { "SpecialEventMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SpecialEventMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMinCount = { "SpecialEventMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SpecialEventMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralWeight = { "SpectralWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SpectralWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMaxCount = { "SpectralMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SpectralMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMinCount = { "SpectralMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, SpectralMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactWeight = { "ArtefactWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, ArtefactWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMaxCount = { "ArtefactMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, ArtefactMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMinCount = { "ArtefactMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, ArtefactMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareWeight = { "UltraRareWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UltraRareWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMaxCount = { "UltraRareMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UltraRareMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMinCount = { "UltraRareMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UltraRareMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareWeight = { "VeryRareWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, VeryRareWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMaxCount = { "VeryRareMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, VeryRareMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMinCount = { "VeryRareMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, VeryRareMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareWeight = { "RareWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, RareWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMaxCount = { "RareMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, RareMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMinCount = { "RareMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, RareMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonWeight = { "UncommonWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UncommonWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMaxCount = { "UncommonMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UncommonMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMinCount = { "UncommonMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, UncommonMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonWeight_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonWeight = { "CommonWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, CommonWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMaxCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMaxCount = { "CommonMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, CommonMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMinCount_MetaData[] = {
		{ "Category", "BloodwebRarityPerRingDistribution" },
		{ "ModuleRelativePath", "Public/BloodwebRarityPerRingDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMinCount = { "CommonMinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebRarityPerRingDistribution, CommonMinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMinCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraEpicMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SuperEpicMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_EpicMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_LegendaryMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpecialEventMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_SpectralMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_ArtefactMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UltraRareMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_VeryRareMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_RareMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_UncommonMinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::NewProp_CommonMinCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebRarityPerRingDistribution",
		sizeof(FBloodwebRarityPerRingDistribution),
		alignof(FBloodwebRarityPerRingDistribution),
		Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebRarityPerRingDistribution"), sizeof(FBloodwebRarityPerRingDistribution), Get_Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebRarityPerRingDistribution_Hash() { return 3829747852U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
