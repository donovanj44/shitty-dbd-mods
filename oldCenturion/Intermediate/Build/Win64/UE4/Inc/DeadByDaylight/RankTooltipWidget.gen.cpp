// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RankTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankTooltipWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URankTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URankTooltipWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerRankInfo_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void URankTooltipWidget::StaticRegisterNativesURankTooltipWidget()
	{
	}
	UClass* Z_Construct_UClass_URankTooltipWidget_NoRegister()
	{
		return URankTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_URankTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerRankInfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerRankInfoWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRankInfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurvivorRankInfoWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankInfoSlotsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankInfoSlotsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetInfoLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetInfoLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankInfoLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankInfoLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URankTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTooltipWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RankTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/RankTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_KillerRankInfoWidget_MetaData[] = {
		{ "Category", "RankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_KillerRankInfoWidget = { "KillerRankInfoWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URankTooltipWidget, KillerRankInfoWidget), Z_Construct_UClass_UUMGPlayerRankInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_KillerRankInfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_KillerRankInfoWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_SurvivorRankInfoWidget_MetaData[] = {
		{ "Category", "RankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_SurvivorRankInfoWidget = { "SurvivorRankInfoWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URankTooltipWidget, SurvivorRankInfoWidget), Z_Construct_UClass_UUMGPlayerRankInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_SurvivorRankInfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_SurvivorRankInfoWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoSlotsContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoSlotsContainer = { "RankInfoSlotsContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URankTooltipWidget, RankInfoSlotsContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoSlotsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoSlotsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_ResetInfoLabel_MetaData[] = {
		{ "Category", "RankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_ResetInfoLabel = { "ResetInfoLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URankTooltipWidget, ResetInfoLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_ResetInfoLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_ResetInfoLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoLabel_MetaData[] = {
		{ "Category", "RankTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RankTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoLabel = { "RankInfoLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URankTooltipWidget, RankInfoLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URankTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_KillerRankInfoWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_SurvivorRankInfoWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoSlotsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_ResetInfoLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URankTooltipWidget_Statics::NewProp_RankInfoLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URankTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URankTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URankTooltipWidget_Statics::ClassParams = {
		&URankTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URankTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URankTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URankTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URankTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URankTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URankTooltipWidget, 3597086076);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URankTooltipWidget>()
	{
		return URankTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URankTooltipWidget(Z_Construct_UClass_URankTooltipWidget, &URankTooltipWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URankTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URankTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
