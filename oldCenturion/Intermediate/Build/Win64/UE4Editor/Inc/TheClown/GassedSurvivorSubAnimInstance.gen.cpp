// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/GassedSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGassedSurvivorSubAnimInstance() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UGassedSurvivorSubAnimInstance_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UGassedSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheClown();
// End Cross Module References
	void UGassedSurvivorSubAnimInstance::StaticRegisterNativesUGassedSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UGassedSurvivorSubAnimInstance_NoRegister()
	{
		return UGassedSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isGassed_MetaData[];
#endif
		static void NewProp__isGassed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isGassed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "GassedSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/GassedSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed_MetaData[] = {
		{ "Category", "GassedSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/GassedSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed_SetBit(void* Obj)
	{
		((UGassedSurvivorSubAnimInstance*)Obj)->_isGassed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed = { "_isGassed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGassedSurvivorSubAnimInstance), &Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::NewProp__isGassed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGassedSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::ClassParams = {
		&UGassedSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGassedSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGassedSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGassedSurvivorSubAnimInstance, 1091218131);
	template<> THECLOWN_API UClass* StaticClass<UGassedSurvivorSubAnimInstance>()
	{
		return UGassedSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGassedSurvivorSubAnimInstance(Z_Construct_UClass_UGassedSurvivorSubAnimInstance, &UGassedSurvivorSubAnimInstance::StaticClass, TEXT("/Script/TheClown"), TEXT("UGassedSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGassedSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
