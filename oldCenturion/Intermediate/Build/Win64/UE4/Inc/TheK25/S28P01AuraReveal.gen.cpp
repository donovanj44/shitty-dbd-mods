// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/S28P01AuraReveal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS28P01AuraReveal() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_US28P01AuraReveal_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_US28P01AuraReveal();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void US28P01AuraReveal::StaticRegisterNativesUS28P01AuraReveal()
	{
	}
	UClass* Z_Construct_UClass_US28P01AuraReveal_NoRegister()
	{
		return US28P01AuraReveal::StaticClass();
	}
	struct Z_Construct_UClass_US28P01AuraReveal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US28P01AuraReveal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01AuraReveal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "S28P01AuraReveal.h" },
		{ "ModuleRelativePath", "Public/S28P01AuraReveal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_US28P01AuraReveal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US28P01AuraReveal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US28P01AuraReveal_Statics::ClassParams = {
		&US28P01AuraReveal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_US28P01AuraReveal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01AuraReveal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US28P01AuraReveal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US28P01AuraReveal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US28P01AuraReveal, 1921192047);
	template<> THEK25_API UClass* StaticClass<US28P01AuraReveal>()
	{
		return US28P01AuraReveal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US28P01AuraReveal(Z_Construct_UClass_US28P01AuraReveal, &US28P01AuraReveal::StaticClass, TEXT("/Script/TheK25"), TEXT("US28P01AuraReveal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US28P01AuraReveal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
