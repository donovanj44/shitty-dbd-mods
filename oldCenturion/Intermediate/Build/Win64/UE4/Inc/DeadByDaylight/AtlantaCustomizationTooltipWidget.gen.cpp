// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaCustomizationTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaCustomizationTooltipWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaCustomizationTooltipWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationTooltipContentWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UAtlantaCustomizationTooltipWidget::StaticRegisterNativesUAtlantaCustomizationTooltipWidget()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_NoRegister()
	{
		return UAtlantaCustomizationTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmokeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmokeImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaCustomizationTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/AtlantaCustomizationTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "AtlantaCustomizationTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaCustomizationTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaCustomizationTooltipWidget, Content), Z_Construct_UClass_UUMGCustomizationTooltipContentWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Header_MetaData[] = {
		{ "Category", "AtlantaCustomizationTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaCustomizationTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaCustomizationTooltipWidget, Header), Z_Construct_UClass_UUMGCustomizationTooltipHeaderWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_SmokeImage_MetaData[] = {
		{ "Category", "AtlantaCustomizationTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaCustomizationTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_SmokeImage = { "SmokeImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaCustomizationTooltipWidget, SmokeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_SmokeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_SmokeImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::NewProp_SmokeImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaCustomizationTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::ClassParams = {
		&UAtlantaCustomizationTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaCustomizationTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaCustomizationTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaCustomizationTooltipWidget, 1761081325);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaCustomizationTooltipWidget>()
	{
		return UAtlantaCustomizationTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaCustomizationTooltipWidget(Z_Construct_UClass_UAtlantaCustomizationTooltipWidget, &UAtlantaCustomizationTooltipWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaCustomizationTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaCustomizationTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
