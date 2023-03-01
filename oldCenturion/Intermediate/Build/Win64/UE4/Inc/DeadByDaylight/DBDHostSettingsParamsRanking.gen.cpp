// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDHostSettingsParamsRanking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDHostSettingsParamsRanking() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsRanking_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsRanking();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDHostSettingsParamsRanking::StaticRegisterNativesUDBDHostSettingsParamsRanking()
	{
	}
	UClass* Z_Construct_UClass_UDBDHostSettingsParamsRanking_NoRegister()
	{
		return UDBDHostSettingsParamsRanking::StaticClass();
	}
	struct Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDHostSettingsParamsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDHostSettingsParamsRanking.h" },
		{ "ModuleRelativePath", "Public/DBDHostSettingsParamsRanking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDHostSettingsParamsRanking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::ClassParams = {
		&UDBDHostSettingsParamsRanking::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDHostSettingsParamsRanking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDHostSettingsParamsRanking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDHostSettingsParamsRanking, 3937134004);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDHostSettingsParamsRanking>()
	{
		return UDBDHostSettingsParamsRanking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDHostSettingsParamsRanking(Z_Construct_UClass_UDBDHostSettingsParamsRanking, &UDBDHostSettingsParamsRanking::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDHostSettingsParamsRanking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDHostSettingsParamsRanking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
