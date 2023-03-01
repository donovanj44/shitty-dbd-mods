// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_Interaction_ForThePeople.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Interaction_ForThePeople() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction_ForThePeople_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction_ForThePeople();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIIntentionValidatorInterface_NoRegister();
// End Cross Module References
	void UAISkill_Interaction_ForThePeople::StaticRegisterNativesUAISkill_Interaction_ForThePeople()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Interaction_ForThePeople_NoRegister()
	{
		return UAISkill_Interaction_ForThePeople::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockInteractionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlockInteractionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Interaction_ForThePeople.h" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_ForThePeople.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::NewProp_BlockInteractionId_MetaData[] = {
		{ "Category", "AISkill_Interaction_ForThePeople" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction_ForThePeople.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::NewProp_BlockInteractionId = { "BlockInteractionId", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction_ForThePeople, BlockInteractionId), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::NewProp_BlockInteractionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::NewProp_BlockInteractionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::NewProp_BlockInteractionId,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIIntentionValidatorInterface_NoRegister, (int32)VTABLE_OFFSET(UAISkill_Interaction_ForThePeople, IAIIntentionValidatorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Interaction_ForThePeople>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::ClassParams = {
		&UAISkill_Interaction_ForThePeople::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Interaction_ForThePeople()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Interaction_ForThePeople_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Interaction_ForThePeople, 2627726177);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_Interaction_ForThePeople>()
	{
		return UAISkill_Interaction_ForThePeople::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Interaction_ForThePeople(Z_Construct_UClass_UAISkill_Interaction_ForThePeople, &UAISkill_Interaction_ForThePeople::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_Interaction_ForThePeople"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Interaction_ForThePeople);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
