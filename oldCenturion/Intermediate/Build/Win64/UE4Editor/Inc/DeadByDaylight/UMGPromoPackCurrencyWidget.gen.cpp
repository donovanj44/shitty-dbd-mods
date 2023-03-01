// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPromoPackCurrencyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPromoPackCurrencyWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackCurrencyWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackCurrencyWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackItemWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGPromoPackCurrencyWidget::StaticRegisterNativesUUMGPromoPackCurrencyWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGPromoPackCurrencyWidget_NoRegister()
	{
		return UUMGPromoPackCurrencyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGPromoPackItemWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPromoPackCurrencyWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPromoPackCurrencyWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPromoPackCurrencyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::ClassParams = {
		&UUMGPromoPackCurrencyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPromoPackCurrencyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPromoPackCurrencyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPromoPackCurrencyWidget, 2261666069);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPromoPackCurrencyWidget>()
	{
		return UUMGPromoPackCurrencyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPromoPackCurrencyWidget(Z_Construct_UClass_UUMGPromoPackCurrencyWidget, &UUMGPromoPackCurrencyWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPromoPackCurrencyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPromoPackCurrencyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
