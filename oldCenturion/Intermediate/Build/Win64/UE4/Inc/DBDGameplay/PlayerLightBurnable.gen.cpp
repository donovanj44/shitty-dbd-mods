// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PlayerLightBurnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLightBurnable() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerLightBurnable_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerLightBurnable();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ULightBurnable();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UPlayerLightBurnable::StaticRegisterNativesUPlayerLightBurnable()
	{
	}
	UClass* Z_Construct_UClass_UPlayerLightBurnable_NoRegister()
	{
		return UPlayerLightBurnable::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerLightBurnable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerLightBurnable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightBurnable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerLightBurnable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerLightBurnable.h" },
		{ "ModuleRelativePath", "Public/PlayerLightBurnable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerLightBurnable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerLightBurnable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerLightBurnable_Statics::ClassParams = {
		&UPlayerLightBurnable::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerLightBurnable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerLightBurnable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerLightBurnable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerLightBurnable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerLightBurnable, 2714380313);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPlayerLightBurnable>()
	{
		return UPlayerLightBurnable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerLightBurnable(Z_Construct_UClass_UPlayerLightBurnable, &UPlayerLightBurnable::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPlayerLightBurnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerLightBurnable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
