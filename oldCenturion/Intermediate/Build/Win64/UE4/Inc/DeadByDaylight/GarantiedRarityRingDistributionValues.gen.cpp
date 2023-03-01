// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GarantiedRarityRingDistributionValues.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGarantiedRarityRingDistributionValues() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FGarantiedRarityRingDistributionValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GarantiedRarityRingDistributionValues"), sizeof(FGarantiedRarityRingDistributionValues), Get_Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGarantiedRarityRingDistributionValues>()
{
	return FGarantiedRarityRingDistributionValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGarantiedRarityRingDistributionValues(FGarantiedRarityRingDistributionValues::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GarantiedRarityRingDistributionValues"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGarantiedRarityRingDistributionValues
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGarantiedRarityRingDistributionValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GarantiedRarityRingDistributionValues")),new UScriptStruct::TCppStructOps<FGarantiedRarityRingDistributionValues>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGarantiedRarityRingDistributionValues;
	struct Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingUltraEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingUltraEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingUltraEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingUltraEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingUltraEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingUltraEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingSuperEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingSuperEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingSuperEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingSuperEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingSuperEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingSuperEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingEpicItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingEpicItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingLegendaryItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingLegendaryItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingLegendaryItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingLegendaryItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingLegendaryItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingLegendaryItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingSpecialEventItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingSpecialEventItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingSpecialEventItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingSpecialEventItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingSpecialEventItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingSpecialEventItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingSpectralItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingSpectralItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingSpectralItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingSpectralItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingSpectralItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingSpectralItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingArtifactItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingArtifactItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingArtifactItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingArtifactItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingArtifactItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingArtifactItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingUltraRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingUltraRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingUltraRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingUltraRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingUltraRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingUltraRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingVeryRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingVeryRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingVeryRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingVeryRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingVeryRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingVeryRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingRareItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingRareItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingUncommonItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingUncommonItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingUncommonItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingUncommonItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingUncommonItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingUncommonItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRingCommonItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OuterRingCommonItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRingCommonItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRingCommonItemProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRingCommonItemProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRingCommonItemProbability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGarantiedRarityRingDistributionValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraEpicItemProbability = { "OuterRingUltraEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingUltraEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraEpicItemProbability = { "MiddleRingUltraEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingUltraEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraEpicItemProbability = { "InnerRingUltraEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingUltraEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSuperEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSuperEpicItemProbability = { "OuterRingSuperEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingSuperEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSuperEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSuperEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSuperEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSuperEpicItemProbability = { "MiddleRingSuperEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingSuperEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSuperEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSuperEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSuperEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSuperEpicItemProbability = { "InnerRingSuperEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingSuperEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSuperEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSuperEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingEpicItemProbability = { "OuterRingEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingEpicItemProbability = { "MiddleRingEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingEpicItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingEpicItemProbability = { "InnerRingEpicItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingEpicItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingEpicItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingEpicItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingLegendaryItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingLegendaryItemProbability = { "OuterRingLegendaryItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingLegendaryItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingLegendaryItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingLegendaryItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingLegendaryItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingLegendaryItemProbability = { "MiddleRingLegendaryItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingLegendaryItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingLegendaryItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingLegendaryItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingLegendaryItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingLegendaryItemProbability = { "InnerRingLegendaryItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingLegendaryItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingLegendaryItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingLegendaryItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpecialEventItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpecialEventItemProbability = { "OuterRingSpecialEventItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingSpecialEventItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpecialEventItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpecialEventItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpecialEventItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpecialEventItemProbability = { "MiddleRingSpecialEventItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingSpecialEventItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpecialEventItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpecialEventItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpecialEventItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpecialEventItemProbability = { "InnerRingSpecialEventItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingSpecialEventItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpecialEventItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpecialEventItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpectralItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpectralItemProbability = { "OuterRingSpectralItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingSpectralItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpectralItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpectralItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpectralItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpectralItemProbability = { "MiddleRingSpectralItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingSpectralItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpectralItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpectralItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpectralItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpectralItemProbability = { "InnerRingSpectralItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingSpectralItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpectralItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpectralItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingArtifactItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingArtifactItemProbability = { "OuterRingArtifactItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingArtifactItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingArtifactItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingArtifactItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingArtifactItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingArtifactItemProbability = { "MiddleRingArtifactItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingArtifactItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingArtifactItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingArtifactItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingArtifactItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingArtifactItemProbability = { "InnerRingArtifactItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingArtifactItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingArtifactItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingArtifactItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraRareItemProbability = { "OuterRingUltraRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingUltraRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraRareItemProbability = { "MiddleRingUltraRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingUltraRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraRareItemProbability = { "InnerRingUltraRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingUltraRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingVeryRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingVeryRareItemProbability = { "OuterRingVeryRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingVeryRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingVeryRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingVeryRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingVeryRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingVeryRareItemProbability = { "MiddleRingVeryRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingVeryRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingVeryRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingVeryRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingVeryRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingVeryRareItemProbability = { "InnerRingVeryRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingVeryRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingVeryRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingVeryRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingRareItemProbability = { "OuterRingRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingRareItemProbability = { "MiddleRingRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingRareItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingRareItemProbability = { "InnerRingRareItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingRareItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingRareItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingRareItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUncommonItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUncommonItemProbability = { "OuterRingUncommonItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingUncommonItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUncommonItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUncommonItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUncommonItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUncommonItemProbability = { "MiddleRingUncommonItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingUncommonItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUncommonItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUncommonItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUncommonItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUncommonItemProbability = { "InnerRingUncommonItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingUncommonItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUncommonItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUncommonItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingCommonItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingCommonItemProbability = { "OuterRingCommonItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, OuterRingCommonItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingCommonItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingCommonItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingCommonItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingCommonItemProbability = { "MiddleRingCommonItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, MiddleRingCommonItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingCommonItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingCommonItemProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingCommonItemProbability_MetaData[] = {
		{ "Category", "GarantiedRarityRingDistributionValues" },
		{ "ModuleRelativePath", "Public/GarantiedRarityRingDistributionValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingCommonItemProbability = { "InnerRingCommonItemProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGarantiedRarityRingDistributionValues, InnerRingCommonItemProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingCommonItemProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingCommonItemProbability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSuperEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSuperEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSuperEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingEpicItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingLegendaryItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingLegendaryItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingLegendaryItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpecialEventItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpecialEventItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpecialEventItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingSpectralItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingSpectralItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingSpectralItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingArtifactItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingArtifactItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingArtifactItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUltraRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUltraRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUltraRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingVeryRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingVeryRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingVeryRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingRareItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingUncommonItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingUncommonItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingUncommonItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_OuterRingCommonItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_MiddleRingCommonItemProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::NewProp_InnerRingCommonItemProbability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"GarantiedRarityRingDistributionValues",
		sizeof(FGarantiedRarityRingDistributionValues),
		alignof(FGarantiedRarityRingDistributionValues),
		Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GarantiedRarityRingDistributionValues"), sizeof(FGarantiedRarityRingDistributionValues), Get_Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGarantiedRarityRingDistributionValues_Hash() { return 2481435645U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
