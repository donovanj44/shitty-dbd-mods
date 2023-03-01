// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/AISkill_InteractionUseItem_Serum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionUseItem_Serum() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Serum();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UAISkill_InteractionUseItem_Serum::StaticRegisterNativesUAISkill_InteractionUseItem_Serum()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_NoRegister()
	{
		return UAISkill_InteractionUseItem_Serum::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionUseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionUseItem_Serum.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionUseItem_Serum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionUseItem_Serum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::ClassParams = {
		&UAISkill_InteractionUseItem_Serum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Serum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionUseItem_Serum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionUseItem_Serum, 4101050352);
	template<> THEK24_API UClass* StaticClass<UAISkill_InteractionUseItem_Serum>()
	{
		return UAISkill_InteractionUseItem_Serum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionUseItem_Serum(Z_Construct_UClass_UAISkill_InteractionUseItem_Serum, &UAISkill_InteractionUseItem_Serum::StaticClass, TEXT("/Script/TheK24"), TEXT("UAISkill_InteractionUseItem_Serum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionUseItem_Serum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
