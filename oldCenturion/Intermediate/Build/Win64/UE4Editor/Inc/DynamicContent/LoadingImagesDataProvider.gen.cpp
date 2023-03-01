// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/LoadingImagesDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingImagesDataProvider() {}
// Cross Module References
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_ULoadingImagesDataProvider_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_ULoadingImagesDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDynamicContentHolder_NoRegister();
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingImages();
// End Cross Module References
	void ULoadingImagesDataProvider::StaticRegisterNativesULoadingImagesDataProvider()
	{
	}
	UClass* Z_Construct_UClass_ULoadingImagesDataProvider_NoRegister()
	{
		return ULoadingImagesDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingImagesDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningDynamicContentHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningDynamicContentHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedLoadingImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cachedLoadingImages;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__cachedLoadingImages_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cachedLoadingImages_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingImagesDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingImagesDataProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadingImagesDataProvider.h" },
		{ "ModuleRelativePath", "Public/LoadingImagesDataProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__owningDynamicContentHolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__owningDynamicContentHolder = { "_owningDynamicContentHolder", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingImagesDataProvider, _owningDynamicContentHolder), Z_Construct_UClass_UDynamicContentHolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__owningDynamicContentHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__owningDynamicContentHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadingImagesDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages = { "_cachedLoadingImages", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingImagesDataProvider, _cachedLoadingImages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_Key_KeyProp = { "_cachedLoadingImages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_ValueProp = { "_cachedLoadingImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLoadingImages, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingImagesDataProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__owningDynamicContentHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingImagesDataProvider_Statics::NewProp__cachedLoadingImages_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingImagesDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingImagesDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingImagesDataProvider_Statics::ClassParams = {
		&ULoadingImagesDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingImagesDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingImagesDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingImagesDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingImagesDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingImagesDataProvider, 3663737071);
	template<> DYNAMICCONTENT_API UClass* StaticClass<ULoadingImagesDataProvider>()
	{
		return ULoadingImagesDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingImagesDataProvider(Z_Construct_UClass_ULoadingImagesDataProvider, &ULoadingImagesDataProvider::StaticClass, TEXT("/Script/DynamicContent"), TEXT("ULoadingImagesDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingImagesDataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
