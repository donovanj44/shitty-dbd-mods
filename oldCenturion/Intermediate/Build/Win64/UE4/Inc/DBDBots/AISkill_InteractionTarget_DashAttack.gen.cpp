// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget_DashAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_DashAttack() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_Dash();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
// End Cross Module References
	void UAISkill_InteractionTarget_DashAttack::StaticRegisterNativesUAISkill_InteractionTarget_DashAttack()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_NoRegister()
	{
		return UAISkill_InteractionTarget_DashAttack::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedAttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExpectedAttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExpectedAttackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashAttackUnderMaxHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashAttackUnderMaxHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashAttackUnderMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashAttackUnderMaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget_Dash,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget_DashAttack.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_DashAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_DashAttack" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_DashAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType = { "ExpectedAttackType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_DashAttack, ExpectedAttackType), Z_Construct_UEnum_DBDSharedTypes_EAttackType, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxHalfAngle_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_DashAttack" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_DashAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxHalfAngle = { "DashAttackUnderMaxHalfAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_DashAttack, DashAttackUnderMaxHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_DashAttack" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_DashAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxRange = { "DashAttackUnderMaxRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_DashAttack, DashAttackUnderMaxRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_ExpectedAttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::NewProp_DashAttackUnderMaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_DashAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::ClassParams = {
		&UAISkill_InteractionTarget_DashAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_DashAttack, 3417712956);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget_DashAttack>()
	{
		return UAISkill_InteractionTarget_DashAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_DashAttack(Z_Construct_UClass_UAISkill_InteractionTarget_DashAttack, &UAISkill_InteractionTarget_DashAttack::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget_DashAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_DashAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
