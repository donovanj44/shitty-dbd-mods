// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBaseStorefrontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseStorefrontWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGBaseStorefrontWidget::StaticRegisterNativesUUMGBaseStorefrontWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget_NoRegister()
	{
		return UUMGBaseStorefrontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseStorefrontWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseStorefrontWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseStorefrontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::ClassParams = {
		&UUMGBaseStorefrontWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseStorefrontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseStorefrontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseStorefrontWidget, 3158355234);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBaseStorefrontWidget>()
	{
		return UUMGBaseStorefrontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseStorefrontWidget(Z_Construct_UClass_UUMGBaseStorefrontWidget, &UUMGBaseStorefrontWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBaseStorefrontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseStorefrontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
