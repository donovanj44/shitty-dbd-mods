// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkLevelText();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPerkCategory();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingEffect();
// End Cross Module References
class UScriptStruct* FPerkProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPerkProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PerkProperties"), sizeof(FPerkProperties), Get_Z_Construct_UScriptStruct_FPerkProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPerkProperties>()
{
	return FPerkProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerkProperties(FPerkProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PerkProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerkProperties")),new UScriptStruct::TCppStructOps<FPerkProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkProperties;
	struct Z_Construct_UScriptStruct_FPerkProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaLowPriority_MetaData[];
#endif
		static void NewProp_AtlantaLowPriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AtlantaLowPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaActivatableInteractionIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtlantaActivatableInteractionIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AtlantaActivatableInteractionIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel3Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PerkLevel3Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel2Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PerkLevel2Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel1Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PerkLevel1Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevelTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkLevelTunables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkLevelTunables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevelRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkLevelRarity;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PerkLevelRarity_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerkLevelRarity_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PerkBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkCategory;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PerkCategory_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerkCategory_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaTeachableLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtlantaTeachableLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeachableOnBloodweblevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeachableOnBloodweblevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MandatoryOnBloodweblevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MandatoryOnBloodweblevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedPlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssociatedPlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerkProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority_SetBit(void* Obj)
	{
		((FPerkProperties*)Obj)->AtlantaLowPriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority = { "AtlantaLowPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPerkProperties), &Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs = { "AtlantaActivatableInteractionIDs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, AtlantaActivatableInteractionIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs_Inner = { "AtlantaActivatableInteractionIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel3Description_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel3Description = { "PerkLevel3Description", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkLevel3Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel3Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel3Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel2Description_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel2Description = { "PerkLevel2Description", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkLevel2Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel2Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel2Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel1Description_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel1Description = { "PerkLevel1Description", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkLevel1Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel1Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel1Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables = { "PerkLevelTunables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkLevelTunables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables_Inner = { "PerkLevelTunables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerkLevelText, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity = { "PerkLevelRarity", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkLevelRarity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_Inner = { "PerkLevelRarity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkBlueprint_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkBlueprint = { "PerkBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkBlueprint), Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory = { "PerkCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, PerkCategory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_Inner = { "PerkCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EPerkCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaTeachableLevel_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaTeachableLevel = { "AtlantaTeachableLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, AtlantaTeachableLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaTeachableLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaTeachableLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_TeachableOnBloodweblevel_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_TeachableOnBloodweblevel = { "TeachableOnBloodweblevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, TeachableOnBloodweblevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_TeachableOnBloodweblevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_TeachableOnBloodweblevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_MandatoryOnBloodweblevel_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_MandatoryOnBloodweblevel = { "MandatoryOnBloodweblevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, MandatoryOnBloodweblevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_MandatoryOnBloodweblevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_MandatoryOnBloodweblevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AssociatedPlayerIndex_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AssociatedPlayerIndex = { "AssociatedPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, AssociatedPlayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AssociatedPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AssociatedPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOfferingEffect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "PerkProperties" },
		{ "ModuleRelativePath", "Public/PerkProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkProperties, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaLowPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaActivatableInteractionIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel3Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel2Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevel1Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelTunables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkLevelRarity_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_PerkCategory_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AtlantaTeachableLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_TeachableOnBloodweblevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_MandatoryOnBloodweblevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_AssociatedPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Effects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkProperties_Statics::NewProp_Tags_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FItemData,
		&NewStructOps,
		"PerkProperties",
		sizeof(FPerkProperties),
		alignof(FPerkProperties),
		Z_Construct_UScriptStruct_FPerkProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerkProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerkProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerkProperties"), sizeof(FPerkProperties), Get_Z_Construct_UScriptStruct_FPerkProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerkProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerkProperties_Hash() { return 749042164U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
