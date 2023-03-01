// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/SupplyCrateAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSupplyCrateAnimInstance() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_USupplyCrateAnimInstance_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_USupplyCrateAnimInstance();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_ASupplyCrateInteractable_NoRegister();
// End Cross Module References
	void USupplyCrateAnimInstance::StaticRegisterNativesUSupplyCrateAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USupplyCrateAnimInstance_NoRegister()
	{
		return USupplyCrateAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USupplyCrateAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAutoClosing_MetaData[];
#endif
		static void NewProp__isAutoClosing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAutoClosing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingPriedOpen_MetaData[];
#endif
		static void NewProp__isBeingPriedOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingPriedOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpen_MetaData[];
#endif
		static void NewProp__isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSupplyCrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSupplyCrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USupplyCrateAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USleepingAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupplyCrateAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SupplyCrateAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SupplyCrateAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing_MetaData[] = {
		{ "Category", "SupplyCrateAnimInstance" },
		{ "ModuleRelativePath", "Public/SupplyCrateAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing_SetBit(void* Obj)
	{
		((USupplyCrateAnimInstance*)Obj)->_isAutoClosing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing = { "_isAutoClosing", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USupplyCrateAnimInstance), &Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen_MetaData[] = {
		{ "Category", "SupplyCrateAnimInstance" },
		{ "ModuleRelativePath", "Public/SupplyCrateAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen_SetBit(void* Obj)
	{
		((USupplyCrateAnimInstance*)Obj)->_isBeingPriedOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen = { "_isBeingPriedOpen", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USupplyCrateAnimInstance), &Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen_MetaData[] = {
		{ "Category", "SupplyCrateAnimInstance" },
		{ "ModuleRelativePath", "Public/SupplyCrateAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen_SetBit(void* Obj)
	{
		((USupplyCrateAnimInstance*)Obj)->_isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen = { "_isOpen", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USupplyCrateAnimInstance), &Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__owningSupplyCrate_MetaData[] = {
		{ "Category", "SupplyCrateAnimInstance" },
		{ "ModuleRelativePath", "Public/SupplyCrateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__owningSupplyCrate = { "_owningSupplyCrate", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USupplyCrateAnimInstance, _owningSupplyCrate), Z_Construct_UClass_ASupplyCrateInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__owningSupplyCrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__owningSupplyCrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USupplyCrateAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isAutoClosing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isBeingPriedOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__isOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USupplyCrateAnimInstance_Statics::NewProp__owningSupplyCrate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USupplyCrateAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USupplyCrateAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USupplyCrateAnimInstance_Statics::ClassParams = {
		&USupplyCrateAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USupplyCrateAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USupplyCrateAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USupplyCrateAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USupplyCrateAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USupplyCrateAnimInstance, 3222931979);
	template<> THEK24_API UClass* StaticClass<USupplyCrateAnimInstance>()
	{
		return USupplyCrateAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USupplyCrateAnimInstance(Z_Construct_UClass_USupplyCrateAnimInstance, &USupplyCrateAnimInstance::StaticClass, TEXT("/Script/TheK24"), TEXT("USupplyCrateAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USupplyCrateAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
