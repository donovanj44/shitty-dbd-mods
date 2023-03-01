// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDHostSettingsParamsSessionInvalid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDHostSettingsParamsSessionInvalid() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDHostSettingsParamsSessionInvalid::StaticRegisterNativesUDBDHostSettingsParamsSessionInvalid()
	{
	}
	UClass* Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_NoRegister()
	{
		return UDBDHostSettingsParamsSessionInvalid::StaticClass();
	}
	struct Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDHostSettingsParamsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDHostSettingsParamsSessionInvalid.h" },
		{ "ModuleRelativePath", "Public/DBDHostSettingsParamsSessionInvalid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDHostSettingsParamsSessionInvalid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::ClassParams = {
		&UDBDHostSettingsParamsSessionInvalid::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDHostSettingsParamsSessionInvalid, 565161041);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDHostSettingsParamsSessionInvalid>()
	{
		return UDBDHostSettingsParamsSessionInvalid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDHostSettingsParamsSessionInvalid(Z_Construct_UClass_UDBDHostSettingsParamsSessionInvalid, &UDBDHostSettingsParamsSessionInvalid::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDHostSettingsParamsSessionInvalid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDHostSettingsParamsSessionInvalid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
