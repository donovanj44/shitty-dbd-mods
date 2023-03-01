// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/Addon_TormentMode_18.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TormentMode_18() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_18_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_18();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UAddon_TormentMode_18::StaticRegisterNativesUAddon_TormentMode_18()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TormentMode_18_NoRegister()
	{
		return UAddon_TormentMode_18::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TormentMode_18_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TormentMode_18_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_18_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TormentMode_18.h" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_18.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TormentMode_18_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TormentMode_18>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TormentMode_18_Statics::ClassParams = {
		&UAddon_TormentMode_18::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_18_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_18_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TormentMode_18()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TormentMode_18_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TormentMode_18, 182378581);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAddon_TormentMode_18>()
	{
		return UAddon_TormentMode_18::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TormentMode_18(Z_Construct_UClass_UAddon_TormentMode_18, &UAddon_TormentMode_18::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAddon_TormentMode_18"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TormentMode_18);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
