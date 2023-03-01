// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemAddonProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAddonProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddonProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FParentItemIDs();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon_NoRegister();
// End Cross Module References
class UScriptStruct* FItemAddonProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FItemAddonProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddonProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ItemAddonProperties"), sizeof(FItemAddonProperties), Get_Z_Construct_UScriptStruct_FItemAddonProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FItemAddonProperties>()
{
	return FItemAddonProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemAddonProperties(FItemAddonProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ItemAddonProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAddonProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAddonProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemAddonProperties")),new UScriptStruct::TCppStructOps<FItemAddonProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAddonProperties;
	struct Z_Construct_UScriptStruct_FItemAddonProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreLevelGenerationModifierID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreLevelGenerationModifierID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreLevelGenerationModifierID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAddonBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ItemAddonBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemAddonProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddonProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID_MetaData[] = {
		{ "Category", "ItemAddonProperties" },
		{ "ModuleRelativePath", "Public/ItemAddonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID = { "PreLevelGenerationModifierID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddonProperties, PreLevelGenerationModifierID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID_Inner = { "PreLevelGenerationModifierID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ParentItem_MetaData[] = {
		{ "Category", "ItemAddonProperties" },
		{ "ModuleRelativePath", "Public/ItemAddonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ParentItem = { "ParentItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddonProperties, ParentItem), Z_Construct_UScriptStruct_FParentItemIDs, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ParentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ParentItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ItemAddonBlueprint_MetaData[] = {
		{ "Category", "ItemAddonProperties" },
		{ "ModuleRelativePath", "Public/ItemAddonProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ItemAddonBlueprint = { "ItemAddonBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddonProperties, ItemAddonBlueprint), Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ItemAddonBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ItemAddonBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddonProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_PreLevelGenerationModifierID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ParentItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonProperties_Statics::NewProp_ItemAddonBlueprint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddonProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FItemData,
		&NewStructOps,
		"ItemAddonProperties",
		sizeof(FItemAddonProperties),
		alignof(FItemAddonProperties),
		Z_Construct_UScriptStruct_FItemAddonProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemAddonProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemAddonProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemAddonProperties"), sizeof(FItemAddonProperties), Get_Z_Construct_UScriptStruct_FItemAddonProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemAddonProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemAddonProperties_Hash() { return 3995202223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
