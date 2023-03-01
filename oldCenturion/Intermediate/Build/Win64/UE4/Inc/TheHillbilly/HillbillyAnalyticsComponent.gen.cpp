// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyAnalyticsComponent() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyAnalyticsComponent_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyAnalyticsComponent();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawAnalyticsBaseComponent();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyAnalyticsComponent::StaticRegisterNativesUHillbillyAnalyticsComponent()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyAnalyticsComponent_NoRegister()
	{
		return UHillbillyAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainsawAnalyticsBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HillbillyAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/HillbillyAnalyticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::ClassParams = {
		&UHillbillyAnalyticsComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyAnalyticsComponent, 2342820672);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyAnalyticsComponent>()
	{
		return UHillbillyAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyAnalyticsComponent(Z_Construct_UClass_UHillbillyAnalyticsComponent, &UHillbillyAnalyticsComponent::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyAnalyticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
