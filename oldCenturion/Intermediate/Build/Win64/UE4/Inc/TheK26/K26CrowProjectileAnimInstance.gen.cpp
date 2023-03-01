// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26CrowProjectileAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26CrowProjectileAnimInstance() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26CrowProjectileAnimInstance_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26CrowProjectileAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	THEK26_API UClass* Z_Construct_UClass_AK26CrowProjectile_NoRegister();
// End Cross Module References
	void UK26CrowProjectileAnimInstance::StaticRegisterNativesUK26CrowProjectileAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UK26CrowProjectileAnimInstance_NoRegister()
	{
		return UK26CrowProjectileAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningCrowProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningCrowProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__flashlightProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingFlashlighted_MetaData[];
#endif
		static void NewProp__isBeingFlashlighted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingFlashlighted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInDestroyedState_MetaData[];
#endif
		static void NewProp__isInDestroyedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInDestroyedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInOffPathState_MetaData[];
#endif
		static void NewProp__isInOffPathState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInOffPathState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInFollowPathState_MetaData[];
#endif
		static void NewProp__isInFollowPathState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInFollowPathState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInIdleState_MetaData[];
#endif
		static void NewProp__isInIdleState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInIdleState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInSummonState_MetaData[];
#endif
		static void NewProp__isInSummonState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInSummonState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInInvalidState_MetaData[];
#endif
		static void NewProp__isInInvalidState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInInvalidState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K26CrowProjectileAnimInstance.h" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__owningCrowProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__owningCrowProjectile = { "_owningCrowProjectile", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26CrowProjectileAnimInstance, _owningCrowProjectile), Z_Construct_UClass_AK26CrowProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__owningCrowProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__owningCrowProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__flashlightProgress_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__flashlightProgress = { "_flashlightProgress", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26CrowProjectileAnimInstance, _flashlightProgress), METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__flashlightProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__flashlightProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isBeingFlashlighted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted = { "_isBeingFlashlighted", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isInDestroyedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState = { "_isInDestroyedState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isInOffPathState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState = { "_isInOffPathState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isInFollowPathState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState = { "_isInFollowPathState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isInIdleState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState = { "_isInIdleState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isInSummonState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState = { "_isInSummonState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState_MetaData[] = {
		{ "Category", "K26CrowProjectileAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowProjectileAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState_SetBit(void* Obj)
	{
		((UK26CrowProjectileAnimInstance*)Obj)->_isInInvalidState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState = { "_isInInvalidState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowProjectileAnimInstance), &Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__owningCrowProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__flashlightProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isBeingFlashlighted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInDestroyedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInOffPathState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInFollowPathState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInIdleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInSummonState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::NewProp__isInInvalidState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26CrowProjectileAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::ClassParams = {
		&UK26CrowProjectileAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26CrowProjectileAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26CrowProjectileAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26CrowProjectileAnimInstance, 4120893195);
	template<> THEK26_API UClass* StaticClass<UK26CrowProjectileAnimInstance>()
	{
		return UK26CrowProjectileAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26CrowProjectileAnimInstance(Z_Construct_UClass_UK26CrowProjectileAnimInstance, &UK26CrowProjectileAnimInstance::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26CrowProjectileAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26CrowProjectileAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
