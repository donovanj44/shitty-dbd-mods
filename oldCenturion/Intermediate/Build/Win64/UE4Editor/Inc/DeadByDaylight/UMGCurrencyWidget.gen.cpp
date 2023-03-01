// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCurrencyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCurrencyWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCurrencyWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCurrencyWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCurrencyWidget::execHandleTooltipLongPressEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTooltipLongPressEvent();
		P_NATIVE_END;
	}
	void UUMGCurrencyWidget::StaticRegisterNativesUUMGCurrencyWidget()
	{
		UClass* Class = UUMGCurrencyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTooltipLongPressEvent", &UUMGCurrencyWidget::execHandleTooltipLongPressEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCurrencyWidget, nullptr, "HandleTooltipLongPressEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCurrencyWidget_NoRegister()
	{
		return UUMGCurrencyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCurrencyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCurrencyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCurrencyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCurrencyWidget_HandleTooltipLongPressEvent, "HandleTooltipLongPressEvent" }, // 2587249058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCurrencyWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCurrencyWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCurrencyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType_MetaData[] = {
		{ "Category", "UMGCurrencyWidget" },
		{ "ModuleRelativePath", "Public/UMGCurrencyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCurrencyWidget, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCurrencyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCurrencyWidget_Statics::NewProp_currencyType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCurrencyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCurrencyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCurrencyWidget_Statics::ClassParams = {
		&UUMGCurrencyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCurrencyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCurrencyWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCurrencyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCurrencyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCurrencyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCurrencyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCurrencyWidget, 1800259054);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCurrencyWidget>()
	{
		return UUMGCurrencyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCurrencyWidget(Z_Construct_UClass_UUMGCurrencyWidget, &UUMGCurrencyWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCurrencyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCurrencyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
