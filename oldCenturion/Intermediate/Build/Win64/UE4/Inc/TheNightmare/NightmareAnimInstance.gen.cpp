// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/NightmareAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNightmareAnimInstance() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UNightmareAnimInstance_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UNightmareAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
// End Cross Module References
	void UNightmareAnimInstance::StaticRegisterNativesUNightmareAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UNightmareAnimInstance_NoRegister()
	{
		return UNightmareAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNightmareAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNightmareAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNightmareAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "NightmareAnimInstance.h" },
		{ "ModuleRelativePath", "Public/NightmareAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNightmareAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNightmareAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNightmareAnimInstance_Statics::ClassParams = {
		&UNightmareAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNightmareAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNightmareAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNightmareAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNightmareAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNightmareAnimInstance, 2882415263);
	template<> THENIGHTMARE_API UClass* StaticClass<UNightmareAnimInstance>()
	{
		return UNightmareAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNightmareAnimInstance(Z_Construct_UClass_UNightmareAnimInstance, &UNightmareAnimInstance::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UNightmareAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNightmareAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
