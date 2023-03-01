// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRefundDataWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRefundDataWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRefundDataWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRefundDataWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRefundUIData();
// End Cross Module References
	static FName NAME_UUMGRefundDataWidget_SetDataAndUpdateWidget = FName(TEXT("SetDataAndUpdateWidget"));
	void UUMGRefundDataWidget::SetDataAndUpdateWidget(FRefundUIData const& RefundUIData)
	{
		UMGRefundDataWidget_eventSetDataAndUpdateWidget_Parms Parms;
		Parms.RefundUIData=RefundUIData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGRefundDataWidget_SetDataAndUpdateWidget),&Parms);
	}
	void UUMGRefundDataWidget::StaticRegisterNativesUUMGRefundDataWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefundUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefundUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::NewProp_RefundUIData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::NewProp_RefundUIData = { "RefundUIData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGRefundDataWidget_eventSetDataAndUpdateWidget_Parms, RefundUIData), Z_Construct_UScriptStruct_FRefundUIData, METADATA_PARAMS(Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::NewProp_RefundUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::NewProp_RefundUIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::NewProp_RefundUIData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRefundDataWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGRefundDataWidget, nullptr, "SetDataAndUpdateWidget", nullptr, nullptr, sizeof(UMGRefundDataWidget_eventSetDataAndUpdateWidget_Parms), Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGRefundDataWidget_NoRegister()
	{
		return UUMGRefundDataWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRefundDataWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRefundDataWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGRefundDataWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGRefundDataWidget_SetDataAndUpdateWidget, "SetDataAndUpdateWidget" }, // 3862089004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRefundDataWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRefundDataWidget.h" },
		{ "ModuleRelativePath", "Public/UMGRefundDataWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRefundDataWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRefundDataWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRefundDataWidget_Statics::ClassParams = {
		&UUMGRefundDataWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGRefundDataWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRefundDataWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRefundDataWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRefundDataWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRefundDataWidget, 2172305993);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRefundDataWidget>()
	{
		return UUMGRefundDataWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRefundDataWidget(Z_Construct_UClass_UUMGRefundDataWidget, &UUMGRefundDataWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRefundDataWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRefundDataWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
