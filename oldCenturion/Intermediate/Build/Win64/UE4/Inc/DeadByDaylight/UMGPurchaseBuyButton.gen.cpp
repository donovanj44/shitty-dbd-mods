// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPurchaseBuyButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPurchaseBuyButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseBuyButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseBuyButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UUMGPurchaseBuyButton::StaticRegisterNativesUUMGPurchaseBuyButton()
	{
	}
	UClass* Z_Construct_UClass_UUMGPurchaseBuyButton_NoRegister()
	{
		return UUMGPurchaseBuyButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPurchaseBuyButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPurchaseBuyButton.h" },
		{ "ModuleRelativePath", "Public/UMGPurchaseBuyButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::NewProp_PriceText_MetaData[] = {
		{ "Category", "UMGPurchaseBuyButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPurchaseBuyButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPurchaseBuyButton, PriceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::NewProp_PriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::NewProp_PriceText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::NewProp_PriceText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPurchaseBuyButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::ClassParams = {
		&UUMGPurchaseBuyButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPurchaseBuyButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPurchaseBuyButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPurchaseBuyButton, 2442945696);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPurchaseBuyButton>()
	{
		return UUMGPurchaseBuyButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPurchaseBuyButton(Z_Construct_UClass_UUMGPurchaseBuyButton, &UUMGPurchaseBuyButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPurchaseBuyButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPurchaseBuyButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
