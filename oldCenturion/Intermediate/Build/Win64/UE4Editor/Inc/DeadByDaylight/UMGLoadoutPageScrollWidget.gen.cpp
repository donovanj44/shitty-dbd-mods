// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLoadoutPageScrollWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLoadoutPageScrollWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutPageScrollWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutPageScrollWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGPageScrollWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLoadoutPageScrollWidget::execHandleItemClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleItemClicked(Z_Param_itemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLoadoutPageScrollWidget::execSetInventoryData)
	{
		P_GET_ENUM(EInventoryGridFormat,Z_Param_gridFormat);
		P_GET_TARRAY_REF(FInventorySlotData,Z_Param_Out_inventoryData);
		P_GET_TARRAY_REF(int32,Z_Param_Out_selectedItemsIndexes);
		P_GET_PROPERTY(FStrProperty,Z_Param_trackingItemName);
		P_GET_PROPERTY(FStrProperty,Z_Param_subtitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryData(EInventoryGridFormat(Z_Param_gridFormat),Z_Param_Out_inventoryData,Z_Param_Out_selectedItemsIndexes,Z_Param_trackingItemName,Z_Param_subtitle);
		P_NATIVE_END;
	}
	static FName NAME_UUMGLoadoutPageScrollWidget_SetItemIsSelected = FName(TEXT("SetItemIsSelected"));
	void UUMGLoadoutPageScrollWidget::SetItemIsSelected(int32 index, bool isSelected)
	{
		UMGLoadoutPageScrollWidget_eventSetItemIsSelected_Parms Parms;
		Parms.index=index;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutPageScrollWidget_SetItemIsSelected),&Parms);
	}
	static FName NAME_UUMGLoadoutPageScrollWidget_SetItemWidgetClass = FName(TEXT("SetItemWidgetClass"));
	void UUMGLoadoutPageScrollWidget::SetItemWidgetClass()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGLoadoutPageScrollWidget_SetItemWidgetClass),NULL);
	}
	void UUMGLoadoutPageScrollWidget::StaticRegisterNativesUUMGLoadoutPageScrollWidget()
	{
		UClass* Class = UUMGLoadoutPageScrollWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleItemClicked", &UUMGLoadoutPageScrollWidget::execHandleItemClicked },
			{ "SetInventoryData", &UUMGLoadoutPageScrollWidget::execSetInventoryData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics
	{
		struct UMGLoadoutPageScrollWidget_eventHandleItemClicked_Parms
		{
			FName itemID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventHandleItemClicked_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::NewProp_itemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutPageScrollWidget, nullptr, "HandleItemClicked", nullptr, nullptr, sizeof(UMGLoadoutPageScrollWidget_eventHandleItemClicked_Parms), Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics
	{
		struct UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms
		{
			EInventoryGridFormat gridFormat;
			TArray<FInventorySlotData> inventoryData;
			TArray<int32> selectedItemsIndexes;
			FString trackingItemName;
			FString subtitle;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_subtitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_subtitle = { "subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms, subtitle), METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_trackingItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_trackingItemName = { "trackingItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms, trackingItemName), METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_trackingItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_trackingItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes = { "selectedItemsIndexes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms, selectedItemsIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_Inner = { "selectedItemsIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData = { "inventoryData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms, inventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData_Inner = { "inventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_gridFormat = { "gridFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms, gridFormat), Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_gridFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_trackingItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_selectedItemsIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_inventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_gridFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::NewProp_gridFormat_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutPageScrollWidget, nullptr, "SetInventoryData", nullptr, nullptr, sizeof(UMGLoadoutPageScrollWidget_eventSetInventoryData_Parms), Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGLoadoutPageScrollWidget_eventSetItemIsSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLoadoutPageScrollWidget_eventSetItemIsSelected_Parms), &Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLoadoutPageScrollWidget_eventSetItemIsSelected_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::NewProp_isSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutPageScrollWidget, nullptr, "SetItemIsSelected", nullptr, nullptr, sizeof(UMGLoadoutPageScrollWidget_eventSetItemIsSelected_Parms), Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLoadoutPageScrollWidget, nullptr, "SetItemWidgetClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLoadoutPageScrollWidget_NoRegister()
	{
		return UUMGLoadoutPageScrollWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventorySelectedItemIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__inventorySelectedItemIndexes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__inventorySelectedItemIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__inventoryData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inventoryData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gridFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__gridFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__gridFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__itemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldResizeWidget_MetaData[];
#endif
		static void NewProp_ShouldResizeWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldResizeWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGPageScrollWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_HandleItemClicked, "HandleItemClicked" }, // 1832816654
		{ &Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetInventoryData, "SetInventoryData" }, // 2929391844
		{ &Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemIsSelected, "SetItemIsSelected" }, // 835368239
		{ &Z_Construct_UFunction_UUMGLoadoutPageScrollWidget_SetItemWidgetClass, "SetItemWidgetClass" }, // 3136456874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLoadoutPageScrollWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__subtitle_MetaData[] = {
		{ "Category", "UMGLoadoutPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__subtitle = { "_subtitle", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _subtitle), METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes_MetaData[] = {
		{ "Category", "UMGLoadoutPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes = { "_inventorySelectedItemIndexes", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _inventorySelectedItemIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes_Inner = { "_inventorySelectedItemIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData_MetaData[] = {
		{ "Category", "UMGLoadoutPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData = { "_inventoryData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _inventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData_Inner = { "_inventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat_MetaData[] = {
		{ "Category", "UMGLoadoutPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat = { "_gridFormat", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _gridFormat), Z_Construct_UEnum_DeadByDaylight_EInventoryGridFormat, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__itemWidgetClass_MetaData[] = {
		{ "Category", "UMGLoadoutPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__itemWidgetClass = { "_itemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _itemWidgetClass), Z_Construct_UClass_UUMGLoadoutItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__itemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__itemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget_MetaData[] = {
		{ "Category", "UMGLoadoutPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGLoadoutPageScrollWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget_SetBit(void* Obj)
	{
		((UUMGLoadoutPageScrollWidget*)Obj)->ShouldResizeWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget = { "ShouldResizeWidget", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGLoadoutPageScrollWidget), &Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventorySelectedItemIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__inventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__gridFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp__itemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::NewProp_ShouldResizeWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLoadoutPageScrollWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::ClassParams = {
		&UUMGLoadoutPageScrollWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLoadoutPageScrollWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLoadoutPageScrollWidget, 3005680868);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLoadoutPageScrollWidget>()
	{
		return UUMGLoadoutPageScrollWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLoadoutPageScrollWidget(Z_Construct_UClass_UUMGLoadoutPageScrollWidget, &UUMGLoadoutPageScrollWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLoadoutPageScrollWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLoadoutPageScrollWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
