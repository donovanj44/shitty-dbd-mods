// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/EmblemAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemAnalyticsComponent() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UEmblemAnalyticsComponent_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UEmblemAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	void UEmblemAnalyticsComponent::StaticRegisterNativesUEmblemAnalyticsComponent()
	{
	}
	UClass* Z_Construct_UClass_UEmblemAnalyticsComponent_NoRegister()
	{
		return UEmblemAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEmblemAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmblemAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/EmblemAnalyticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmblemAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::ClassParams = {
		&UEmblemAnalyticsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmblemAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmblemAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmblemAnalyticsComponent, 1776170288);
	template<> DBDANALYTICS_API UClass* StaticClass<UEmblemAnalyticsComponent>()
	{
		return UEmblemAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmblemAnalyticsComponent(Z_Construct_UClass_UEmblemAnalyticsComponent, &UEmblemAnalyticsComponent::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UEmblemAnalyticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmblemAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
