// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateReady.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateReady() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateReady_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateReady();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightPowerStateReady::StaticRegisterNativesUBlightPowerStateReady()
	{
	}
	UClass* Z_Construct_UClass_UBlightPowerStateReady_NoRegister()
	{
		return UBlightPowerStateReady::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateReady_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateReady_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlightPowerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateReady_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPowerStateReady.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateReady.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateReady_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateReady>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateReady_Statics::ClassParams = {
		&UBlightPowerStateReady::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateReady_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateReady_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateReady()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateReady_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateReady, 659389867);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateReady>()
	{
		return UBlightPowerStateReady::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateReady(Z_Construct_UClass_UBlightPowerStateReady, &UBlightPowerStateReady::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateReady"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateReady);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
