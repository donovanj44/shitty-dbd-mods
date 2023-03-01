// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPromoPackCharacterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPromoPackCharacterWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackCharacterWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackCharacterWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPromoPackItemWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void UUMGPromoPackCharacterWidget::StaticRegisterNativesUUMGPromoPackCharacterWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGPromoPackCharacterWidget_NoRegister()
	{
		return UUMGPromoPackCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGPromoPackItemWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPromoPackCharacterWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPromoPackCharacterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::NewProp_OwnedPanel_MetaData[] = {
		{ "Category", "UMGPromoPackCharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPromoPackCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::NewProp_OwnedPanel = { "OwnedPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPromoPackCharacterWidget, OwnedPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::NewProp_OwnedPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::NewProp_OwnedPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::NewProp_OwnedPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPromoPackCharacterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::ClassParams = {
		&UUMGPromoPackCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPromoPackCharacterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPromoPackCharacterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPromoPackCharacterWidget, 2122351806);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPromoPackCharacterWidget>()
	{
		return UUMGPromoPackCharacterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPromoPackCharacterWidget(Z_Construct_UClass_UUMGPromoPackCharacterWidget, &UUMGPromoPackCharacterWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPromoPackCharacterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPromoPackCharacterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
