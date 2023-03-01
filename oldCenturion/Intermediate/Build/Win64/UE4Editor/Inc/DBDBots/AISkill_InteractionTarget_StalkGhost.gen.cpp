// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget_StalkGhost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_StalkGhost() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_Stalk();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_InteractionTarget_StalkGhost::StaticRegisterNativesUAISkill_InteractionTarget_StalkGhost()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_NoRegister()
	{
		return UAISkill_InteractionTarget_StalkGhost::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackFromCautiousDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackFromCautiousDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CautiousModeSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CautiousModeSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CautiousModeUnderTargetRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CautiousModeUnderTargetRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget_Stalk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget_StalkGhost.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_StalkGhost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_BackFromCautiousDelay_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_StalkGhost" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_StalkGhost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_BackFromCautiousDelay = { "BackFromCautiousDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_StalkGhost, BackFromCautiousDelay), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_BackFromCautiousDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_BackFromCautiousDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeSpeedFactor_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_StalkGhost" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_StalkGhost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeSpeedFactor = { "CautiousModeSpeedFactor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_StalkGhost, CautiousModeSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeSpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeUnderTargetRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_StalkGhost" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_StalkGhost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeUnderTargetRange = { "CautiousModeUnderTargetRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_StalkGhost, CautiousModeUnderTargetRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeUnderTargetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeUnderTargetRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_BackFromCautiousDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::NewProp_CautiousModeUnderTargetRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_StalkGhost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::ClassParams = {
		&UAISkill_InteractionTarget_StalkGhost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_StalkGhost, 413520768);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget_StalkGhost>()
	{
		return UAISkill_InteractionTarget_StalkGhost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_StalkGhost(Z_Construct_UClass_UAISkill_InteractionTarget_StalkGhost, &UAISkill_InteractionTarget_StalkGhost::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget_StalkGhost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_StalkGhost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
