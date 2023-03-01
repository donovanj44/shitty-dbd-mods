// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/Addon_TheBlight_18.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TheBlight_18() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_18_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_18();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UAddon_TheBlight_18::StaticRegisterNativesUAddon_TheBlight_18()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TheBlight_18_NoRegister()
	{
		return UAddon_TheBlight_18::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TheBlight_18_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TheBlight_18_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_18_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TheBlight_18.h" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_18.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TheBlight_18_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TheBlight_18>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TheBlight_18_Statics::ClassParams = {
		&UAddon_TheBlight_18::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_18_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_18_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TheBlight_18()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TheBlight_18_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TheBlight_18, 1407045958);
	template<> THEBLIGHT_API UClass* StaticClass<UAddon_TheBlight_18>()
	{
		return UAddon_TheBlight_18::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TheBlight_18(Z_Construct_UClass_UAddon_TheBlight_18, &UAddon_TheBlight_18::StaticClass, TEXT("/Script/TheBlight"), TEXT("UAddon_TheBlight_18"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TheBlight_18);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
