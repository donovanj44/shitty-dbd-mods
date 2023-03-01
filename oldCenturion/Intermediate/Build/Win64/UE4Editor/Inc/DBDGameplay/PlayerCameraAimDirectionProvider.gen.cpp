// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PlayerCameraAimDirectionProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraAimDirectionProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerCameraAimDirectionProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerCameraAimDirectionProvider();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimDirectionProvider();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UPlayerCameraAimDirectionProvider::StaticRegisterNativesUPlayerCameraAimDirectionProvider()
	{
	}
	UClass* Z_Construct_UClass_UPlayerCameraAimDirectionProvider_NoRegister()
	{
		return UPlayerCameraAimDirectionProvider::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAimDirectionProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerCameraAimDirectionProvider.h" },
		{ "ModuleRelativePath", "Public/PlayerCameraAimDirectionProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCameraAimDirectionProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::ClassParams = {
		&UPlayerCameraAimDirectionProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCameraAimDirectionProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCameraAimDirectionProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCameraAimDirectionProvider, 2781362109);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPlayerCameraAimDirectionProvider>()
	{
		return UPlayerCameraAimDirectionProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCameraAimDirectionProvider(Z_Construct_UClass_UPlayerCameraAimDirectionProvider, &UPlayerCameraAimDirectionProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPlayerCameraAimDirectionProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCameraAimDirectionProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
