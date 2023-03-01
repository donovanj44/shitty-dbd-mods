// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDOutlineComponentCustomDepthConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDOutlineComponentCustomDepthConfiguration() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentConfiguration();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDOutlineComponentCustomDepthConfiguration::StaticRegisterNativesUDBDOutlineComponentCustomDepthConfiguration()
	{
	}
	UClass* Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_NoRegister()
	{
		return UDBDOutlineComponentCustomDepthConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDOutlineComponentConfiguration,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDOutlineComponentCustomDepthConfiguration.h" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentCustomDepthConfiguration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDOutlineComponentCustomDepthConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::ClassParams = {
		&UDBDOutlineComponentCustomDepthConfiguration::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDOutlineComponentCustomDepthConfiguration, 2493801458);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDOutlineComponentCustomDepthConfiguration>()
	{
		return UDBDOutlineComponentCustomDepthConfiguration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDOutlineComponentCustomDepthConfiguration(Z_Construct_UClass_UDBDOutlineComponentCustomDepthConfiguration, &UDBDOutlineComponentCustomDepthConfiguration::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDOutlineComponentCustomDepthConfiguration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDOutlineComponentCustomDepthConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
