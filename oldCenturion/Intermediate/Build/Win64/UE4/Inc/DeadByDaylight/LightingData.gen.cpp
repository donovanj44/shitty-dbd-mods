// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSceneLightingDescription();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky_NoRegister();
// End Cross Module References
	void ULightingData::StaticRegisterNativesULightingData()
	{
	}
	UClass* Z_Construct_UClass_ULightingData_NoRegister()
	{
		return ULightingData::StaticClass();
	}
	struct Z_Construct_UClass_ULightingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveShadowMapControllersActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AdaptiveShadowMapControllersActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Descriptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAtlantaLighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DefaultAtlantaLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DefaultLighting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightingData.h" },
		{ "ModuleRelativePath", "Public/LightingData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingData_Statics::NewProp_AdaptiveShadowMapControllersActor_MetaData[] = {
		{ "Category", "LightingData" },
		{ "ModuleRelativePath", "Public/LightingData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULightingData_Statics::NewProp_AdaptiveShadowMapControllersActor = { "AdaptiveShadowMapControllersActor", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingData, AdaptiveShadowMapControllersActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingData_Statics::NewProp_AdaptiveShadowMapControllersActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingData_Statics::NewProp_AdaptiveShadowMapControllersActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions_MetaData[] = {
		{ "Category", "LightingData" },
		{ "ModuleRelativePath", "Public/LightingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingData, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSceneLightingDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultAtlantaLighting_MetaData[] = {
		{ "Category", "LightingData" },
		{ "ModuleRelativePath", "Public/LightingData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultAtlantaLighting = { "DefaultAtlantaLighting", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingData, DefaultAtlantaLighting), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultAtlantaLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultAtlantaLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultLighting_MetaData[] = {
		{ "Category", "LightingData" },
		{ "ModuleRelativePath", "Public/LightingData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultLighting = { "DefaultLighting", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingData, DefaultLighting), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultLighting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingData_Statics::NewProp_AdaptiveShadowMapControllersActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingData_Statics::NewProp_Descriptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultAtlantaLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingData_Statics::NewProp_DefaultLighting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightingData_Statics::ClassParams = {
		&ULightingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightingData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightingData, 3688527931);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULightingData>()
	{
		return ULightingData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightingData(Z_Construct_UClass_ULightingData, &ULightingData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULightingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightingData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
