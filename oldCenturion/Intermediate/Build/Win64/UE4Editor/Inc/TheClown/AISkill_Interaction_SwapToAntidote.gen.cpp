// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/AISkill_Interaction_SwapToAntidote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Interaction_SwapToAntidote() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_TheClown();
// End Cross Module References
	void UAISkill_Interaction_SwapToAntidote::StaticRegisterNativesUAISkill_Interaction_SwapToAntidote()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_NoRegister()
	{
		return UAISkill_Interaction_SwapToAntidote::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Interaction_SwapToAntidote.h" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_SwapToAntidote.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Interaction_SwapToAntidote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::ClassParams = {
		&UAISkill_Interaction_SwapToAntidote::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Interaction_SwapToAntidote, 322857457);
	template<> THECLOWN_API UClass* StaticClass<UAISkill_Interaction_SwapToAntidote>()
	{
		return UAISkill_Interaction_SwapToAntidote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Interaction_SwapToAntidote(Z_Construct_UClass_UAISkill_Interaction_SwapToAntidote, &UAISkill_Interaction_SwapToAntidote::StaticClass, TEXT("/Script/TheClown"), TEXT("UAISkill_Interaction_SwapToAntidote"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Interaction_SwapToAntidote);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
