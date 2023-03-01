// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionUseItem_Map.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionUseItem_Map() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Map_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Map();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_InteractionUseItem_Map::StaticRegisterNativesUAISkill_InteractionUseItem_Map()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Map_NoRegister()
	{
		return UAISkill_InteractionUseItem_Map::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionUseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionUseItem_Map.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionUseItem_Map.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionUseItem_Map>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::ClassParams = {
		&UAISkill_InteractionUseItem_Map::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Map()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionUseItem_Map_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionUseItem_Map, 2188622160);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionUseItem_Map>()
	{
		return UAISkill_InteractionUseItem_Map::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionUseItem_Map(Z_Construct_UClass_UAISkill_InteractionUseItem_Map, &UAISkill_InteractionUseItem_Map::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionUseItem_Map"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionUseItem_Map);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
