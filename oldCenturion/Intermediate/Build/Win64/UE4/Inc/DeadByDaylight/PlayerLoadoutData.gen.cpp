// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerLoadoutData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLoadoutData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FPlayerLoadoutData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerLoadoutData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLoadoutData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerLoadoutData"), sizeof(FPlayerLoadoutData), Get_Z_Construct_UScriptStruct_FPlayerLoadoutData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerLoadoutData>()
{
	return FPlayerLoadoutData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerLoadoutData(FPlayerLoadoutData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerLoadoutData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLoadoutData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLoadoutData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerLoadoutData")),new UScriptStruct::TCppStructOps<FPlayerLoadoutData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerLoadoutData;
	struct Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherFavor_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlasherFavor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherPerkLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlasherPerkLevels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlasherPerkLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlasherPerks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlasherPerks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerAddOns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PowerAddOns;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PowerAddOns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperFavor_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CamperFavor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperPerkLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CamperPerkLevels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamperPerkLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CamperPerks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CamperPerks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAddOns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemAddOns;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemAddOns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLoadoutData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherFavor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherFavor = { "SlasherFavor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, SlasherFavor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherFavor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherFavor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels = { "SlasherPerkLevels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, SlasherPerkLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels_Inner = { "SlasherPerkLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks = { "SlasherPerks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, SlasherPerks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks_Inner = { "SlasherPerks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns = { "PowerAddOns", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, PowerAddOns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns_Inner = { "PowerAddOns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Power_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperFavor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperFavor = { "CamperFavor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, CamperFavor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperFavor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperFavor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels = { "CamperPerkLevels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, CamperPerkLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels_Inner = { "CamperPerkLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks = { "CamperPerks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, CamperPerks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks_Inner = { "CamperPerks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns = { "ItemAddOns", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, ItemAddOns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns_Inner = { "ItemAddOns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerLoadoutData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLoadoutData, Item), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherFavor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerkLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_SlasherPerks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_PowerAddOns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperFavor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerkLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_CamperPerks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_ItemAddOns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerLoadoutData",
		sizeof(FPlayerLoadoutData),
		alignof(FPlayerLoadoutData),
		Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerLoadoutData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerLoadoutData"), sizeof(FPlayerLoadoutData), Get_Z_Construct_UScriptStruct_FPlayerLoadoutData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerLoadoutData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerLoadoutData_Hash() { return 2948575899U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
