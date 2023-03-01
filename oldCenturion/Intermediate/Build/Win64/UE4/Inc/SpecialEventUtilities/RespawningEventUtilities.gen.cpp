// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpecialEventUtilities/Public/RespawningEventUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawningEventUtilities() {}
// Cross Module References
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventUtilities_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SpecialEventUtilities();
// End Cross Module References
	void URespawningEventUtilities::StaticRegisterNativesURespawningEventUtilities()
	{
	}
	UClass* Z_Construct_UClass_URespawningEventUtilities_NoRegister()
	{
		return URespawningEventUtilities::StaticClass();
	}
	struct Z_Construct_UClass_URespawningEventUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawningEventUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SpecialEventUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawningEventUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RespawningEventUtilities.h" },
		{ "ModuleRelativePath", "Public/RespawningEventUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawningEventUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawningEventUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawningEventUtilities_Statics::ClassParams = {
		&URespawningEventUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URespawningEventUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawningEventUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawningEventUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawningEventUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawningEventUtilities, 990315511);
	template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<URespawningEventUtilities>()
	{
		return URespawningEventUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawningEventUtilities(Z_Construct_UClass_URespawningEventUtilities, &URespawningEventUtilities::StaticClass, TEXT("/Script/SpecialEventUtilities"), TEXT("URespawningEventUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawningEventUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
