// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCustomizationItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCustomizationItemWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemPriceWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCustomizationItemWidget::execBroadcastAvailableItemSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastAvailableItemSelected();
		P_NATIVE_END;
	}
	void UUMGCustomizationItemWidget::StaticRegisterNativesUUMGCustomizationItemWidget()
	{
		UClass* Class = UUMGCustomizationItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastAvailableItemSelected", &UUMGCustomizationItemWidget::execBroadcastAvailableItemSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationItemWidget, nullptr, "BroadcastAvailableItemSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister()
	{
		return UUMGCustomizationItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCustomizationItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__itemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__itemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__priceWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__priceWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__priceWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemPriceWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__customizationItemPriceWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSelectedBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSelectedBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PricesContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PricesContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutfitIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaintOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityBackground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCustomizationItemWidget_BroadcastAvailableItemSelected, "BroadcastAvailableItemSelected" }, // 3855374628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCustomizationItemWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemId = { "_itemId", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, _itemId), METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemIndex = { "_itemIndex", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, _itemIndex), METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets = { "_priceWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, _priceWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets_Inner = { "_priceWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGCustomizationItemPriceWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__customizationItemPriceWidgetClass_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__customizationItemPriceWidgetClass = { "_customizationItemPriceWidgetClass", nullptr, (EPropertyFlags)0x0024080002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, _customizationItemPriceWidgetClass), Z_Construct_UClass_UUMGCustomizationItemPriceWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__customizationItemPriceWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__customizationItemPriceWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_EquippedContainer_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_EquippedContainer = { "EquippedContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, EquippedContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_EquippedContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_EquippedContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_ItemSelectedBorder_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_ItemSelectedBorder = { "ItemSelectedBorder", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, ItemSelectedBorder), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_ItemSelectedBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_ItemSelectedBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PricesContainer_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PricesContainer = { "PricesContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, PricesContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PricesContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PricesContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_OutfitIndicator_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_OutfitIndicator = { "OutfitIndicator", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, OutfitIndicator), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_OutfitIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_OutfitIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_NewIndicator_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_NewIndicator = { "NewIndicator", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, NewIndicator), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_NewIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_NewIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PaintOverlay_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PaintOverlay = { "PaintOverlay", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, PaintOverlay), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PaintOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PaintOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_RarityBackground_MetaData[] = {
		{ "Category", "UMGCustomizationItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_RarityBackground = { "RarityBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationItemWidget, RarityBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_RarityBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_RarityBackground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__itemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__priceWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp__customizationItemPriceWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_EquippedContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_ItemSelectedBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PricesContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_OutfitIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_NewIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_PaintOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::NewProp_RarityBackground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCustomizationItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::ClassParams = {
		&UUMGCustomizationItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCustomizationItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCustomizationItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCustomizationItemWidget, 112963314);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCustomizationItemWidget>()
	{
		return UUMGCustomizationItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCustomizationItemWidget(Z_Construct_UClass_UUMGCustomizationItemWidget, &UUMGCustomizationItemWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCustomizationItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCustomizationItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
