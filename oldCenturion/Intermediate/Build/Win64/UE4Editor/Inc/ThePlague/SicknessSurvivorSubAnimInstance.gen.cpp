// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThePlague/Public/SicknessSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSicknessSurvivorSubAnimInstance() {}
// Cross Module References
	THEPLAGUE_API UClass* Z_Construct_UClass_USicknessSurvivorSubAnimInstance_NoRegister();
	THEPLAGUE_API UClass* Z_Construct_UClass_USicknessSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ThePlague();
// End Cross Module References
	void USicknessSurvivorSubAnimInstance::StaticRegisterNativesUSicknessSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USicknessSurvivorSubAnimInstance_NoRegister()
	{
		return USicknessSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpeningExitGate_MetaData[];
#endif
		static void NewProp__isOpeningExitGate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpeningExitGate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasRecentlyBeenHitByVomit_MetaData[];
#endif
		static void NewProp__hasRecentlyBeenHitByVomit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasRecentlyBeenHitByVomit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVomiting_MetaData[];
#endif
		static void NewProp__isVomiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isVomiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSick_MetaData[];
#endif
		static void NewProp__isSick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitByVomitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hitByVomitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitingEnteredStatEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__vomitingEnteredStatEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ThePlague,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SicknessSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate_MetaData[] = {
		{ "Category", "SicknessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate_SetBit(void* Obj)
	{
		((USicknessSurvivorSubAnimInstance*)Obj)->_isOpeningExitGate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate = { "_isOpeningExitGate", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USicknessSurvivorSubAnimInstance), &Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit_MetaData[] = {
		{ "Category", "SicknessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit_SetBit(void* Obj)
	{
		((USicknessSurvivorSubAnimInstance*)Obj)->_hasRecentlyBeenHitByVomit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit = { "_hasRecentlyBeenHitByVomit", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USicknessSurvivorSubAnimInstance), &Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting_MetaData[] = {
		{ "Category", "SicknessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting_SetBit(void* Obj)
	{
		((USicknessSurvivorSubAnimInstance*)Obj)->_isVomiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting = { "_isVomiting", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USicknessSurvivorSubAnimInstance), &Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick_MetaData[] = {
		{ "Category", "SicknessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick_SetBit(void* Obj)
	{
		((USicknessSurvivorSubAnimInstance*)Obj)->_isSick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick = { "_isSick", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USicknessSurvivorSubAnimInstance), &Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hitByVomitTime_MetaData[] = {
		{ "Category", "SicknessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hitByVomitTime = { "_hitByVomitTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USicknessSurvivorSubAnimInstance, _hitByVomitTime), METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hitByVomitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hitByVomitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__vomitingEnteredStatEvent_MetaData[] = {
		{ "Category", "SicknessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/SicknessSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__vomitingEnteredStatEvent = { "_vomitingEnteredStatEvent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USicknessSurvivorSubAnimInstance, _vomitingEnteredStatEvent), METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__vomitingEnteredStatEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__vomitingEnteredStatEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isOpeningExitGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hasRecentlyBeenHitByVomit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isVomiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__isSick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__hitByVomitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::NewProp__vomitingEnteredStatEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USicknessSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::ClassParams = {
		&USicknessSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USicknessSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USicknessSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USicknessSurvivorSubAnimInstance, 151560153);
	template<> THEPLAGUE_API UClass* StaticClass<USicknessSurvivorSubAnimInstance>()
	{
		return USicknessSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USicknessSurvivorSubAnimInstance(Z_Construct_UClass_USicknessSurvivorSubAnimInstance, &USicknessSurvivorSubAnimInstance::StaticClass, TEXT("/Script/ThePlague"), TEXT("USicknessSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USicknessSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
