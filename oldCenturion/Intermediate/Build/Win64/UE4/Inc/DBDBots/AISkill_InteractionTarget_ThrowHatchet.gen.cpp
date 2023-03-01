// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget_ThrowHatchet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_ThrowHatchet() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_Throw();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_InteractionTarget_ThrowHatchet::StaticRegisterNativesUAISkill_InteractionTarget_ThrowHatchet()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_NoRegister()
	{
		return UAISkill_InteractionTarget_ThrowHatchet::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget_Throw,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget_ThrowHatchet.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowHatchet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_ThrowHatchet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::ClassParams = {
		&UAISkill_InteractionTarget_ThrowHatchet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_ThrowHatchet, 3284039248);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget_ThrowHatchet>()
	{
		return UAISkill_InteractionTarget_ThrowHatchet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_ThrowHatchet(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowHatchet, &UAISkill_InteractionTarget_ThrowHatchet::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget_ThrowHatchet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_ThrowHatchet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
