// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NoiseIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNoiseIndicatorWidget::execSetIndicatorPanel)
	{
		P_GET_OBJECT(UCanvasPanel,Z_Param_panel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndicatorPanel(Z_Param_panel);
		P_NATIVE_END;
	}
	void UNoiseIndicatorWidget::StaticRegisterNativesUNoiseIndicatorWidget()
	{
		UClass* Class = UNoiseIndicatorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIndicatorPanel", &UNoiseIndicatorWidget::execSetIndicatorPanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics
	{
		struct NoiseIndicatorWidget_eventSetIndicatorPanel_Parms
		{
			UCanvasPanel* panel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_panel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::NewProp_panel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::NewProp_panel = { "panel", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoiseIndicatorWidget_eventSetIndicatorPanel_Parms, panel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::NewProp_panel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::NewProp_panel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::NewProp_panel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NoiseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoiseIndicatorWidget, nullptr, "SetIndicatorPanel", nullptr, nullptr, sizeof(NoiseIndicatorWidget_eventSetIndicatorPanel_Parms), Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister()
	{
		return UNoiseIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNoiseIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoiseIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIndicatorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNoiseIndicatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoiseIndicatorWidget_SetIndicatorPanel, "SetIndicatorPanel" }, // 2665309579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoiseIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoiseIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/NoiseIndicatorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoiseIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoiseIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNoiseIndicatorWidget_Statics::ClassParams = {
		&UNoiseIndicatorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoiseIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoiseIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoiseIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoiseIndicatorWidget, 992778585);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNoiseIndicatorWidget>()
	{
		return UNoiseIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoiseIndicatorWidget(Z_Construct_UClass_UNoiseIndicatorWidget, &UNoiseIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNoiseIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoiseIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
