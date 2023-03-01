// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EnvQueryContext_TerrorRadius.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_TerrorRadius() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_TerrorRadius_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_TerrorRadius();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UEnvQueryContext_TerrorRadius::StaticRegisterNativesUEnvQueryContext_TerrorRadius()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_TerrorRadius_NoRegister()
	{
		return UEnvQueryContext_TerrorRadius::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryContext_TerrorRadius.h" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_TerrorRadius.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_TerrorRadius>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::ClassParams = {
		&UEnvQueryContext_TerrorRadius::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_TerrorRadius()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_TerrorRadius_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_TerrorRadius, 3759119199);
	template<> DBDBOTS_API UClass* StaticClass<UEnvQueryContext_TerrorRadius>()
	{
		return UEnvQueryContext_TerrorRadius::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_TerrorRadius(Z_Construct_UClass_UEnvQueryContext_TerrorRadius, &UEnvQueryContext_TerrorRadius::StaticClass, TEXT("/Script/DBDBots"), TEXT("UEnvQueryContext_TerrorRadius"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_TerrorRadius);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
