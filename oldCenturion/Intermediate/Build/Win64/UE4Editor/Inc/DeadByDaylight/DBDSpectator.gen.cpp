// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDSpectator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDSpectator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDSpectator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDSpectator();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADBDSpectator::StaticRegisterNativesADBDSpectator()
	{
	}
	UClass* Z_Construct_UClass_ADBDSpectator_NoRegister()
	{
		return ADBDSpectator::StaticClass();
	}
	struct Z_Construct_UClass_ADBDSpectator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDSpectator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDSpectator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DBDSpectator.h" },
		{ "ModuleRelativePath", "Public/DBDSpectator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDSpectator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDSpectator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDSpectator_Statics::ClassParams = {
		&ADBDSpectator::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDSpectator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDSpectator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDSpectator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDSpectator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDSpectator, 3478946851);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDSpectator>()
	{
		return ADBDSpectator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDSpectator(Z_Construct_UClass_ADBDSpectator, &ADBDSpectator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDSpectator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDSpectator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
