// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_Strafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Strafe() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Strafe_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Strafe();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
// End Cross Module References
	void UAISkill_Strafe::StaticRegisterNativesUAISkill_Strafe()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Strafe_NoRegister()
	{
		return UAISkill_Strafe::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Strafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafePauseDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrafePauseDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafePauseInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrafePauseInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeHoldDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrafeHoldDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeHoldInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrafeHoldInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseStrafeOnAnimation_MetaData[];
#endif
		static void NewProp_PauseStrafeOnAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PauseStrafeOnAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreUnderNavLinkStartRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreUnderNavLinkStartRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeFowardRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrafeFowardRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeBackwardRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrafeBackwardRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Strafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Strafe.h" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseDeviation_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseDeviation = { "StrafePauseDeviation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StrafePauseDeviation), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseInterval_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseInterval = { "StrafePauseInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StrafePauseInterval), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldDeviation_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldDeviation = { "StrafeHoldDeviation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StrafeHoldDeviation), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldInterval_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldInterval = { "StrafeHoldInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StrafeHoldInterval), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation_SetBit(void* Obj)
	{
		((UAISkill_Strafe*)Obj)->PauseStrafeOnAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation = { "PauseStrafeOnAnimation", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_Strafe), &Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_IgnoreUnderNavLinkStartRange_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_IgnoreUnderNavLinkStartRange = { "IgnoreUnderNavLinkStartRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, IgnoreUnderNavLinkStartRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_IgnoreUnderNavLinkStartRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_IgnoreUnderNavLinkStartRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeFowardRange_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeFowardRange = { "StrafeFowardRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StrafeFowardRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeFowardRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeFowardRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeBackwardRange_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeBackwardRange = { "StrafeBackwardRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StrafeBackwardRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeBackwardRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeBackwardRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StopMaxRange_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StopMaxRange = { "StopMaxRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StopMaxRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StopMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StopMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StartMaxRange_MetaData[] = {
		{ "Category", "AISkill_Strafe" },
		{ "ModuleRelativePath", "Public/AISkill_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StartMaxRange = { "StartMaxRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Strafe, StartMaxRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StartMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StartMaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Strafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafePauseInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeHoldInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_PauseStrafeOnAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_IgnoreUnderNavLinkStartRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeFowardRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StrafeBackwardRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StopMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Strafe_Statics::NewProp_StartMaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Strafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Strafe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Strafe_Statics::ClassParams = {
		&UAISkill_Strafe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Strafe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Strafe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Strafe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Strafe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Strafe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Strafe, 3506425629);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_Strafe>()
	{
		return UAISkill_Strafe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Strafe(Z_Construct_UClass_UAISkill_Strafe, &UAISkill_Strafe::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_Strafe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Strafe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
