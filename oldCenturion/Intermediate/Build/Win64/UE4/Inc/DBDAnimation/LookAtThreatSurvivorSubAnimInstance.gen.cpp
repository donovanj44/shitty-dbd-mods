// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/LookAtThreatSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtThreatSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void ULookAtThreatSurvivorSubAnimInstance::StaticRegisterNativesULookAtThreatSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_NoRegister()
	{
		return ULookAtThreatSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVisibleThreat_MetaData[];
#endif
		static void NewProp__isVisibleThreat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isVisibleThreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitchToThreat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pitchToThreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__yawToThreat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__yawToThreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__rootSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__headSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__headSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceForThreatDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDistanceForThreatDetection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LookAtThreatSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat_MetaData[] = {
		{ "Category", "LookAtThreatSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat_SetBit(void* Obj)
	{
		((ULookAtThreatSurvivorSubAnimInstance*)Obj)->_isVisibleThreat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat = { "_isVisibleThreat", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULookAtThreatSurvivorSubAnimInstance), &Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__pitchToThreat_MetaData[] = {
		{ "Category", "LookAtThreatSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__pitchToThreat = { "_pitchToThreat", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtThreatSurvivorSubAnimInstance, _pitchToThreat), METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__pitchToThreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__pitchToThreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__yawToThreat_MetaData[] = {
		{ "Category", "LookAtThreatSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__yawToThreat = { "_yawToThreat", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtThreatSurvivorSubAnimInstance, _yawToThreat), METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__yawToThreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__yawToThreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__rootSocket_MetaData[] = {
		{ "Category", "LookAtThreatSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__rootSocket = { "_rootSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtThreatSurvivorSubAnimInstance, _rootSocket), METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__rootSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__rootSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__headSocket_MetaData[] = {
		{ "Category", "LookAtThreatSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__headSocket = { "_headSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtThreatSurvivorSubAnimInstance, _headSocket), METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__headSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__headSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__maxDistanceForThreatDetection_MetaData[] = {
		{ "Category", "LookAtThreatSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/LookAtThreatSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__maxDistanceForThreatDetection = { "_maxDistanceForThreatDetection", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAtThreatSurvivorSubAnimInstance, _maxDistanceForThreatDetection), METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__maxDistanceForThreatDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__maxDistanceForThreatDetection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__isVisibleThreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__pitchToThreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__yawToThreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__rootSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__headSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::NewProp__maxDistanceForThreatDetection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtThreatSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::ClassParams = {
		&ULookAtThreatSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULookAtThreatSurvivorSubAnimInstance, 779012155);
	template<> DBDANIMATION_API UClass* StaticClass<ULookAtThreatSurvivorSubAnimInstance>()
	{
		return ULookAtThreatSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULookAtThreatSurvivorSubAnimInstance(Z_Construct_UClass_ULookAtThreatSurvivorSubAnimInstance, &ULookAtThreatSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("ULookAtThreatSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtThreatSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
