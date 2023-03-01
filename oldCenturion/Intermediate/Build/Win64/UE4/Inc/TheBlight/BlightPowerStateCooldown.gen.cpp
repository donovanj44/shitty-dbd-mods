// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPowerStateCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPowerStateCooldown() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateCooldown_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateCooldown();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerState();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightPowerStateCooldown::StaticRegisterNativesUBlightPowerStateCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBlightPowerStateCooldown_NoRegister()
	{
		return UBlightPowerStateCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UBlightPowerStateCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightPowerStateCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlightPowerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightPowerStateCooldown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPowerStateCooldown.h" },
		{ "ModuleRelativePath", "Public/BlightPowerStateCooldown.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightPowerStateCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightPowerStateCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightPowerStateCooldown_Statics::ClassParams = {
		&UBlightPowerStateCooldown::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightPowerStateCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightPowerStateCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightPowerStateCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightPowerStateCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightPowerStateCooldown, 2599230530);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightPowerStateCooldown>()
	{
		return UBlightPowerStateCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightPowerStateCooldown(Z_Construct_UClass_UBlightPowerStateCooldown, &UBlightPowerStateCooldown::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightPowerStateCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightPowerStateCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
