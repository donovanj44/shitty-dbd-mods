// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EnvQueryContext_PinActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_PinActor() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_PinActor_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UEnvQueryContext_PinActor();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UEnvQueryContext_PinActor::StaticRegisterNativesUEnvQueryContext_PinActor()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_PinActor_NoRegister()
	{
		return UEnvQueryContext_PinActor::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_PinActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryContext_PinActor.h" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_PinActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_PinActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::ClassParams = {
		&UEnvQueryContext_PinActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_PinActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_PinActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_PinActor, 3215378606);
	template<> DBDBOTS_API UClass* StaticClass<UEnvQueryContext_PinActor>()
	{
		return UEnvQueryContext_PinActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_PinActor(Z_Construct_UClass_UEnvQueryContext_PinActor, &UEnvQueryContext_PinActor::StaticClass, TEXT("/Script/DBDBots"), TEXT("UEnvQueryContext_PinActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_PinActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
