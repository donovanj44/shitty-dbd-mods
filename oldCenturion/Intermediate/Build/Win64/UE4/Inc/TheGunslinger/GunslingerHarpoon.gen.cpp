// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/GunslingerHarpoon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunslingerHarpoon() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerHarpoon_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerHarpoon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UGunslingerHarpoon::StaticRegisterNativesUGunslingerHarpoon()
	{
	}
	UClass* Z_Construct_UClass_UGunslingerHarpoon_NoRegister()
	{
		return UGunslingerHarpoon::StaticClass();
	}
	struct Z_Construct_UClass_UGunslingerHarpoon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGunslingerHarpoon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunslingerHarpoon_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GunslingerHarpoon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGunslingerHarpoon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGunslingerHarpoon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGunslingerHarpoon_Statics::ClassParams = {
		&UGunslingerHarpoon::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGunslingerHarpoon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGunslingerHarpoon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGunslingerHarpoon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGunslingerHarpoon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGunslingerHarpoon, 2623196548);
	template<> THEGUNSLINGER_API UClass* StaticClass<UGunslingerHarpoon>()
	{
		return UGunslingerHarpoon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGunslingerHarpoon(Z_Construct_UClass_UGunslingerHarpoon, &UGunslingerHarpoon::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UGunslingerHarpoon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGunslingerHarpoon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
