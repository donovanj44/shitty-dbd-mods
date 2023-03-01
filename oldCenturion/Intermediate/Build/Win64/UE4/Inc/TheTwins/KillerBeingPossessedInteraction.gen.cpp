// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/KillerBeingPossessedInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerBeingPossessedInteraction() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UKillerBeingPossessedInteraction_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UKillerBeingPossessedInteraction();
	THETWINS_API UClass* Z_Construct_UClass_UBeingPossessedInteraction();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UKillerBeingPossessedInteraction::StaticRegisterNativesUKillerBeingPossessedInteraction()
	{
	}
	UClass* Z_Construct_UClass_UKillerBeingPossessedInteraction_NoRegister()
	{
		return UKillerBeingPossessedInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wakeUpSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__wakeUpSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBeingPossessedInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "KillerBeingPossessedInteraction.h" },
		{ "ModuleRelativePath", "Public/KillerBeingPossessedInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::NewProp__wakeUpSpeedCurve_MetaData[] = {
		{ "Category", "KillerBeingPossessedInteraction" },
		{ "ModuleRelativePath", "Public/KillerBeingPossessedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::NewProp__wakeUpSpeedCurve = { "_wakeUpSpeedCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerBeingPossessedInteraction, _wakeUpSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::NewProp__wakeUpSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::NewProp__wakeUpSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::NewProp__wakeUpSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerBeingPossessedInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::ClassParams = {
		&UKillerBeingPossessedInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerBeingPossessedInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerBeingPossessedInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerBeingPossessedInteraction, 1623666531);
	template<> THETWINS_API UClass* StaticClass<UKillerBeingPossessedInteraction>()
	{
		return UKillerBeingPossessedInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerBeingPossessedInteraction(Z_Construct_UClass_UKillerBeingPossessedInteraction, &UKillerBeingPossessedInteraction::StaticClass, TEXT("/Script/TheTwins"), TEXT("UKillerBeingPossessedInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerBeingPossessedInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
