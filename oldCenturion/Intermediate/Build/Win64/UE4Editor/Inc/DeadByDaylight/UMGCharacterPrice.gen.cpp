// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterPrice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterPrice() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrice_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrice();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseCurrencyData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterPrice::execSetCurrencyData)
	{
		P_GET_STRUCT_REF(FPurchaseCurrencyData,Z_Param_Out_currencyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrencyData(Z_Param_Out_currencyData);
		P_NATIVE_END;
	}
	void UUMGCharacterPrice::StaticRegisterNativesUUMGCharacterPrice()
	{
		UClass* Class = UUMGCharacterPrice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrencyData", &UUMGCharacterPrice::execSetCurrencyData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics
	{
		struct UMGCharacterPrice_eventSetCurrencyData_Parms
		{
			FPurchaseCurrencyData currencyData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currencyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::NewProp_currencyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::NewProp_currencyData = { "currencyData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterPrice_eventSetCurrencyData_Parms, currencyData), Z_Construct_UScriptStruct_FPurchaseCurrencyData, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::NewProp_currencyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::NewProp_currencyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::NewProp_currencyData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterPrice, nullptr, "SetCurrencyData", nullptr, nullptr, sizeof(UMGCharacterPrice_eventSetCurrencyData_Parms), Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterPrice_NoRegister()
	{
		return UUMGCharacterPrice::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterPrice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnaffordableColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnaffordableColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffordableColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffordableColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterPrice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterPrice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterPrice_SetCurrencyData, "SetCurrencyData" }, // 3357632705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterPrice.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_UnaffordableColor_MetaData[] = {
		{ "Category", "UMGCharacterPrice" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_UnaffordableColor = { "UnaffordableColor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPrice, UnaffordableColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_UnaffordableColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_UnaffordableColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_AffordableColor_MetaData[] = {
		{ "Category", "UMGCharacterPrice" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_AffordableColor = { "AffordableColor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPrice, AffordableColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_AffordableColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_AffordableColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_PriceTextBlock_MetaData[] = {
		{ "Category", "UMGCharacterPrice" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_PriceTextBlock = { "PriceTextBlock", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPrice, PriceTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_PriceTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_PriceTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCharacterPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_UnaffordableColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_AffordableColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPrice_Statics::NewProp_PriceTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterPrice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterPrice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterPrice_Statics::ClassParams = {
		&UUMGCharacterPrice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCharacterPrice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrice_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterPrice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterPrice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterPrice, 2095225494);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterPrice>()
	{
		return UUMGCharacterPrice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterPrice(Z_Construct_UClass_UUMGCharacterPrice, &UUMGCharacterPrice::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterPrice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterPrice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
