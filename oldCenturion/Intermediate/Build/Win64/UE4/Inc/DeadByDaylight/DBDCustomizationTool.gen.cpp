// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDCustomizationTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDCustomizationTool() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDCustomizationTool_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDCustomizationTool();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDCustomizationToolData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky_NoRegister();
// End Cross Module References
	void ADBDCustomizationTool::StaticRegisterNativesADBDCustomizationTool()
	{
	}
	UClass* Z_Construct_UClass_ADBDCustomizationTool_NoRegister()
	{
		return ADBDCustomizationTool::StaticClass();
	}
	struct Z_Construct_UClass_ADBDCustomizationTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverallLightingClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_OverallLightingClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDCustomizationTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDCustomizationTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDCustomizationTool.h" },
		{ "ModuleRelativePath", "Public/DBDCustomizationTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDCustomizationTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors = { "_spawnedActors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDCustomizationTool, _spawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors_Inner = { "_spawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_CustomizationData_MetaData[] = {
		{ "Category", "DBDCustomizationTool" },
		{ "ModuleRelativePath", "Public/DBDCustomizationTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_CustomizationData = { "CustomizationData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDCustomizationTool, CustomizationData), Z_Construct_UScriptStruct_FDBDCustomizationToolData, METADATA_PARAMS(Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_CustomizationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_CustomizationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_OverallLightingClass_MetaData[] = {
		{ "Category", "DBDCustomizationTool" },
		{ "ModuleRelativePath", "Public/DBDCustomizationTool.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_OverallLightingClass = { "OverallLightingClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDCustomizationTool, OverallLightingClass), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_OverallLightingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_OverallLightingClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDCustomizationTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp__spawnedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_CustomizationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDCustomizationTool_Statics::NewProp_OverallLightingClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDCustomizationTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDCustomizationTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDCustomizationTool_Statics::ClassParams = {
		&ADBDCustomizationTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDCustomizationTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDCustomizationTool_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDCustomizationTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDCustomizationTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDCustomizationTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDCustomizationTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDCustomizationTool, 2092157919);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDCustomizationTool>()
	{
		return ADBDCustomizationTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDCustomizationTool(Z_Construct_UClass_ADBDCustomizationTool, &ADBDCustomizationTool::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDCustomizationTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDCustomizationTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
