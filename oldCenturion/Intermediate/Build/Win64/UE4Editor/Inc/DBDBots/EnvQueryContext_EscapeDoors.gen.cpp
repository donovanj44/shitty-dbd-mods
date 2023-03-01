// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EnvQueryContext_EscapeDoors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_EscapeDoors() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_EscapeDoors_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_EscapeDoors();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UEnvQueryContext_EscapeDoors::StaticRegisterNativesUEnvQueryContext_EscapeDoors()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_EscapeDoors_NoRegister()
	{
		return UEnvQueryContext_EscapeDoors::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryContext_EscapeDoors.h" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_EscapeDoors.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_EscapeDoors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::ClassParams = {
		&UEnvQueryContext_EscapeDoors::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_EscapeDoors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_EscapeDoors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_EscapeDoors, 1665952272);
	template<> DBDBOTS_API UClass* StaticClass<UEnvQueryContext_EscapeDoors>()
	{
		return UEnvQueryContext_EscapeDoors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_EscapeDoors(Z_Construct_UClass_UEnvQueryContext_EscapeDoors, &UEnvQueryContext_EscapeDoors::StaticClass, TEXT("/Script/DBDBots"), TEXT("UEnvQueryContext_EscapeDoors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_EscapeDoors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
