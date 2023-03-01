// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/LoopBannerProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoopBannerProvider() {}
// Cross Module References
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_ULoopBannerProvider_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_ULoopBannerProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
// End Cross Module References
	void ULoopBannerProvider::StaticRegisterNativesULoopBannerProvider()
	{
	}
	UClass* Z_Construct_UClass_ULoopBannerProvider_NoRegister()
	{
		return ULoopBannerProvider::StaticClass();
	}
	struct Z_Construct_UClass_ULoopBannerProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentLoopIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentLoopIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoopBannerProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoopBannerProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoopBannerProvider.h" },
		{ "ModuleRelativePath", "Public/LoopBannerProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoopBannerProvider_Statics::NewProp__currentLoopIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoopBannerProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULoopBannerProvider_Statics::NewProp__currentLoopIndex = { "_currentLoopIndex", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoopBannerProvider, _currentLoopIndex), METADATA_PARAMS(Z_Construct_UClass_ULoopBannerProvider_Statics::NewProp__currentLoopIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoopBannerProvider_Statics::NewProp__currentLoopIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoopBannerProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoopBannerProvider_Statics::NewProp__currentLoopIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoopBannerProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoopBannerProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoopBannerProvider_Statics::ClassParams = {
		&ULoopBannerProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoopBannerProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoopBannerProvider_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoopBannerProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoopBannerProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoopBannerProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoopBannerProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoopBannerProvider, 1860456922);
	template<> DYNAMICCONTENT_API UClass* StaticClass<ULoopBannerProvider>()
	{
		return ULoopBannerProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoopBannerProvider(Z_Construct_UClass_ULoopBannerProvider, &ULoopBannerProvider::StaticClass, TEXT("/Script/DynamicContent"), TEXT("ULoopBannerProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoopBannerProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
