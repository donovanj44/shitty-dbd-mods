// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/ModifierProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierProvider() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierProvider_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UModifierProvider::StaticRegisterNativesUModifierProvider()
	{
	}
	UClass* Z_Construct_UClass_UModifierProvider_NoRegister()
	{
		return UModifierProvider::StaticClass();
	}
	struct Z_Construct_UClass_UModifierProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModifierProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IModifierProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModifierProvider_Statics::ClassParams = {
		&UModifierProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModifierProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModifierProvider, 3404541820);
	template<> COMPETENCE_API UClass* StaticClass<UModifierProvider>()
	{
		return UModifierProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModifierProvider(Z_Construct_UClass_UModifierProvider, &UModifierProvider::StaticClass, TEXT("/Script/Competence"), TEXT("UModifierProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
