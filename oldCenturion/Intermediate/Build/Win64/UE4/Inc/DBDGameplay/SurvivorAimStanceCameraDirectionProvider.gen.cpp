// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/SurvivorAimStanceCameraDirectionProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAimStanceCameraDirectionProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimDirectionProvider();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void USurvivorAimStanceCameraDirectionProvider::StaticRegisterNativesUSurvivorAimStanceCameraDirectionProvider()
	{
	}
	UClass* Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_NoRegister()
	{
		return USurvivorAimStanceCameraDirectionProvider::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAimDirectionProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorAimStanceCameraDirectionProvider.h" },
		{ "ModuleRelativePath", "Public/SurvivorAimStanceCameraDirectionProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAimStanceCameraDirectionProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::ClassParams = {
		&USurvivorAimStanceCameraDirectionProvider::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorAimStanceCameraDirectionProvider, 331635058);
	template<> DBDGAMEPLAY_API UClass* StaticClass<USurvivorAimStanceCameraDirectionProvider>()
	{
		return USurvivorAimStanceCameraDirectionProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorAimStanceCameraDirectionProvider(Z_Construct_UClass_USurvivorAimStanceCameraDirectionProvider, &USurvivorAimStanceCameraDirectionProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("USurvivorAimStanceCameraDirectionProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAimStanceCameraDirectionProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
