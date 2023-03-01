// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RecommendationsGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecommendationsGenerator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URecommendationsGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URecommendationsGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URecommendationsFilter_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UShopManager_NoRegister();
// End Cross Module References
	void URecommendationsGenerator::StaticRegisterNativesURecommendationsGenerator()
	{
	}
	UClass* Z_Construct_UClass_URecommendationsGenerator_NoRegister()
	{
		return URecommendationsGenerator::StaticClass();
	}
	struct Z_Construct_UClass_URecommendationsGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__filters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__filters_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__filters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shopManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__shopManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecommendationsGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecommendationsGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecommendationsGenerator.h" },
		{ "ModuleRelativePath", "Public/RecommendationsGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecommendationsGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters = { "_filters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URecommendationsGenerator, _filters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_Key_KeyProp = { "_filters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_ValueProp = { "_filters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_URecommendationsFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecommendationsGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URecommendationsGenerator, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__shopManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecommendationsGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__shopManager = { "_shopManager", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URecommendationsGenerator, _shopManager), Z_Construct_UClass_UShopManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__shopManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__shopManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecommendationsGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__filters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecommendationsGenerator_Statics::NewProp__shopManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecommendationsGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecommendationsGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecommendationsGenerator_Statics::ClassParams = {
		&URecommendationsGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URecommendationsGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URecommendationsGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecommendationsGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecommendationsGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecommendationsGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecommendationsGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecommendationsGenerator, 1154623023);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URecommendationsGenerator>()
	{
		return URecommendationsGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecommendationsGenerator(Z_Construct_UClass_URecommendationsGenerator, &URecommendationsGenerator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URecommendationsGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecommendationsGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
