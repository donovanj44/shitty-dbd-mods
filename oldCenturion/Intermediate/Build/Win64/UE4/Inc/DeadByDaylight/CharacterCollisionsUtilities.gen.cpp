// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterCollisionsUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCollisionsUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterCollisionsUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterCollisionsUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCharacterCollisionsUtilities::StaticRegisterNativesUCharacterCollisionsUtilities()
	{
	}
	UClass* Z_Construct_UClass_UCharacterCollisionsUtilities_NoRegister()
	{
		return UCharacterCollisionsUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterCollisionsUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterCollisionsUtilities.h" },
		{ "ModuleRelativePath", "Public/CharacterCollisionsUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCollisionsUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::ClassParams = {
		&UCharacterCollisionsUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterCollisionsUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterCollisionsUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterCollisionsUtilities, 265353932);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterCollisionsUtilities>()
	{
		return UCharacterCollisionsUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterCollisionsUtilities(Z_Construct_UClass_UCharacterCollisionsUtilities, &UCharacterCollisionsUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterCollisionsUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCollisionsUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
