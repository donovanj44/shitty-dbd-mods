// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopTransactionCurrencyCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopTransactionCurrencyCustomData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts();
// End Cross Module References
class UScriptStruct* FShopTransactionCurrencyCustomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ShopTransactionCurrencyCustomData"), sizeof(FShopTransactionCurrencyCustomData), Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FShopTransactionCurrencyCustomData>()
{
	return FShopTransactionCurrencyCustomData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopTransactionCurrencyCustomData(FShopTransactionCurrencyCustomData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ShopTransactionCurrencyCustomData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCurrencyCustomData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCurrencyCustomData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopTransactionCurrencyCustomData")),new UScriptStruct::TCppStructOps<FShopTransactionCurrencyCustomData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCurrencyCustomData;
	struct Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transactionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transactionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transactionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_productsReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_productsReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCurrencyCustomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopTransactionCurrencyCustomData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCurrencyCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionType = { "transactionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCurrencyCustomData, transactionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCurrencyCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionName = { "transactionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCurrencyCustomData, transactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_productsReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCurrencyCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_productsReceived = { "productsReceived", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCurrencyCustomData, productsReceived), Z_Construct_UScriptStruct_FShopTransactionCurrencyProducts, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_productsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_productsReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_transactionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::NewProp_productsReceived,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ShopTransactionCurrencyCustomData",
		sizeof(FShopTransactionCurrencyCustomData),
		alignof(FShopTransactionCurrencyCustomData),
		Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopTransactionCurrencyCustomData"), sizeof(FShopTransactionCurrencyCustomData), Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCurrencyCustomData_Hash() { return 2111839901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
