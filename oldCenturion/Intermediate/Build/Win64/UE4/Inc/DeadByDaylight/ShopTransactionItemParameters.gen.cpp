// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopTransactionItemParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopTransactionItemParameters() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionItemParameters();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FShopTransactionItemParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FShopTransactionItemParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopTransactionItemParameters, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ShopTransactionItemParameters"), sizeof(FShopTransactionItemParameters), Get_Z_Construct_UScriptStruct_FShopTransactionItemParameters_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FShopTransactionItemParameters>()
{
	return FShopTransactionItemParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopTransactionItemParameters(FShopTransactionItemParameters::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ShopTransactionItemParameters"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionItemParameters
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionItemParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopTransactionItemParameters")),new UScriptStruct::TCppStructOps<FShopTransactionItemParameters>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionItemParameters;
	struct Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShopTransactionItemParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopTransactionItemParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemType = { "itemType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionItemParameters, itemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemName = { "itemName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionItemParameters, itemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionItemParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemAmount = { "itemAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionItemParameters, itemAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::NewProp_itemAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ShopTransactionItemParameters",
		sizeof(FShopTransactionItemParameters),
		alignof(FShopTransactionItemParameters),
		Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionItemParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopTransactionItemParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopTransactionItemParameters"), sizeof(FShopTransactionItemParameters), Get_Z_Construct_UScriptStruct_FShopTransactionItemParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopTransactionItemParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopTransactionItemParameters_Hash() { return 873957391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
