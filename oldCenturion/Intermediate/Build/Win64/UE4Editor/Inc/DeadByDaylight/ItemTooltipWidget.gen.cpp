// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemTooltipWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemTooltipWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlRichText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UItemTooltipWidget::StaticRegisterNativesUItemTooltipWidget()
	{
	}
	UClass* Z_Construct_UClass_UItemTooltipWidget_NoRegister()
	{
		return UItemTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeaderBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderSmoke_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeaderSmoke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WarningText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/ItemTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderBackground_MetaData[] = {
		{ "Category", "ItemTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderBackground = { "HeaderBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemTooltipWidget, HeaderBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderSmoke_MetaData[] = {
		{ "Category", "ItemTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderSmoke = { "HeaderSmoke", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemTooltipWidget, HeaderSmoke), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderSmoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderSmoke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_WarningText_MetaData[] = {
		{ "Category", "ItemTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_WarningText = { "WarningText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemTooltipWidget, WarningText), Z_Construct_UClass_UUMGHtmlRichText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_WarningText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_WarningText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_RarityLabel_MetaData[] = {
		{ "Category", "ItemTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_RarityLabel = { "RarityLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemTooltipWidget, RarityLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_RarityLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_RarityLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_HeaderSmoke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_WarningText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemTooltipWidget_Statics::NewProp_RarityLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemTooltipWidget_Statics::ClassParams = {
		&UItemTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltipWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItemTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemTooltipWidget, 2786069889);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemTooltipWidget>()
	{
		return UItemTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemTooltipWidget(Z_Construct_UClass_UItemTooltipWidget, &UItemTooltipWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
