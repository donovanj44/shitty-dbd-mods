// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GeneratorIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGeneratorIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGeneratorIndicatorWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UGeneratorIndicatorWidget::StaticRegisterNativesUGeneratorIndicatorWidget()
	{
	}
	UClass* Z_Construct_UClass_UGeneratorIndicatorWidget_NoRegister()
	{
		return UGeneratorIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIndicatorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/GeneratorIndicatorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::ClassParams = {
		&UGeneratorIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorIndicatorWidget, 3169176623);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGeneratorIndicatorWidget>()
	{
		return UGeneratorIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorIndicatorWidget(Z_Construct_UClass_UGeneratorIndicatorWidget, &UGeneratorIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGeneratorIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
