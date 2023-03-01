// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AnalyticsDelegates.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsDelegates() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAnalyticsDelegates_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UAnalyticsDelegates();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
	void UAnalyticsDelegates::StaticRegisterNativesUAnalyticsDelegates()
	{
	}
	UClass* Z_Construct_UClass_UAnalyticsDelegates_NoRegister()
	{
		return UAnalyticsDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsDelegates_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnalyticsDelegates.h" },
		{ "ModuleRelativePath", "Public/AnalyticsDelegates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsDelegates>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsDelegates_Statics::ClassParams = {
		&UAnalyticsDelegates::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsDelegates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsDelegates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsDelegates()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnalyticsDelegates_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnalyticsDelegates, 953386975);
	template<> DBDANALYTICS_API UClass* StaticClass<UAnalyticsDelegates>()
	{
		return UAnalyticsDelegates::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnalyticsDelegates(Z_Construct_UClass_UAnalyticsDelegates, &UAnalyticsDelegates::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UAnalyticsDelegates"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsDelegates);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
