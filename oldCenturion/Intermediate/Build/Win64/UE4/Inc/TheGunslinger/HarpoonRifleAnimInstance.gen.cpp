// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonRifleAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonRifleAnimInstance() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonRifleAnimInstance_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UHarpoonRifleAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_ARifleChain_NoRegister();
// End Cross Module References
	void UHarpoonRifleAnimInstance::StaticRegisterNativesUHarpoonRifleAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHarpoonRifleAnimInstance_NoRegister()
	{
		return UHarpoonRifleAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainUnwindingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chainUnwindingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HarpoonRifleAnimInstance.h" },
		{ "ModuleRelativePath", "Public/HarpoonRifleAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chainUnwindingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HarpoonRifleAnimInstance" },
		{ "ModuleRelativePath", "Public/HarpoonRifleAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chainUnwindingSpeed = { "_chainUnwindingSpeed", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonRifleAnimInstance, _chainUnwindingSpeed), METADATA_PARAMS(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chainUnwindingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chainUnwindingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chain_MetaData[] = {
		{ "ModuleRelativePath", "Public/HarpoonRifleAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chain = { "_chain", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHarpoonRifleAnimInstance, _chain), Z_Construct_UClass_ARifleChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chainUnwindingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::NewProp__chain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHarpoonRifleAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::ClassParams = {
		&UHarpoonRifleAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHarpoonRifleAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHarpoonRifleAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHarpoonRifleAnimInstance, 3830419060);
	template<> THEGUNSLINGER_API UClass* StaticClass<UHarpoonRifleAnimInstance>()
	{
		return UHarpoonRifleAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHarpoonRifleAnimInstance(Z_Construct_UClass_UHarpoonRifleAnimInstance, &UHarpoonRifleAnimInstance::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UHarpoonRifleAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHarpoonRifleAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
