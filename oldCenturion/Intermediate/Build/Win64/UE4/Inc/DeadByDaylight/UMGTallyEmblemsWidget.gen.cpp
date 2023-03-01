// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyEmblemsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyEmblemsWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyEmblemsWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyEmblemsWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyEmblemsWidget::execGetEmblems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUMGTallyEmblemWidget*>*)Z_Param__Result=P_THIS->GetEmblems();
		P_NATIVE_END;
	}
	void UUMGTallyEmblemsWidget::StaticRegisterNativesUUMGTallyEmblemsWidget()
	{
		UClass* Class = UUMGTallyEmblemsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEmblems", &UUMGTallyEmblemsWidget::execGetEmblems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics
	{
		struct UMGTallyEmblemsWidget_eventGetEmblems_Parms
		{
			TArray<UUMGTallyEmblemWidget*> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyEmblemsWidget_eventGetEmblems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyEmblemsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyEmblemsWidget, nullptr, "GetEmblems", nullptr, nullptr, sizeof(UMGTallyEmblemsWidget_eventGetEmblems_Parms), Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyEmblemsWidget_NoRegister()
	{
		return UUMGTallyEmblemsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emblems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__emblems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__emblems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmblemsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_EmblemWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGTallyListElementWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyEmblemsWidget_GetEmblems, "GetEmblems" }, // 474537375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyEmblemsWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems = { "_emblems", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyEmblemsWidget, _emblems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems_Inner = { "_emblems", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemsContainer_MetaData[] = {
		{ "Category", "UMGTallyEmblemsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemsContainer = { "EmblemsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyEmblemsWidget, EmblemsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemWidgetClass_MetaData[] = {
		{ "Category", "UMGTallyEmblemsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyEmblemsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemWidgetClass = { "EmblemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyEmblemsWidget, EmblemWidgetClass), Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp__emblems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::NewProp_EmblemWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyEmblemsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::ClassParams = {
		&UUMGTallyEmblemsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyEmblemsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyEmblemsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyEmblemsWidget, 868364270);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyEmblemsWidget>()
	{
		return UUMGTallyEmblemsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyEmblemsWidget(Z_Construct_UClass_UUMGTallyEmblemsWidget, &UUMGTallyEmblemsWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyEmblemsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyEmblemsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
