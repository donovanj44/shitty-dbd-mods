// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ExitOpenedIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExitOpenedIndicatorWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExitOpenedIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExitOpenedIndicatorWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UExitOpenedIndicatorWidget::StaticRegisterNativesUExitOpenedIndicatorWidget()
	{
	}
	UClass* Z_Construct_UClass_UExitOpenedIndicatorWidget_NoRegister()
	{
		return UExitOpenedIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseIndicatorWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExitOpenedIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/ExitOpenedIndicatorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExitOpenedIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::ClassParams = {
		&UExitOpenedIndicatorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExitOpenedIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExitOpenedIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExitOpenedIndicatorWidget, 220134090);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UExitOpenedIndicatorWidget>()
	{
		return UExitOpenedIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExitOpenedIndicatorWidget(Z_Construct_UClass_UExitOpenedIndicatorWidget, &UExitOpenedIndicatorWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UExitOpenedIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExitOpenedIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
