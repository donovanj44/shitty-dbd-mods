// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/RetentionRewardsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetentionRewardsSubsystem() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UClass* Z_Construct_UClass_URetentionRewardsSubsystem_NoRegister();
	RETENTIONREWARDSUTILITIES_API UClass* Z_Construct_UClass_URetentionRewardsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
// End Cross Module References
	void URetentionRewardsSubsystem::StaticRegisterNativesURetentionRewardsSubsystem()
	{
	}
	UClass* Z_Construct_UClass_URetentionRewardsSubsystem_NoRegister()
	{
		return URetentionRewardsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_URetentionRewardsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetentionRewardsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetentionRewardsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RetentionRewardsSubsystem.h" },
		{ "ModuleRelativePath", "Public/RetentionRewardsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetentionRewardsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetentionRewardsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URetentionRewardsSubsystem_Statics::ClassParams = {
		&URetentionRewardsSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URetentionRewardsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URetentionRewardsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetentionRewardsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URetentionRewardsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URetentionRewardsSubsystem, 3776265894);
	template<> RETENTIONREWARDSUTILITIES_API UClass* StaticClass<URetentionRewardsSubsystem>()
	{
		return URetentionRewardsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URetentionRewardsSubsystem(Z_Construct_UClass_URetentionRewardsSubsystem, &URetentionRewardsSubsystem::StaticClass, TEXT("/Script/RetentionRewardsUtilities"), TEXT("URetentionRewardsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetentionRewardsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
