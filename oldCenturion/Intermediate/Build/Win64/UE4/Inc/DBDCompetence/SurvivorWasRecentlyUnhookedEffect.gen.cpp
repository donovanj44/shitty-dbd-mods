// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SurvivorWasRecentlyUnhookedEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorWasRecentlyUnhookedEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void USurvivorWasRecentlyUnhookedEffect::StaticRegisterNativesUSurvivorWasRecentlyUnhookedEffect()
	{
	}
	UClass* Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_NoRegister()
	{
		return USurvivorWasRecentlyUnhookedEffect::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorWasRecentlyUnhookedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__survivorWasRecentlyUnhookedDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorWasRecentlyUnhookedEffect.h" },
		{ "ModuleRelativePath", "Public/SurvivorWasRecentlyUnhookedEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::NewProp__survivorWasRecentlyUnhookedDuration_MetaData[] = {
		{ "Category", "SurvivorWasRecentlyUnhookedEffect" },
		{ "ModuleRelativePath", "Public/SurvivorWasRecentlyUnhookedEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::NewProp__survivorWasRecentlyUnhookedDuration = { "_survivorWasRecentlyUnhookedDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorWasRecentlyUnhookedEffect, _survivorWasRecentlyUnhookedDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::NewProp__survivorWasRecentlyUnhookedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::NewProp__survivorWasRecentlyUnhookedDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::NewProp__survivorWasRecentlyUnhookedDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorWasRecentlyUnhookedEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::ClassParams = {
		&USurvivorWasRecentlyUnhookedEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorWasRecentlyUnhookedEffect, 660417294);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USurvivorWasRecentlyUnhookedEffect>()
	{
		return USurvivorWasRecentlyUnhookedEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorWasRecentlyUnhookedEffect(Z_Construct_UClass_USurvivorWasRecentlyUnhookedEffect, &USurvivorWasRecentlyUnhookedEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USurvivorWasRecentlyUnhookedEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorWasRecentlyUnhookedEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
