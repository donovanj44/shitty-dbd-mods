// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorVariationSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorVariationSpawner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorVariationSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorVariationSpawner();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FActorVariationElements();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UActorVariationSpawner::StaticRegisterNativesUActorVariationSpawner()
	{
	}
	UClass* Z_Construct_UClass_UActorVariationSpawner_NoRegister()
	{
		return UActorVariationSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UActorVariationSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__toSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Visualization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorVariationSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorVariationSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorVariationSpawner.h" },
		{ "ModuleRelativePath", "Public/ActorVariationSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp__toSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorVariationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp__toSpawn = { "_toSpawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorVariationSpawner, _toSpawn), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp__toSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp__toSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "ActorVariationSpawner" },
		{ "ModuleRelativePath", "Public/ActorVariationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorVariationSpawner, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorVariationElements, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Visualization_MetaData[] = {
		{ "Category", "ActorVariationSpawner" },
		{ "ModuleRelativePath", "Public/ActorVariationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Visualization = { "Visualization", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorVariationSpawner, Visualization), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Visualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Visualization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorVariationSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp__toSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Variations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorVariationSpawner_Statics::NewProp_Visualization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorVariationSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorVariationSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorVariationSpawner_Statics::ClassParams = {
		&UActorVariationSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorVariationSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorVariationSpawner_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorVariationSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorVariationSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorVariationSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorVariationSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorVariationSpawner, 1842734826);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorVariationSpawner>()
	{
		return UActorVariationSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorVariationSpawner(Z_Construct_UClass_UActorVariationSpawner, &UActorVariationSpawner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorVariationSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorVariationSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
