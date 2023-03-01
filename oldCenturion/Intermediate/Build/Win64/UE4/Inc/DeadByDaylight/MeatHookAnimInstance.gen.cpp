// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MeatHookAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeatHookAnimInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMeatHookAnimInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMeatHookAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UMeatHookAnimInstance::StaticRegisterNativesUMeatHookAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMeatHookAnimInstance_NoRegister()
	{
		return UMeatHookAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMeatHookAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBroken_MetaData[];
#endif
		static void NewProp_IsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBroken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeatHookAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MeatHookAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MeatHookAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "MeatHookAnimInstance" },
		{ "ModuleRelativePath", "Public/MeatHookAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeatHookAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken_MetaData[] = {
		{ "Category", "MeatHookAnimInstance" },
		{ "ModuleRelativePath", "Public/MeatHookAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken_SetBit(void* Obj)
	{
		((UMeatHookAnimInstance*)Obj)->IsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken = { "IsBroken", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeatHookAnimInstance), &Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeatHookAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeatHookAnimInstance_Statics::NewProp_IsBroken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeatHookAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeatHookAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeatHookAnimInstance_Statics::ClassParams = {
		&UMeatHookAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeatHookAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeatHookAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeatHookAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeatHookAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeatHookAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeatHookAnimInstance, 2219746122);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMeatHookAnimInstance>()
	{
		return UMeatHookAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeatHookAnimInstance(Z_Construct_UClass_UMeatHookAnimInstance, &UMeatHookAnimInstance::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMeatHookAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeatHookAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
