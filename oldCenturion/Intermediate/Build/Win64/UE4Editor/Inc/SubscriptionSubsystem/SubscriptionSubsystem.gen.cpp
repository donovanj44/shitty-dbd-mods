// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubscriptionSubsystem/Public/SubscriptionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptionSubsystem() {}
// Cross Module References
	SUBSCRIPTIONSUBSYSTEM_API UClass* Z_Construct_UClass_USubscriptionSubsystem_NoRegister();
	SUBSCRIPTIONSUBSYSTEM_API UClass* Z_Construct_UClass_USubscriptionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SubscriptionSubsystem();
// End Cross Module References
	void USubscriptionSubsystem::StaticRegisterNativesUSubscriptionSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USubscriptionSubsystem_NoRegister()
	{
		return USubscriptionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USubscriptionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubscriptionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SubscriptionSubsystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubscriptionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubscriptionSubsystem.h" },
		{ "ModuleRelativePath", "Public/SubscriptionSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubscriptionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubscriptionSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubscriptionSubsystem_Statics::ClassParams = {
		&USubscriptionSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubscriptionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubscriptionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubscriptionSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubscriptionSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubscriptionSubsystem, 1676379461);
	template<> SUBSCRIPTIONSUBSYSTEM_API UClass* StaticClass<USubscriptionSubsystem>()
	{
		return USubscriptionSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubscriptionSubsystem(Z_Construct_UClass_USubscriptionSubsystem, &USubscriptionSubsystem::StaticClass, TEXT("/Script/SubscriptionSubsystem"), TEXT("USubscriptionSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubscriptionSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
