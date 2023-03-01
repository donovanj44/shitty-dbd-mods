// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBasePassStorefrontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBasePassStorefrontWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBasePassStorefrontWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBasePassStorefrontWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBasePassStorefrontWidget::execHandleBuySubscriptionPackButtonClickedEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_subscriptionPackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBuySubscriptionPackButtonClickedEvent(Z_Param_subscriptionPackID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBasePassStorefrontWidget::execHandleSubscriptionInfoButtonClickedEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_subscriptionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSubscriptionInfoButtonClickedEvent(Z_Param_subscriptionDetails);
		P_NATIVE_END;
	}
	void UUMGBasePassStorefrontWidget::StaticRegisterNativesUUMGBasePassStorefrontWidget()
	{
		UClass* Class = UUMGBasePassStorefrontWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBuySubscriptionPackButtonClickedEvent", &UUMGBasePassStorefrontWidget::execHandleBuySubscriptionPackButtonClickedEvent },
			{ "HandleSubscriptionInfoButtonClickedEvent", &UUMGBasePassStorefrontWidget::execHandleSubscriptionInfoButtonClickedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics
	{
		struct UMGBasePassStorefrontWidget_eventHandleBuySubscriptionPackButtonClickedEvent_Parms
		{
			FName subscriptionPackID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_subscriptionPackID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::NewProp_subscriptionPackID = { "subscriptionPackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBasePassStorefrontWidget_eventHandleBuySubscriptionPackButtonClickedEvent_Parms, subscriptionPackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::NewProp_subscriptionPackID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBasePassStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBasePassStorefrontWidget, nullptr, "HandleBuySubscriptionPackButtonClickedEvent", nullptr, nullptr, sizeof(UMGBasePassStorefrontWidget_eventHandleBuySubscriptionPackButtonClickedEvent_Parms), Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics
	{
		struct UMGBasePassStorefrontWidget_eventHandleSubscriptionInfoButtonClickedEvent_Parms
		{
			FString subscriptionDetails;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subscriptionDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subscriptionDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails = { "subscriptionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBasePassStorefrontWidget_eventHandleSubscriptionInfoButtonClickedEvent_Parms, subscriptionDetails), METADATA_PARAMS(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBasePassStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBasePassStorefrontWidget, nullptr, "HandleSubscriptionInfoButtonClickedEvent", nullptr, nullptr, sizeof(UMGBasePassStorefrontWidget_eventHandleSubscriptionInfoButtonClickedEvent_Parms), Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBasePassStorefrontWidget_NoRegister()
	{
		return UUMGBasePassStorefrontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscriptionsPageScroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubscriptionsPageScroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseStorefrontWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleBuySubscriptionPackButtonClickedEvent, "HandleBuySubscriptionPackButtonClickedEvent" }, // 1345963511
		{ &Z_Construct_UFunction_UUMGBasePassStorefrontWidget_HandleSubscriptionInfoButtonClickedEvent, "HandleSubscriptionInfoButtonClickedEvent" }, // 4133769044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBasePassStorefrontWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBasePassStorefrontWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::NewProp_SubscriptionsPageScroll_MetaData[] = {
		{ "Category", "UMGBasePassStorefrontWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBasePassStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::NewProp_SubscriptionsPageScroll = { "SubscriptionsPageScroll", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBasePassStorefrontWidget, SubscriptionsPageScroll), Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::NewProp_SubscriptionsPageScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::NewProp_SubscriptionsPageScroll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::NewProp_SubscriptionsPageScroll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBasePassStorefrontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::ClassParams = {
		&UUMGBasePassStorefrontWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBasePassStorefrontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBasePassStorefrontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBasePassStorefrontWidget, 1051927219);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBasePassStorefrontWidget>()
	{
		return UUMGBasePassStorefrontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBasePassStorefrontWidget(Z_Construct_UClass_UUMGBasePassStorefrontWidget, &UUMGBasePassStorefrontWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBasePassStorefrontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBasePassStorefrontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
