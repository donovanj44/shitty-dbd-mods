// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSubscriptionsPageScrollWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSubscriptionsPageScrollWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGGridPageScrollWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSubscriptionsPageScrollWidget::execHandleBuySubscriptionPackButtonClickedEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_subscriptionPackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBuySubscriptionPackButtonClickedEvent(Z_Param_subscriptionPackID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSubscriptionsPageScrollWidget::execHandleSubscriptionInfoButtonClickedEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_subscriptionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSubscriptionInfoButtonClickedEvent(Z_Param_subscriptionDetails);
		P_NATIVE_END;
	}
	void UUMGSubscriptionsPageScrollWidget::StaticRegisterNativesUUMGSubscriptionsPageScrollWidget()
	{
		UClass* Class = UUMGSubscriptionsPageScrollWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBuySubscriptionPackButtonClickedEvent", &UUMGSubscriptionsPageScrollWidget::execHandleBuySubscriptionPackButtonClickedEvent },
			{ "HandleSubscriptionInfoButtonClickedEvent", &UUMGSubscriptionsPageScrollWidget::execHandleSubscriptionInfoButtonClickedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics
	{
		struct UMGSubscriptionsPageScrollWidget_eventHandleBuySubscriptionPackButtonClickedEvent_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::NewProp_subscriptionPackID = { "subscriptionPackID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSubscriptionsPageScrollWidget_eventHandleBuySubscriptionPackButtonClickedEvent_Parms, subscriptionPackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::NewProp_subscriptionPackID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSubscriptionsPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget, nullptr, "HandleBuySubscriptionPackButtonClickedEvent", nullptr, nullptr, sizeof(UMGSubscriptionsPageScrollWidget_eventHandleBuySubscriptionPackButtonClickedEvent_Parms), Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics
	{
		struct UMGSubscriptionsPageScrollWidget_eventHandleSubscriptionInfoButtonClickedEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails = { "subscriptionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSubscriptionsPageScrollWidget_eventHandleSubscriptionInfoButtonClickedEvent_Parms, subscriptionDetails), METADATA_PARAMS(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::NewProp_subscriptionDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSubscriptionsPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget, nullptr, "HandleSubscriptionInfoButtonClickedEvent", nullptr, nullptr, sizeof(UMGSubscriptionsPageScrollWidget_eventHandleSubscriptionInfoButtonClickedEvent_Parms), Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_NoRegister()
	{
		return UUMGSubscriptionsPageScrollWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscriptionPackButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SubscriptionPackButtonClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGridPageScrollWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleBuySubscriptionPackButtonClickedEvent, "HandleBuySubscriptionPackButtonClickedEvent" }, // 2380554470
		{ &Z_Construct_UFunction_UUMGSubscriptionsPageScrollWidget_HandleSubscriptionInfoButtonClickedEvent, "HandleSubscriptionInfoButtonClickedEvent" }, // 3970535418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSubscriptionsPageScrollWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionsPageScrollWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_ItemPadding_MetaData[] = {
		{ "Category", "UMGSubscriptionsPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionsPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_ItemPadding = { "ItemPadding", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionsPageScrollWidget, ItemPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_ItemPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_ItemPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_SubscriptionPackButtonClass_MetaData[] = {
		{ "Category", "UMGSubscriptionsPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionsPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_SubscriptionPackButtonClass = { "SubscriptionPackButtonClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionsPageScrollWidget, SubscriptionPackButtonClass), Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_SubscriptionPackButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_SubscriptionPackButtonClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_ItemPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::NewProp_SubscriptionPackButtonClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSubscriptionsPageScrollWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::ClassParams = {
		&UUMGSubscriptionsPageScrollWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSubscriptionsPageScrollWidget, 890791655);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSubscriptionsPageScrollWidget>()
	{
		return UUMGSubscriptionsPageScrollWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSubscriptionsPageScrollWidget(Z_Construct_UClass_UUMGSubscriptionsPageScrollWidget, &UUMGSubscriptionsPageScrollWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSubscriptionsPageScrollWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSubscriptionsPageScrollWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
