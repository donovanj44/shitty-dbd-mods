// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GlassCollectionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlassCollectionSubsystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlassCollectionSubsystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGlassCollectionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UGlassCollectionSubsystem::StaticRegisterNativesUGlassCollectionSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UGlassCollectionSubsystem_NoRegister()
	{
		return UGlassCollectionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGlassCollectionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlassCollectionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlassCollectionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GlassCollectionSubsystem.h" },
		{ "ModuleRelativePath", "Public/GlassCollectionSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlassCollectionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlassCollectionSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlassCollectionSubsystem_Statics::ClassParams = {
		&UGlassCollectionSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGlassCollectionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlassCollectionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlassCollectionSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlassCollectionSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlassCollectionSubsystem, 746446019);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGlassCollectionSubsystem>()
	{
		return UGlassCollectionSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlassCollectionSubsystem(Z_Construct_UClass_UGlassCollectionSubsystem, &UGlassCollectionSubsystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGlassCollectionSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlassCollectionSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
