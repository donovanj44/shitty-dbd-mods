// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpecialEventUtilities/Public/RespawnableStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnableStrategy() {}
// Cross Module References
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawnableStrategy_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawnableStrategy();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpecialEventUtilities();
// End Cross Module References
	void URespawnableStrategy::StaticRegisterNativesURespawnableStrategy()
	{
	}
	UClass* Z_Construct_UClass_URespawnableStrategy_NoRegister()
	{
		return URespawnableStrategy::StaticClass();
	}
	struct Z_Construct_UClass_URespawnableStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawnableStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpecialEventUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnableStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RespawnableStrategy.h" },
		{ "ModuleRelativePath", "Public/RespawnableStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawnableStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnableStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawnableStrategy_Statics::ClassParams = {
		&URespawnableStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URespawnableStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnableStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawnableStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawnableStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawnableStrategy, 736652668);
	template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<URespawnableStrategy>()
	{
		return URespawnableStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawnableStrategy(Z_Construct_UClass_URespawnableStrategy, &URespawnableStrategy::StaticClass, TEXT("/Script/SpecialEventUtilities"), TEXT("URespawnableStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnableStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
