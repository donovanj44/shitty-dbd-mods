// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/ApexMufflerAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApexMufflerAddon() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UApexMufflerAddon_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UApexMufflerAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UApexMufflerAddon::StaticRegisterNativesUApexMufflerAddon()
	{
	}
	UClass* Z_Construct_UClass_UApexMufflerAddon_NoRegister()
	{
		return UApexMufflerAddon::StaticClass();
	}
	struct Z_Construct_UClass_UApexMufflerAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApexMufflerAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApexMufflerAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ApexMufflerAddon.h" },
		{ "ModuleRelativePath", "Public/ApexMufflerAddon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApexMufflerAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApexMufflerAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApexMufflerAddon_Statics::ClassParams = {
		&UApexMufflerAddon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UApexMufflerAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApexMufflerAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApexMufflerAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApexMufflerAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApexMufflerAddon, 3161601629);
	template<> THEHILLBILLY_API UClass* StaticClass<UApexMufflerAddon>()
	{
		return UApexMufflerAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApexMufflerAddon(Z_Construct_UClass_UApexMufflerAddon, &UApexMufflerAddon::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UApexMufflerAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApexMufflerAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
