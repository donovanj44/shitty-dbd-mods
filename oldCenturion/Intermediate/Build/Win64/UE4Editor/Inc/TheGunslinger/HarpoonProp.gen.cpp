// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/HarpoonProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHarpoonProp() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProp_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_AHarpoonProp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGunslingerHarpoon_NoRegister();
// End Cross Module References
	void AHarpoonProp::StaticRegisterNativesAHarpoonProp()
	{
	}
	UClass* Z_Construct_UClass_AHarpoonProp_NoRegister()
	{
		return AHarpoonProp::StaticClass();
	}
	struct Z_Construct_UClass_AHarpoonProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHarpoonProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HarpoonProp.h" },
		{ "ModuleRelativePath", "Public/HarpoonProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHarpoonProp_Statics::NewProp__skeletalMesh_MetaData[] = {
		{ "Category", "HarpoonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HarpoonProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHarpoonProp_Statics::NewProp__skeletalMesh = { "_skeletalMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHarpoonProp, _skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHarpoonProp_Statics::NewProp__skeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProp_Statics::NewProp__skeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHarpoonProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHarpoonProp_Statics::NewProp__skeletalMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHarpoonProp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGunslingerHarpoon_NoRegister, (int32)VTABLE_OFFSET(AHarpoonProp, IGunslingerHarpoon), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHarpoonProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHarpoonProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHarpoonProp_Statics::ClassParams = {
		&AHarpoonProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHarpoonProp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHarpoonProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHarpoonProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHarpoonProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHarpoonProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHarpoonProp, 1088482005);
	template<> THEGUNSLINGER_API UClass* StaticClass<AHarpoonProp>()
	{
		return AHarpoonProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHarpoonProp(Z_Construct_UClass_AHarpoonProp, &AHarpoonProp::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("AHarpoonProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHarpoonProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
