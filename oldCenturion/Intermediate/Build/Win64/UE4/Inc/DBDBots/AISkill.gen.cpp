// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_ADBDAIBTController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void UAISkill::StaticRegisterNativesUAISkill()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_NoRegister()
	{
		return UAISkill::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiControllerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiControllerOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pausedByObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pausedByObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pausedByObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicSubtree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicSubtree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillSenseConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillSenseConfigs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillSenseConfigs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNavigationFilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkillNavigationFilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunCooldownTimeDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunCooldownTimeDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopIfPausedByNavLinkProxy_MetaData[];
#endif
		static void NewProp_StopIfPausedByNavLinkProxy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopIfPausedByNavLinkProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunContexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RunContexts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill.h" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp__aiControllerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp__aiControllerOwner = { "_aiControllerOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, _aiControllerOwner), Z_Construct_UClass_ADBDAIBTController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp__aiControllerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp__aiControllerOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects = { "_pausedByObjects", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, _pausedByObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects_Inner = { "_pausedByObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_DynamicSubtree_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_DynamicSubtree = { "DynamicSubtree", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, DynamicSubtree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_DynamicSubtree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_DynamicSubtree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs = { "SkillSenseConfigs", nullptr, (EPropertyFlags)0x0010000000010009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, SkillSenseConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs_Inner = { "SkillSenseConfigs", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_SkillNavigationFilterClass_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_SkillNavigationFilterClass = { "SkillNavigationFilterClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, SkillNavigationFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_SkillNavigationFilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_SkillNavigationFilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTimeDeviation_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTimeDeviation = { "RunCooldownTimeDeviation", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, RunCooldownTimeDeviation), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTimeDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTimeDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTime_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTime = { "RunCooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, RunCooldownTime), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_RunTimeLimit_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_RunTimeLimit = { "RunTimeLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, RunTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_RunTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_RunTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy_SetBit(void* Obj)
	{
		((UAISkill*)Obj)->StopIfPausedByNavLinkProxy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy = { "StopIfPausedByNavLinkProxy", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill), &Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Statics::NewProp_RunContexts_MetaData[] = {
		{ "Category", "AISkill" },
		{ "ModuleRelativePath", "Public/AISkill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Statics::NewProp_RunContexts = { "RunContexts", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill, RunContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::NewProp_RunContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::NewProp_RunContexts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp__aiControllerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp__pausedByObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_DynamicSubtree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_SkillSenseConfigs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_SkillNavigationFilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTimeDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_RunCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_RunTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_StopIfPausedByNavLinkProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Statics::NewProp_RunContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Statics::ClassParams = {
		&UAISkill::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill, 1587556161);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill>()
	{
		return UAISkill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill(Z_Construct_UClass_UAISkill, &UAISkill::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
