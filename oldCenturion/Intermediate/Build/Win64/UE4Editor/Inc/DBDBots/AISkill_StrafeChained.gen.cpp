// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_StrafeChained.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_StrafeChained() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_StrafeChained_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_StrafeChained();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Strafe();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_StrafeChained::StaticRegisterNativesUAISkill_StrafeChained()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_StrafeChained_NoRegister()
	{
		return UAISkill_StrafeChained::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_StrafeChained_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_StrafeChained_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Strafe,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_StrafeChained_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_StrafeChained.h" },
		{ "ModuleRelativePath", "Public/AISkill_StrafeChained.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_StrafeChained_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_StrafeChained>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_StrafeChained_Statics::ClassParams = {
		&UAISkill_StrafeChained::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_StrafeChained_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_StrafeChained_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_StrafeChained()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_StrafeChained_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_StrafeChained, 30190537);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_StrafeChained>()
	{
		return UAISkill_StrafeChained::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_StrafeChained(Z_Construct_UClass_UAISkill_StrafeChained, &UAISkill_StrafeChained::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_StrafeChained"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_StrafeChained);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
