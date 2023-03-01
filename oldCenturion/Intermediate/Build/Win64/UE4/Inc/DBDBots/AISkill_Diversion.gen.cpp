// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_Diversion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Diversion() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Diversion_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Diversion();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UAISkill_Diversion::StaticRegisterNativesUAISkill_Diversion()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Diversion_NoRegister()
	{
		return UAISkill_Diversion::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Diversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlanInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshFindLocationExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshFindLocationExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMoveToTargetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMoveToTargetDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThrowOnInteractableHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxThrowOnInteractableHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOnInteractablesAtDifficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThrowOnInteractablesAtDifficultyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThrowOnInteractablesAtDifficultyLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiversionFromGoalClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DiversionFromGoalClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DiversionFromGoalClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerkId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Diversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Diversion.h" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PlanInterval_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PlanInterval = { "PlanInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, PlanInterval), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PlanInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PlanInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_NavMeshFindLocationExtents_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_NavMeshFindLocationExtents = { "NavMeshFindLocationExtents", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, NavMeshFindLocationExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_NavMeshFindLocationExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_NavMeshFindLocationExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxMoveToTargetDistance_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxMoveToTargetDistance = { "MaxMoveToTargetDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, MaxMoveToTargetDistance), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxMoveToTargetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxMoveToTargetDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxThrowOnInteractableHalfAngle_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxThrowOnInteractableHalfAngle = { "MaxThrowOnInteractableHalfAngle", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, MaxThrowOnInteractableHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxThrowOnInteractableHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxThrowOnInteractableHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel = { "ThrowOnInteractablesAtDifficultyLevel", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, ThrowOnInteractablesAtDifficultyLevel), Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses = { "DiversionFromGoalClasses", nullptr, (EPropertyFlags)0x0014000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, DiversionFromGoalClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses_Inner = { "DiversionFromGoalClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PerkId_MetaData[] = {
		{ "Category", "AISkill_Diversion" },
		{ "ModuleRelativePath", "Public/AISkill_Diversion.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PerkId = { "PerkId", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Diversion, PerkId), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PerkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PerkId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Diversion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PlanInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_NavMeshFindLocationExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxMoveToTargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_MaxThrowOnInteractableHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_ThrowOnInteractablesAtDifficultyLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_DiversionFromGoalClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Diversion_Statics::NewProp_PerkId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Diversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Diversion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Diversion_Statics::ClassParams = {
		&UAISkill_Diversion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Diversion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Diversion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Diversion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Diversion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Diversion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Diversion, 3328331093);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_Diversion>()
	{
		return UAISkill_Diversion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Diversion(Z_Construct_UClass_UAISkill_Diversion, &UAISkill_Diversion::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_Diversion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Diversion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
