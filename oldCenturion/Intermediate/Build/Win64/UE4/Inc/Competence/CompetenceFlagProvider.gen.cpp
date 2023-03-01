// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/CompetenceFlagProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompetenceFlagProvider() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UCompetenceFlagProvider_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompetenceFlagProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UCompetenceFlagProvider::StaticRegisterNativesUCompetenceFlagProvider()
	{
	}
	UClass* Z_Construct_UClass_UCompetenceFlagProvider_NoRegister()
	{
		return UCompetenceFlagProvider::StaticClass();
	}
	struct Z_Construct_UClass_UCompetenceFlagProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompetenceFlagProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompetenceFlagProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompetenceFlagProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompetenceFlagProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICompetenceFlagProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompetenceFlagProvider_Statics::ClassParams = {
		&UCompetenceFlagProvider::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompetenceFlagProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompetenceFlagProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompetenceFlagProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompetenceFlagProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompetenceFlagProvider, 2973502733);
	template<> COMPETENCE_API UClass* StaticClass<UCompetenceFlagProvider>()
	{
		return UCompetenceFlagProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompetenceFlagProvider(Z_Construct_UClass_UCompetenceFlagProvider, &UCompetenceFlagProvider::StaticClass, TEXT("/Script/Competence"), TEXT("UCompetenceFlagProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompetenceFlagProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
