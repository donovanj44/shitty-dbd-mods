// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/InDreamSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInDreamSurvivorSubAnimInstance() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UInDreamSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
// End Cross Module References
	void UInDreamSurvivorSubAnimInstance::StaticRegisterNativesUInDreamSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_NoRegister()
	{
		return UInDreamSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldLookSleepy_MetaData[];
#endif
		static void NewProp__shouldLookSleepy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldLookSleepy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "InDreamSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/InDreamSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy_MetaData[] = {
		{ "Category", "InDreamSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InDreamSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy_SetBit(void* Obj)
	{
		((UInDreamSurvivorSubAnimInstance*)Obj)->_shouldLookSleepy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy = { "_shouldLookSleepy", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInDreamSurvivorSubAnimInstance), &Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::NewProp__shouldLookSleepy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInDreamSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::ClassParams = {
		&UInDreamSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInDreamSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInDreamSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInDreamSurvivorSubAnimInstance, 1936128521);
	template<> THENIGHTMARE_API UClass* StaticClass<UInDreamSurvivorSubAnimInstance>()
	{
		return UInDreamSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInDreamSurvivorSubAnimInstance(Z_Construct_UClass_UInDreamSurvivorSubAnimInstance, &UInDreamSurvivorSubAnimInstance::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UInDreamSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInDreamSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
