// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/ChainsawAnalyticsBaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawAnalyticsBaseComponent() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawAnalyticsBaseComponent_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawAnalyticsBaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UChainsawAnalyticsBaseComponent::StaticRegisterNativesUChainsawAnalyticsBaseComponent()
	{
	}
	UClass* Z_Construct_UClass_UChainsawAnalyticsBaseComponent_NoRegister()
	{
		return UChainsawAnalyticsBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceFromHookToBeConsideredCamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDistanceFromHookToBeConsideredCamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChainsawAnalyticsBaseComponent.h" },
		{ "ModuleRelativePath", "Public/ChainsawAnalyticsBaseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::NewProp__maxDistanceFromHookToBeConsideredCamping_MetaData[] = {
		{ "Category", "ChainsawAnalyticsBaseComponent" },
		{ "ModuleRelativePath", "Public/ChainsawAnalyticsBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::NewProp__maxDistanceFromHookToBeConsideredCamping = { "_maxDistanceFromHookToBeConsideredCamping", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainsawAnalyticsBaseComponent, _maxDistanceFromHookToBeConsideredCamping), METADATA_PARAMS(Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::NewProp__maxDistanceFromHookToBeConsideredCamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::NewProp__maxDistanceFromHookToBeConsideredCamping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::NewProp__maxDistanceFromHookToBeConsideredCamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChainsawAnalyticsBaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::ClassParams = {
		&UChainsawAnalyticsBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChainsawAnalyticsBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChainsawAnalyticsBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChainsawAnalyticsBaseComponent, 4243942616);
	template<> THEHILLBILLY_API UClass* StaticClass<UChainsawAnalyticsBaseComponent>()
	{
		return UChainsawAnalyticsBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChainsawAnalyticsBaseComponent(Z_Construct_UClass_UChainsawAnalyticsBaseComponent, &UChainsawAnalyticsBaseComponent::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UChainsawAnalyticsBaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChainsawAnalyticsBaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
