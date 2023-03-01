// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AssetUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAssetUtilities::StaticRegisterNativesUAssetUtilities()
	{
	}
	UClass* Z_Construct_UClass_UAssetUtilities_NoRegister()
	{
		return UAssetUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UAssetUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetUtilities.h" },
		{ "ModuleRelativePath", "Public/AssetUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetUtilities_Statics::ClassParams = {
		&UAssetUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetUtilities, 2799570455);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAssetUtilities>()
	{
		return UAssetUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetUtilities(Z_Construct_UClass_UAssetUtilities, &UAssetUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAssetUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
