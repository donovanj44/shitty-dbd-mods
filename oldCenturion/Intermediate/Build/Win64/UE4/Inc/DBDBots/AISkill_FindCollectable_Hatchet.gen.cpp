// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_FindCollectable_Hatchet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_FindCollectable_Hatchet() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindCollectable_Hatchet();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindCollectable();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_FindCollectable_Hatchet::StaticRegisterNativesUAISkill_FindCollectable_Hatchet()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_NoRegister()
	{
		return UAISkill_FindCollectable_Hatchet::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_FindCollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_FindCollectable_Hatchet.h" },
		{ "ModuleRelativePath", "Public/AISkill_FindCollectable_Hatchet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_FindCollectable_Hatchet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::ClassParams = {
		&UAISkill_FindCollectable_Hatchet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_FindCollectable_Hatchet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_FindCollectable_Hatchet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_FindCollectable_Hatchet, 3928148064);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_FindCollectable_Hatchet>()
	{
		return UAISkill_FindCollectable_Hatchet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_FindCollectable_Hatchet(Z_Construct_UClass_UAISkill_FindCollectable_Hatchet, &UAISkill_FindCollectable_Hatchet::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_FindCollectable_Hatchet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_FindCollectable_Hatchet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif