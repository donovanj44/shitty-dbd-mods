// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CurrencyConversion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyConversion() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyConversion();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
class UScriptStruct* FCurrencyConversion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyConversion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyConversion, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CurrencyConversion"), sizeof(FCurrencyConversion), Get_Z_Construct_UScriptStruct_FCurrencyConversion_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCurrencyConversion>()
{
	return FCurrencyConversion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyConversion(FCurrencyConversion::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CurrencyConversion"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCurrencyConversion
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCurrencyConversion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurrencyConversion")),new UScriptStruct::TCppStructOps<FCurrencyConversion>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCurrencyConversion;
	struct Z_Construct_UScriptStruct_FCurrencyConversion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountInOtherCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AmountInOtherCurrency;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmountInOtherCurrency_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmountInOtherCurrency_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountInOtherCurrency_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyConversion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyConversion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyConversion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_MetaData[] = {
		{ "Category", "CurrencyConversion" },
		{ "ModuleRelativePath", "Public/CurrencyConversion.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency = { "AmountInOtherCurrency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyConversion, AmountInOtherCurrency), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_Key_KeyProp = { "AmountInOtherCurrency_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_ValueProp = { "AmountInOtherCurrency", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyConversion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyConversion_Statics::NewProp_AmountInOtherCurrency_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyConversion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CurrencyConversion",
		sizeof(FCurrencyConversion),
		alignof(FCurrencyConversion),
		Z_Construct_UScriptStruct_FCurrencyConversion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyConversion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyConversion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyConversion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyConversion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyConversion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyConversion"), sizeof(FCurrencyConversion), Get_Z_Construct_UScriptStruct_FCurrencyConversion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyConversion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyConversion_Hash() { return 4235284384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
