// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/OrModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UOrModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UOrModifierCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompositeModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UOrModifierCondition::StaticRegisterNativesUOrModifierCondition()
	{
	}
	UClass* Z_Construct_UClass_UOrModifierCondition_NoRegister()
	{
		return UOrModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UOrModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositeModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OrModifierCondition.h" },
		{ "ModuleRelativePath", "Public/OrModifierCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOrModifierCondition_Statics::ClassParams = {
		&UOrModifierCondition::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOrModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOrModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOrModifierCondition, 3623118127);
	template<> COMPETENCE_API UClass* StaticClass<UOrModifierCondition>()
	{
		return UOrModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOrModifierCondition(Z_Construct_UClass_UOrModifierCondition, &UOrModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UOrModifierCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
