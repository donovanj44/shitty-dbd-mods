// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget_ThrowPlague.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_ThrowPlague() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_Throw();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UAISkill_InteractionTarget_ThrowPlague::StaticRegisterNativesUAISkill_InteractionTarget_ThrowPlague()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_NoRegister()
	{
		return UAISkill_InteractionTarget_ThrowPlague::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamageSickTargetTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileDamageSickTargetTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget_Throw,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget_ThrowPlague.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowPlague.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::NewProp_ProjectileDamageSickTargetTag_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_ThrowPlague" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_ThrowPlague.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::NewProp_ProjectileDamageSickTargetTag = { "ProjectileDamageSickTargetTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_ThrowPlague, ProjectileDamageSickTargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::NewProp_ProjectileDamageSickTargetTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::NewProp_ProjectileDamageSickTargetTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::NewProp_ProjectileDamageSickTargetTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_ThrowPlague>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::ClassParams = {
		&UAISkill_InteractionTarget_ThrowPlague::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_ThrowPlague, 309653525);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget_ThrowPlague>()
	{
		return UAISkill_InteractionTarget_ThrowPlague::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_ThrowPlague(Z_Construct_UClass_UAISkill_InteractionTarget_ThrowPlague, &UAISkill_InteractionTarget_ThrowPlague::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget_ThrowPlague"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_ThrowPlague);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
