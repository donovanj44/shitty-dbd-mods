// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EditorMeshVisualization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorMeshVisualization() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEditorMeshVisualization_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEditorMeshVisualization();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UEditorMeshVisualization::StaticRegisterNativesUEditorMeshVisualization()
	{
	}
	UClass* Z_Construct_UClass_UEditorMeshVisualization_NoRegister()
	{
		return UEditorMeshVisualization::StaticClass();
	}
	struct Z_Construct_UClass_UEditorMeshVisualization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshVisualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MeshVisualization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorMeshVisualization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMeshVisualization_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EditorMeshVisualization.h" },
		{ "ModuleRelativePath", "Public/EditorMeshVisualization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "EditorMeshVisualization" },
		{ "ModuleRelativePath", "Public/EditorMeshVisualization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorMeshVisualization, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_MeshVisualization_MetaData[] = {
		{ "Category", "EditorMeshVisualization" },
		{ "ModuleRelativePath", "Public/EditorMeshVisualization.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_MeshVisualization = { "MeshVisualization", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorMeshVisualization, MeshVisualization), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_MeshVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_MeshVisualization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorMeshVisualization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorMeshVisualization_Statics::NewProp_MeshVisualization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorMeshVisualization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorMeshVisualization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorMeshVisualization_Statics::ClassParams = {
		&UEditorMeshVisualization::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorMeshVisualization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMeshVisualization_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorMeshVisualization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMeshVisualization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorMeshVisualization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorMeshVisualization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorMeshVisualization, 1694561533);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEditorMeshVisualization>()
	{
		return UEditorMeshVisualization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorMeshVisualization(Z_Construct_UClass_UEditorMeshVisualization, &UEditorMeshVisualization::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEditorMeshVisualization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorMeshVisualization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
