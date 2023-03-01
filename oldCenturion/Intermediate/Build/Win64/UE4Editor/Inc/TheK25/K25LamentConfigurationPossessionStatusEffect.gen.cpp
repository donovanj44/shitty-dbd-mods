// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25LamentConfigurationPossessionStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25LamentConfigurationPossessionStatusEffect() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UObliviousEffect();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25LamentConfigurationPossessionStatusEffect::StaticRegisterNativesUK25LamentConfigurationPossessionStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_NoRegister()
	{
		return UK25LamentConfigurationPossessionStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObliviousEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25LamentConfigurationPossessionStatusEffect.h" },
		{ "ModuleRelativePath", "Public/K25LamentConfigurationPossessionStatusEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25LamentConfigurationPossessionStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::ClassParams = {
		&UK25LamentConfigurationPossessionStatusEffect::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25LamentConfigurationPossessionStatusEffect, 3694960920);
	template<> THEK25_API UClass* StaticClass<UK25LamentConfigurationPossessionStatusEffect>()
	{
		return UK25LamentConfigurationPossessionStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25LamentConfigurationPossessionStatusEffect(Z_Construct_UClass_UK25LamentConfigurationPossessionStatusEffect, &UK25LamentConfigurationPossessionStatusEffect::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25LamentConfigurationPossessionStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25LamentConfigurationPossessionStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
