// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemAddonInitializationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAddonInitializationData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddonInitializationData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType();
// End Cross Module References
class UScriptStruct* FItemAddonInitializationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FItemAddonInitializationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddonInitializationData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ItemAddonInitializationData"), sizeof(FItemAddonInitializationData), Get_Z_Construct_UScriptStruct_FItemAddonInitializationData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FItemAddonInitializationData>()
{
	return FItemAddonInitializationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemAddonInitializationData(FItemAddonInitializationData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ItemAddonInitializationData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAddonInitializationData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAddonInitializationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemAddonInitializationData")),new UScriptStruct::TCppStructOps<FItemAddonInitializationData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAddonInitializationData;
	struct Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityDataSet_MetaData[];
#endif
		static void NewProp_AuthorityDataSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuthorityDataSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InventoryItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InventoryItemType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemAddonInitializationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddonInitializationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemAddonInitializationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet_SetBit(void* Obj)
	{
		((FItemAddonInitializationData*)Obj)->AuthorityDataSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet = { "AuthorityDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemAddonInitializationData), &Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemAddonInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType = { "InventoryItemType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddonInitializationData, InventoryItemType), Z_Construct_UEnum_DeadByDaylight_EInventoryItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_AuthorityDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::NewProp_InventoryItemType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ItemAddonInitializationData",
		sizeof(FItemAddonInitializationData),
		alignof(FItemAddonInitializationData),
		Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemAddonInitializationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemAddonInitializationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemAddonInitializationData"), sizeof(FItemAddonInitializationData), Get_Z_Construct_UScriptStruct_FItemAddonInitializationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemAddonInitializationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemAddonInitializationData_Hash() { return 4184028250U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
