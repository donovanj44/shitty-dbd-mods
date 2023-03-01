// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/AgonyMoriInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgonyMoriInteraction() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonyMoriInteraction_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonyMoriInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UAgonyMoriInteraction::StaticRegisterNativesUAgonyMoriInteraction()
	{
	}
	UClass* Z_Construct_UClass_UAgonyMoriInteraction_NoRegister()
	{
		return UAgonyMoriInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAgonyMoriInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgonyMoriInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyMoriInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AgonyMoriInteraction.h" },
		{ "ModuleRelativePath", "Public/AgonyMoriInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgonyMoriInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgonyMoriInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgonyMoriInteraction_Statics::ClassParams = {
		&UAgonyMoriInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAgonyMoriInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyMoriInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgonyMoriInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgonyMoriInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgonyMoriInteraction, 943010768);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAgonyMoriInteraction>()
	{
		return UAgonyMoriInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgonyMoriInteraction(Z_Construct_UClass_UAgonyMoriInteraction, &UAgonyMoriInteraction::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAgonyMoriInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgonyMoriInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
