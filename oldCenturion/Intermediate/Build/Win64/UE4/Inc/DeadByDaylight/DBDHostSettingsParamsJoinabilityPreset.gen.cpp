// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDHostSettingsParamsJoinabilityPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDHostSettingsParamsJoinabilityPreset() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDHostSettingsParamsJoinabilityPreset::StaticRegisterNativesUDBDHostSettingsParamsJoinabilityPreset()
	{
	}
	UClass* Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_NoRegister()
	{
		return UDBDHostSettingsParamsJoinabilityPreset::StaticClass();
	}
	struct Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDHostSettingsParamsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDHostSettingsParamsJoinabilityPreset.h" },
		{ "ModuleRelativePath", "Public/DBDHostSettingsParamsJoinabilityPreset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDHostSettingsParamsJoinabilityPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::ClassParams = {
		&UDBDHostSettingsParamsJoinabilityPreset::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDHostSettingsParamsJoinabilityPreset, 1251338100);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDHostSettingsParamsJoinabilityPreset>()
	{
		return UDBDHostSettingsParamsJoinabilityPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDHostSettingsParamsJoinabilityPreset(Z_Construct_UClass_UDBDHostSettingsParamsJoinabilityPreset, &UDBDHostSettingsParamsJoinabilityPreset::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDHostSettingsParamsJoinabilityPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDHostSettingsParamsJoinabilityPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
