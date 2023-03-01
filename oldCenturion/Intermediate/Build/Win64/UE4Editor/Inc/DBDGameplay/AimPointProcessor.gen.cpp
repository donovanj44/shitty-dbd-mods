// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/AimPointProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimPointProcessor() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimPointProcessor_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimPointProcessor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UAimPointProcessor::StaticRegisterNativesUAimPointProcessor()
	{
	}
	UClass* Z_Construct_UClass_UAimPointProcessor_NoRegister()
	{
		return UAimPointProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UAimPointProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimPointProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AimPointProcessor.h" },
		{ "ModuleRelativePath", "Public/AimPointProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimPointProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimPointProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimPointProcessor_Statics::ClassParams = {
		&UAimPointProcessor::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAimPointProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimPointProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimPointProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimPointProcessor, 323288705);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UAimPointProcessor>()
	{
		return UAimPointProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimPointProcessor(Z_Construct_UClass_UAimPointProcessor, &UAimPointProcessor::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UAimPointProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimPointProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
