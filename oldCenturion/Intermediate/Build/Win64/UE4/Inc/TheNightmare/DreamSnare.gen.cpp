// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/DreamSnare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamSnare() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_ADreamSnare_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_ADreamSnare();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
// End Cross Module References
	void ADreamSnare::StaticRegisterNativesADreamSnare()
	{
	}
	UClass* Z_Construct_UClass_ADreamSnare_NoRegister()
	{
		return ADreamSnare::StaticClass();
	}
	struct Z_Construct_UClass_ADreamSnare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADreamSnare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADreamSnare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DreamSnare.h" },
		{ "ModuleRelativePath", "Public/DreamSnare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADreamSnare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADreamSnare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADreamSnare_Statics::ClassParams = {
		&ADreamSnare::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADreamSnare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADreamSnare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADreamSnare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADreamSnare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADreamSnare, 2590062893);
	template<> THENIGHTMARE_API UClass* StaticClass<ADreamSnare>()
	{
		return ADreamSnare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADreamSnare(Z_Construct_UClass_ADreamSnare, &ADreamSnare::StaticClass, TEXT("/Script/TheNightmare"), TEXT("ADreamSnare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADreamSnare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
