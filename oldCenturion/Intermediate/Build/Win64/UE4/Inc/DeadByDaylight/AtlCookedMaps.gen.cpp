// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlCookedMaps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlCookedMaps() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlCookedMaps_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlCookedMaps();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlCookedMapDescription();
// End Cross Module References
	void UAtlCookedMaps::StaticRegisterNativesUAtlCookedMaps()
	{
	}
	UClass* Z_Construct_UClass_UAtlCookedMaps_NoRegister()
	{
		return UAtlCookedMaps::StaticClass();
	}
	struct Z_Construct_UClass_UAtlCookedMaps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Descriptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlCookedMaps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlCookedMaps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlCookedMaps.h" },
		{ "ModuleRelativePath", "Public/AtlCookedMaps.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions_MetaData[] = {
		{ "Category", "AtlCookedMaps" },
		{ "ModuleRelativePath", "Public/AtlCookedMaps.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlCookedMaps, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlCookedMapDescription, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlCookedMaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlCookedMaps_Statics::NewProp_Descriptions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlCookedMaps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlCookedMaps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlCookedMaps_Statics::ClassParams = {
		&UAtlCookedMaps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlCookedMaps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlCookedMaps_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlCookedMaps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlCookedMaps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlCookedMaps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlCookedMaps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlCookedMaps, 414390201);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlCookedMaps>()
	{
		return UAtlCookedMaps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlCookedMaps(Z_Construct_UClass_UAtlCookedMaps, &UAtlCookedMaps::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlCookedMaps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlCookedMaps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
