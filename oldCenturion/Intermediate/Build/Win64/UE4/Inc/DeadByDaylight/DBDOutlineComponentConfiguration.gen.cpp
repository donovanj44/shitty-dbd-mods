// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDOutlineComponentConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDOutlineComponentConfiguration() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentConfiguration_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentConfiguration();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutlineColourConfiguration();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutlineConfiguration();
// End Cross Module References
	void UDBDOutlineComponentConfiguration::StaticRegisterNativesUDBDOutlineComponentConfiguration()
	{
	}
	UClass* Z_Construct_UClass_UDBDOutlineComponentConfiguration_NoRegister()
	{
		return UDBDOutlineComponentConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTranslucencyMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultTranslucencyMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTranslucencyMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineColours_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutlineColours;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutlineColours_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColours_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineConfigurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutlineConfigurations;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OutlineConfigurations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineConfigurations_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDOutlineComponentConfiguration.h" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentConfiguration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials_MetaData[] = {
		{ "Category", "DBDOutlineComponentConfiguration" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials = { "DefaultTranslucencyMaterials", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponentConfiguration, DefaultTranslucencyMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials_Inner = { "DefaultTranslucencyMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "Category", "DBDOutlineComponentConfiguration" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponentConfiguration, OutlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_MetaData[] = {
		{ "Category", "DBDOutlineComponentConfiguration" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours = { "OutlineColours", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponentConfiguration, OutlineColours), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_Key_KeyProp = { "OutlineColours_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_ValueProp = { "OutlineColours", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FOutlineColourConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_MetaData[] = {
		{ "Category", "DBDOutlineComponentConfiguration" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations = { "OutlineConfigurations", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDOutlineComponentConfiguration, OutlineConfigurations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_Key_KeyProp = { "OutlineConfigurations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_ValueProp = { "OutlineConfigurations", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FOutlineConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_DefaultTranslucencyMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineColours_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::NewProp_OutlineConfigurations_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDOutlineComponentConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::ClassParams = {
		&UDBDOutlineComponentConfiguration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDOutlineComponentConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDOutlineComponentConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDOutlineComponentConfiguration, 2347868022);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDOutlineComponentConfiguration>()
	{
		return UDBDOutlineComponentConfiguration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDOutlineComponentConfiguration(Z_Construct_UClass_UDBDOutlineComponentConfiguration, &UDBDOutlineComponentConfiguration::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDOutlineComponentConfiguration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDOutlineComponentConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
