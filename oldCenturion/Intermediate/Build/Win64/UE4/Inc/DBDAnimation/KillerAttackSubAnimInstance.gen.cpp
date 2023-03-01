// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/KillerAttackSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerAttackSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAttackSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAttackSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAttackSubAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void UKillerAttackSubAnimInstance::StaticRegisterNativesUKillerAttackSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UKillerAttackSubAnimInstance_NoRegister()
	{
		return UKillerAttackSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isActive_MetaData[];
#endif
		static void NewProp__isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCarrying_MetaData[];
#endif
		static void NewProp__isCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCarrying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKillerAttackSubAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "KillerAttackSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/KillerAttackSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive_MetaData[] = {
		{ "Category", "KillerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAttackSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive_SetBit(void* Obj)
	{
		((UKillerAttackSubAnimInstance*)Obj)->_isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive = { "_isActive", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAttackSubAnimInstance), &Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying_MetaData[] = {
		{ "Category", "KillerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/KillerAttackSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying_SetBit(void* Obj)
	{
		((UKillerAttackSubAnimInstance*)Obj)->_isCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying = { "_isCarrying", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerAttackSubAnimInstance), &Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::NewProp__isCarrying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerAttackSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::ClassParams = {
		&UKillerAttackSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerAttackSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerAttackSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerAttackSubAnimInstance, 393371881);
	template<> DBDANIMATION_API UClass* StaticClass<UKillerAttackSubAnimInstance>()
	{
		return UKillerAttackSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerAttackSubAnimInstance(Z_Construct_UClass_UKillerAttackSubAnimInstance, &UKillerAttackSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UKillerAttackSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerAttackSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
