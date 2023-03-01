// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeImmunityEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeImmunityEffect() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeImmunityEffect_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeImmunityEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivateOnEventTimedStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UK25ChainStrikeImmunityEffect::StaticRegisterNativesUK25ChainStrikeImmunityEffect()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeImmunityEffect_NoRegister()
	{
		return UK25ChainStrikeImmunityEffect::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainStrikeImmunityDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainStrikeImmunityDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActivateOnEventTimedStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrikeImmunityEffect.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeImmunityEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::NewProp__chainStrikeImmunityDuration_MetaData[] = {
		{ "Category", "K25ChainStrikeImmunityEffect" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeImmunityEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::NewProp__chainStrikeImmunityDuration = { "_chainStrikeImmunityDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeImmunityEffect, _chainStrikeImmunityDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::NewProp__chainStrikeImmunityDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::NewProp__chainStrikeImmunityDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::NewProp__chainStrikeImmunityDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeImmunityEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::ClassParams = {
		&UK25ChainStrikeImmunityEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeImmunityEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeImmunityEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeImmunityEffect, 3114750810);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeImmunityEffect>()
	{
		return UK25ChainStrikeImmunityEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeImmunityEffect(Z_Construct_UClass_UK25ChainStrikeImmunityEffect, &UK25ChainStrikeImmunityEffect::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeImmunityEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeImmunityEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
