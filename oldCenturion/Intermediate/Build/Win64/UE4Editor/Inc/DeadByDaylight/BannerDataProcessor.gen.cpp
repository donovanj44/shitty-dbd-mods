// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BannerDataProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBannerDataProcessor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBannerDataProcessor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBannerDataProcessor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBannerDataProcessor::StaticRegisterNativesUBannerDataProcessor()
	{
	}
	UClass* Z_Construct_UClass_UBannerDataProcessor_NoRegister()
	{
		return UBannerDataProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UBannerDataProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBannerDataProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBannerDataProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BannerDataProcessor.h" },
		{ "ModuleRelativePath", "Public/BannerDataProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBannerDataProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBannerDataProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBannerDataProcessor_Statics::ClassParams = {
		&UBannerDataProcessor::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBannerDataProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBannerDataProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBannerDataProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBannerDataProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBannerDataProcessor, 2469481649);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBannerDataProcessor>()
	{
		return UBannerDataProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBannerDataProcessor(Z_Construct_UClass_UBannerDataProcessor, &UBannerDataProcessor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBannerDataProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBannerDataProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
