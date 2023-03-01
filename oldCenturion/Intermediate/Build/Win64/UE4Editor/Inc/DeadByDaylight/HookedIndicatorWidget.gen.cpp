// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HookedIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookedIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHookedIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHookedIndicatorWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UHookedIndicatorWidget::StaticRegisterNativesUHookedIndicatorWidget()
	{
	}
	UClass* Z_Construct_UClass_UHookedIndicatorWidget_NoRegister()
	{
		return UHookedIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHookedIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HookedIndicatorDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HookedIndicatorDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHookedIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIndicatorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookedIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HookedIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/HookedIndicatorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookedIndicatorWidget_Statics::NewProp_HookedIndicatorDuration_MetaData[] = {
		{ "Category", "HookedIndicatorWidget" },
		{ "ModuleRelativePath", "Public/HookedIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHookedIndicatorWidget_Statics::NewProp_HookedIndicatorDuration = { "HookedIndicatorDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHookedIndicatorWidget, HookedIndicatorDuration), METADATA_PARAMS(Z_Construct_UClass_UHookedIndicatorWidget_Statics::NewProp_HookedIndicatorDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHookedIndicatorWidget_Statics::NewProp_HookedIndicatorDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHookedIndicatorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHookedIndicatorWidget_Statics::NewProp_HookedIndicatorDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHookedIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHookedIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHookedIndicatorWidget_Statics::ClassParams = {
		&UHookedIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHookedIndicatorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHookedIndicatorWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHookedIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHookedIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHookedIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHookedIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHookedIndicatorWidget, 3009572967);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHookedIndicatorWidget>()
	{
		return UHookedIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHookedIndicatorWidget(Z_Construct_UClass_UHookedIndicatorWidget, &UHookedIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHookedIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHookedIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
