// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSettingContextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSettingContextWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSettingContextWidget::execHandleContextButtonClickEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleContextButtonClickEvent(Z_Param_buttonData);
		P_NATIVE_END;
	}
	static FName NAME_UUMGSettingContextWidget_SetContextTitle = FName(TEXT("SetContextTitle"));
	void UUMGSettingContextWidget::SetContextTitle(FText const& contextTitle)
	{
		UMGSettingContextWidget_eventSetContextTitle_Parms Parms;
		Parms.contextTitle=contextTitle;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingContextWidget_SetContextTitle),&Parms);
	}
	void UUMGSettingContextWidget::StaticRegisterNativesUUMGSettingContextWidget()
	{
		UClass* Class = UUMGSettingContextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleContextButtonClickEvent", &UUMGSettingContextWidget::execHandleContextButtonClickEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics
	{
		struct UMGSettingContextWidget_eventHandleContextButtonClickEvent_Parms
		{
			int32 buttonData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::NewProp_buttonData = { "buttonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingContextWidget_eventHandleContextButtonClickEvent_Parms, buttonData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::NewProp_buttonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextWidget, nullptr, "HandleContextButtonClickEvent", nullptr, nullptr, sizeof(UMGSettingContextWidget_eventHandleContextButtonClickEvent_Parms), Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_contextTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::NewProp_contextTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::NewProp_contextTitle = { "contextTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingContextWidget_eventSetContextTitle_Parms, contextTitle), METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::NewProp_contextTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::NewProp_contextTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::NewProp_contextTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingContextWidget, nullptr, "SetContextTitle", nullptr, nullptr, sizeof(UMGSettingContextWidget_eventSetContextTitle_Parms), Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSettingContextWidget_NoRegister()
	{
		return UUMGSettingContextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSettingContextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSettingContextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSettingContextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSettingContextWidget_HandleContextButtonClickEvent, "HandleContextButtonClickEvent" }, // 3296594995
		{ &Z_Construct_UFunction_UUMGSettingContextWidget_SetContextTitle, "SetContextTitle" }, // 2553118803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingContextWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSettingContextWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSettingContextWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSettingContextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSettingContextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSettingContextWidget_Statics::ClassParams = {
		&UUMGSettingContextWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGSettingContextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingContextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSettingContextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSettingContextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSettingContextWidget, 2450338045);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSettingContextWidget>()
	{
		return UUMGSettingContextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSettingContextWidget(Z_Construct_UClass_UUMGSettingContextWidget, &UUMGSettingContextWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSettingContextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSettingContextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
