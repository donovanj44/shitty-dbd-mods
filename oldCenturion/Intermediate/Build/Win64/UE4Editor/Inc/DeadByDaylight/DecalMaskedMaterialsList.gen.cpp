// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DecalMaskedMaterialsList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalMaskedMaterialsList() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalMaskedMaterialsList_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalMaskedMaterialsList();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UDecalMaskedMaterialsList::StaticRegisterNativesUDecalMaskedMaterialsList()
	{
	}
	UClass* Z_Construct_UClass_UDecalMaskedMaterialsList_NoRegister()
	{
		return UDecalMaskedMaterialsList::StaticClass();
	}
	struct Z_Construct_UClass_UDecalMaskedMaterialsList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decalMaskedMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_decalMaskedMaterials;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_decalMaskedMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decalMaskedMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decalPlaneExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_decalPlaneExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decalPlaneStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decalPlaneStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecalMaskedMaterialsList.h" },
		{ "ModuleRelativePath", "Public/DecalMaskedMaterialsList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_MetaData[] = {
		{ "Category", "DecalMaskedMaterialsList" },
		{ "ModuleRelativePath", "Public/DecalMaskedMaterialsList.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials = { "decalMaskedMaterials", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalMaskedMaterialsList, decalMaskedMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_Key_KeyProp = { "decalMaskedMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_ValueProp = { "decalMaskedMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneExtent_MetaData[] = {
		{ "Category", "DecalMaskedMaterialsList" },
		{ "ModuleRelativePath", "Public/DecalMaskedMaterialsList.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneExtent = { "decalPlaneExtent", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalMaskedMaterialsList, decalPlaneExtent), METADATA_PARAMS(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneStaticMesh_MetaData[] = {
		{ "Category", "DecalMaskedMaterialsList" },
		{ "ModuleRelativePath", "Public/DecalMaskedMaterialsList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneStaticMesh = { "decalPlaneStaticMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalMaskedMaterialsList, decalPlaneStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalMaskedMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::NewProp_decalPlaneStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecalMaskedMaterialsList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::ClassParams = {
		&UDecalMaskedMaterialsList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecalMaskedMaterialsList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecalMaskedMaterialsList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecalMaskedMaterialsList, 978868359);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDecalMaskedMaterialsList>()
	{
		return UDecalMaskedMaterialsList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecalMaskedMaterialsList(Z_Construct_UClass_UDecalMaskedMaterialsList, &UDecalMaskedMaterialsList::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDecalMaskedMaterialsList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalMaskedMaterialsList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
