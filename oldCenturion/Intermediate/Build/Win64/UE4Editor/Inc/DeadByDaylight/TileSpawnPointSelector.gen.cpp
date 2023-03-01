// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TileSpawnPointSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileSpawnPointSelector() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPointSelector_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPointSelector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectableTileSpawnPoint();
// End Cross Module References
	void UTileSpawnPointSelector::StaticRegisterNativesUTileSpawnPointSelector()
	{
	}
	UClass* Z_Construct_UClass_UTileSpawnPointSelector_NoRegister()
	{
		return UTileSpawnPointSelector::StaticClass();
	}
	struct Z_Construct_UClass_UTileSpawnPointSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tileSpawnPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tileSpawnPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileSpawnPointSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPointSelector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TileSpawnPointSelector.h" },
		{ "ModuleRelativePath", "Public/TileSpawnPointSelector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints_MetaData[] = {
		{ "Category", "TileSpawnPointSelector" },
		{ "ModuleRelativePath", "Public/TileSpawnPointSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints = { "_tileSpawnPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileSpawnPointSelector, _tileSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints_Inner = { "_tileSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSelectableTileSpawnPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileSpawnPointSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSpawnPointSelector_Statics::NewProp__tileSpawnPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileSpawnPointSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileSpawnPointSelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileSpawnPointSelector_Statics::ClassParams = {
		&UTileSpawnPointSelector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileSpawnPointSelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPointSelector_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileSpawnPointSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSpawnPointSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileSpawnPointSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileSpawnPointSelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileSpawnPointSelector, 151051835);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTileSpawnPointSelector>()
	{
		return UTileSpawnPointSelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileSpawnPointSelector(Z_Construct_UClass_UTileSpawnPointSelector, &UTileSpawnPointSelector::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTileSpawnPointSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileSpawnPointSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
