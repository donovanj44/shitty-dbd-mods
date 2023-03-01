// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseIndicatorWidget::execOnOutAnimationFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOutAnimationFinished();
		P_NATIVE_END;
	}
	void UBaseIndicatorWidget::StaticRegisterNativesUBaseIndicatorWidget()
	{
		UClass* Class = UBaseIndicatorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOutAnimationFinished", &UBaseIndicatorWidget::execOnOutAnimationFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseIndicatorWidget, nullptr, "OnOutAnimationFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseIndicatorWidget_NoRegister()
	{
		return UBaseIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Indicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicatorPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IndicatorPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canvasPanelSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__canvasPanelSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__safeZonePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__safeZonePanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseIndicatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseIndicatorWidget_OnOutAnimationFinished, "OnOutAnimationFinished" }, // 3598381982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_ArrowImage_MetaData[] = {
		{ "Category", "BaseIndicatorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_ArrowImage = { "ArrowImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseIndicatorWidget, ArrowImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_ArrowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_ArrowImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_Indicator_MetaData[] = {
		{ "Category", "BaseIndicatorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_Indicator = { "Indicator", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseIndicatorWidget, Indicator), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_Indicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_Indicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_IndicatorPanel_MetaData[] = {
		{ "Category", "BaseIndicatorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_IndicatorPanel = { "IndicatorPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseIndicatorWidget, IndicatorPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_IndicatorPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_IndicatorPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_RadiusMultiplier_MetaData[] = {
		{ "Category", "BaseIndicatorWidget" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_RadiusMultiplier = { "RadiusMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseIndicatorWidget, RadiusMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_RadiusMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_RadiusMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__canvasPanelSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__canvasPanelSlot = { "_canvasPanelSlot", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseIndicatorWidget, _canvasPanelSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__canvasPanelSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__canvasPanelSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__safeZonePanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__safeZonePanel = { "_safeZonePanel", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseIndicatorWidget, _safeZonePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__safeZonePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__safeZonePanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseIndicatorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_ArrowImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_Indicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_IndicatorPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp_RadiusMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__canvasPanelSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseIndicatorWidget_Statics::NewProp__safeZonePanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseIndicatorWidget_Statics::ClassParams = {
		&UBaseIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseIndicatorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseIndicatorWidget, 3458498701);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBaseIndicatorWidget>()
	{
		return UBaseIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseIndicatorWidget(Z_Construct_UClass_UBaseIndicatorWidget, &UBaseIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBaseIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
