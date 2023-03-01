// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/SurvivorAimableSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAimableSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_USurvivorAimableSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_USurvivorAimableSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USurvivorAimableSubAnimInstance::StaticRegisterNativesUSurvivorAimableSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USurvivorAimableSubAnimInstance_NoRegister()
	{
		return USurvivorAimableSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shoulderToCollisionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__shoulderToCollisionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aimPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__aimPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAimingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__isAimingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAiming_MetaData[];
#endif
		static void NewProp__isAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHoldingAimItem_MetaData[];
#endif
		static void NewProp__isHoldingAimItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHoldingAimItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SurvivorAimableSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__shoulderToCollisionDistance_MetaData[] = {
		{ "Category", "SurvivorAimableSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__shoulderToCollisionDistance = { "_shoulderToCollisionDistance", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimableSubAnimInstance, _shoulderToCollisionDistance), METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__shoulderToCollisionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__shoulderToCollisionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__aimPoint_MetaData[] = {
		{ "Category", "SurvivorAimableSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__aimPoint = { "_aimPoint", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimableSubAnimInstance, _aimPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__aimPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__aimPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAimingAlpha_MetaData[] = {
		{ "Category", "SurvivorAimableSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAimingAlpha = { "_isAimingAlpha", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimableSubAnimInstance, _isAimingAlpha), METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAimingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAimingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming_MetaData[] = {
		{ "Category", "SurvivorAimableSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming_SetBit(void* Obj)
	{
		((USurvivorAimableSubAnimInstance*)Obj)->_isAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming = { "_isAiming", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAimableSubAnimInstance), &Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem_MetaData[] = {
		{ "Category", "SurvivorAimableSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem_SetBit(void* Obj)
	{
		((USurvivorAimableSubAnimInstance*)Obj)->_isHoldingAimItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem = { "_isHoldingAimItem", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurvivorAimableSubAnimInstance), &Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__pitch_MetaData[] = {
		{ "Category", "SurvivorAimableSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SurvivorAimableSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__pitch = { "_pitch", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorAimableSubAnimInstance, _pitch), METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__pitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__shoulderToCollisionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__aimPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAimingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__isHoldingAimItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::NewProp__pitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAimableSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::ClassParams = {
		&USurvivorAimableSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorAimableSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorAimableSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorAimableSubAnimInstance, 3118429607);
	template<> DBDANIMATION_API UClass* StaticClass<USurvivorAimableSubAnimInstance>()
	{
		return USurvivorAimableSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorAimableSubAnimInstance(Z_Construct_UClass_USurvivorAimableSubAnimInstance, &USurvivorAimableSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("USurvivorAimableSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAimableSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
