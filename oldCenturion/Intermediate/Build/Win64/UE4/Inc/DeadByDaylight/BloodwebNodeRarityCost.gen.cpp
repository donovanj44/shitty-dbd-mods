// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebNodeRarityCost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebNodeRarityCost() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNodeRarityCost();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
// End Cross Module References
class UScriptStruct* FBloodwebNodeRarityCost::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebNodeRarityCost"), sizeof(FBloodwebNodeRarityCost), Get_Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebNodeRarityCost>()
{
	return FBloodwebNodeRarityCost::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebNodeRarityCost(FBloodwebNodeRarityCost::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebNodeRarityCost"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNodeRarityCost
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNodeRarityCost()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebNodeRarityCost")),new UScriptStruct::TCppStructOps<FBloodwebNodeRarityCost>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNodeRarityCost;
	struct Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodwebNodeRarityCost.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebNodeRarityCost>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "BloodwebNodeRarityCost" },
		{ "ModuleRelativePath", "Public/BloodwebNodeRarityCost.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNodeRarityCost, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "BloodwebNodeRarityCost" },
		{ "ModuleRelativePath", "Public/BloodwebNodeRarityCost.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNodeRarityCost, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::NewProp_Rarity_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodwebNodeRarityCost",
		sizeof(FBloodwebNodeRarityCost),
		alignof(FBloodwebNodeRarityCost),
		Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNodeRarityCost()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebNodeRarityCost"), sizeof(FBloodwebNodeRarityCost), Get_Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebNodeRarityCost_Hash() { return 27360858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
