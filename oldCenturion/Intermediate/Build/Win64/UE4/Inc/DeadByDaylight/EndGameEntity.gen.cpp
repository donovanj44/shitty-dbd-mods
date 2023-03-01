// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EndGameEntity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameEntity() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEndGameEntity_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEndGameEntity();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AEndGameEntity::StaticRegisterNativesAEndGameEntity()
	{
	}
	UClass* Z_Construct_UClass_AEndGameEntity_NoRegister()
	{
		return AEndGameEntity::StaticClass();
	}
	struct Z_Construct_UClass_AEndGameEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndGameEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndGameEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndGameEntity.h" },
		{ "ModuleRelativePath", "Public/EndGameEntity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndGameEntity_Statics::NewProp__skeletalMeshComponent_MetaData[] = {
		{ "Category", "EndGameEntity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EndGameEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndGameEntity_Statics::NewProp__skeletalMeshComponent = { "_skeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndGameEntity, _skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEndGameEntity_Statics::NewProp__skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameEntity_Statics::NewProp__skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndGameEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndGameEntity_Statics::NewProp__skeletalMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndGameEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndGameEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndGameEntity_Statics::ClassParams = {
		&AEndGameEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEndGameEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndGameEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndGameEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndGameEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndGameEntity, 2189399910);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AEndGameEntity>()
	{
		return AEndGameEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndGameEntity(Z_Construct_UClass_AEndGameEntity, &AEndGameEntity::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AEndGameEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndGameEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
