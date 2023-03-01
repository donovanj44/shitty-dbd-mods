// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDInstancedFoliageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDInstancedFoliageComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInstancedFoliageComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInstancedFoliageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDFoliageInfo();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void UDBDInstancedFoliageComponent::StaticRegisterNativesUDBDInstancedFoliageComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDInstancedFoliageComponent_NoRegister()
	{
		return UDBDInstancedFoliageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_foliage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_foliage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceBaseMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InstanceBaseMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceBaseMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceBaseMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextBaseId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextBaseId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDInstancedFoliageComponent.h" },
		{ "ModuleRelativePath", "Public/DBDInstancedFoliageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage_MetaData[] = {
		{ "Category", "DBDInstancedFoliageComponent" },
		{ "ModuleRelativePath", "Public/DBDInstancedFoliageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage = { "foliage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInstancedFoliageComponent, foliage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage_Inner = { "foliage", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDBDFoliageInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_MetaData[] = {
		{ "Category", "DBDInstancedFoliageComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDInstancedFoliageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap = { "InstanceBaseMap", nullptr, (EPropertyFlags)0x001000800002001d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInstancedFoliageComponent, InstanceBaseMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_Key_KeyProp = { "InstanceBaseMap_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_ValueProp = { "InstanceBaseMap", nullptr, (EPropertyFlags)0x00000000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_NextBaseId_MetaData[] = {
		{ "Category", "DBDInstancedFoliageComponent" },
		{ "ModuleRelativePath", "Public/DBDInstancedFoliageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_NextBaseId = { "NextBaseId", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDInstancedFoliageComponent, NextBaseId), METADATA_PARAMS(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_NextBaseId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_NextBaseId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_foliage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_InstanceBaseMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::NewProp_NextBaseId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDInstancedFoliageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::ClassParams = {
		&UDBDInstancedFoliageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDInstancedFoliageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDInstancedFoliageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDInstancedFoliageComponent, 658711432);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDInstancedFoliageComponent>()
	{
		return UDBDInstancedFoliageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDInstancedFoliageComponent(Z_Construct_UClass_UDBDInstancedFoliageComponent, &UDBDInstancedFoliageComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDInstancedFoliageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDInstancedFoliageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
