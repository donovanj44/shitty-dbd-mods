// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BorderTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorderTile() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABorderTile_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABorderTile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBorderElements();
// End Cross Module References
	void ABorderTile::StaticRegisterNativesABorderTile()
	{
	}
	UClass* Z_Construct_UClass_ABorderTile_NoRegister()
	{
		return ABorderTile::StaticClass();
	}
	struct Z_Construct_UClass_ABorderTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__map_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Borders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Borders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Borders_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABorderTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATile,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABorderTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BorderTile.h" },
		{ "ModuleRelativePath", "Public/BorderTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABorderTile_Statics::NewProp__map_MetaData[] = {
		{ "ModuleRelativePath", "Public/BorderTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABorderTile_Statics::NewProp__map = { "_map", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABorderTile, _map), Z_Construct_UClass_UMapData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABorderTile_Statics::NewProp__map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABorderTile_Statics::NewProp__map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders_MetaData[] = {
		{ "Category", "BorderTile" },
		{ "ModuleRelativePath", "Public/BorderTile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders = { "Borders", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABorderTile, Borders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders_Inner = { "Borders", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBorderElements, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABorderTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorderTile_Statics::NewProp__map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABorderTile_Statics::NewProp_Borders_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABorderTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABorderTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABorderTile_Statics::ClassParams = {
		&ABorderTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABorderTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABorderTile_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABorderTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABorderTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABorderTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABorderTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABorderTile, 2885107226);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ABorderTile>()
	{
		return ABorderTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABorderTile(Z_Construct_UClass_ABorderTile, &ABorderTile::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ABorderTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABorderTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
