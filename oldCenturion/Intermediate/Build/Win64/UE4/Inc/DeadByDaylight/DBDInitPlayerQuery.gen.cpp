// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDInitPlayerQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDInitPlayerQuery() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInitPlayerQuery_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDInitPlayerQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDInitPlayerQuery::StaticRegisterNativesUDBDInitPlayerQuery()
	{
	}
	UClass* Z_Construct_UClass_UDBDInitPlayerQuery_NoRegister()
	{
		return UDBDInitPlayerQuery::StaticClass();
	}
	struct Z_Construct_UClass_UDBDInitPlayerQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDInitPlayerQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDInitPlayerQuery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDInitPlayerQuery.h" },
		{ "ModuleRelativePath", "Public/DBDInitPlayerQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDInitPlayerQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDInitPlayerQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDInitPlayerQuery_Statics::ClassParams = {
		&UDBDInitPlayerQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDInitPlayerQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDInitPlayerQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDInitPlayerQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDInitPlayerQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDInitPlayerQuery, 1938590353);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDInitPlayerQuery>()
	{
		return UDBDInitPlayerQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDInitPlayerQuery(Z_Construct_UClass_UDBDInitPlayerQuery, &UDBDInitPlayerQuery::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDInitPlayerQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDInitPlayerQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
