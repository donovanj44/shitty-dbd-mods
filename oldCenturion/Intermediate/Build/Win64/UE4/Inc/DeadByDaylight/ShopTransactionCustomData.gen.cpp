// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopTransactionCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopTransactionCustomData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCustomData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionProducts();
// End Cross Module References
class UScriptStruct* FShopTransactionCustomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCustomData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopTransactionCustomData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ShopTransactionCustomData"), sizeof(FShopTransactionCustomData), Get_Z_Construct_UScriptStruct_FShopTransactionCustomData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FShopTransactionCustomData>()
{
	return FShopTransactionCustomData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopTransactionCustomData(FShopTransactionCustomData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ShopTransactionCustomData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCustomData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCustomData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopTransactionCustomData")),new UScriptStruct::TCppStructOps<FShopTransactionCustomData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionCustomData;
	struct Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCustomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopTransactionCustomData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionType = { "transactionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCustomData, transactionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionName = { "transactionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCustomData, transactionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_productsReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_productsReceived = { "productsReceived", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionCustomData, productsReceived), Z_Construct_UScriptStruct_FShopTransactionProducts, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_productsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_productsReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_transactionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::NewProp_productsReceived,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ShopTransactionCustomData",
		sizeof(FShopTransactionCustomData),
		alignof(FShopTransactionCustomData),
		Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionCustomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCustomData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopTransactionCustomData"), sizeof(FShopTransactionCustomData), Get_Z_Construct_UScriptStruct_FShopTransactionCustomData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopTransactionCustomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopTransactionCustomData_Hash() { return 2561257389U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
