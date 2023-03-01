// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TileVisitedAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileVisitedAnalyticsComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileVisitedAnalyticsComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileVisitedAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UTileVisitedAnalyticsComponent::StaticRegisterNativesUTileVisitedAnalyticsComponent()
	{
	}
	UClass* Z_Construct_UClass_UTileVisitedAnalyticsComponent_NoRegister()
	{
		return UTileVisitedAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileVisitedAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/TileVisitedAnalyticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileVisitedAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::ClassParams = {
		&UTileVisitedAnalyticsComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileVisitedAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileVisitedAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileVisitedAnalyticsComponent, 405826637);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTileVisitedAnalyticsComponent>()
	{
		return UTileVisitedAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileVisitedAnalyticsComponent(Z_Construct_UClass_UTileVisitedAnalyticsComponent, &UTileVisitedAnalyticsComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTileVisitedAnalyticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileVisitedAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
