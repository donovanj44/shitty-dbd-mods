// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/HagDynamicAccessoryAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHagDynamicAccessoryAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UHagDynamicAccessoryAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UDynamicAccessoryAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
// End Cross Module References
	void UHagDynamicAccessoryAnimInstance::StaticRegisterNativesUHagDynamicAccessoryAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_NoRegister()
	{
		return UHagDynamicAccessoryAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicAccessoryAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HagDynamicAccessoryAnimInstance.h" },
		{ "ModuleRelativePath", "Public/HagDynamicAccessoryAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHagDynamicAccessoryAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::ClassParams = {
		&UHagDynamicAccessoryAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHagDynamicAccessoryAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHagDynamicAccessoryAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHagDynamicAccessoryAnimInstance, 1941161621);
	template<> DBDANIMATION_API UClass* StaticClass<UHagDynamicAccessoryAnimInstance>()
	{
		return UHagDynamicAccessoryAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHagDynamicAccessoryAnimInstance(Z_Construct_UClass_UHagDynamicAccessoryAnimInstance, &UHagDynamicAccessoryAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UHagDynamicAccessoryAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHagDynamicAccessoryAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
