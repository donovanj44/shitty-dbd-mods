// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/SpiritHuskActivePhaseWalkAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritHuskActivePhaseWalkAnimInstance() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance();
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void USpiritHuskActivePhaseWalkAnimInstance::StaticRegisterNativesUSpiritHuskActivePhaseWalkAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_NoRegister()
	{
		return USpiritHuskActivePhaseWalkAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleAnimationSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__idleAnimationSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleAnimationExplicitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__idleAnimationExplicitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__elapsedTimeSinceFakingRealKillerPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__elapsedTimeSinceFakingRealKillerPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpiritHuskAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SpiritHuskActivePhaseWalkAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SpiritHuskActivePhaseWalkAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationSequence_MetaData[] = {
		{ "Category", "SpiritHuskActivePhaseWalkAnimInstance" },
		{ "ModuleRelativePath", "Public/SpiritHuskActivePhaseWalkAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationSequence = { "_idleAnimationSequence", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiritHuskActivePhaseWalkAnimInstance, _idleAnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationExplicitTime_MetaData[] = {
		{ "Category", "SpiritHuskActivePhaseWalkAnimInstance" },
		{ "ModuleRelativePath", "Public/SpiritHuskActivePhaseWalkAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationExplicitTime = { "_idleAnimationExplicitTime", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiritHuskActivePhaseWalkAnimInstance, _idleAnimationExplicitTime), METADATA_PARAMS(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationExplicitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationExplicitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__elapsedTimeSinceFakingRealKillerPose_MetaData[] = {
		{ "Category", "SpiritHuskActivePhaseWalkAnimInstance" },
		{ "ModuleRelativePath", "Public/SpiritHuskActivePhaseWalkAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__elapsedTimeSinceFakingRealKillerPose = { "_elapsedTimeSinceFakingRealKillerPose", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiritHuskActivePhaseWalkAnimInstance, _elapsedTimeSinceFakingRealKillerPose), METADATA_PARAMS(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__elapsedTimeSinceFakingRealKillerPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__elapsedTimeSinceFakingRealKillerPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__idleAnimationExplicitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::NewProp__elapsedTimeSinceFakingRealKillerPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiritHuskActivePhaseWalkAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::ClassParams = {
		&USpiritHuskActivePhaseWalkAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiritHuskActivePhaseWalkAnimInstance, 1235129999);
	template<> THESPIRIT_API UClass* StaticClass<USpiritHuskActivePhaseWalkAnimInstance>()
	{
		return USpiritHuskActivePhaseWalkAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiritHuskActivePhaseWalkAnimInstance(Z_Construct_UClass_USpiritHuskActivePhaseWalkAnimInstance, &USpiritHuskActivePhaseWalkAnimInstance::StaticClass, TEXT("/Script/TheSpirit"), TEXT("USpiritHuskActivePhaseWalkAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiritHuskActivePhaseWalkAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
