// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Saboteur.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaboteur() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USaboteur_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USaboteur();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_NoRegister();
// End Cross Module References
	void USaboteur::StaticRegisterNativesUSaboteur()
	{
	}
	UClass* Z_Construct_UClass_USaboteur_NoRegister()
	{
		return USaboteur::StaticClass();
	}
	struct Z_Construct_UClass_USaboteur_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedMeatHooksOultineStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__revealedMeatHooksOultineStrategy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealedMeatHooksOultineStrategy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealHookDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealHookDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaboteur_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaboteur_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Saboteur.h" },
		{ "ModuleRelativePath", "Public/Saboteur.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Saboteur.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy = { "_revealedMeatHooksOultineStrategy", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaboteur, _revealedMeatHooksOultineStrategy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy_Inner = { "_revealedMeatHooksOultineStrategy", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeatHookOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaboteur_Statics::NewProp__revealHookDistance_MetaData[] = {
		{ "Category", "Saboteur" },
		{ "ModuleRelativePath", "Public/Saboteur.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaboteur_Statics::NewProp__revealHookDistance = { "_revealHookDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_revealHookDistance, USaboteur), STRUCT_OFFSET(USaboteur, _revealHookDistance), METADATA_PARAMS(Z_Construct_UClass_USaboteur_Statics::NewProp__revealHookDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaboteur_Statics::NewProp__revealHookDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaboteur_Statics::NewProp__cooldownDuration_MetaData[] = {
		{ "Category", "Saboteur" },
		{ "ModuleRelativePath", "Public/Saboteur.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaboteur_Statics::NewProp__cooldownDuration = { "_cooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownDuration, USaboteur), STRUCT_OFFSET(USaboteur, _cooldownDuration), METADATA_PARAMS(Z_Construct_UClass_USaboteur_Statics::NewProp__cooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaboteur_Statics::NewProp__cooldownDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaboteur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaboteur_Statics::NewProp__revealedMeatHooksOultineStrategy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaboteur_Statics::NewProp__revealHookDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaboteur_Statics::NewProp__cooldownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaboteur_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaboteur>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaboteur_Statics::ClassParams = {
		&USaboteur::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaboteur_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaboteur_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USaboteur_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaboteur_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaboteur()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaboteur_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaboteur, 4074928167);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USaboteur>()
	{
		return USaboteur::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaboteur(Z_Construct_UClass_USaboteur, &USaboteur::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USaboteur"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaboteur);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
