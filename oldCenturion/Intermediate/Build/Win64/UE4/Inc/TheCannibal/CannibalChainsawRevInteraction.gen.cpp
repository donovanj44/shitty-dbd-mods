// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalChainsawRevInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalChainsawRevInteraction() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawRevInteraction_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawRevInteraction();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawRevInteraction();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UCannibalChainsawRevInteraction::StaticRegisterNativesUCannibalChainsawRevInteraction()
	{
	}
	UClass* Z_Construct_UClass_UCannibalChainsawRevInteraction_NoRegister()
	{
		return UCannibalChainsawRevInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChainsawRevInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CannibalChainsawRevInteraction.h" },
		{ "ModuleRelativePath", "Public/CannibalChainsawRevInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalChainsawRevInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::ClassParams = {
		&UCannibalChainsawRevInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalChainsawRevInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalChainsawRevInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalChainsawRevInteraction, 1846503405);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalChainsawRevInteraction>()
	{
		return UCannibalChainsawRevInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalChainsawRevInteraction(Z_Construct_UClass_UCannibalChainsawRevInteraction, &UCannibalChainsawRevInteraction::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalChainsawRevInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalChainsawRevInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
