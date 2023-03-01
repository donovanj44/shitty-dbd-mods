// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/Addon_Beartrap_05.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_Beartrap_05() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UAddon_Beartrap_05_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UAddon_Beartrap_05();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
// End Cross Module References
	void UAddon_Beartrap_05::StaticRegisterNativesUAddon_Beartrap_05()
	{
	}
	UClass* Z_Construct_UClass_UAddon_Beartrap_05_NoRegister()
	{
		return UAddon_Beartrap_05::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_Beartrap_05_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_Beartrap_05_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_Beartrap_05_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_Beartrap_05.h" },
		{ "ModuleRelativePath", "Public/Addon_Beartrap_05.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_Beartrap_05_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_Beartrap_05>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_Beartrap_05_Statics::ClassParams = {
		&UAddon_Beartrap_05::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddon_Beartrap_05_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_Beartrap_05_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_Beartrap_05()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_Beartrap_05_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_Beartrap_05, 2863799513);
	template<> THETRAPPER_API UClass* StaticClass<UAddon_Beartrap_05>()
	{
		return UAddon_Beartrap_05::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_Beartrap_05(Z_Construct_UClass_UAddon_Beartrap_05, &UAddon_Beartrap_05::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UAddon_Beartrap_05"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_Beartrap_05);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
