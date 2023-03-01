// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_PossessTheKiller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_PossessTheKiller() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_PossessTheKiller_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_PossessTheKiller();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_PossessTheKiller::StaticRegisterNativesUAISkill_PossessTheKiller()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_PossessTheKiller_NoRegister()
	{
		return UAISkill_PossessTheKiller::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_PossessTheKiller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_PossessTheKiller.h" },
		{ "ModuleRelativePath", "Public/AISkill_PossessTheKiller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_PossessTheKiller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::ClassParams = {
		&UAISkill_PossessTheKiller::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_PossessTheKiller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_PossessTheKiller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_PossessTheKiller, 504229583);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_PossessTheKiller>()
	{
		return UAISkill_PossessTheKiller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_PossessTheKiller(Z_Construct_UClass_UAISkill_PossessTheKiller, &UAISkill_PossessTheKiller::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_PossessTheKiller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_PossessTheKiller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
