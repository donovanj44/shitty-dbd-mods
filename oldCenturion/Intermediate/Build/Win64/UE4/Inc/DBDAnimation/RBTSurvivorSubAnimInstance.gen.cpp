// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/RBTSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBTSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_URBTSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_URBTSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DBDANIMATION_API UClass* Z_Construct_UClass_USkillCheckFailureTracker_NoRegister();
// End Cross Module References
	void URBTSurvivorSubAnimInstance::StaticRegisterNativesURBTSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_URBTSurvivorSubAnimInstance_NoRegister()
	{
		return URBTSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSkillCheckFailed_MetaData[];
#endif
		static void NewProp__hasSkillCheckFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSkillCheckFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRemovingRBT_MetaData[];
#endif
		static void NewProp__isRemovingRBT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRemovingRBT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RBTSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/RBTSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData[] = {
		{ "Category", "RBTSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RBTSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_SetBit(void* Obj)
	{
		((URBTSurvivorSubAnimInstance*)Obj)->_hasSkillCheckFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed = { "_hasSkillCheckFailed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URBTSurvivorSubAnimInstance), &Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT_MetaData[] = {
		{ "Category", "RBTSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RBTSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT_SetBit(void* Obj)
	{
		((URBTSurvivorSubAnimInstance*)Obj)->_isRemovingRBT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT = { "_isRemovingRBT", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URBTSurvivorSubAnimInstance), &Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT_SetBit, METADATA_PARAMS(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::NewProp__isRemovingRBT,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USkillCheckFailureTracker_NoRegister, (int32)VTABLE_OFFSET(URBTSurvivorSubAnimInstance, ISkillCheckFailureTracker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URBTSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::ClassParams = {
		&URBTSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URBTSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URBTSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URBTSurvivorSubAnimInstance, 1859435832);
	template<> DBDANIMATION_API UClass* StaticClass<URBTSurvivorSubAnimInstance>()
	{
		return URBTSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URBTSurvivorSubAnimInstance(Z_Construct_UClass_URBTSurvivorSubAnimInstance, &URBTSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("URBTSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URBTSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
