// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDecalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDecalComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDecalComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlassStaticMesh_NoRegister();
// End Cross Module References
	void UDBDDecalComponent::StaticRegisterNativesUDBDDecalComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDDecalComponent_NoRegister()
	{
		return UDBDDecalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDecalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materialInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_materialInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMeshGlass_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_staticMeshGlass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMeshGlass_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMeshGlass_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMeshDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_staticMeshDecals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMeshDecals_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDecalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDecalComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDecalComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "DBDDecalComponent.h" },
		{ "ModuleRelativePath", "Public/DBDDecalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances = { "materialInstances", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDecalComponent, materialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances_Inner = { "materialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass = { "staticMeshGlass", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDecalComponent, staticMeshGlass), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_Key_KeyProp = { "staticMeshGlass_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_ValueProp = { "staticMeshGlass", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGlassStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals = { "staticMeshDecals", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDDecalComponent, staticMeshDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals_Inner = { "staticMeshDecals", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_materialInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshGlass_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDDecalComponent_Statics::NewProp_staticMeshDecals_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDecalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDecalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDecalComponent_Statics::ClassParams = {
		&UDBDDecalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDDecalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDecalComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDDecalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDecalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDecalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDecalComponent, 1377095976);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDDecalComponent>()
	{
		return UDBDDecalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDecalComponent(Z_Construct_UClass_UDBDDecalComponent, &UDBDDecalComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDDecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDecalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
