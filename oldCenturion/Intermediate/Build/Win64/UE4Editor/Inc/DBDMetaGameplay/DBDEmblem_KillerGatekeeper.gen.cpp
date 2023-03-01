// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDMetaGameplay/Public/DBDEmblem_KillerGatekeeper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblem_KillerGatekeeper() {}
// Cross Module References
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_NoRegister();
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerGatekeeper();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem();
	UPackage* Z_Construct_UPackage__Script_DBDMetaGameplay();
// End Cross Module References
	void UDBDEmblem_KillerGatekeeper::StaticRegisterNativesUDBDEmblem_KillerGatekeeper()
	{
	}
	UClass* Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_NoRegister()
	{
		return UDBDEmblem_KillerGatekeeper::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEmblem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDMetaGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEmblem_KillerGatekeeper.h" },
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerGatekeeper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEmblem_KillerGatekeeper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::ClassParams = {
		&UDBDEmblem_KillerGatekeeper::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEmblem_KillerGatekeeper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEmblem_KillerGatekeeper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEmblem_KillerGatekeeper, 2889343056);
	template<> DBDMETAGAMEPLAY_API UClass* StaticClass<UDBDEmblem_KillerGatekeeper>()
	{
		return UDBDEmblem_KillerGatekeeper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEmblem_KillerGatekeeper(Z_Construct_UClass_UDBDEmblem_KillerGatekeeper, &UDBDEmblem_KillerGatekeeper::StaticClass, TEXT("/Script/DBDMetaGameplay"), TEXT("UDBDEmblem_KillerGatekeeper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEmblem_KillerGatekeeper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
