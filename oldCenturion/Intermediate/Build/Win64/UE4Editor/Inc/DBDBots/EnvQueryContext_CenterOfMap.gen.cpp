// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EnvQueryContext_CenterOfMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_CenterOfMap() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_CenterOfMap_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_CenterOfMap();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UEnvQueryContext_CenterOfMap::StaticRegisterNativesUEnvQueryContext_CenterOfMap()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_CenterOfMap_NoRegister()
	{
		return UEnvQueryContext_CenterOfMap::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryContext_CenterOfMap.h" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_CenterOfMap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_CenterOfMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::ClassParams = {
		&UEnvQueryContext_CenterOfMap::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_CenterOfMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_CenterOfMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_CenterOfMap, 2866278813);
	template<> DBDBOTS_API UClass* StaticClass<UEnvQueryContext_CenterOfMap>()
	{
		return UEnvQueryContext_CenterOfMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_CenterOfMap(Z_Construct_UClass_UEnvQueryContext_CenterOfMap, &UEnvQueryContext_CenterOfMap::StaticClass, TEXT("/Script/DBDBots"), TEXT("UEnvQueryContext_CenterOfMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_CenterOfMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
