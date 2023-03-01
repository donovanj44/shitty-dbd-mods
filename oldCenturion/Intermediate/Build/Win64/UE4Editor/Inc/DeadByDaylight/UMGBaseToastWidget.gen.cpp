// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBaseToastWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseToastWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseToastWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseToastWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBaseToastWidget::execOnTimerFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimerFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBaseToastWidget::execTriggerToastInput)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inputCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerToastInput(Z_Param_inputCode);
		P_NATIVE_END;
	}
	void UUMGBaseToastWidget::StaticRegisterNativesUUMGBaseToastWidget()
	{
		UClass* Class = UUMGBaseToastWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTimerFinished", &UUMGBaseToastWidget::execOnTimerFinished },
			{ "TriggerToastInput", &UUMGBaseToastWidget::execTriggerToastInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseToastWidget, nullptr, "OnTimerFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics
	{
		struct UMGBaseToastWidget_eventTriggerToastInput_Parms
		{
			int32 inputCode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inputCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::NewProp_inputCode = { "inputCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseToastWidget_eventTriggerToastInput_Parms, inputCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::NewProp_inputCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseToastWidget, nullptr, "TriggerToastInput", nullptr, nullptr, sizeof(UMGBaseToastWidget_eventTriggerToastInput_Parms), Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBaseToastWidget_NoRegister()
	{
		return UUMGBaseToastWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseToastWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToastProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeToastProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToastText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToastText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToastIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToastIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseToastWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBaseToastWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBaseToastWidget_OnTimerFinished, "OnTimerFinished" }, // 2798060078
		{ &Z_Construct_UFunction_UUMGBaseToastWidget_TriggerToastInput, "TriggerToastInput" }, // 4272645586
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseToastWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseToastWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseToastWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_TimeToastProgression_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_TimeToastProgression = { "TimeToastProgression", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseToastWidget, TimeToastProgression), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_TimeToastProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_TimeToastProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastText = { "ToastText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseToastWidget, ToastText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseToastWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastIcon = { "ToastIcon", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseToastWidget, ToastIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBaseToastWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_TimeToastProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseToastWidget_Statics::NewProp_ToastIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseToastWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseToastWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseToastWidget_Statics::ClassParams = {
		&UUMGBaseToastWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBaseToastWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseToastWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseToastWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseToastWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseToastWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseToastWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseToastWidget, 400711398);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBaseToastWidget>()
	{
		return UUMGBaseToastWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseToastWidget(Z_Construct_UClass_UUMGBaseToastWidget, &UUMGBaseToastWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBaseToastWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseToastWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
