// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGMonthlyPassCurrencyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGMonthlyPassCurrencyWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMonthlyPassRewardItemWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UUMGMonthlyPassCurrencyWidget::StaticRegisterNativesUUMGMonthlyPassCurrencyWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_NoRegister()
	{
		return UUMGMonthlyPassCurrencyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGMonthlyPassRewardItemWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGMonthlyPassCurrencyWidget.h" },
		{ "ModuleRelativePath", "Public/UMGMonthlyPassCurrencyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::NewProp_CurrencyBackground_MetaData[] = {
		{ "Category", "UMGMonthlyPassCurrencyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMonthlyPassCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::NewProp_CurrencyBackground = { "CurrencyBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMonthlyPassCurrencyWidget, CurrencyBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::NewProp_CurrencyBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::NewProp_CurrencyBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::NewProp_CurrencyBackground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGMonthlyPassCurrencyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::ClassParams = {
		&UUMGMonthlyPassCurrencyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGMonthlyPassCurrencyWidget, 3559278128);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGMonthlyPassCurrencyWidget>()
	{
		return UUMGMonthlyPassCurrencyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGMonthlyPassCurrencyWidget(Z_Construct_UClass_UUMGMonthlyPassCurrencyWidget, &UUMGMonthlyPassCurrencyWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGMonthlyPassCurrencyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGMonthlyPassCurrencyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
