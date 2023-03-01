// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_Interaction_Reel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Interaction_Reel() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction_Reel_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction_Reel();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_Interaction_Reel::StaticRegisterNativesUAISkill_Interaction_Reel()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Interaction_Reel_NoRegister()
	{
		return UAISkill_Interaction_Reel::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Interaction_Reel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Interaction_Reel.h" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_Reel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Interaction_Reel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::ClassParams = {
		&UAISkill_Interaction_Reel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Interaction_Reel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Interaction_Reel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Interaction_Reel, 2000426783);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_Interaction_Reel>()
	{
		return UAISkill_Interaction_Reel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Interaction_Reel(Z_Construct_UClass_UAISkill_Interaction_Reel, &UAISkill_Interaction_Reel::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_Interaction_Reel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Interaction_Reel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
