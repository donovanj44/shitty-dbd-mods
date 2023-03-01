// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinBeingPossessedInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinBeingPossessedInteraction() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinBeingPossessedInteraction_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinBeingPossessedInteraction();
	THETWINS_API UClass* Z_Construct_UClass_UBeingPossessedInteraction();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinBeingPossessedInteraction::StaticRegisterNativesUTwinBeingPossessedInteraction()
	{
	}
	UClass* Z_Construct_UClass_UTwinBeingPossessedInteraction_NoRegister()
	{
		return UTwinBeingPossessedInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBeingPossessedInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TwinBeingPossessedInteraction.h" },
		{ "ModuleRelativePath", "Public/TwinBeingPossessedInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBeingPossessedInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::ClassParams = {
		&UTwinBeingPossessedInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinBeingPossessedInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinBeingPossessedInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinBeingPossessedInteraction, 413594842);
	template<> THETWINS_API UClass* StaticClass<UTwinBeingPossessedInteraction>()
	{
		return UTwinBeingPossessedInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinBeingPossessedInteraction(Z_Construct_UClass_UTwinBeingPossessedInteraction, &UTwinBeingPossessedInteraction::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinBeingPossessedInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinBeingPossessedInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
