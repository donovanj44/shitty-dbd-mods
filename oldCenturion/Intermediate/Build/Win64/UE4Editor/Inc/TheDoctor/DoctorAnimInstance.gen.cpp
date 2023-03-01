// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDoctor/Public/DoctorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoctorAnimInstance() {}
// Cross Module References
	THEDOCTOR_API UClass* Z_Construct_UClass_UDoctorAnimInstance_NoRegister();
	THEDOCTOR_API UClass* Z_Construct_UClass_UDoctorAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheDoctor();
// End Cross Module References
	void UDoctorAnimInstance::StaticRegisterNativesUDoctorAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UDoctorAnimInstance_NoRegister()
	{
		return UDoctorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDoctorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoctorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDoctor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoctorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DoctorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/DoctorAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoctorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoctorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoctorAnimInstance_Statics::ClassParams = {
		&UDoctorAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoctorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoctorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoctorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoctorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoctorAnimInstance, 2672457807);
	template<> THEDOCTOR_API UClass* StaticClass<UDoctorAnimInstance>()
	{
		return UDoctorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoctorAnimInstance(Z_Construct_UClass_UDoctorAnimInstance, &UDoctorAnimInstance::StaticClass, TEXT("/Script/TheDoctor"), TEXT("UDoctorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoctorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
