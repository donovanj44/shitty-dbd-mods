// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/SpiritHuskAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritHuskAnimInstance() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskAnimInstance_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritHuskAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void USpiritHuskAnimInstance::StaticRegisterNativesUSpiritHuskAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USpiritHuskAnimInstance_NoRegister()
	{
		return USpiritHuskAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USpiritHuskAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiritHuskAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SpiritHuskAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SpiritHuskAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritHuskAnimInstance_Statics::NewProp__killerMesh_MetaData[] = {
		{ "Category", "SpiritHuskAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpiritHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpiritHuskAnimInstance_Statics::NewProp__killerMesh = { "_killerMesh", nullptr, (EPropertyFlags)0x002008000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiritHuskAnimInstance, _killerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpiritHuskAnimInstance_Statics::NewProp__killerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskAnimInstance_Statics::NewProp__killerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiritHuskAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiritHuskAnimInstance_Statics::NewProp__killerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiritHuskAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiritHuskAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiritHuskAnimInstance_Statics::ClassParams = {
		&USpiritHuskAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiritHuskAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpiritHuskAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritHuskAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiritHuskAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiritHuskAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiritHuskAnimInstance, 964953107);
	template<> THESPIRIT_API UClass* StaticClass<USpiritHuskAnimInstance>()
	{
		return USpiritHuskAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiritHuskAnimInstance(Z_Construct_UClass_USpiritHuskAnimInstance, &USpiritHuskAnimInstance::StaticClass, TEXT("/Script/TheSpirit"), TEXT("USpiritHuskAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiritHuskAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
