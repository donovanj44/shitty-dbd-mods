// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGHudEditorVersionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGHudEditorVersionWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorVersionWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorVersionWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGHudEditorVersionWidget::execHide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorVersionWidget::execOnButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGHudEditorVersionWidget::execShow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Show();
		P_NATIVE_END;
	}
	void UUMGHudEditorVersionWidget::StaticRegisterNativesUUMGHudEditorVersionWidget()
	{
		UClass* Class = UUMGHudEditorVersionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Hide", &UUMGHudEditorVersionWidget::execHide },
			{ "OnButtonClick", &UUMGHudEditorVersionWidget::execOnButtonClick },
			{ "Show", &UUMGHudEditorVersionWidget::execShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorVersionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorVersionWidget, nullptr, "Hide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorVersionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorVersionWidget, nullptr, "OnButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGHudEditorVersionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGHudEditorVersionWidget, nullptr, "Show", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGHudEditorVersionWidget_NoRegister()
	{
		return UUMGHudEditorVersionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onEditWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onEditWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VersionButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGHudEditorVersionWidget_Hide, "Hide" }, // 3472265401
		{ &Z_Construct_UFunction_UUMGHudEditorVersionWidget_OnButtonClick, "OnButtonClick" }, // 100764063
		{ &Z_Construct_UFunction_UUMGHudEditorVersionWidget_Show, "Show" }, // 181228541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGHudEditorVersionWidget.h" },
		{ "ModuleRelativePath", "Public/UMGHudEditorVersionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp__onEditWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorVersionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp__onEditWidget = { "_onEditWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorVersionWidget, _onEditWidget), Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp__onEditWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp__onEditWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp_VersionButton_MetaData[] = {
		{ "Category", "UMGHudEditorVersionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorVersionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp_VersionButton = { "VersionButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorVersionWidget, VersionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp_VersionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp_VersionButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp__onEditWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::NewProp_VersionButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGHudEditorVersionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::ClassParams = {
		&UUMGHudEditorVersionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGHudEditorVersionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGHudEditorVersionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGHudEditorVersionWidget, 4105510609);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGHudEditorVersionWidget>()
	{
		return UUMGHudEditorVersionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGHudEditorVersionWidget(Z_Construct_UClass_UUMGHudEditorVersionWidget, &UUMGHudEditorVersionWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGHudEditorVersionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGHudEditorVersionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
