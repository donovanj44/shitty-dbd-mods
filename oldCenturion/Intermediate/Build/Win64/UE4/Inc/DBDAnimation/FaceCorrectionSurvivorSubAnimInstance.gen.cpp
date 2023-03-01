// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/FaceCorrectionSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaceCorrectionSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void UFaceCorrectionSurvivorSubAnimInstance::StaticRegisterNativesUFaceCorrectionSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_NoRegister()
	{
		return UFaceCorrectionSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrouched_MetaData[];
#endif
		static void NewProp__isCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHealingOthers_MetaData[];
#endif
		static void NewProp__isHealingOthers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHealingOthers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInjured_MetaData[];
#endif
		static void NewProp__isInjured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInjured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEdgeCase_MetaData[];
#endif
		static void NewProp__isEdgeCase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEdgeCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInCloset_MetaData[];
#endif
		static void NewProp__isInCloset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInCloset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFreddyMori_MetaData[];
#endif
		static void NewProp__isFreddyMori_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFreddyMori;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isIdle_MetaData[];
#endif
		static void NewProp__isIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isIdle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FaceCorrectionSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched = { "_isCrouched", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isHealingOthers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers = { "_isHealingOthers", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isInjured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured = { "_isInjured", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isEdgeCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase = { "_isEdgeCase", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isInCloset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset = { "_isInCloset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isFreddyMori = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori = { "_isFreddyMori", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData[] = {
		{ "Category", "FaceCorrectionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/FaceCorrectionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit(void* Obj)
	{
		((UFaceCorrectionSurvivorSubAnimInstance*)Obj)->_isIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle = { "_isIdle", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaceCorrectionSurvivorSubAnimInstance), &Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isHealingOthers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInjured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isEdgeCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isInCloset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isFreddyMori,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::NewProp__isIdle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaceCorrectionSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::ClassParams = {
		&UFaceCorrectionSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaceCorrectionSurvivorSubAnimInstance, 2461149837);
	template<> DBDANIMATION_API UClass* StaticClass<UFaceCorrectionSurvivorSubAnimInstance>()
	{
		return UFaceCorrectionSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaceCorrectionSurvivorSubAnimInstance(Z_Construct_UClass_UFaceCorrectionSurvivorSubAnimInstance, &UFaceCorrectionSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UFaceCorrectionSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaceCorrectionSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
