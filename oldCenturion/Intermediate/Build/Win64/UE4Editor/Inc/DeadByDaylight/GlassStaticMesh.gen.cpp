// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GlassStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlassStaticMesh() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlassStaticMesh_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlassStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UGlassStaticMesh::StaticRegisterNativesUGlassStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UGlassStaticMesh_NoRegister()
	{
		return UGlassStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UGlassStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultGlassNormalVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_defaultGlassNormalVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlassStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlassStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "GlassStaticMesh.h" },
		{ "ModuleRelativePath", "Public/GlassStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlassStaticMesh_Statics::NewProp_defaultGlassNormalVector_MetaData[] = {
		{ "Category", "GlassStaticMesh" },
		{ "ModuleRelativePath", "Public/GlassStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlassStaticMesh_Statics::NewProp_defaultGlassNormalVector = { "defaultGlassNormalVector", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlassStaticMesh, defaultGlassNormalVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGlassStaticMesh_Statics::NewProp_defaultGlassNormalVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlassStaticMesh_Statics::NewProp_defaultGlassNormalVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlassStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlassStaticMesh_Statics::NewProp_defaultGlassNormalVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlassStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlassStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlassStaticMesh_Statics::ClassParams = {
		&UGlassStaticMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlassStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlassStaticMesh_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGlassStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlassStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlassStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlassStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlassStaticMesh, 3014958505);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGlassStaticMesh>()
	{
		return UGlassStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlassStaticMesh(Z_Construct_UClass_UGlassStaticMesh, &UGlassStaticMesh::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGlassStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlassStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
