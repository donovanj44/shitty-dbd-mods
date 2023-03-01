// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/HatchAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatchAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UHatchAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UHatchAnimInstance();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void UHatchAnimInstance::StaticRegisterNativesUHatchAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHatchAnimInstance_NoRegister()
	{
		return UHatchAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHatchAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpen_MetaData[];
#endif
		static void NewProp__isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHatchAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USleepingAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HatchAnimInstance.h" },
		{ "ModuleRelativePath", "Public/HatchAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen_MetaData[] = {
		{ "Category", "HatchAnimInstance" },
		{ "ModuleRelativePath", "Public/HatchAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen_SetBit(void* Obj)
	{
		((UHatchAnimInstance*)Obj)->_isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen = { "_isOpen", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHatchAnimInstance), &Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHatchAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchAnimInstance_Statics::NewProp__isOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHatchAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHatchAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHatchAnimInstance_Statics::ClassParams = {
		&UHatchAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHatchAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHatchAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHatchAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHatchAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHatchAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHatchAnimInstance, 688345987);
	template<> DBDANIMATION_API UClass* StaticClass<UHatchAnimInstance>()
	{
		return UHatchAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHatchAnimInstance(Z_Construct_UClass_UHatchAnimInstance, &UHatchAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UHatchAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHatchAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
