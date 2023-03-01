// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/SelfPreservation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfPreservation() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_USelfPreservation_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_USelfPreservation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void USelfPreservation::StaticRegisterNativesUSelfPreservation()
	{
	}
	UClass* Z_Construct_UClass_USelfPreservation_NoRegister()
	{
		return USelfPreservation::StaticClass();
	}
	struct Z_Construct_UClass_USelfPreservation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selfPreservationEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__selfPreservationEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitDistanceToTriggerPerkEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hitDistanceToTriggerPerkEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfPreservation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfPreservation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelfPreservation.h" },
		{ "ModuleRelativePath", "Public/SelfPreservation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfPreservation_Statics::NewProp__selfPreservationEffectDuration_MetaData[] = {
		{ "Category", "SelfPreservation" },
		{ "ModuleRelativePath", "Public/SelfPreservation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USelfPreservation_Statics::NewProp__selfPreservationEffectDuration = { "_selfPreservationEffectDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_selfPreservationEffectDuration, USelfPreservation), STRUCT_OFFSET(USelfPreservation, _selfPreservationEffectDuration), METADATA_PARAMS(Z_Construct_UClass_USelfPreservation_Statics::NewProp__selfPreservationEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfPreservation_Statics::NewProp__selfPreservationEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfPreservation_Statics::NewProp__hitDistanceToTriggerPerkEffect_MetaData[] = {
		{ "Category", "SelfPreservation" },
		{ "ModuleRelativePath", "Public/SelfPreservation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USelfPreservation_Statics::NewProp__hitDistanceToTriggerPerkEffect = { "_hitDistanceToTriggerPerkEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hitDistanceToTriggerPerkEffect, USelfPreservation), STRUCT_OFFSET(USelfPreservation, _hitDistanceToTriggerPerkEffect), METADATA_PARAMS(Z_Construct_UClass_USelfPreservation_Statics::NewProp__hitDistanceToTriggerPerkEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfPreservation_Statics::NewProp__hitDistanceToTriggerPerkEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelfPreservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfPreservation_Statics::NewProp__selfPreservationEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfPreservation_Statics::NewProp__hitDistanceToTriggerPerkEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfPreservation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfPreservation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelfPreservation_Statics::ClassParams = {
		&USelfPreservation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USelfPreservation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USelfPreservation_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USelfPreservation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfPreservation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfPreservation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelfPreservation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelfPreservation, 2422033307);
	template<> THEK23_API UClass* StaticClass<USelfPreservation>()
	{
		return USelfPreservation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelfPreservation(Z_Construct_UClass_USelfPreservation, &USelfPreservation::StaticClass, TEXT("/Script/TheK23"), TEXT("USelfPreservation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfPreservation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif