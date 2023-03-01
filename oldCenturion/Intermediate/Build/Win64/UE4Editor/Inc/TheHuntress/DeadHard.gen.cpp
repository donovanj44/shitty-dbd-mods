// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/DeadHard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadHard() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UDeadHard_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UDeadHard();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister();
// End Cross Module References
	void UDeadHard::StaticRegisterNativesUDeadHard()
	{
	}
	UClass* Z_Construct_UClass_UDeadHard_NoRegister()
	{
		return UDeadHard::StaticClass();
	}
	struct Z_Construct_UClass_UDeadHard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustedCooldownPerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exhaustedCooldownPerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exhaustedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deadHardIconCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__deadHardIconCooldownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadHard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadHard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeadHard.h" },
		{ "ModuleRelativePath", "Public/DeadHard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedCooldownPerLevel_MetaData[] = {
		{ "Category", "DeadHard" },
		{ "ModuleRelativePath", "Public/DeadHard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedCooldownPerLevel = { "_exhaustedCooldownPerLevel", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exhaustedCooldownPerLevel, UDeadHard), STRUCT_OFFSET(UDeadHard, _exhaustedCooldownPerLevel), METADATA_PARAMS(Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedCooldownPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedCooldownPerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeadHard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedEffect = { "_exhaustedEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeadHard, _exhaustedEffect), Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadHard_Statics::NewProp__deadHardIconCooldownDuration_MetaData[] = {
		{ "Category", "DeadHard" },
		{ "ModuleRelativePath", "Public/DeadHard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeadHard_Statics::NewProp__deadHardIconCooldownDuration = { "_deadHardIconCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeadHard, _deadHardIconCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UDeadHard_Statics::NewProp__deadHardIconCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHard_Statics::NewProp__deadHardIconCooldownDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeadHard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedCooldownPerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadHard_Statics::NewProp__exhaustedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadHard_Statics::NewProp__deadHardIconCooldownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadHard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadHard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadHard_Statics::ClassParams = {
		&UDeadHard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeadHard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHard_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeadHard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadHard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadHard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadHard, 1089123134);
	template<> THEHUNTRESS_API UClass* StaticClass<UDeadHard>()
	{
		return UDeadHard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadHard(Z_Construct_UClass_UDeadHard, &UDeadHard::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UDeadHard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadHard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
