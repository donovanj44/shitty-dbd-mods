// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HoneyLocustThornsAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoneyLocustThornsAddon() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHoneyLocustThornsAddon_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHoneyLocustThornsAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
// End Cross Module References
	void UHoneyLocustThornsAddon::StaticRegisterNativesUHoneyLocustThornsAddon()
	{
	}
	UClass* Z_Construct_UClass_UHoneyLocustThornsAddon_NoRegister()
	{
		return UHoneyLocustThornsAddon::StaticClass();
	}
	struct Z_Construct_UClass_UHoneyLocustThornsAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoneyLocustThornsAddon.h" },
		{ "ModuleRelativePath", "Public/HoneyLocustThornsAddon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoneyLocustThornsAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::ClassParams = {
		&UHoneyLocustThornsAddon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoneyLocustThornsAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoneyLocustThornsAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoneyLocustThornsAddon, 991821950);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHoneyLocustThornsAddon>()
	{
		return UHoneyLocustThornsAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoneyLocustThornsAddon(Z_Construct_UClass_UHoneyLocustThornsAddon, &UHoneyLocustThornsAddon::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHoneyLocustThornsAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoneyLocustThornsAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
