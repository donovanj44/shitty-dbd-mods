// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onboarding/Public/SecretBotMatchLoadoutDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecretBotMatchLoadoutDefinition() {}
// Cross Module References
	ONBOARDING_API UScriptStruct* Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition();
	UPackage* Z_Construct_UPackage__Script_Onboarding();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType();
// End Cross Module References
class UScriptStruct* FSecretBotMatchLoadoutDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONBOARDING_API uint32 Get_Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition, Z_Construct_UPackage__Script_Onboarding(), TEXT("SecretBotMatchLoadoutDefinition"), sizeof(FSecretBotMatchLoadoutDefinition), Get_Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Hash());
	}
	return Singleton;
}
template<> ONBOARDING_API UScriptStruct* StaticStruct<FSecretBotMatchLoadoutDefinition>()
{
	return FSecretBotMatchLoadoutDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSecretBotMatchLoadoutDefinition(FSecretBotMatchLoadoutDefinition::StaticStruct, TEXT("/Script/Onboarding"), TEXT("SecretBotMatchLoadoutDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Onboarding_StaticRegisterNativesFSecretBotMatchLoadoutDefinition
{
	FScriptStruct_Onboarding_StaticRegisterNativesFSecretBotMatchLoadoutDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SecretBotMatchLoadoutDefinition")),new UScriptStruct::TCppStructOps<FSecretBotMatchLoadoutDefinition>);
	}
} ScriptStruct_Onboarding_StaticRegisterNativesFSecretBotMatchLoadoutDefinition;
	struct Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersIndexList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharactersIndexList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharactersIndexList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkTiersList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkTiersList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkTiersList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbCharacterSpecificPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NbCharacterSpecificPerks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbGenericPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NbGenericPerks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OfferingRarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OfferingRarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonsRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AddonsRarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddonsRarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbAddons_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NbAddons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemEquipped;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemEquipped_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BotRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecretBotMatchLoadoutDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList = { "CharactersIndexList", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, CharactersIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList_Inner = { "CharactersIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList = { "PerkTiersList", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, PerkTiersList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList_Inner = { "PerkTiersList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbCharacterSpecificPerks_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbCharacterSpecificPerks = { "NbCharacterSpecificPerks", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, NbCharacterSpecificPerks), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbCharacterSpecificPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbCharacterSpecificPerks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbGenericPerks_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbGenericPerks = { "NbGenericPerks", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, NbGenericPerks), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbGenericPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbGenericPerks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity = { "OfferingRarity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, OfferingRarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity = { "AddonsRarity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, AddonsRarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbAddons_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbAddons = { "NbAddons", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, NbAddons), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbAddons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbAddons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, ItemRarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped = { "ItemEquipped", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, ItemEquipped), Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_BotRank_MetaData[] = {
		{ "Category", "SecretBotMatchLoadoutDefinition" },
		{ "ModuleRelativePath", "Public/SecretBotMatchLoadoutDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_BotRank = { "BotRank", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecretBotMatchLoadoutDefinition, BotRank), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_BotRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_BotRank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_CharactersIndexList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_PerkTiersList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbCharacterSpecificPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbGenericPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_OfferingRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_AddonsRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_NbAddons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_ItemEquipped_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::NewProp_BotRank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Onboarding,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SecretBotMatchLoadoutDefinition",
		sizeof(FSecretBotMatchLoadoutDefinition),
		alignof(FSecretBotMatchLoadoutDefinition),
		Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Onboarding();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SecretBotMatchLoadoutDefinition"), sizeof(FSecretBotMatchLoadoutDefinition), Get_Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSecretBotMatchLoadoutDefinition_Hash() { return 2033389470U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
