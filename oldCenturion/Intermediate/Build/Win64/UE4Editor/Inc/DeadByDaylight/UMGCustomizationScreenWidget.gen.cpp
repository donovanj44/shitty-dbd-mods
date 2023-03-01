// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCustomizationScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCustomizationScreenWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationScreenWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationScreenWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreItemSlotData();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemBuyButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationCategoriesBar_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationPageScrollWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCustomizationScreenWidget::execBroadcastAvailableItemSelectedEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemIndex);
		P_GET_STRUCT_REF(FStoreItemSlotData,Z_Param_Out_selectedItem);
		P_GET_STRUCT_REF(FStoreItemSlotData,Z_Param_Out_parentItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastAvailableItemSelectedEvent(Z_Param_itemIndex,Z_Param_Out_selectedItem,Z_Param_Out_parentItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCustomizationScreenWidget::execBroadcastCustomizationCategoryButtonPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_categoryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastCustomizationCategoryButtonPressed(Z_Param_categoryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCustomizationScreenWidget::execBroadcastUnlockWithCurrencyEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currencyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_combinedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastUnlockWithCurrencyEvent(Z_Param_currencyId,Z_Param_combinedItem);
		P_NATIVE_END;
	}
	static FName NAME_UUMGCustomizationScreenWidget_SetCategoryLabel = FName(TEXT("SetCategoryLabel"));
	void UUMGCustomizationScreenWidget::SetCategoryLabel(const ECustomizationCategory category)
	{
		UMGCustomizationScreenWidget_eventSetCategoryLabel_Parms Parms;
		Parms.category=category;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCustomizationScreenWidget_SetCategoryLabel),&Parms);
	}
	void UUMGCustomizationScreenWidget::StaticRegisterNativesUUMGCustomizationScreenWidget()
	{
		UClass* Class = UUMGCustomizationScreenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastAvailableItemSelectedEvent", &UUMGCustomizationScreenWidget::execBroadcastAvailableItemSelectedEvent },
			{ "BroadcastCustomizationCategoryButtonPressed", &UUMGCustomizationScreenWidget::execBroadcastCustomizationCategoryButtonPressed },
			{ "BroadcastUnlockWithCurrencyEvent", &UUMGCustomizationScreenWidget::execBroadcastUnlockWithCurrencyEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics
	{
		struct UMGCustomizationScreenWidget_eventBroadcastAvailableItemSelectedEvent_Parms
		{
			int32 itemIndex;
			FStoreItemSlotData selectedItem;
			FStoreItemSlotData parentItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parentItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_parentItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_selectedItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_parentItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_parentItem = { "parentItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventBroadcastAvailableItemSelectedEvent_Parms, parentItem), Z_Construct_UScriptStruct_FStoreItemSlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_parentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_parentItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_selectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_selectedItem = { "selectedItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventBroadcastAvailableItemSelectedEvent_Parms, selectedItem), Z_Construct_UScriptStruct_FStoreItemSlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_selectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_selectedItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventBroadcastAvailableItemSelectedEvent_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_parentItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_selectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::NewProp_itemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationScreenWidget, nullptr, "BroadcastAvailableItemSelectedEvent", nullptr, nullptr, sizeof(UMGCustomizationScreenWidget_eventBroadcastAvailableItemSelectedEvent_Parms), Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics
	{
		struct UMGCustomizationScreenWidget_eventBroadcastCustomizationCategoryButtonPressed_Parms
		{
			int32 categoryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_categoryIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::NewProp_categoryIndex = { "categoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventBroadcastCustomizationCategoryButtonPressed_Parms, categoryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::NewProp_categoryIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationScreenWidget, nullptr, "BroadcastCustomizationCategoryButtonPressed", nullptr, nullptr, sizeof(UMGCustomizationScreenWidget_eventBroadcastCustomizationCategoryButtonPressed_Parms), Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics
	{
		struct UMGCustomizationScreenWidget_eventBroadcastUnlockWithCurrencyEvent_Parms
		{
			int32 currencyId;
			FString combinedItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_combinedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_combinedItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currencyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_combinedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_combinedItem = { "combinedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventBroadcastUnlockWithCurrencyEvent_Parms, combinedItem), METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_combinedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_combinedItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_currencyId = { "currencyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventBroadcastUnlockWithCurrencyEvent_Parms, currencyId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_combinedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::NewProp_currencyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationScreenWidget, nullptr, "BroadcastUnlockWithCurrencyEvent", nullptr, nullptr, sizeof(UMGCustomizationScreenWidget_eventBroadcastUnlockWithCurrencyEvent_Parms), Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationScreenWidget_eventSetCategoryLabel_Parms, category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::NewProp_category_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationScreenWidget, nullptr, "SetCategoryLabel", nullptr, nullptr, sizeof(UMGCustomizationScreenWidget_eventSetCategoryLabel_Parms), Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCustomizationScreenWidget_NoRegister()
	{
		return UUMGCustomizationScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentSelectedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__currentSelectedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PriceButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PriceContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutfitItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockItemContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableInOutfitsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvailableInOutfitsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyEquippedLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlyEquippedLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoryLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationCategoriesBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationCategoriesBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageScrollWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PageScrollWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastAvailableItemSelectedEvent, "BroadcastAvailableItemSelectedEvent" }, // 1430004483
		{ &Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastCustomizationCategoryButtonPressed, "BroadcastCustomizationCategoryButtonPressed" }, // 533596700
		{ &Z_Construct_UFunction_UUMGCustomizationScreenWidget_BroadcastUnlockWithCurrencyEvent, "BroadcastUnlockWithCurrencyEvent" }, // 2438327775
		{ &Z_Construct_UFunction_UUMGCustomizationScreenWidget_SetCategoryLabel, "SetCategoryLabel" }, // 3599063011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCustomizationScreenWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp__currentSelectedItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp__currentSelectedItem = { "_currentSelectedItem", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, _currentSelectedItem), METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp__currentSelectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp__currentSelectedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceButtonWidgetClass_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceButtonWidgetClass = { "PriceButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, PriceButtonWidgetClass), Z_Construct_UClass_UUMGCustomizationItemBuyButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceContainer_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceContainer = { "PriceContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, PriceContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_OutfitItem_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_OutfitItem = { "OutfitItem", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, OutfitItem), Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_OutfitItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_OutfitItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_UnlockItemContainer_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_UnlockItemContainer = { "UnlockItemContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, UnlockItemContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_UnlockItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_UnlockItemContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_AvailableInOutfitsContainer_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_AvailableInOutfitsContainer = { "AvailableInOutfitsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, AvailableInOutfitsContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_AvailableInOutfitsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_AvailableInOutfitsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CurrentlyEquippedLabel_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CurrentlyEquippedLabel = { "CurrentlyEquippedLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, CurrentlyEquippedLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CurrentlyEquippedLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CurrentlyEquippedLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CategoryLabel_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CategoryLabel = { "CategoryLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, CategoryLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CategoryLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CategoryLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CustomizationCategoriesBar_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CustomizationCategoriesBar = { "CustomizationCategoriesBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, CustomizationCategoriesBar), Z_Construct_UClass_UUMGCustomizationCategoriesBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CustomizationCategoriesBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CustomizationCategoriesBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PageScrollWidget_MetaData[] = {
		{ "Category", "UMGCustomizationScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PageScrollWidget = { "PageScrollWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationScreenWidget, PageScrollWidget), Z_Construct_UClass_UUMGCustomizationPageScrollWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PageScrollWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PageScrollWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp__currentSelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PriceContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_OutfitItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_UnlockItemContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_AvailableInOutfitsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CurrentlyEquippedLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CategoryLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_CustomizationCategoriesBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::NewProp_PageScrollWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCustomizationScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::ClassParams = {
		&UUMGCustomizationScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCustomizationScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCustomizationScreenWidget, 1602149665);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCustomizationScreenWidget>()
	{
		return UUMGCustomizationScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCustomizationScreenWidget(Z_Construct_UClass_UUMGCustomizationScreenWidget, &UUMGCustomizationScreenWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCustomizationScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCustomizationScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
