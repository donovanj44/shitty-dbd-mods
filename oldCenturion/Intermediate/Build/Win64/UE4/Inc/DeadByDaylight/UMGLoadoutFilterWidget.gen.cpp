// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLoadoutFilterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLoadoutFilterWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutFilterWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutFilterWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutFilterButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventUMGLoadoutFilterWidgetOnLoadoutFilterClicked_Parms
		{
			FName filterName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_filterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::NewProp_filterName = { "filterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventUMGLoadoutFilterWidgetOnLoadoutFilterClicked_Parms, filterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::NewProp_filterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventUMGLoadoutFilterWidgetOnLoadoutFilterClicked_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGLoadoutFilterWidget::execClearSelectedFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSelectedFilter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLoadoutFilterWidget::execInitFilterWidget)
	{
		P_GET_TMAP_REF(FName,TSoftObjectPtr<UTexture2D>,Z_Param_Out_filtersInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFilterWidget(Z_Param_Out_filtersInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLoadoutFilterWidget::execOnFilterButtonClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_filterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilterButtonClicked(Z_Param_filterName);
		P_NATIVE_END;
	}
	void UUMGLoadoutFilterWidget::StaticRegisterNativesUUMGLoadoutFilterWidget()
	{
		UClass* Class = UUMGLoadoutFilterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSelectedFilter", &UUMGLoadoutFilterWidget::execClearSelectedFilter },
			{ "InitFilterWidget", &UUMGLoadoutFilterWidget::execInitFilterWidget },
			{ "OnFilterButtonClicked", &UUMGLoadoutFilterWidget::execOnFilterButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterWidget, nullptr, "ClearSelectedFilter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics
	{
		struct UMGLoadoutFilterWidget_eventInitFilterWidget_Parms
		{
			TMap<FName,TSoftObjectPtr<UTexture2D> > filtersInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filtersInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_filtersInfo;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_filtersInfo_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_filtersInfo_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo = { "filtersInfo", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutFilterWidget_eventInitFilterWidget_Parms, filtersInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_Key_KeyProp = { "filtersInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_ValueProp = { "filtersInfo", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::NewProp_filtersInfo_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterWidget, nullptr, "InitFilterWidget", nullptr, nullptr, sizeof(UMGLoadoutFilterWidget_eventInitFilterWidget_Parms), Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics
	{
		struct UMGLoadoutFilterWidget_eventOnFilterButtonClicked_Parms
		{
			FName filterName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_filterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::NewProp_filterName = { "filterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutFilterWidget_eventOnFilterButtonClicked_Parms, filterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::NewProp_filterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutFilterWidget, nullptr, "OnFilterButtonClicked", nullptr, nullptr, sizeof(UMGLoadoutFilterWidget_eventOnFilterButtonClicked_Parms), Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLoadoutFilterWidget_NoRegister()
	{
		return UUMGLoadoutFilterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedFilterButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedFilterButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilterButtons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FilterButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterContainerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FilterContainerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaLoadoutFilterButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AtlantaLoadoutFilterButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadoutFilterClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadoutFilterClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLoadoutFilterWidget_ClearSelectedFilter, "ClearSelectedFilter" }, // 342586708
		{ &Z_Construct_UFunction_UUMGLoadoutFilterWidget_InitFilterWidget, "InitFilterWidget" }, // 681110892
		{ &Z_Construct_UFunction_UUMGLoadoutFilterWidget_OnFilterButtonClicked, "OnFilterButtonClicked" }, // 1068439723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLoadoutFilterWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_SelectedFilterButton_MetaData[] = {
		{ "Category", "UMGLoadoutFilterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_SelectedFilterButton = { "SelectedFilterButton", nullptr, (EPropertyFlags)0x002008000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterWidget, SelectedFilterButton), Z_Construct_UClass_UUMGLoadoutFilterButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_SelectedFilterButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_SelectedFilterButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons_MetaData[] = {
		{ "Category", "UMGLoadoutFilterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons = { "FilterButtons", nullptr, (EPropertyFlags)0x002008800000201c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterWidget, FilterButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons_Inner = { "FilterButtons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGLoadoutFilterButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters_MetaData[] = {
		{ "Category", "UMGLoadoutFilterWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterWidget, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterContainerBox_MetaData[] = {
		{ "Category", "UMGLoadoutFilterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterContainerBox = { "FilterContainerBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterWidget, FilterContainerBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterContainerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterContainerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_AtlantaLoadoutFilterButtonClass_MetaData[] = {
		{ "Category", "UMGLoadoutFilterWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_AtlantaLoadoutFilterButtonClass = { "AtlantaLoadoutFilterButtonClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterWidget, AtlantaLoadoutFilterButtonClass), Z_Construct_UClass_UUMGLoadoutFilterButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_AtlantaLoadoutFilterButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_AtlantaLoadoutFilterButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_OnLoadoutFilterClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutFilterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_OnLoadoutFilterClicked = { "OnLoadoutFilterClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutFilterWidget, OnLoadoutFilterClicked), Z_Construct_UDelegateFunction_DeadByDaylight_UMGLoadoutFilterWidgetOnLoadoutFilterClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_OnLoadoutFilterClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_OnLoadoutFilterClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_SelectedFilterButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_FilterContainerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_AtlantaLoadoutFilterButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::NewProp_OnLoadoutFilterClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLoadoutFilterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::ClassParams = {
		&UUMGLoadoutFilterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLoadoutFilterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLoadoutFilterWidget, 2539796396);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLoadoutFilterWidget>()
	{
		return UUMGLoadoutFilterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLoadoutFilterWidget(Z_Construct_UClass_UUMGLoadoutFilterWidget, &UUMGLoadoutFilterWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLoadoutFilterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLoadoutFilterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
