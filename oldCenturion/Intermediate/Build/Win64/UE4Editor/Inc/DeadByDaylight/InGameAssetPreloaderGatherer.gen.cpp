// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InGameAssetPreloaderGatherer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameAssetPreloaderGatherer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameAssetPreloaderGatherer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameAssetPreloaderGatherer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInGameAssetPreloaderGatherer::StaticRegisterNativesUInGameAssetPreloaderGatherer()
	{
	}
	UClass* Z_Construct_UClass_UInGameAssetPreloaderGatherer_NoRegister()
	{
		return UInGameAssetPreloaderGatherer::StaticClass();
	}
	struct Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InGameAssetPreloaderGatherer.h" },
		{ "ModuleRelativePath", "Public/InGameAssetPreloaderGatherer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameAssetPreloaderGatherer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::ClassParams = {
		&UInGameAssetPreloaderGatherer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameAssetPreloaderGatherer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameAssetPreloaderGatherer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameAssetPreloaderGatherer, 2968620205);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInGameAssetPreloaderGatherer>()
	{
		return UInGameAssetPreloaderGatherer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameAssetPreloaderGatherer(Z_Construct_UClass_UInGameAssetPreloaderGatherer, &UInGameAssetPreloaderGatherer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInGameAssetPreloaderGatherer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameAssetPreloaderGatherer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
