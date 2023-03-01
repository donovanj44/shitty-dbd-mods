// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebChest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebChest() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebChest();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodchestType();
// End Cross Module References
class UScriptStruct* FBloodwebChest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebChest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebChest, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebChest"), sizeof(FBloodwebChest), Get_Z_Construct_UScriptStruct_FBloodwebChest_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebChest>()
{
	return FBloodwebChest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebChest(FBloodwebChest::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebChest"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebChest
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebChest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebChest")),new UScriptStruct::TCppStructOps<FBloodwebChest>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebChest;
	struct Z_Construct_UScriptStruct_FBloodwebChest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChestType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChestType_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebChest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebChest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebChest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity_MetaData[] = {
		{ "Category", "BloodwebChest" },
		{ "ModuleRelativePath", "Public/BloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity = { "GivenItemRarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebChest, GivenItemRarity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity_Inner = { "GivenItemRarity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "BloodwebChest" },
		{ "ModuleRelativePath", "Public/BloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebChest, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType_MetaData[] = {
		{ "Category", "BloodwebChest" },
		{ "ModuleRelativePath", "Public/BloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType = { "ChestType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebChest, ChestType), Z_Construct_UEnum_DeadByDaylight_EBloodchestType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_EventID_MetaData[] = {
		{ "Category", "BloodwebChest" },
		{ "ModuleRelativePath", "Public/BloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebChest, EventID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_EventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_EventID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "BloodwebChest" },
		{ "ModuleRelativePath", "Public/BloodwebChest.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebChest, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebChest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_GivenItemRarity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ChestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_EventID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebChest_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebChest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebChest",
		sizeof(FBloodwebChest),
		alignof(FBloodwebChest),
		Z_Construct_UScriptStruct_FBloodwebChest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebChest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebChest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebChest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebChest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebChest"), sizeof(FBloodwebChest), Get_Z_Construct_UScriptStruct_FBloodwebChest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebChest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebChest_Hash() { return 2308990448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
