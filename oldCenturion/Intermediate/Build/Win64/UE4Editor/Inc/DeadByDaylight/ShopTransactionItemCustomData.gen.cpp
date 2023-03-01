// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopTransactionItemCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopTransactionItemCustomData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionItemCustomData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionItemProducts();
// End Cross Module References
class UScriptStruct* FShopTransactionItemCustomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopTransactionItemCustomData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ShopTransactionItemCustomData"), sizeof(FShopTransactionItemCustomData), Get_Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FShopTransactionItemCustomData>()
{
	return FShopTransactionItemCustomData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopTransactionItemCustomData(FShopTransactionItemCustomData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ShopTransactionItemCustomData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionItemCustomData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionItemCustomData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopTransactionItemCustomData")),new UScriptStruct::TCppStructOps<FShopTransactionItemCustomData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionItemCustomData;
	struct Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemCustomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopTransactionItemCustomData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionType = { "transactionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionItemCustomData, transactionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionName = { "transactionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionItemCustomData, transactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_productsReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_productsReceived = { "productsReceived", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionItemCustomData, productsReceived), Z_Construct_UScriptStruct_FShopTransactionItemProducts, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_productsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_productsReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_transactionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::NewProp_productsReceived,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ShopTransactionItemCustomData",
		sizeof(FShopTransactionItemCustomData),
		alignof(FShopTransactionItemCustomData),
		Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionItemCustomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopTransactionItemCustomData"), sizeof(FShopTransactionItemCustomData), Get_Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopTransactionItemCustomData_Hash() { return 2617345398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
