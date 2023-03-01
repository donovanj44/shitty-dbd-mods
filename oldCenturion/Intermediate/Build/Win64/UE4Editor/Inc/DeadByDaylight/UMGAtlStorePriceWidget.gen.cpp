// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlStorePriceWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlStorePriceWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlStorePriceWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlStorePriceWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UUMGAtlStorePriceWidget::StaticRegisterNativesUUMGAtlStorePriceWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGAtlStorePriceWidget_NoRegister()
	{
		return UUMGAtlStorePriceWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlStorePriceWidget.h" },
		{ "ModuleRelativePath", "Public/UMGAtlStorePriceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::NewProp_PriceText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlStorePriceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlStorePriceWidget, PriceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::NewProp_PriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::NewProp_PriceText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::NewProp_PriceText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlStorePriceWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::ClassParams = {
		&UUMGAtlStorePriceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlStorePriceWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlStorePriceWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlStorePriceWidget, 1872900202);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlStorePriceWidget>()
	{
		return UUMGAtlStorePriceWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlStorePriceWidget(Z_Construct_UClass_UUMGAtlStorePriceWidget, &UUMGAtlStorePriceWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlStorePriceWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlStorePriceWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
