// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/VisualLoggerExt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerExt() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UVisualLoggerExt_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UVisualLoggerExt();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UVisualLoggerExt::StaticRegisterNativesUVisualLoggerExt()
	{
	}
	UClass* Z_Construct_UClass_UVisualLoggerExt_NoRegister()
	{
		return UVisualLoggerExt::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerExt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerExt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerExt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisualLoggerExt.h" },
		{ "ModuleRelativePath", "Public/VisualLoggerExt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerExt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerExt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerExt_Statics::ClassParams = {
		&UVisualLoggerExt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerExt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerExt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerExt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisualLoggerExt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisualLoggerExt, 2093509431);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UVisualLoggerExt>()
	{
		return UVisualLoggerExt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerExt(Z_Construct_UClass_UVisualLoggerExt, &UVisualLoggerExt::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UVisualLoggerExt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerExt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
