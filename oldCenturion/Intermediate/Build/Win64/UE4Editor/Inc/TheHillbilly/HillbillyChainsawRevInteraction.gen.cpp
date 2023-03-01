// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawRevInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawRevInteraction() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawRevInteraction_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawRevInteraction();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawRevInteraction();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawRevInteraction::StaticRegisterNativesUHillbillyChainsawRevInteraction()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawRevInteraction_NoRegister()
	{
		return UHillbillyChainsawRevInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainsawRevInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HillbillyChainsawRevInteraction.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawRevInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawRevInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::ClassParams = {
		&UHillbillyChainsawRevInteraction::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawRevInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawRevInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawRevInteraction, 557639113);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawRevInteraction>()
	{
		return UHillbillyChainsawRevInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawRevInteraction(Z_Construct_UClass_UHillbillyChainsawRevInteraction, &UHillbillyChainsawRevInteraction::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawRevInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawRevInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
