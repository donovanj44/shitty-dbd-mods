// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBloodStoreArrayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBloodStoreArrayWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreArrayWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreArrayWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBloodStoreArrayWidget::execBroadcastBloodNodeSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastBloodNodeSelected(Z_Param_id);
		P_NATIVE_END;
	}
	void UUMGBloodStoreArrayWidget::StaticRegisterNativesUUMGBloodStoreArrayWidget()
	{
		UClass* Class = UUMGBloodStoreArrayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastBloodNodeSelected", &UUMGBloodStoreArrayWidget::execBroadcastBloodNodeSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics
	{
		struct UMGBloodStoreArrayWidget_eventBroadcastBloodNodeSelected_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBloodStoreArrayWidget_eventBroadcastBloodNodeSelected_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreArrayWidget, nullptr, "BroadcastBloodNodeSelected", nullptr, nullptr, sizeof(UMGBloodStoreArrayWidget_eventBroadcastBloodNodeSelected_Parms), Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBloodStoreArrayWidget_NoRegister()
	{
		return UUMGBloodStoreArrayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FifthBloodStoreRowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FifthBloodStoreRowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourthBloodStoreRowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FourthBloodStoreRowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdBloodStoreRowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdBloodStoreRowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondBloodStoreRowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondBloodStoreRowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstBloodStoreRowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstBloodStoreRowWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBloodStoreArrayWidget_BroadcastBloodNodeSelected, "BroadcastBloodNodeSelected" }, // 88536687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBloodStoreArrayWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FifthBloodStoreRowWidget_MetaData[] = {
		{ "Category", "UMGBloodStoreArrayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FifthBloodStoreRowWidget = { "FifthBloodStoreRowWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreArrayWidget, FifthBloodStoreRowWidget), Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FifthBloodStoreRowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FifthBloodStoreRowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FourthBloodStoreRowWidget_MetaData[] = {
		{ "Category", "UMGBloodStoreArrayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FourthBloodStoreRowWidget = { "FourthBloodStoreRowWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreArrayWidget, FourthBloodStoreRowWidget), Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FourthBloodStoreRowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FourthBloodStoreRowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_ThirdBloodStoreRowWidget_MetaData[] = {
		{ "Category", "UMGBloodStoreArrayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_ThirdBloodStoreRowWidget = { "ThirdBloodStoreRowWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreArrayWidget, ThirdBloodStoreRowWidget), Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_ThirdBloodStoreRowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_ThirdBloodStoreRowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_SecondBloodStoreRowWidget_MetaData[] = {
		{ "Category", "UMGBloodStoreArrayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_SecondBloodStoreRowWidget = { "SecondBloodStoreRowWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreArrayWidget, SecondBloodStoreRowWidget), Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_SecondBloodStoreRowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_SecondBloodStoreRowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FirstBloodStoreRowWidget_MetaData[] = {
		{ "Category", "UMGBloodStoreArrayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreArrayWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FirstBloodStoreRowWidget = { "FirstBloodStoreRowWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreArrayWidget, FirstBloodStoreRowWidget), Z_Construct_UClass_UUMGBloodStoreRowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FirstBloodStoreRowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FirstBloodStoreRowWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FifthBloodStoreRowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FourthBloodStoreRowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_ThirdBloodStoreRowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_SecondBloodStoreRowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::NewProp_FirstBloodStoreRowWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBloodStoreArrayWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::ClassParams = {
		&UUMGBloodStoreArrayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBloodStoreArrayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBloodStoreArrayWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBloodStoreArrayWidget, 126207843);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBloodStoreArrayWidget>()
	{
		return UUMGBloodStoreArrayWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBloodStoreArrayWidget(Z_Construct_UClass_UUMGBloodStoreArrayWidget, &UUMGBloodStoreArrayWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBloodStoreArrayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBloodStoreArrayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
