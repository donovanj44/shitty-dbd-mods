// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/AndModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UAndModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UAndModifierCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UCompositeModifierCondition();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
	void UAndModifierCondition::StaticRegisterNativesUAndModifierCondition()
	{
	}
	UClass* Z_Construct_UClass_UAndModifierCondition_NoRegister()
	{
		return UAndModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UAndModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositeModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndModifierCondition.h" },
		{ "ModuleRelativePath", "Public/AndModifierCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndModifierCondition_Statics::ClassParams = {
		&UAndModifierCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAndModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndModifierCondition, 3435357305);
	template<> COMPETENCE_API UClass* StaticClass<UAndModifierCondition>()
	{
		return UAndModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndModifierCondition(Z_Construct_UClass_UAndModifierCondition, &UAndModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UAndModifierCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
