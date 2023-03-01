// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGDragWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGDragWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGDragWidget::execGetAllEditableWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCustomWidgetWrapper_HudEditor*>*)Z_Param__Result=P_THIS->GetAllEditableWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGDragWidget::execSetClampToViewportDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClampToViewportDirty();
		P_NATIVE_END;
	}
	void UUMGDragWidget::StaticRegisterNativesUUMGDragWidget()
	{
		UClass* Class = UUMGDragWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllEditableWidgets", &UUMGDragWidget::execGetAllEditableWidgets },
			{ "SetClampToViewportDirty", &UUMGDragWidget::execSetClampToViewportDirty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics
	{
		struct UMGDragWidget_eventGetAllEditableWidgets_Parms
		{
			TArray<UCustomWidgetWrapper_HudEditor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGDragWidget_eventGetAllEditableWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCustomWidgetWrapper_HudEditor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGDragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGDragWidget, nullptr, "GetAllEditableWidgets", nullptr, nullptr, sizeof(UMGDragWidget_eventGetAllEditableWidgets_Parms), Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGDragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGDragWidget, nullptr, "SetClampToViewportDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGDragWidget_NoRegister()
	{
		return UUMGDragWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGDragWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGDragWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGDragWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGDragWidget_GetAllEditableWidgets, "GetAllEditableWidgets" }, // 1199233132
		{ &Z_Construct_UFunction_UUMGDragWidget_SetClampToViewportDirty, "SetClampToViewportDirty" }, // 4057431485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDragWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGDragWidget.h" },
		{ "ModuleRelativePath", "Public/UMGDragWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGDragWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGDragWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGDragWidget_Statics::ClassParams = {
		&UUMGDragWidget::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGDragWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDragWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGDragWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGDragWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGDragWidget, 893485809);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGDragWidget>()
	{
		return UUMGDragWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGDragWidget(Z_Construct_UClass_UUMGDragWidget, &UUMGDragWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGDragWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGDragWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
