// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Entity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntity() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEntity_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEntity();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void AEntity::StaticRegisterNativesAEntity()
	{
	}
	UClass* Z_Construct_UClass_AEntity_NoRegister()
	{
		return AEntity::StaticClass();
	}
	struct Z_Construct_UClass_AEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__materialHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__materialHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealsCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealsCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dissolveCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dissolveCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Entity.h" },
		{ "ModuleRelativePath", "Public/Entity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntity_Statics::NewProp__skeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntity_Statics::NewProp__skeletalMesh = { "_skeletalMesh", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEntity, _skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEntity_Statics::NewProp__skeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::NewProp__skeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntity_Statics::NewProp__materialHelper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntity_Statics::NewProp__materialHelper = { "_materialHelper", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEntity, _materialHelper), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEntity_Statics::NewProp__materialHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::NewProp__materialHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntity_Statics::NewProp__revealsCurve_MetaData[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntity_Statics::NewProp__revealsCurve = { "_revealsCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEntity, _revealsCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEntity_Statics::NewProp__revealsCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::NewProp__revealsCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntity_Statics::NewProp__dissolveCurve_MetaData[] = {
		{ "Category", "Entity" },
		{ "ModuleRelativePath", "Public/Entity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntity_Statics::NewProp__dissolveCurve = { "_dissolveCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEntity, _dissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEntity_Statics::NewProp__dissolveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::NewProp__dissolveCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntity_Statics::NewProp__skeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntity_Statics::NewProp__materialHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntity_Statics::NewProp__revealsCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntity_Statics::NewProp__dissolveCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEntity_Statics::ClassParams = {
		&AEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEntity, 1172964674);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AEntity>()
	{
		return AEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEntity(Z_Construct_UClass_AEntity, &AEntity::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
