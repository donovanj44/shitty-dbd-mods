// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/AgonySubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgonySubAnimInstance() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonySubAnimInstance_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonySubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UAgonySubAnimInstance::StaticRegisterNativesUAgonySubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UAgonySubAnimInstance_NoRegister()
	{
		return UAgonySubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAgonySubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInStruggleInDeathBed_MetaData[];
#endif
		static void NewProp__isInStruggleInDeathBed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInStruggleInDeathBed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDeadInDeathBed_MetaData[];
#endif
		static void NewProp__isDeadInDeathBed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDeadInDeathBed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInDeathBed_MetaData[];
#endif
		static void NewProp__isInDeathBed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInDeathBed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTormentTrailEffect_MetaData[];
#endif
		static void NewProp__isInTormentTrailEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInTormentTrailEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTormentTrail_MetaData[];
#endif
		static void NewProp__isInTormentTrail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInTormentTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInAgony_MetaData[];
#endif
		static void NewProp__isInAgony_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInAgony;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgonySubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AgonySubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed_MetaData[] = {
		{ "Category", "AgonySubAnimInstance" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed_SetBit(void* Obj)
	{
		((UAgonySubAnimInstance*)Obj)->_isInStruggleInDeathBed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed = { "_isInStruggleInDeathBed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonySubAnimInstance), &Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed_MetaData[] = {
		{ "Category", "AgonySubAnimInstance" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed_SetBit(void* Obj)
	{
		((UAgonySubAnimInstance*)Obj)->_isDeadInDeathBed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed = { "_isDeadInDeathBed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonySubAnimInstance), &Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed_MetaData[] = {
		{ "Category", "AgonySubAnimInstance" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed_SetBit(void* Obj)
	{
		((UAgonySubAnimInstance*)Obj)->_isInDeathBed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed = { "_isInDeathBed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonySubAnimInstance), &Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect_MetaData[] = {
		{ "Category", "AgonySubAnimInstance" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect_SetBit(void* Obj)
	{
		((UAgonySubAnimInstance*)Obj)->_isInTormentTrailEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect = { "_isInTormentTrailEffect", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonySubAnimInstance), &Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail_MetaData[] = {
		{ "Category", "AgonySubAnimInstance" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail_SetBit(void* Obj)
	{
		((UAgonySubAnimInstance*)Obj)->_isInTormentTrail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail = { "_isInTormentTrail", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonySubAnimInstance), &Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony_MetaData[] = {
		{ "Category", "AgonySubAnimInstance" },
		{ "ModuleRelativePath", "Public/AgonySubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony_SetBit(void* Obj)
	{
		((UAgonySubAnimInstance*)Obj)->_isInAgony = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony = { "_isInAgony", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonySubAnimInstance), &Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgonySubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInStruggleInDeathBed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isDeadInDeathBed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInDeathBed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrailEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInTormentTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonySubAnimInstance_Statics::NewProp__isInAgony,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgonySubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgonySubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgonySubAnimInstance_Statics::ClassParams = {
		&UAgonySubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAgonySubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAgonySubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonySubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgonySubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgonySubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgonySubAnimInstance, 316902913);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAgonySubAnimInstance>()
	{
		return UAgonySubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgonySubAnimInstance(Z_Construct_UClass_UAgonySubAnimInstance, &UAgonySubAnimInstance::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAgonySubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgonySubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
