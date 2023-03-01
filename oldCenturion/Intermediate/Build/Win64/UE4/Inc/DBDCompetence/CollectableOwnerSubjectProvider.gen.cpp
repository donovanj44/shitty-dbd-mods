// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/CollectableOwnerSubjectProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableOwnerSubjectProvider() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCollectableOwnerSubjectProvider_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCollectableOwnerSubjectProvider();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierSubjectProvider();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UCollectableOwnerSubjectProvider::StaticRegisterNativesUCollectableOwnerSubjectProvider()
	{
	}
	UClass* Z_Construct_UClass_UCollectableOwnerSubjectProvider_NoRegister()
	{
		return UCollectableOwnerSubjectProvider::StaticClass();
	}
	struct Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierSubjectProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectableOwnerSubjectProvider.h" },
		{ "ModuleRelativePath", "Public/CollectableOwnerSubjectProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectableOwnerSubjectProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::ClassParams = {
		&UCollectableOwnerSubjectProvider::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectableOwnerSubjectProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectableOwnerSubjectProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectableOwnerSubjectProvider, 2890449396);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UCollectableOwnerSubjectProvider>()
	{
		return UCollectableOwnerSubjectProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectableOwnerSubjectProvider(Z_Construct_UClass_UCollectableOwnerSubjectProvider, &UCollectableOwnerSubjectProvider::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UCollectableOwnerSubjectProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableOwnerSubjectProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
