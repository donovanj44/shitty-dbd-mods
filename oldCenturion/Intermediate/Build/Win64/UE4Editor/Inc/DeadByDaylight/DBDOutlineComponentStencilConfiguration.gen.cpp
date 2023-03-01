// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDOutlineComponentStencilConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDOutlineComponentStencilConfiguration() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponentConfiguration();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDOutlineComponentStencilConfiguration::StaticRegisterNativesUDBDOutlineComponentStencilConfiguration()
	{
	}
	UClass* Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_NoRegister()
	{
		return UDBDOutlineComponentStencilConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDOutlineComponentConfiguration,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDOutlineComponentStencilConfiguration.h" },
		{ "ModuleRelativePath", "Public/DBDOutlineComponentStencilConfiguration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDOutlineComponentStencilConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::ClassParams = {
		&UDBDOutlineComponentStencilConfiguration::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDOutlineComponentStencilConfiguration, 1135834994);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDOutlineComponentStencilConfiguration>()
	{
		return UDBDOutlineComponentStencilConfiguration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDOutlineComponentStencilConfiguration(Z_Construct_UClass_UDBDOutlineComponentStencilConfiguration, &UDBDOutlineComponentStencilConfiguration::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDOutlineComponentStencilConfiguration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDOutlineComponentStencilConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
