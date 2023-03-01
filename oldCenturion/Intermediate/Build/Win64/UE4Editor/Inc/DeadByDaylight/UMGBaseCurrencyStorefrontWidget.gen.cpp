// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBaseCurrencyStorefrontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseCurrencyStorefrontWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBaseCurrencyStorefrontWidget::execBroadcastOnAuricCellButtonClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_cellIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnAuricCellButtonClicked(Z_Param_cellIndex);
		P_NATIVE_END;
	}
	void UUMGBaseCurrencyStorefrontWidget::StaticRegisterNativesUUMGBaseCurrencyStorefrontWidget()
	{
		UClass* Class = UUMGBaseCurrencyStorefrontWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastOnAuricCellButtonClicked", &UUMGBaseCurrencyStorefrontWidget::execBroadcastOnAuricCellButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics
	{
		struct UMGBaseCurrencyStorefrontWidget_eventBroadcastOnAuricCellButtonClicked_Parms
		{
			int32 cellIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cellIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::NewProp_cellIndex = { "cellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseCurrencyStorefrontWidget_eventBroadcastOnAuricCellButtonClicked_Parms, cellIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::NewProp_cellIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseCurrencyStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget, nullptr, "BroadcastOnAuricCellButtonClicked", nullptr, nullptr, sizeof(UMGBaseCurrencyStorefrontWidget_eventBroadcastOnAuricCellButtonClicked_Parms), Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_NoRegister()
	{
		return UUMGBaseCurrencyStorefrontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseStorefrontWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBaseCurrencyStorefrontWidget_BroadcastOnAuricCellButtonClicked, "BroadcastOnAuricCellButtonClicked" }, // 2060032774
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseCurrencyStorefrontWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseCurrencyStorefrontWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseCurrencyStorefrontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::ClassParams = {
		&UUMGBaseCurrencyStorefrontWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseCurrencyStorefrontWidget, 3831231114);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBaseCurrencyStorefrontWidget>()
	{
		return UUMGBaseCurrencyStorefrontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseCurrencyStorefrontWidget(Z_Construct_UClass_UUMGBaseCurrencyStorefrontWidget, &UUMGBaseCurrencyStorefrontWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBaseCurrencyStorefrontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseCurrencyStorefrontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
