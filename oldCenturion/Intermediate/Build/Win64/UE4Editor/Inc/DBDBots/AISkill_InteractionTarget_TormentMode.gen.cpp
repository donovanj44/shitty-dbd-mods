// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget_TormentMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_TormentMode() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_InteractionTarget_TormentMode::StaticRegisterNativesUAISkill_InteractionTarget_TormentMode()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_NoRegister()
	{
		return UAISkill_InteractionTarget_TormentMode::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTormentInChaseAboveChargeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTormentInChaseAboveChargeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTormentInPatrolAboveChargeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTormentInPatrolAboveChargeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChasedTargetToEvadePointMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChasedTargetToEvadePointMaxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget_TormentMode.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_TormentMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInChaseAboveChargeRatio_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_TormentMode" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInChaseAboveChargeRatio = { "StartTormentInChaseAboveChargeRatio", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_TormentMode, StartTormentInChaseAboveChargeRatio), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInChaseAboveChargeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInChaseAboveChargeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInPatrolAboveChargeRatio_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_TormentMode" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInPatrolAboveChargeRatio = { "StartTormentInPatrolAboveChargeRatio", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_TormentMode, StartTormentInPatrolAboveChargeRatio), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInPatrolAboveChargeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInPatrolAboveChargeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_ChasedTargetToEvadePointMaxDistance_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_TormentMode" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_TormentMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_ChasedTargetToEvadePointMaxDistance = { "ChasedTargetToEvadePointMaxDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_TormentMode, ChasedTargetToEvadePointMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_ChasedTargetToEvadePointMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_ChasedTargetToEvadePointMaxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInChaseAboveChargeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_StartTormentInPatrolAboveChargeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::NewProp_ChasedTargetToEvadePointMaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_TormentMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::ClassParams = {
		&UAISkill_InteractionTarget_TormentMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_TormentMode, 1033382085);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget_TormentMode>()
	{
		return UAISkill_InteractionTarget_TormentMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_TormentMode(Z_Construct_UClass_UAISkill_InteractionTarget_TormentMode, &UAISkill_InteractionTarget_TormentMode::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget_TormentMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_TormentMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
