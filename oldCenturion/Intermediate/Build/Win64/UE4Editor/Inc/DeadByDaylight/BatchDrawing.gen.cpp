// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BatchDrawing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatchDrawing() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBatchDrawing_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBatchDrawing();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMaterialPerThemeSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHISMMaterialHelperSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerMeshInstancingData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBatchDrawing::StaticRegisterNativesUBatchDrawing()
	{
	}
	UClass* Z_Construct_UClass_UBatchDrawing_NoRegister()
	{
		return UBatchDrawing::StaticClass();
	}
	struct Z_Construct_UClass_UBatchDrawing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__materialPerThemeSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__materialPerThemeSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hismMaterialHelperSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hismMaterialHelperSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshesToInstancingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__meshesToInstancingData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meshesToInstancingData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__meshesToInstancingData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorToSpawnInstancesInto_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actorToSpawnInstancesInto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBatchDrawing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchDrawing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BatchDrawing.h" },
		{ "ModuleRelativePath", "Public/BatchDrawing.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchDrawing_Statics::NewProp__materialPerThemeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BatchDrawing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBatchDrawing_Statics::NewProp__materialPerThemeSettings = { "_materialPerThemeSettings", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchDrawing, _materialPerThemeSettings), Z_Construct_UClass_UMaterialPerThemeSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__materialPerThemeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__materialPerThemeSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchDrawing_Statics::NewProp__hismMaterialHelperSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BatchDrawing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBatchDrawing_Statics::NewProp__hismMaterialHelperSettings = { "_hismMaterialHelperSettings", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchDrawing, _hismMaterialHelperSettings), Z_Construct_UClass_UHISMMaterialHelperSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__hismMaterialHelperSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__hismMaterialHelperSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BatchDrawing.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData = { "_meshesToInstancingData", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchDrawing, _meshesToInstancingData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_Key_KeyProp = { "_meshesToInstancingData_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_ValueProp = { "_meshesToInstancingData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPerMeshInstancingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBatchDrawing_Statics::NewProp__actorToSpawnInstancesInto_MetaData[] = {
		{ "ModuleRelativePath", "Public/BatchDrawing.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBatchDrawing_Statics::NewProp__actorToSpawnInstancesInto = { "_actorToSpawnInstancesInto", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBatchDrawing, _actorToSpawnInstancesInto), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__actorToSpawnInstancesInto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchDrawing_Statics::NewProp__actorToSpawnInstancesInto_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBatchDrawing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchDrawing_Statics::NewProp__materialPerThemeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchDrawing_Statics::NewProp__hismMaterialHelperSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchDrawing_Statics::NewProp__meshesToInstancingData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBatchDrawing_Statics::NewProp__actorToSpawnInstancesInto,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBatchDrawing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBatchDrawing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBatchDrawing_Statics::ClassParams = {
		&UBatchDrawing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBatchDrawing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBatchDrawing_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBatchDrawing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBatchDrawing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBatchDrawing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBatchDrawing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBatchDrawing, 2490144468);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBatchDrawing>()
	{
		return UBatchDrawing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBatchDrawing(Z_Construct_UClass_UBatchDrawing, &UBatchDrawing::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBatchDrawing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBatchDrawing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
