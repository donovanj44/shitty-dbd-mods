// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionSetTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionSetTrap() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionSetTrap_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionSetTrap();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UAISkill_InteractionSetTrap::StaticRegisterNativesUAISkill_InteractionSetTrap()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionSetTrap_NoRegister()
	{
		return UAISkill_InteractionSetTrap::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFromAnotherSetTrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFromAnotherSetTrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFromPointOfInterest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFromPointOfInterest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrapClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrapClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_Interaction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionSetTrap.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionSetTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromAnotherSetTrap_MetaData[] = {
		{ "Category", "AISkill_InteractionSetTrap" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionSetTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromAnotherSetTrap = { "MaxDistanceFromAnotherSetTrap", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionSetTrap, MaxDistanceFromAnotherSetTrap), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromAnotherSetTrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromAnotherSetTrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromPointOfInterest_MetaData[] = {
		{ "Category", "AISkill_InteractionSetTrap" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionSetTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromPointOfInterest = { "MaxDistanceFromPointOfInterest", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionSetTrap, MaxDistanceFromPointOfInterest), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromPointOfInterest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromPointOfInterest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_TrapClass_MetaData[] = {
		{ "Category", "AISkill_InteractionSetTrap" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionSetTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_TrapClass = { "TrapClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionSetTrap, TrapClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_TrapClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_TrapClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromAnotherSetTrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_MaxDistanceFromPointOfInterest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::NewProp_TrapClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionSetTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::ClassParams = {
		&UAISkill_InteractionSetTrap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionSetTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionSetTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionSetTrap, 4185425986);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionSetTrap>()
	{
		return UAISkill_InteractionSetTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionSetTrap(Z_Construct_UClass_UAISkill_InteractionSetTrap, &UAISkill_InteractionSetTrap::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionSetTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionSetTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
