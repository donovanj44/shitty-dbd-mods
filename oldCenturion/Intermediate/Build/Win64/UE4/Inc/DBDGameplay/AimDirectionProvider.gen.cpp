// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/AimDirectionProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimDirectionProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimDirectionProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimDirectionProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UAimDirectionProvider::StaticRegisterNativesUAimDirectionProvider()
	{
	}
	UClass* Z_Construct_UClass_UAimDirectionProvider_NoRegister()
	{
		return UAimDirectionProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAimDirectionProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimDirectionProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimDirectionProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AimDirectionProvider.h" },
		{ "ModuleRelativePath", "Public/AimDirectionProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimDirectionProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimDirectionProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimDirectionProvider_Statics::ClassParams = {
		&UAimDirectionProvider::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAimDirectionProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimDirectionProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimDirectionProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimDirectionProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimDirectionProvider, 3877028676);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UAimDirectionProvider>()
	{
		return UAimDirectionProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimDirectionProvider(Z_Construct_UClass_UAimDirectionProvider, &UAimDirectionProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UAimDirectionProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimDirectionProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
