// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PurchaseCurrencyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchaseCurrencyData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCurrencyData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
class UScriptStruct* FPurchaseCurrencyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPurchaseCurrencyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseCurrencyData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PurchaseCurrencyData"), sizeof(FPurchaseCurrencyData), Get_Z_Construct_UScriptStruct_FPurchaseCurrencyData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPurchaseCurrencyData>()
{
	return FPurchaseCurrencyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchaseCurrencyData(FPurchaseCurrencyData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PurchaseCurrencyData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPurchaseCurrencyData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPurchaseCurrencyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchaseCurrencyData")),new UScriptStruct::TCppStructOps<FPurchaseCurrencyData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPurchaseCurrencyData;
	struct Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAffordable_MetaData[];
#endif
		static void NewProp_IsAffordable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAffordable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiscountPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PurchaseCurrencyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseCurrencyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable_MetaData[] = {
		{ "Category", "PurchaseCurrencyData" },
		{ "ModuleRelativePath", "Public/PurchaseCurrencyData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable_SetBit(void* Obj)
	{
		((FPurchaseCurrencyData*)Obj)->IsAffordable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable = { "IsAffordable", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPurchaseCurrencyData), &Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_DiscountPercentage_MetaData[] = {
		{ "Category", "PurchaseCurrencyData" },
		{ "ModuleRelativePath", "Public/PurchaseCurrencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_DiscountPercentage = { "DiscountPercentage", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseCurrencyData, DiscountPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_DiscountPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_DiscountPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "PurchaseCurrencyData" },
		{ "ModuleRelativePath", "Public/PurchaseCurrencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseCurrencyData, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "Category", "PurchaseCurrencyData" },
		{ "ModuleRelativePath", "Public/PurchaseCurrencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseCurrencyData, CurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_IsAffordable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_DiscountPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::NewProp_CurrencyType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PurchaseCurrencyData",
		sizeof(FPurchaseCurrencyData),
		alignof(FPurchaseCurrencyData),
		Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCurrencyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchaseCurrencyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchaseCurrencyData"), sizeof(FPurchaseCurrencyData), Get_Z_Construct_UScriptStruct_FPurchaseCurrencyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurchaseCurrencyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchaseCurrencyData_Hash() { return 2195192029U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
