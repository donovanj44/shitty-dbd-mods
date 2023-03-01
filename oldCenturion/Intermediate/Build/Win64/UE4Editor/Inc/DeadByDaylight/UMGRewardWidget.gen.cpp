// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRewardWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRewardWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRewardWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemData();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	static FName NAME_UUMGRewardWidget_SetData = FName(TEXT("SetData"));
	void UUMGRewardWidget::SetData(FRewardItemData const& RewardData)
	{
		UMGRewardWidget_eventSetData_Parms Parms;
		Parms.RewardData=RewardData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGRewardWidget_SetData),&Parms);
	}
	void UUMGRewardWidget::StaticRegisterNativesUUMGRewardWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::NewProp_RewardData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::NewProp_RewardData = { "RewardData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGRewardWidget_eventSetData_Parms, RewardData), Z_Construct_UScriptStruct_FRewardItemData, METADATA_PARAMS(Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::NewProp_RewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::NewProp_RewardData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::NewProp_RewardData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGRewardWidget, nullptr, "SetData", nullptr, nullptr, sizeof(UMGRewardWidget_eventSetData_Parms), Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGRewardWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGRewardWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGRewardWidget_NoRegister()
	{
		return UUMGRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGRewardWidget_SetData, "SetData" }, // 880264633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRewardWidget.h" },
		{ "ModuleRelativePath", "Public/UMGRewardWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRewardWidget_Statics::NewProp_CheckIcon_MetaData[] = {
		{ "Category", "UMGRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGRewardWidget_Statics::NewProp_CheckIcon = { "CheckIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRewardWidget, CheckIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGRewardWidget_Statics::NewProp_CheckIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRewardWidget_Statics::NewProp_CheckIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGRewardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRewardWidget_Statics::NewProp_CheckIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRewardWidget_Statics::ClassParams = {
		&UUMGRewardWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGRewardWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRewardWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRewardWidget, 152404922);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRewardWidget>()
	{
		return UUMGRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRewardWidget(Z_Construct_UClass_UUMGRewardWidget, &UUMGRewardWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
