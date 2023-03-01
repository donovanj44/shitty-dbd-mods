// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/MobileBloodOrbRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileBloodOrbRenderer() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_AMobileBloodOrbRenderer_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_AMobileBloodOrbRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FBloodOrbInfo();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void AMobileBloodOrbRenderer::StaticRegisterNativesAMobileBloodOrbRenderer()
	{
	}
	UClass* Z_Construct_UClass_AMobileBloodOrbRenderer_NoRegister()
	{
		return AMobileBloodOrbRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AMobileBloodOrbRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodOrbVisibilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodOrbVisibilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__orbMaterialInstanceDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__orbMaterialInstanceDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineMaterialInstanceDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineMaterialInstanceDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__instanceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__instanceMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__instanceMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__instanceMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineIsmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineIsmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ismComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ismComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrbMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MobileBloodOrbRenderer.h" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__bloodOrbVisibilityComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__bloodOrbVisibilityComponent = { "_bloodOrbVisibilityComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, _bloodOrbVisibilityComponent), Z_Construct_UClass_UBloodOrbVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__bloodOrbVisibilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__bloodOrbVisibilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__orbMaterialInstanceDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__orbMaterialInstanceDynamic = { "_orbMaterialInstanceDynamic", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, _orbMaterialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__orbMaterialInstanceDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__orbMaterialInstanceDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineMaterialInstanceDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineMaterialInstanceDynamic = { "_outlineMaterialInstanceDynamic", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, _outlineMaterialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineMaterialInstanceDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineMaterialInstanceDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap = { "_instanceMap", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, _instanceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_Key_KeyProp = { "_instanceMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_ValueProp = { "_instanceMap", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBloodOrbInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineIsmComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineIsmComponent = { "_outlineIsmComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, _outlineIsmComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineIsmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineIsmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__ismComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__ismComponent = { "_ismComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, _ismComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__ismComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__ismComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_CullInterval_MetaData[] = {
		{ "Category", "MobileBloodOrbRenderer" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_CullInterval = { "CullInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, CullInterval), METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_CullInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_CullInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OutlineMaterialInstance_MetaData[] = {
		{ "Category", "MobileBloodOrbRenderer" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OutlineMaterialInstance = { "OutlineMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, OutlineMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OutlineMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OutlineMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OrbMaterialInstance_MetaData[] = {
		{ "Category", "MobileBloodOrbRenderer" },
		{ "ModuleRelativePath", "Public/MobileBloodOrbRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OrbMaterialInstance = { "OrbMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileBloodOrbRenderer, OrbMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OrbMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OrbMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__bloodOrbVisibilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__orbMaterialInstanceDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineMaterialInstanceDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__instanceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__outlineIsmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp__ismComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_CullInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OutlineMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::NewProp_OrbMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobileBloodOrbRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::ClassParams = {
		&AMobileBloodOrbRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMobileBloodOrbRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMobileBloodOrbRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMobileBloodOrbRenderer, 396717217);
	template<> THEONI_API UClass* StaticClass<AMobileBloodOrbRenderer>()
	{
		return AMobileBloodOrbRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMobileBloodOrbRenderer(Z_Construct_UClass_AMobileBloodOrbRenderer, &AMobileBloodOrbRenderer::StaticClass, TEXT("/Script/TheOni"), TEXT("AMobileBloodOrbRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMobileBloodOrbRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
