// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyChainsawSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyChainsawSubAnimInstance() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAttackSubAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
// End Cross Module References
	void UHillbillyChainsawSubAnimInstance::StaticRegisterNativesUHillbillyChainsawSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_NoRegister()
	{
		return UHillbillyChainsawSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isWaitingForChainsaw_MetaData[];
#endif
		static void NewProp__isWaitingForChainsaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWaitingForChainsaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isChainsawSprinting_MetaData[];
#endif
		static void NewProp__isChainsawSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isChainsawSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRevvingChainsawCancelled_MetaData[];
#endif
		static void NewProp__isRevvingChainsawCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRevvingChainsawCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRevvingChainsaw_MetaData[];
#endif
		static void NewProp__isRevvingChainsaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRevvingChainsaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKillerAttackSubAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HillbillyChainsawSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw_MetaData[] = {
		{ "Category", "HillbillyChainsawSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw_SetBit(void* Obj)
	{
		((UHillbillyChainsawSubAnimInstance*)Obj)->_isWaitingForChainsaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw = { "_isWaitingForChainsaw", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHillbillyChainsawSubAnimInstance), &Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting_MetaData[] = {
		{ "Category", "HillbillyChainsawSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting_SetBit(void* Obj)
	{
		((UHillbillyChainsawSubAnimInstance*)Obj)->_isChainsawSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting = { "_isChainsawSprinting", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHillbillyChainsawSubAnimInstance), &Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled_MetaData[] = {
		{ "Category", "HillbillyChainsawSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled_SetBit(void* Obj)
	{
		((UHillbillyChainsawSubAnimInstance*)Obj)->_isRevvingChainsawCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled = { "_isRevvingChainsawCancelled", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHillbillyChainsawSubAnimInstance), &Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw_MetaData[] = {
		{ "Category", "HillbillyChainsawSubAnimInstance" },
		{ "ModuleRelativePath", "Public/HillbillyChainsawSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw_SetBit(void* Obj)
	{
		((UHillbillyChainsawSubAnimInstance*)Obj)->_isRevvingChainsaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw = { "_isRevvingChainsaw", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHillbillyChainsawSubAnimInstance), &Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isWaitingForChainsaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isChainsawSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsawCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::NewProp__isRevvingChainsaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyChainsawSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::ClassParams = {
		&UHillbillyChainsawSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyChainsawSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyChainsawSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyChainsawSubAnimInstance, 67101588);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyChainsawSubAnimInstance>()
	{
		return UHillbillyChainsawSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyChainsawSubAnimInstance(Z_Construct_UClass_UHillbillyChainsawSubAnimInstance, &UHillbillyChainsawSubAnimInstance::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyChainsawSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyChainsawSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
