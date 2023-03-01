// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalAnalyticsComponent() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalAnalyticsComponent_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalAnalyticsComponent();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawAnalyticsBaseComponent();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UCannibalAnalyticsComponent::StaticRegisterNativesUCannibalAnalyticsComponent()
	{
	}
	UClass* Z_Construct_UClass_UCannibalAnalyticsComponent_NoRegister()
	{
		return UCannibalAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainsawAnalyticsBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CannibalAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/CannibalAnalyticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::ClassParams = {
		&UCannibalAnalyticsComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalAnalyticsComponent, 343222214);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalAnalyticsComponent>()
	{
		return UCannibalAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalAnalyticsComponent(Z_Construct_UClass_UCannibalAnalyticsComponent, &UCannibalAnalyticsComponent::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalAnalyticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
