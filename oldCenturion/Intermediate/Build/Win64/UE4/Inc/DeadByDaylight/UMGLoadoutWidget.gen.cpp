// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLoadoutWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLoadoutWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutBaseWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutPageScrollWidget_NoRegister();
// End Cross Module References
	static FName NAME_UUMGLoadoutWidget_SetInventoryData = FName(TEXT("SetInventoryData"));
	void UUMGLoadoutWidget::SetInventoryData(EInventoryGridFormat gridFormat, TArray<FInventorySlotData> const& inventoryData, TArray<int32> const& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle)
	{
		UMGLoadoutWidget_eventSetInventoryData_Parms Parms;
		Parms.gridFormat=gridFormat;
		Parms.inventoryData=inventoryData;
		Parms.selectedItemsIndexes=selectedItemsIndexes;
		Parms.trackingItemName=trackingItemName;
		Parms.subtitle=subtitle;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutWidget_SetInventoryData),&Parms);
	}
	void UUMGLoadoutWidget::StaticRegisterNativesUUMGLoadoutWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_trackingItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedItemsIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectedItemsIndexes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedItemsIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inventoryData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inventoryData_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gridFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gridFormat_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_subtitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_subtitle = { "subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutWidget_eventSetInventoryData_Parms, subtitle), METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_trackingItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_trackingItemName = { "trackingItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutWidget_eventSetInventoryData_Parms, trackingItemName), METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_trackingItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_trackingItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes = { "selectedItemsIndexes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutWidget_eventSetInventoryData_Parms, selectedItemsIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_Inner = { "selectedItemsIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData = { "inventoryData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutWidget_eventSetInventoryData_Parms, inventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData_Inner = { "inventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_gridFormat = { "gridFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutWidget_eventSetInventoryData_Parms, gridFormat), Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_gridFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_trackingItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_inventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_gridFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::NewProp_gridFormat_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutWidget, nullptr, "SetInventoryData", nullptr, nullptr, sizeof(UMGLoadoutWidget_eventSetInventoryData_Parms), Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLoadoutWidget_NoRegister()
	{
		return UUMGLoadoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLoadoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryPanelTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InventoryPanelTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LoadoutTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageScrollWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PageScrollWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryFilterText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InventoryFilterText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemTypeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InventoryItemTypeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLoadoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGLoadoutBaseWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLoadoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLoadoutWidget_SetInventoryData, "SetInventoryData" }, // 3937659945
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLoadoutWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryPanelTitleText_MetaData[] = {
		{ "Category", "UMGLoadoutWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryPanelTitleText = { "InventoryPanelTitleText", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutWidget, InventoryPanelTitleText), METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryPanelTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryPanelTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_LoadoutTitleText_MetaData[] = {
		{ "Category", "UMGLoadoutWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_LoadoutTitleText = { "LoadoutTitleText", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutWidget, LoadoutTitleText), METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_LoadoutTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_LoadoutTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_PageScrollWidget_MetaData[] = {
		{ "Category", "UMGLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_PageScrollWidget = { "PageScrollWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutWidget, PageScrollWidget), Z_Construct_UClass_UUMGLoadoutPageScrollWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_PageScrollWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_PageScrollWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryFilterText_MetaData[] = {
		{ "Category", "UMGLoadoutWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryFilterText = { "InventoryFilterText", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutWidget, InventoryFilterText), METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryFilterText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryFilterText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryItemTypeText_MetaData[] = {
		{ "Category", "UMGLoadoutWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryItemTypeText = { "InventoryItemTypeText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutWidget, InventoryItemTypeText), METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryItemTypeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryItemTypeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLoadoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryPanelTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_LoadoutTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_PageScrollWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryFilterText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutWidget_Statics::NewProp_InventoryItemTypeText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLoadoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLoadoutWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLoadoutWidget_Statics::ClassParams = {
		&UUMGLoadoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLoadoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLoadoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLoadoutWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLoadoutWidget, 3947058422);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLoadoutWidget>()
	{
		return UUMGLoadoutWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLoadoutWidget(Z_Construct_UClass_UUMGLoadoutWidget, &UUMGLoadoutWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLoadoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLoadoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
