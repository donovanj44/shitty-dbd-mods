// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AssetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
// End Cross Module References
	void UAssetLibrary::StaticRegisterNativesUAssetLibrary()
	{
	}
	UClass* Z_Construct_UClass_UAssetLibrary_NoRegister()
	{
		return UAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsDelayBetweenBatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsDelayBetweenBatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetLibrary.h" },
		{ "ModuleRelativePath", "Public/AssetLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetLibrary_Statics::NewProp_SecondsDelayBetweenBatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAssetLibrary_Statics::NewProp_SecondsDelayBetweenBatch = { "SecondsDelayBetweenBatch", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetLibrary, SecondsDelayBetweenBatch), METADATA_PARAMS(Z_Construct_UClass_UAssetLibrary_Statics::NewProp_SecondsDelayBetweenBatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetLibrary_Statics::NewProp_SecondsDelayBetweenBatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetLibrary_Statics::NewProp__objectLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetLibrary_Statics::NewProp__objectLibrary = { "_objectLibrary", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetLibrary, _objectLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetLibrary_Statics::NewProp__objectLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetLibrary_Statics::NewProp__objectLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetLibrary_Statics::NewProp_SecondsDelayBetweenBatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetLibrary_Statics::NewProp__objectLibrary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetLibrary_Statics::ClassParams = {
		&UAssetLibrary::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetLibrary_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetLibrary, 3620900775);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAssetLibrary>()
	{
		return UAssetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetLibrary(Z_Construct_UClass_UAssetLibrary, &UAssetLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAssetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
