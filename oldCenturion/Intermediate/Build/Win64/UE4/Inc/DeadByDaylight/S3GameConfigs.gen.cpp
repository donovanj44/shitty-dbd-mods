// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/S3GameConfigs.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS3GameConfigs() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_US3GameConfigs_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_US3GameConfigs();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void US3GameConfigs::StaticRegisterNativesUS3GameConfigs()
	{
	}
	UClass* Z_Construct_UClass_US3GameConfigs_NoRegister()
	{
		return US3GameConfigs::StaticClass();
	}
	struct Z_Construct_UClass_US3GameConfigs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US3GameConfigs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US3GameConfigs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S3GameConfigs.h" },
		{ "ModuleRelativePath", "Public/S3GameConfigs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_US3GameConfigs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US3GameConfigs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US3GameConfigs_Statics::ClassParams = {
		&US3GameConfigs::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_US3GameConfigs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US3GameConfigs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US3GameConfigs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US3GameConfigs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US3GameConfigs, 425487758);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<US3GameConfigs>()
	{
		return US3GameConfigs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US3GameConfigs(Z_Construct_UClass_US3GameConfigs, &US3GameConfigs::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("US3GameConfigs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US3GameConfigs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
