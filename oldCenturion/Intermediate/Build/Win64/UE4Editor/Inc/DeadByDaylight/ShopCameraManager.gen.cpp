// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ShopCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopCameraManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AShopCameraManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AShopCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCameraTag();
// End Cross Module References
	void AShopCameraManager::StaticRegisterNativesAShopCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AShopCameraManager_NoRegister()
	{
		return AShopCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AShopCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryCharactersCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoryCharactersCamera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoryCharactersCamera_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogCharactersCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CatalogCharactersCamera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CatalogCharactersCamera_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShopCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCameraManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShopCameraManager.h" },
		{ "ModuleRelativePath", "Public/ShopCameraManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera_MetaData[] = {
		{ "Category", "ShopCameraManager" },
		{ "ModuleRelativePath", "Public/ShopCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera = { "StoryCharactersCamera", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCameraManager, StoryCharactersCamera), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera_Inner = { "StoryCharactersCamera", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterCameraTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera_MetaData[] = {
		{ "Category", "ShopCameraManager" },
		{ "ModuleRelativePath", "Public/ShopCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera = { "CatalogCharactersCamera", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopCameraManager, CatalogCharactersCamera), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera_Inner = { "CatalogCharactersCamera", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterCameraTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShopCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCameraManager_Statics::NewProp_StoryCharactersCamera_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopCameraManager_Statics::NewProp_CatalogCharactersCamera_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShopCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShopCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShopCameraManager_Statics::ClassParams = {
		&AShopCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShopCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShopCameraManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShopCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShopCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShopCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShopCameraManager, 2876193264);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AShopCameraManager>()
	{
		return AShopCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShopCameraManager(Z_Construct_UClass_AShopCameraManager, &AShopCameraManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AShopCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShopCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
