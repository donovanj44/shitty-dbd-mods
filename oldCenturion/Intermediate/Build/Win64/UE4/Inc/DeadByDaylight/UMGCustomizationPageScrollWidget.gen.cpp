// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCustomizationPageScrollWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCustomizationPageScrollWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationPageScrollWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationPageScrollWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGGridPageScrollWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreItemSlotData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCustomizationPageScrollWidget::execOnAvailableItemSelectedCallback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_itemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvailableItemSelectedCallback(Z_Param_itemIndex);
		P_NATIVE_END;
	}
	void UUMGCustomizationPageScrollWidget::StaticRegisterNativesUUMGCustomizationPageScrollWidget()
	{
		UClass* Class = UUMGCustomizationPageScrollWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAvailableItemSelectedCallback", &UUMGCustomizationPageScrollWidget::execOnAvailableItemSelectedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics
	{
		struct UMGCustomizationPageScrollWidget_eventOnAvailableItemSelectedCallback_Parms
		{
			int32 itemIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationPageScrollWidget_eventOnAvailableItemSelectedCallback_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::NewProp_itemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationPageScrollWidget, nullptr, "OnAvailableItemSelectedCallback", nullptr, nullptr, sizeof(UMGCustomizationPageScrollWidget_eventOnAvailableItemSelectedCallback_Parms), Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCustomizationPageScrollWidget_NoRegister()
	{
		return UUMGCustomizationPageScrollWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__itemWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableItemsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availableItemsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__availableItemsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizationItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__customizationItemWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGridPageScrollWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCustomizationPageScrollWidget_OnAvailableItemSelectedCallback, "OnAvailableItemSelectedCallback" }, // 1042814496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCustomizationPageScrollWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCustomizationPageScrollWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCustomizationPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets = { "_itemWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationPageScrollWidget, _itemWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets_Inner = { "_itemWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData = { "_availableItemsData", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationPageScrollWidget, _availableItemsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData_Inner = { "_availableItemsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStoreItemSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__customizationItemWidgetClass_MetaData[] = {
		{ "Category", "UMGCustomizationPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCustomizationPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__customizationItemWidgetClass = { "_customizationItemWidgetClass", nullptr, (EPropertyFlags)0x0024080002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCustomizationPageScrollWidget, _customizationItemWidgetClass), Z_Construct_UClass_UUMGCustomizationItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__customizationItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__customizationItemWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__itemWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__availableItemsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::NewProp__customizationItemWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCustomizationPageScrollWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::ClassParams = {
		&UUMGCustomizationPageScrollWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCustomizationPageScrollWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCustomizationPageScrollWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCustomizationPageScrollWidget, 4095114191);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCustomizationPageScrollWidget>()
	{
		return UUMGCustomizationPageScrollWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCustomizationPageScrollWidget(Z_Construct_UClass_UUMGCustomizationPageScrollWidget, &UUMGCustomizationPageScrollWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCustomizationPageScrollWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCustomizationPageScrollWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
