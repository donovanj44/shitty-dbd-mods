// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTeleportEthereal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTeleportEthereal() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTeleportEthereal();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTeleport();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UAISkill_InteractionTeleportEthereal::StaticRegisterNativesUAISkill_InteractionTeleportEthereal()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_NoRegister()
	{
		return UAISkill_InteractionTeleportEthereal::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onStimulusInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onStimulusInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbortAddRunCooldownPenaltyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbortAddRunCooldownPenaltyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbortNotWorkingTeleportDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbortNotWorkingTeleportDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTeleportAlignHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTeleportAlignHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportPlanInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportPlanInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTeleport,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTeleportEthereal.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleportEthereal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp__onStimulusInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleportEthereal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp__onStimulusInstigator = { "_onStimulusInstigator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTeleportEthereal, _onStimulusInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp__onStimulusInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp__onStimulusInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortAddRunCooldownPenaltyTime_MetaData[] = {
		{ "Category", "AISkill_InteractionTeleportEthereal" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleportEthereal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortAddRunCooldownPenaltyTime = { "AbortAddRunCooldownPenaltyTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTeleportEthereal, AbortAddRunCooldownPenaltyTime), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortAddRunCooldownPenaltyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortAddRunCooldownPenaltyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortNotWorkingTeleportDelay_MetaData[] = {
		{ "Category", "AISkill_InteractionTeleportEthereal" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleportEthereal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortNotWorkingTeleportDelay = { "AbortNotWorkingTeleportDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTeleportEthereal, AbortNotWorkingTeleportDelay), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortNotWorkingTeleportDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortNotWorkingTeleportDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_MaxTeleportAlignHalfAngle_MetaData[] = {
		{ "Category", "AISkill_InteractionTeleportEthereal" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleportEthereal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_MaxTeleportAlignHalfAngle = { "MaxTeleportAlignHalfAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTeleportEthereal, MaxTeleportAlignHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_MaxTeleportAlignHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_MaxTeleportAlignHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_TeleportPlanInterval_MetaData[] = {
		{ "Category", "AISkill_InteractionTeleportEthereal" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleportEthereal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_TeleportPlanInterval = { "TeleportPlanInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTeleportEthereal, TeleportPlanInterval), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_TeleportPlanInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_TeleportPlanInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp__onStimulusInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortAddRunCooldownPenaltyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_AbortNotWorkingTeleportDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_MaxTeleportAlignHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::NewProp_TeleportPlanInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTeleportEthereal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::ClassParams = {
		&UAISkill_InteractionTeleportEthereal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTeleportEthereal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTeleportEthereal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTeleportEthereal, 3715856009);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTeleportEthereal>()
	{
		return UAISkill_InteractionTeleportEthereal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTeleportEthereal(Z_Construct_UClass_UAISkill_InteractionTeleportEthereal, &UAISkill_InteractionTeleportEthereal::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTeleportEthereal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTeleportEthereal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
