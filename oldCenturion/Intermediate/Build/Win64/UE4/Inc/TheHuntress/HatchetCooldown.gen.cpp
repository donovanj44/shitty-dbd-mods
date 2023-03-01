// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/HatchetCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatchetCooldown() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetCooldown_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetCooldown();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
// End Cross Module References
	void UHatchetCooldown::StaticRegisterNativesUHatchetCooldown()
	{
	}
	UClass* Z_Construct_UClass_UHatchetCooldown_NoRegister()
	{
		return UHatchetCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UHatchetCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHatchetCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetCooldown_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HatchetCooldown.h" },
		{ "ModuleRelativePath", "Public/HatchetCooldown.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHatchetCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHatchetCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHatchetCooldown_Statics::ClassParams = {
		&UHatchetCooldown::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHatchetCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHatchetCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHatchetCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHatchetCooldown, 1462699903);
	template<> THEHUNTRESS_API UClass* StaticClass<UHatchetCooldown>()
	{
		return UHatchetCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHatchetCooldown(Z_Construct_UClass_UHatchetCooldown, &UHatchetCooldown::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UHatchetCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHatchetCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
