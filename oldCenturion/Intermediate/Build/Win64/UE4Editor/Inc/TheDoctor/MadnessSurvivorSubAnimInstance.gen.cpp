// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDoctor/Public/MadnessSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMadnessSurvivorSubAnimInstance() {}
// Cross Module References
	THEDOCTOR_API UClass* Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_NoRegister();
	THEDOCTOR_API UClass* Z_Construct_UClass_UMadnessSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheDoctor();
// End Cross Module References
	void UMadnessSurvivorSubAnimInstance::StaticRegisterNativesUMadnessSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_NoRegister()
	{
		return UMadnessSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTotallyInsane_MetaData[];
#endif
		static void NewProp__isTotallyInsane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTotallyInsane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDoctor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MadnessSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MadnessSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane_MetaData[] = {
		{ "Category", "MadnessSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/MadnessSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane_SetBit(void* Obj)
	{
		((UMadnessSurvivorSubAnimInstance*)Obj)->_isTotallyInsane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane = { "_isTotallyInsane", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMadnessSurvivorSubAnimInstance), &Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::NewProp__isTotallyInsane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMadnessSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::ClassParams = {
		&UMadnessSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMadnessSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMadnessSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMadnessSurvivorSubAnimInstance, 2113577555);
	template<> THEDOCTOR_API UClass* StaticClass<UMadnessSurvivorSubAnimInstance>()
	{
		return UMadnessSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMadnessSurvivorSubAnimInstance(Z_Construct_UClass_UMadnessSurvivorSubAnimInstance, &UMadnessSurvivorSubAnimInstance::StaticClass, TEXT("/Script/TheDoctor"), TEXT("UMadnessSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMadnessSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
