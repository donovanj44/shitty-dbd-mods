// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsClosestEffectCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsClosestEffectCondition() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsClosestEffectCondition_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsClosestEffectCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsClosestEffectCondition::StaticRegisterNativesUIsClosestEffectCondition()
	{
	}
	UClass* Z_Construct_UClass_UIsClosestEffectCondition_NoRegister()
	{
		return UIsClosestEffectCondition::StaticClass();
	}
	struct Z_Construct_UClass_UIsClosestEffectCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsClosestEffectCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsClosestEffectCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsClosestEffectCondition.h" },
		{ "ModuleRelativePath", "Public/IsClosestEffectCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsClosestEffectCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsClosestEffectCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsClosestEffectCondition_Statics::ClassParams = {
		&UIsClosestEffectCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsClosestEffectCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsClosestEffectCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsClosestEffectCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsClosestEffectCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsClosestEffectCondition, 1562059196);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsClosestEffectCondition>()
	{
		return UIsClosestEffectCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsClosestEffectCondition(Z_Construct_UClass_UIsClosestEffectCondition, &UIsClosestEffectCondition::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsClosestEffectCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsClosestEffectCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
