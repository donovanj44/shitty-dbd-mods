// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EnvQueryContext_Hooks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Hooks() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_Hooks_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_Hooks();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UEnvQueryContext_Hooks::StaticRegisterNativesUEnvQueryContext_Hooks()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_Hooks_NoRegister()
	{
		return UEnvQueryContext_Hooks::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_Hooks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryContext_Hooks.h" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_Hooks.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_Hooks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::ClassParams = {
		&UEnvQueryContext_Hooks::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_Hooks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_Hooks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_Hooks, 4094787741);
	template<> DBDBOTS_API UClass* StaticClass<UEnvQueryContext_Hooks>()
	{
		return UEnvQueryContext_Hooks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_Hooks(Z_Construct_UClass_UEnvQueryContext_Hooks, &UEnvQueryContext_Hooks::StaticClass, TEXT("/Script/DBDBots"), TEXT("UEnvQueryContext_Hooks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_Hooks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
