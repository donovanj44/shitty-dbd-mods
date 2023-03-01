// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ActivateOnEventTimedStatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateOnEventTimedStatusEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivateOnEventTimedStatusEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivateOnEventTimedStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void UActivateOnEventTimedStatusEffect::StaticRegisterNativesUActivateOnEventTimedStatusEffect()
	{
	}
	UClass* Z_Construct_UClass_UActivateOnEventTimedStatusEffect_NoRegister()
	{
		return UActivateOnEventTimedStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventsToActivateOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__eventsToActivateOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActivateOnEventTimedStatusEffect.h" },
		{ "ModuleRelativePath", "Public/ActivateOnEventTimedStatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::NewProp__eventsToActivateOn_MetaData[] = {
		{ "Category", "ActivateOnEventTimedStatusEffect" },
		{ "ModuleRelativePath", "Public/ActivateOnEventTimedStatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::NewProp__eventsToActivateOn = { "_eventsToActivateOn", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateOnEventTimedStatusEffect, _eventsToActivateOn), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::NewProp__eventsToActivateOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::NewProp__eventsToActivateOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::NewProp__eventsToActivateOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateOnEventTimedStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::ClassParams = {
		&UActivateOnEventTimedStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivateOnEventTimedStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivateOnEventTimedStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateOnEventTimedStatusEffect, 2813673559);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UActivateOnEventTimedStatusEffect>()
	{
		return UActivateOnEventTimedStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateOnEventTimedStatusEffect(Z_Construct_UClass_UActivateOnEventTimedStatusEffect, &UActivateOnEventTimedStatusEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UActivateOnEventTimedStatusEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateOnEventTimedStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
