// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputUtilities/Public/AxisFlick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisFlick() {}
// Cross Module References
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UAxisFlick_NoRegister();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UAxisFlick();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InputUtilities();
// End Cross Module References
	void UAxisFlick::StaticRegisterNativesUAxisFlick()
	{
	}
	UClass* Z_Construct_UClass_UAxisFlick_NoRegister()
	{
		return UAxisFlick::StaticClass();
	}
	struct Z_Construct_UClass_UAxisFlick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisFlick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisFlick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AxisFlick.h" },
		{ "ModuleRelativePath", "Public/AxisFlick.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisFlick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisFlick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisFlick_Statics::ClassParams = {
		&UAxisFlick::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAxisFlick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisFlick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisFlick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisFlick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisFlick, 2475826851);
	template<> INPUTUTILITIES_API UClass* StaticClass<UAxisFlick>()
	{
		return UAxisFlick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisFlick(Z_Construct_UClass_UAxisFlick, &UAxisFlick::StaticClass, TEXT("/Script/InputUtilities"), TEXT("UAxisFlick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisFlick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
