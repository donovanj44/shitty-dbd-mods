// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsOwningSurvivorAuraRevealedToKiller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsOwningSurvivorAuraRevealedToKiller() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsOwningSurvivorAuraRevealedToKiller::StaticRegisterNativesUIsOwningSurvivorAuraRevealedToKiller()
	{
	}
	UClass* Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_NoRegister()
	{
		return UIsOwningSurvivorAuraRevealedToKiller::StaticClass();
	}
	struct Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsOwningSurvivorAuraRevealedToKiller.h" },
		{ "ModuleRelativePath", "Public/IsOwningSurvivorAuraRevealedToKiller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsOwningSurvivorAuraRevealedToKiller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::ClassParams = {
		&UIsOwningSurvivorAuraRevealedToKiller::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsOwningSurvivorAuraRevealedToKiller, 3602126082);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsOwningSurvivorAuraRevealedToKiller>()
	{
		return UIsOwningSurvivorAuraRevealedToKiller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsOwningSurvivorAuraRevealedToKiller(Z_Construct_UClass_UIsOwningSurvivorAuraRevealedToKiller, &UIsOwningSurvivorAuraRevealedToKiller::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsOwningSurvivorAuraRevealedToKiller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsOwningSurvivorAuraRevealedToKiller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
