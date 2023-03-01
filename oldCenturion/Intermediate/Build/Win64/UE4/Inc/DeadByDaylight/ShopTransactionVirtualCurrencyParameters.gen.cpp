// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopTransactionVirtualCurrencyParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopTransactionVirtualCurrencyParameters() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FShopTransactionVirtualCurrencyParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ShopTransactionVirtualCurrencyParameters"), sizeof(FShopTransactionVirtualCurrencyParameters), Get_Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FShopTransactionVirtualCurrencyParameters>()
{
	return FShopTransactionVirtualCurrencyParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopTransactionVirtualCurrencyParameters(FShopTransactionVirtualCurrencyParameters::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ShopTransactionVirtualCurrencyParameters"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionVirtualCurrencyParameters
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionVirtualCurrencyParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopTransactionVirtualCurrencyParameters")),new UScriptStruct::TCppStructOps<FShopTransactionVirtualCurrencyParameters>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFShopTransactionVirtualCurrencyParameters;
	struct Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_virtualCurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_virtualCurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_virtualCurrencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_virtualCurrencyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_virtualCurrencyAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_virtualCurrencyAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShopTransactionVirtualCurrencyParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopTransactionVirtualCurrencyParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionVirtualCurrencyParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyType = { "virtualCurrencyType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionVirtualCurrencyParameters, virtualCurrencyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionVirtualCurrencyParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyName = { "virtualCurrencyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionVirtualCurrencyParameters, virtualCurrencyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShopTransactionVirtualCurrencyParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyAmount = { "virtualCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopTransactionVirtualCurrencyParameters, virtualCurrencyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::NewProp_virtualCurrencyAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ShopTransactionVirtualCurrencyParameters",
		sizeof(FShopTransactionVirtualCurrencyParameters),
		alignof(FShopTransactionVirtualCurrencyParameters),
		Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopTransactionVirtualCurrencyParameters"), sizeof(FShopTransactionVirtualCurrencyParameters), Get_Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopTransactionVirtualCurrencyParameters_Hash() { return 3611777547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
