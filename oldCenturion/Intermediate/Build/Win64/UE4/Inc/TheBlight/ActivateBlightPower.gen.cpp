// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/ActivateBlightPower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateBlightPower() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UActivateBlightPower_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UActivateBlightPower();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UActivateBlightPower::StaticRegisterNativesUActivateBlightPower()
	{
	}
	UClass* Z_Construct_UClass_UActivateBlightPower_NoRegister()
	{
		return UActivateBlightPower::StaticClass();
	}
	struct Z_Construct_UClass_UActivateBlightPower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivateBlightPower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateBlightPower_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActivateBlightPower.h" },
		{ "ModuleRelativePath", "Public/ActivateBlightPower.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivateBlightPower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateBlightPower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivateBlightPower_Statics::ClassParams = {
		&UActivateBlightPower::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActivateBlightPower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateBlightPower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivateBlightPower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivateBlightPower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateBlightPower, 2121004170);
	template<> THEBLIGHT_API UClass* StaticClass<UActivateBlightPower>()
	{
		return UActivateBlightPower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateBlightPower(Z_Construct_UClass_UActivateBlightPower, &UActivateBlightPower::StaticClass, TEXT("/Script/TheBlight"), TEXT("UActivateBlightPower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateBlightPower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
