// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherLoadout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherLoadout() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSlasherLoadout();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutPerk();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutAddon();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCustomizationDropdown();
// End Cross Module References
class UScriptStruct* FSlasherLoadout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSlasherLoadout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlasherLoadout, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SlasherLoadout"), sizeof(FSlasherLoadout), Get_Z_Construct_UScriptStruct_FSlasherLoadout_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSlasherLoadout>()
{
	return FSlasherLoadout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlasherLoadout(FSlasherLoadout::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SlasherLoadout"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSlasherLoadout
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSlasherLoadout()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlasherLoadout")),new UScriptStruct::TCppStructOps<FSlasherLoadout>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSlasherLoadout;
	struct Z_Construct_UScriptStruct_FSlasherLoadout_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerAddonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PowerAddonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PowerAddonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlasherLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SlasherLoadout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlasherLoadout>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks_MetaData[] = {
		{ "Category", "SlasherLoadout" },
		{ "ModuleRelativePath", "Public/SlasherLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks = { "Perks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlasherLoadout, Perks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks_Inner = { "Perks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugLoadoutPerk, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs_MetaData[] = {
		{ "Category", "SlasherLoadout" },
		{ "ModuleRelativePath", "Public/SlasherLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs = { "PowerAddonIDs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlasherLoadout, PowerAddonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs_Inner = { "PowerAddonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugLoadoutAddon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Slasher_MetaData[] = {
		{ "Category", "SlasherLoadout" },
		{ "ModuleRelativePath", "Public/SlasherLoadout.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Slasher = { "Slasher", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlasherLoadout, Slasher), Z_Construct_UScriptStruct_FCharacterCustomizationDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Slasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Slasher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlasherLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Perks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_PowerAddonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlasherLoadout_Statics::NewProp_Slasher,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlasherLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SlasherLoadout",
		sizeof(FSlasherLoadout),
		alignof(FSlasherLoadout),
		Z_Construct_UScriptStruct_FSlasherLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlasherLoadout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlasherLoadout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlasherLoadout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlasherLoadout"), sizeof(FSlasherLoadout), Get_Z_Construct_UScriptStruct_FSlasherLoadout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlasherLoadout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlasherLoadout_Hash() { return 3858566945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
