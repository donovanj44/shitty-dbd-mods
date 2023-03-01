// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gnome2021/Public/GnomeInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGnomeInteraction() {}
// Cross Module References
	GNOME2021_API UClass* Z_Construct_UClass_UGnomeInteraction_NoRegister();
	GNOME2021_API UClass* Z_Construct_UClass_UGnomeInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Gnome2021();
// End Cross Module References
	void UGnomeInteraction::StaticRegisterNativesUGnomeInteraction()
	{
	}
	UClass* Z_Construct_UClass_UGnomeInteraction_NoRegister()
	{
		return UGnomeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGnomeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGnomeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Gnome2021,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGnomeInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GnomeInteraction.h" },
		{ "ModuleRelativePath", "Public/GnomeInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGnomeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGnomeInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGnomeInteraction_Statics::ClassParams = {
		&UGnomeInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGnomeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGnomeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGnomeInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGnomeInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGnomeInteraction, 701622249);
	template<> GNOME2021_API UClass* StaticClass<UGnomeInteraction>()
	{
		return UGnomeInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGnomeInteraction(Z_Construct_UClass_UGnomeInteraction, &UGnomeInteraction::StaticClass, TEXT("/Script/Gnome2021"), TEXT("UGnomeInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGnomeInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
