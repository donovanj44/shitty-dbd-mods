// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTarget_StealthGhost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTarget_StealthGhost() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTarget();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_InteractionTarget_StealthGhost::StaticRegisterNativesUAISkill_InteractionTarget_StealthGhost()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_NoRegister()
	{
		return UAISkill_InteractionTarget_StealthGhost::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSwapDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSwapDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTarget_StealthGhost.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_StealthGhost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::NewProp_CrouchSwapDelay_MetaData[] = {
		{ "Category", "AISkill_InteractionTarget_StealthGhost" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTarget_StealthGhost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::NewProp_CrouchSwapDelay = { "CrouchSwapDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTarget_StealthGhost, CrouchSwapDelay), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::NewProp_CrouchSwapDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::NewProp_CrouchSwapDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::NewProp_CrouchSwapDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTarget_StealthGhost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::ClassParams = {
		&UAISkill_InteractionTarget_StealthGhost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTarget_StealthGhost, 904125659);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTarget_StealthGhost>()
	{
		return UAISkill_InteractionTarget_StealthGhost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTarget_StealthGhost(Z_Construct_UClass_UAISkill_InteractionTarget_StealthGhost, &UAISkill_InteractionTarget_StealthGhost::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTarget_StealthGhost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTarget_StealthGhost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
