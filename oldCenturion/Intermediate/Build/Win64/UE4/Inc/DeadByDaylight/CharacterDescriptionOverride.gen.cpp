// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterDescriptionOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDescriptionOverride() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDescriptionOverride();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCharacterDescriptionOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDescriptionOverride, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterDescriptionOverride"), sizeof(FCharacterDescriptionOverride), Get_Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterDescriptionOverride>()
{
	return FCharacterDescriptionOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterDescriptionOverride(FCharacterDescriptionOverride::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterDescriptionOverride"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterDescriptionOverride
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterDescriptionOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterDescriptionOverride")),new UScriptStruct::TCppStructOps<FCharacterDescriptionOverride>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterDescriptionOverride;
	struct Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFilePathOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IconFilePathOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GameBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_MenuBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudIconOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HudIconOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayNameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RequiredItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDescriptionOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_IconFilePathOverride_MetaData[] = {
		{ "Category", "CharacterDescriptionOverride" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_IconFilePathOverride = { "IconFilePathOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescriptionOverride, IconFilePathOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_IconFilePathOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_IconFilePathOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_GameBlueprint_MetaData[] = {
		{ "Category", "CharacterDescriptionOverride" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_GameBlueprint = { "GameBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescriptionOverride, GameBlueprint), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_GameBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_GameBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_MenuBlueprint_MetaData[] = {
		{ "Category", "CharacterDescriptionOverride" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_MenuBlueprint = { "MenuBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescriptionOverride, MenuBlueprint), Z_Construct_UClass_ADBDMenuPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_MenuBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_MenuBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_HudIconOverride_MetaData[] = {
		{ "Category", "CharacterDescriptionOverride" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_HudIconOverride = { "HudIconOverride", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescriptionOverride, HudIconOverride), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_HudIconOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_HudIconOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_DisplayNameOverride_MetaData[] = {
		{ "Category", "CharacterDescriptionOverride" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_DisplayNameOverride = { "DisplayNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescriptionOverride, DisplayNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_DisplayNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_DisplayNameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_RequiredItemId_MetaData[] = {
		{ "Category", "CharacterDescriptionOverride" },
		{ "ModuleRelativePath", "Public/CharacterDescriptionOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_RequiredItemId = { "RequiredItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterDescriptionOverride, RequiredItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_RequiredItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_RequiredItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_IconFilePathOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_GameBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_MenuBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_HudIconOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_DisplayNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::NewProp_RequiredItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"CharacterDescriptionOverride",
		sizeof(FCharacterDescriptionOverride),
		alignof(FCharacterDescriptionOverride),
		Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterDescriptionOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterDescriptionOverride"), sizeof(FCharacterDescriptionOverride), Get_Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterDescriptionOverride_Hash() { return 1952293932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
