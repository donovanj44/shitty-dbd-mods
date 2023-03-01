// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacySavedBloodwebChest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacySavedBloodwebChest() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodwebChest();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
// End Cross Module References
class UScriptStruct* FLegacySavedBloodwebChest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacySavedBloodwebChest"), sizeof(FLegacySavedBloodwebChest), Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacySavedBloodwebChest>()
{
	return FLegacySavedBloodwebChest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacySavedBloodwebChest(FLegacySavedBloodwebChest::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacySavedBloodwebChest"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodwebChest
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodwebChest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacySavedBloodwebChest")),new UScriptStruct::TCppStructOps<FLegacySavedBloodwebChest>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodwebChest;
	struct Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GivenItemRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GivenItemRarity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GivenItemRarity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebChest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacySavedBloodwebChest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity = { "GivenItemRarity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebChest, GivenItemRarity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity_Inner = { "GivenItemRarity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebChest, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_EventID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebChest, EventID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_EventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_EventID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodwebChest, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_GivenItemRarity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_EventID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacySavedBloodwebChest",
		sizeof(FLegacySavedBloodwebChest),
		alignof(FLegacySavedBloodwebChest),
		Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodwebChest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacySavedBloodwebChest"), sizeof(FLegacySavedBloodwebChest), Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodwebChest_Hash() { return 2361215553U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
