// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoudNoiseUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudNoiseUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULoudNoiseUtilities::StaticRegisterNativesULoudNoiseUtilities()
	{
	}
	UClass* Z_Construct_UClass_ULoudNoiseUtilities_NoRegister()
	{
		return ULoudNoiseUtilities::StaticClass();
	}
	struct Z_Construct_UClass_ULoudNoiseUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudNoiseUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoudNoiseUtilities.h" },
		{ "ModuleRelativePath", "Public/LoudNoiseUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudNoiseUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudNoiseUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoudNoiseUtilities_Statics::ClassParams = {
		&ULoudNoiseUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudNoiseUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoudNoiseUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoudNoiseUtilities, 1981116583);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoudNoiseUtilities>()
	{
		return ULoudNoiseUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoudNoiseUtilities(Z_Construct_UClass_ULoudNoiseUtilities, &ULoudNoiseUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoudNoiseUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudNoiseUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
