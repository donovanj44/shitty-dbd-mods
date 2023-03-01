// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/TrapperAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrapperAnimInstance() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UTrapperAnimInstance_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UTrapperAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
// End Cross Module References
	void UTrapperAnimInstance::StaticRegisterNativesUTrapperAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTrapperAnimInstance_NoRegister()
	{
		return UTrapperAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTrapperAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrapperAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrapperAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TrapperAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TrapperAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrapperAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrapperAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrapperAnimInstance_Statics::ClassParams = {
		&UTrapperAnimInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTrapperAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrapperAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrapperAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrapperAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrapperAnimInstance, 872190231);
	template<> THETRAPPER_API UClass* StaticClass<UTrapperAnimInstance>()
	{
		return UTrapperAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrapperAnimInstance(Z_Construct_UClass_UTrapperAnimInstance, &UTrapperAnimInstance::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UTrapperAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrapperAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
