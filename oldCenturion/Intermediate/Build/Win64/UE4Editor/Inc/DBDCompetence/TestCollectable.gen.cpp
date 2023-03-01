// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/TestCollectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCollectable() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ATestCollectable_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_ATestCollectable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void ATestCollectable::StaticRegisterNativesATestCollectable()
	{
	}
	UClass* Z_Construct_UClass_ATestCollectable_NoRegister()
	{
		return ATestCollectable::StaticClass();
	}
	struct Z_Construct_UClass_ATestCollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestCollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestCollectable.h" },
		{ "ModuleRelativePath", "Public/TestCollectable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestCollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestCollectable_Statics::ClassParams = {
		&ATestCollectable::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestCollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestCollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestCollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestCollectable, 3484822022);
	template<> DBDCOMPETENCE_API UClass* StaticClass<ATestCollectable>()
	{
		return ATestCollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestCollectable(Z_Construct_UClass_ATestCollectable, &ATestCollectable::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("ATestCollectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
