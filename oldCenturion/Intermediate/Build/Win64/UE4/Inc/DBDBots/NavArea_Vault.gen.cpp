// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavArea_Vault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Vault() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UNavArea_Vault_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavArea_Vault();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UNavArea_Vault::StaticRegisterNativesUNavArea_Vault()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Vault_NoRegister()
	{
		return UNavArea_Vault::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Vault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Vault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Vault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavArea_Vault.h" },
		{ "ModuleRelativePath", "Public/NavArea_Vault.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Vault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Vault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Vault_Statics::ClassParams = {
		&UNavArea_Vault::StaticClass,
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
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Vault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Vault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Vault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavArea_Vault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_Vault, 1539262480);
	template<> DBDBOTS_API UClass* StaticClass<UNavArea_Vault>()
	{
		return UNavArea_Vault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Vault(Z_Construct_UClass_UNavArea_Vault, &UNavArea_Vault::StaticClass, TEXT("/Script/DBDBots"), TEXT("UNavArea_Vault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Vault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
