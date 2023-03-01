// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopTransactionCurrencyProducts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopTransactionCurrencyProducts() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionVirtualCurrency();
// End Cross Module References
class UScriptStruct* FShopTransactionCurrencyProducts::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ShopTransactionCurrencyProducts"), sizeof(FShopTransactionCurrencyProducts), Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FShopTransactionCurrencyProducts>()
{
	return FShopTransactionCurrencyProducts::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopTransactionCurrencyProducts(FShopTransactionCurrencyProducts::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ShopTransactionCurrencyProducts"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCurrencyProducts
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCurrencyProducts()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopTransactionCurrencyProducts")),new UScriptStruct::TCppStructOps<FShopTransactionCurrencyProducts>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCurrencyProducts;
	struct Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_virtualCurrencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_virtualCurrencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_virtualCurrencies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShopTransactionCurrencyProducts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopTransactionCurrencyProducts>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCurrencyProducts.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies = { "virtualCurrencies", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCurrencyProducts, virtualCurrencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies_Inner = { "virtualCurrencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShopTransactionVirtualCurrency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::NewProp_virtualCurrencies_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ShopTransactionCurrencyProducts",
		sizeof(FShopTransactionCurrencyProducts),
		alignof(FShopTransactionCurrencyProducts),
		Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopTransactionCurrencyProducts"), sizeof(FShopTransactionCurrencyProducts), Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts_Hash() { return 2186094105U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
