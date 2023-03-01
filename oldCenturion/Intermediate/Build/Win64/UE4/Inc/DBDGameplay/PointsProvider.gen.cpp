// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PointsProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointsProvider() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPointsProvider_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPointsProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UPointsProvider::StaticRegisterNativesUPointsProvider()
	{
	}
	UClass* Z_Construct_UClass_UPointsProvider_NoRegister()
	{
		return UPointsProvider::StaticClass();
	}
	struct Z_Construct_UClass_UPointsProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointsProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointsProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointsProvider.h" },
		{ "ModuleRelativePath", "Public/PointsProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointsProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointsProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointsProvider_Statics::ClassParams = {
		&UPointsProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPointsProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointsProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointsProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointsProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointsProvider, 1697967438);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPointsProvider>()
	{
		return UPointsProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointsProvider(Z_Construct_UClass_UPointsProvider, &UPointsProvider::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPointsProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointsProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
