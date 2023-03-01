// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WiggleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWiggleWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWiggleWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWiggleWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget_NoRegister();
// End Cross Module References
	static FName NAME_UWiggleWidget_BecomeAvailable = FName(TEXT("BecomeAvailable"));
	void UWiggleWidget::BecomeAvailable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWiggleWidget_BecomeAvailable),NULL);
	}
	static FName NAME_UWiggleWidget_BecomeUnavailable = FName(TEXT("BecomeUnavailable"));
	void UWiggleWidget::BecomeUnavailable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWiggleWidget_BecomeUnavailable),NULL);
	}
	void UWiggleWidget::StaticRegisterNativesUWiggleWidget()
	{
	}
	struct Z_Construct_UFunction_UWiggleWidget_BecomeAvailable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleWidget_BecomeAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleWidget_BecomeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleWidget, nullptr, "BecomeAvailable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleWidget_BecomeAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleWidget_BecomeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleWidget_BecomeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleWidget_BecomeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WiggleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWiggleWidget, nullptr, "BecomeUnavailable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWiggleWidget_NoRegister()
	{
		return UWiggleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWiggleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleButtonRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WiggleButtonRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleButtonLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WiggleButtonLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenAnimationStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenAnimationStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWiggleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWiggleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWiggleWidget_BecomeAvailable, "BecomeAvailable" }, // 3640877298
		{ &Z_Construct_UFunction_UWiggleWidget_BecomeUnavailable, "BecomeUnavailable" }, // 3747802208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WiggleWidget.h" },
		{ "ModuleRelativePath", "Public/WiggleWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonRight_MetaData[] = {
		{ "Category", "WiggleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WiggleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonRight = { "WiggleButtonRight", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleWidget, WiggleButtonRight), Z_Construct_UClass_UMobileBaseUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonLeft_MetaData[] = {
		{ "Category", "WiggleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WiggleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonLeft = { "WiggleButtonLeft", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleWidget, WiggleButtonLeft), Z_Construct_UClass_UMobileBaseUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWiggleWidget_Statics::NewProp_TimeBetweenAnimationStart_MetaData[] = {
		{ "Category", "WiggleWidget" },
		{ "ModuleRelativePath", "Public/WiggleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWiggleWidget_Statics::NewProp_TimeBetweenAnimationStart = { "TimeBetweenAnimationStart", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWiggleWidget, TimeBetweenAnimationStart), METADATA_PARAMS(Z_Construct_UClass_UWiggleWidget_Statics::NewProp_TimeBetweenAnimationStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleWidget_Statics::NewProp_TimeBetweenAnimationStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWiggleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleWidget_Statics::NewProp_WiggleButtonLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWiggleWidget_Statics::NewProp_TimeBetweenAnimationStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWiggleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWiggleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWiggleWidget_Statics::ClassParams = {
		&UWiggleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWiggleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWiggleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWiggleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWiggleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWiggleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWiggleWidget, 1449860222);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UWiggleWidget>()
	{
		return UWiggleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWiggleWidget(Z_Construct_UClass_UWiggleWidget, &UWiggleWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UWiggleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWiggleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
