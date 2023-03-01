// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperLoadout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperLoadout() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCamperLoadout();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutPerk();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutAddon();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmDropdown();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCustomizationDropdown();
// End Cross Module References
class UScriptStruct* FCamperLoadout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCamperLoadout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCamperLoadout, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CamperLoadout"), sizeof(FCamperLoadout), Get_Z_Construct_UScriptStruct_FCamperLoadout_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCamperLoadout>()
{
	return FCamperLoadout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCamperLoadout(FCamperLoadout::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CamperLoadout"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperLoadout
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperLoadout()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CamperLoadout")),new UScriptStruct::TCppStructOps<FCamperLoadout>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperLoadout;
	struct Z_Construct_UScriptStruct_FCamperLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Perks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Perks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot2_CharmID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slot2_CharmID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot1_CharmID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slot1_CharmID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot0_CharmID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slot0_CharmID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCamperLoadout>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks = { "Perks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, Perks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks_Inner = { "Perks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugLoadoutPerk, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs = { "AddonIDs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, AddonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs_Inner = { "AddonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugLoadoutAddon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, ItemID), Z_Construct_UScriptStruct_FDataTableDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot2_CharmID_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot2_CharmID = { "Slot2_CharmID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, Slot2_CharmID), Z_Construct_UScriptStruct_FCharmDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot2_CharmID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot2_CharmID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot1_CharmID_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot1_CharmID = { "Slot1_CharmID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, Slot1_CharmID), Z_Construct_UScriptStruct_FCharmDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot1_CharmID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot1_CharmID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot0_CharmID_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot0_CharmID = { "Slot0_CharmID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, Slot0_CharmID), Z_Construct_UScriptStruct_FCharmDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot0_CharmID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot0_CharmID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Camper_MetaData[] = {
		{ "Category", "CamperLoadout" },
		{ "ModuleRelativePath", "Public/CamperLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Camper = { "Camper", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperLoadout, Camper), Z_Construct_UScriptStruct_FCharacterCustomizationDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Camper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Camper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCamperLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Perks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_AddonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot2_CharmID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot1_CharmID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Slot0_CharmID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperLoadout_Statics::NewProp_Camper,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCamperLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CamperLoadout",
		sizeof(FCamperLoadout),
		alignof(FCamperLoadout),
		Z_Construct_UScriptStruct_FCamperLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperLoadout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperLoadout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCamperLoadout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCamperLoadout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CamperLoadout"), sizeof(FCamperLoadout), Get_Z_Construct_UScriptStruct_FCamperLoadout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCamperLoadout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCamperLoadout_Hash() { return 3952360496U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
