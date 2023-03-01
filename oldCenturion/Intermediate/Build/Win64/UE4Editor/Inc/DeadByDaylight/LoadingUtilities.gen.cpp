// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoadingUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoadingUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULoadingUtilities::StaticRegisterNativesULoadingUtilities()
	{
	}
	UClass* Z_Construct_UClass_ULoadingUtilities_NoRegister()
	{
		return ULoadingUtilities::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadingUtilities.h" },
		{ "ModuleRelativePath", "Public/LoadingUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingUtilities_Statics::ClassParams = {
		&ULoadingUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoadingUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingUtilities, 2856572365);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoadingUtilities>()
	{
		return ULoadingUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingUtilities(Z_Construct_UClass_ULoadingUtilities, &ULoadingUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoadingUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
