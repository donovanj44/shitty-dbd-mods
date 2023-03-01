// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_InteractionUseItem_Flashlight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_InteractionUseItem_Flashlight() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_InteractionUseItem();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIRoll();
// End Cross Module References
	void UAISkill_InteractionUseItem_Flashlight::StaticRegisterNativesUAISkill_InteractionUseItem_Flashlight()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_NoRegister()
	{
		return UAISkill_InteractionUseItem_Flashlight::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFaceMeMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetFaceMeMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VulnerableTargetStartRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VulnerableTargetStartRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_InteractionUseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_InteractionUseItem_Flashlight.h" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionUseItem_Flashlight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp__targetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISkill_InteractionUseItem_Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp__targetActor = { "_targetActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionUseItem_Flashlight, _targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp__targetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp__targetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_TargetFaceMeMaxAngle_MetaData[] = {
		{ "Category", "AISkill_InteractionUseItem_Flashlight" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionUseItem_Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_TargetFaceMeMaxAngle = { "TargetFaceMeMaxAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionUseItem_Flashlight, TargetFaceMeMaxAngle), METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_TargetFaceMeMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_TargetFaceMeMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_VulnerableTargetStartRoll_MetaData[] = {
		{ "Category", "AISkill_InteractionUseItem_Flashlight" },
		{ "ModuleRelativePath", "Public/AISkill_InteractionUseItem_Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_VulnerableTargetStartRoll = { "VulnerableTargetStartRoll", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_InteractionUseItem_Flashlight, VulnerableTargetStartRoll), Z_Construct_UScriptStruct_FAIRoll, METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_VulnerableTargetStartRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_VulnerableTargetStartRoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp__targetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_TargetFaceMeMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::NewProp_VulnerableTargetStartRoll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_InteractionUseItem_Flashlight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::ClassParams = {
		&UAISkill_InteractionUseItem_Flashlight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_InteractionUseItem_Flashlight, 3491196265);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_InteractionUseItem_Flashlight>()
	{
		return UAISkill_InteractionUseItem_Flashlight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_InteractionUseItem_Flashlight(Z_Construct_UClass_UAISkill_InteractionUseItem_Flashlight, &UAISkill_InteractionUseItem_Flashlight::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_InteractionUseItem_Flashlight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_InteractionUseItem_Flashlight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
