// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebPrestigeModifiers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebPrestigeModifiers() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FBloodwebPrestigeModifiers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebPrestigeModifiers"), sizeof(FBloodwebPrestigeModifiers), Get_Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebPrestigeModifiers>()
{
	return FBloodwebPrestigeModifiers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebPrestigeModifiers(FBloodwebPrestigeModifiers::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebPrestigeModifiers"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebPrestigeModifiers
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebPrestigeModifiers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebPrestigeModifiers")),new UScriptStruct::TCppStructOps<FBloodwebPrestigeModifiers>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebPrestigeModifiers;
	struct Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegendaryItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LegendaryItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectralItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectralItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtifactItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArtifactItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UltraRareItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UltraRareItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VeryRareItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VeryRareItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RareItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RareItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncommonItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncommonItemProbabilityModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonItemProbabilityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CommonItemProbabilityModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebPrestigeModifiers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_LegendaryItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_LegendaryItemProbabilityModifier = { "LegendaryItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, LegendaryItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_LegendaryItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_LegendaryItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_SpectralItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_SpectralItemProbabilityModifier = { "SpectralItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, SpectralItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_SpectralItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_SpectralItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_ArtifactItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_ArtifactItemProbabilityModifier = { "ArtifactItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, ArtifactItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_ArtifactItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_ArtifactItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UltraRareItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UltraRareItemProbabilityModifier = { "UltraRareItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, UltraRareItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UltraRareItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UltraRareItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_VeryRareItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_VeryRareItemProbabilityModifier = { "VeryRareItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, VeryRareItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_VeryRareItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_VeryRareItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_RareItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_RareItemProbabilityModifier = { "RareItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, RareItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_RareItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_RareItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UncommonItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UncommonItemProbabilityModifier = { "UncommonItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, UncommonItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UncommonItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UncommonItemProbabilityModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_CommonItemProbabilityModifier_MetaData[] = {
		{ "Category", "BloodwebPrestigeModifiers" },
		{ "ModuleRelativePath", "Public/BloodwebPrestigeModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_CommonItemProbabilityModifier = { "CommonItemProbabilityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebPrestigeModifiers, CommonItemProbabilityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_CommonItemProbabilityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_CommonItemProbabilityModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_LegendaryItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_SpectralItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_ArtifactItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UltraRareItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_VeryRareItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_RareItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_UncommonItemProbabilityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::NewProp_CommonItemProbabilityModifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebPrestigeModifiers",
		sizeof(FBloodwebPrestigeModifiers),
		alignof(FBloodwebPrestigeModifiers),
		Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebPrestigeModifiers"), sizeof(FBloodwebPrestigeModifiers), Get_Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebPrestigeModifiers_Hash() { return 678794821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
