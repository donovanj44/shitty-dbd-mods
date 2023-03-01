// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCustomizationItemBuyButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCustomizationItemBuyButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemBuyButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemBuyButton();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemPriceWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCustomizationItemBuyButton::execBroadcastUnlockWithCurrency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastUnlockWithCurrency();
		P_NATIVE_END;
	}
	void UUMGCustomizationItemBuyButton::StaticRegisterNativesUUMGCustomizationItemBuyButton()
	{
		UClass* Class = UUMGCustomizationItemBuyButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastUnlockWithCurrency", &UUMGCustomizationItemBuyButton::execBroadcastUnlockWithCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationItemBuyButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationItemBuyButton, nullptr, "BroadcastUnlockWithCurrency", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCustomizationItemBuyButton_NoRegister()
	{
		return UUMGCustomizationItemBuyButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__enabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__enabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disabledOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__disabledOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyStripeColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__currencyStripeColors;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currencyStripeColors_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currencyStripeColors_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currencyStripeColors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyColorStripe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyColorStripe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGCustomizationItemPriceWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCustomizationItemBuyButton_BroadcastUnlockWithCurrency, "BroadcastUnlockWithCurrency" }, // 529192483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCustomizationItemBuyButton.h" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemBuyButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__enabledOpacity_MetaData[] = {
		{ "Category", "UMGCustomizationItemBuyButton" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemBuyButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__enabledOpacity = { "_enabledOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemBuyButton, _enabledOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__enabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__enabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__disabledOpacity_MetaData[] = {
		{ "Category", "UMGCustomizationItemBuyButton" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemBuyButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__disabledOpacity = { "_disabledOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemBuyButton, _disabledOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__disabledOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__disabledOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_MetaData[] = {
		{ "Category", "UMGCustomizationItemBuyButton" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemBuyButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors = { "_currencyStripeColors", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemBuyButton, _currencyStripeColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_Key_KeyProp = { "_currencyStripeColors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_ValueProp = { "_currencyStripeColors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp_CurrencyColorStripe_MetaData[] = {
		{ "Category", "UMGCustomizationItemBuyButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemBuyButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp_CurrencyColorStripe = { "CurrencyColorStripe", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemBuyButton, CurrencyColorStripe), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp_CurrencyColorStripe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp_CurrencyColorStripe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__enabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__disabledOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp__currencyStripeColors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::NewProp_CurrencyColorStripe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCustomizationItemBuyButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::ClassParams = {
		&UUMGCustomizationItemBuyButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCustomizationItemBuyButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCustomizationItemBuyButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCustomizationItemBuyButton, 881699336);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCustomizationItemBuyButton>()
	{
		return UUMGCustomizationItemBuyButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCustomizationItemBuyButton(Z_Construct_UClass_UUMGCustomizationItemBuyButton, &UUMGCustomizationItemBuyButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCustomizationItemBuyButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCustomizationItemBuyButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
