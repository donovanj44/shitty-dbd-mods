// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BasePowerSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePowerSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBasePowerSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBasePowerSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void UBasePowerSubAnimInstance::StaticRegisterNativesUBasePowerSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBasePowerSubAnimInstance_NoRegister()
	{
		return UBasePowerSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBasePowerSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsingPower_MetaData[];
#endif
		static void NewProp__isUsingPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsingPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BasePowerSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BasePowerSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower_MetaData[] = {
		{ "Category", "BasePowerSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BasePowerSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower_SetBit(void* Obj)
	{
		((UBasePowerSubAnimInstance*)Obj)->_isUsingPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower = { "_isUsingPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBasePowerSubAnimInstance), &Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::NewProp__isUsingPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePowerSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::ClassParams = {
		&UBasePowerSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePowerSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePowerSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePowerSubAnimInstance, 2659620861);
	template<> DBDANIMATION_API UClass* StaticClass<UBasePowerSubAnimInstance>()
	{
		return UBasePowerSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePowerSubAnimInstance(Z_Construct_UClass_UBasePowerSubAnimInstance, &UBasePowerSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBasePowerSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePowerSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
