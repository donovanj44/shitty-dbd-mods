// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCloseTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCloseTooltipWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCloseTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCloseTooltipWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCloseTooltipWidget::execHandleCloseTooltipButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCloseTooltipButton();
		P_NATIVE_END;
	}
	void UUMGCloseTooltipWidget::StaticRegisterNativesUUMGCloseTooltipWidget()
	{
		UClass* Class = UUMGCloseTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCloseTooltipButton", &UUMGCloseTooltipWidget::execHandleCloseTooltipButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCloseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCloseTooltipWidget, nullptr, "HandleCloseTooltipButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCloseTooltipWidget_NoRegister()
	{
		return UUMGCloseTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCloseTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullScreenButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullScreenButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCloseTooltipWidget_HandleCloseTooltipButton, "HandleCloseTooltipButton" }, // 1022371725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCloseTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCloseTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::NewProp_FullScreenButton_MetaData[] = {
		{ "Category", "UMGCloseTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCloseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::NewProp_FullScreenButton = { "FullScreenButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCloseTooltipWidget, FullScreenButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::NewProp_FullScreenButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::NewProp_FullScreenButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::NewProp_FullScreenButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCloseTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::ClassParams = {
		&UUMGCloseTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCloseTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCloseTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCloseTooltipWidget, 2883734242);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCloseTooltipWidget>()
	{
		return UUMGCloseTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCloseTooltipWidget(Z_Construct_UClass_UUMGCloseTooltipWidget, &UUMGCloseTooltipWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCloseTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCloseTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
