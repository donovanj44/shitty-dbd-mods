// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterStatsUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStatsUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterStatsUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterStatsUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCharacterStatsUtilities::StaticRegisterNativesUCharacterStatsUtilities()
	{
	}
	UClass* Z_Construct_UClass_UCharacterStatsUtilities_NoRegister()
	{
		return UCharacterStatsUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterStatsUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterStatsUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStatsUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterStatsUtilities.h" },
		{ "ModuleRelativePath", "Public/CharacterStatsUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterStatsUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStatsUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStatsUtilities_Statics::ClassParams = {
		&UCharacterStatsUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterStatsUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStatsUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterStatsUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterStatsUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterStatsUtilities, 862907851);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterStatsUtilities>()
	{
		return UCharacterStatsUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterStatsUtilities(Z_Construct_UClass_UCharacterStatsUtilities, &UCharacterStatsUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterStatsUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStatsUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
