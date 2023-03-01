// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterCustomizationDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCustomizationDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCustomizationDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDropdown();
// End Cross Module References
class UScriptStruct* FCharacterCustomizationDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterCustomizationDropdown"), sizeof(FCharacterCustomizationDropdown), Get_Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterCustomizationDropdown>()
{
	return FCharacterCustomizationDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterCustomizationDropdown(FCharacterCustomizationDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterCustomizationDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterCustomizationDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterCustomizationDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterCustomizationDropdown")),new UScriptStruct::TCppStructOps<FCharacterCustomizationDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterCustomizationDropdown;
	struct Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KillerHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorLegs_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurvivorLegs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTorso_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurvivorTorso;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurvivorHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutfitId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCustomizationDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerWeapon_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerWeapon = { "KillerWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, KillerWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerBody_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerBody = { "KillerBody", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, KillerBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerHead_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerHead = { "KillerHead", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, KillerHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorLegs_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorLegs = { "SurvivorLegs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, SurvivorLegs), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorLegs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorLegs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorTorso_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorTorso = { "SurvivorTorso", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, SurvivorTorso), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorTorso_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorTorso_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorHead_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorHead = { "SurvivorHead", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, SurvivorHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_OutfitId_MetaData[] = {
		{ "Category", "CharacterCustomizationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_OutfitId = { "OutfitId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDropdown, OutfitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_OutfitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_OutfitId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_KillerHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorLegs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorTorso,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_SurvivorHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::NewProp_OutfitId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FCharacterDropdown,
		&NewStructOps,
		"CharacterCustomizationDropdown",
		sizeof(FCharacterCustomizationDropdown),
		alignof(FCharacterCustomizationDropdown),
		Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterCustomizationDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterCustomizationDropdown"), sizeof(FCharacterCustomizationDropdown), Get_Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterCustomizationDropdown_Hash() { return 3391272398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
