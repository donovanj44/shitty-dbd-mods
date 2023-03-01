// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionTeleport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionTeleport() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTeleport_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionTeleport();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_InteractionTeleport::StaticRegisterNativesUAISkill_InteractionTeleport()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionTeleport_NoRegister()
	{
		return UAISkill_InteractionTeleport::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionTeleport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockTeleportWhenPathGoalUnderRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockTeleportWhenPathGoalUnderRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionTeleport.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleport.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::NewProp_BlockTeleportWhenPathGoalUnderRange_MetaData[] = {
		{ "Category", "AISkill_InteractionTeleport" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionTeleport.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::NewProp_BlockTeleportWhenPathGoalUnderRange = { "BlockTeleportWhenPathGoalUnderRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionTeleport, BlockTeleportWhenPathGoalUnderRange), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::NewProp_BlockTeleportWhenPathGoalUnderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::NewProp_BlockTeleportWhenPathGoalUnderRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::NewProp_BlockTeleportWhenPathGoalUnderRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionTeleport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::ClassParams = {
		&UAISkill_InteractionTeleport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionTeleport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionTeleport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionTeleport, 2958131893);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionTeleport>()
	{
		return UAISkill_InteractionTeleport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionTeleport(Z_Construct_UClass_UAISkill_InteractionTeleport, &UAISkill_InteractionTeleport::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionTeleport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionTeleport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
