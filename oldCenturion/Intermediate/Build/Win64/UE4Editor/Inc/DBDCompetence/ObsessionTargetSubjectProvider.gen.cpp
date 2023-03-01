// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ObsessionTargetSubjectProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsessionTargetSubjectProvider() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UObsessionTargetSubjectProvider_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UObsessionTargetSubjectProvider();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierSubjectProvider();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UObsessionTargetSubjectProvider::StaticRegisterNativesUObsessionTargetSubjectProvider()
	{
	}
	UClass* Z_Construct_UClass_UObsessionTargetSubjectProvider_NoRegister()
	{
		return UObsessionTargetSubjectProvider::StaticClass();
	}
	struct Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierSubjectProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObsessionTargetSubjectProvider.h" },
		{ "ModuleRelativePath", "Public/ObsessionTargetSubjectProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsessionTargetSubjectProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::ClassParams = {
		&UObsessionTargetSubjectProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsessionTargetSubjectProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsessionTargetSubjectProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsessionTargetSubjectProvider, 834029755);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UObsessionTargetSubjectProvider>()
	{
		return UObsessionTargetSubjectProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsessionTargetSubjectProvider(Z_Construct_UClass_UObsessionTargetSubjectProvider, &UObsessionTargetSubjectProvider::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UObsessionTargetSubjectProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsessionTargetSubjectProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
