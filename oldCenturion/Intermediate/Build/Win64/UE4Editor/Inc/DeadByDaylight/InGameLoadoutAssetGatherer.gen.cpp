// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InGameLoadoutAssetGatherer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameLoadoutAssetGatherer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameLoadoutAssetGatherer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameLoadoutAssetGatherer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInGameAssetPreloaderGatherer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInGameLoadoutAssetGatherer::StaticRegisterNativesUInGameLoadoutAssetGatherer()
	{
	}
	UClass* Z_Construct_UClass_UInGameLoadoutAssetGatherer_NoRegister()
	{
		return UInGameLoadoutAssetGatherer::StaticClass();
	}
	struct Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInGameAssetPreloaderGatherer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InGameLoadoutAssetGatherer.h" },
		{ "ModuleRelativePath", "Public/InGameLoadoutAssetGatherer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameLoadoutAssetGatherer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::ClassParams = {
		&UInGameLoadoutAssetGatherer::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameLoadoutAssetGatherer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameLoadoutAssetGatherer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameLoadoutAssetGatherer, 2427470046);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInGameLoadoutAssetGatherer>()
	{
		return UInGameLoadoutAssetGatherer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameLoadoutAssetGatherer(Z_Construct_UClass_UInGameLoadoutAssetGatherer, &UInGameLoadoutAssetGatherer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInGameLoadoutAssetGatherer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameLoadoutAssetGatherer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
