// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BreathingSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreathingSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBreathingSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UBreathingSurvivorSubAnimInstance::StaticRegisterNativesUBreathingSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_NoRegister()
	{
		return UBreathingSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__breathing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__breathing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDead_MetaData[];
#endif
		static void NewProp__isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BreathingSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BreathingSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__breathing_MetaData[] = {
		{ "Category", "BreathingSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BreathingSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__breathing = { "_breathing", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreathingSurvivorSubAnimInstance, _breathing), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__breathing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__breathing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead_MetaData[] = {
		{ "Category", "BreathingSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BreathingSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead_SetBit(void* Obj)
	{
		((UBreathingSurvivorSubAnimInstance*)Obj)->_isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead = { "_isDead", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBreathingSurvivorSubAnimInstance), &Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__breathing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::NewProp__isDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBreathingSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::ClassParams = {
		&UBreathingSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBreathingSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBreathingSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBreathingSurvivorSubAnimInstance, 1093533609);
	template<> DBDANIMATION_API UClass* StaticClass<UBreathingSurvivorSubAnimInstance>()
	{
		return UBreathingSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBreathingSurvivorSubAnimInstance(Z_Construct_UClass_UBreathingSurvivorSubAnimInstance, &UBreathingSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBreathingSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBreathingSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
