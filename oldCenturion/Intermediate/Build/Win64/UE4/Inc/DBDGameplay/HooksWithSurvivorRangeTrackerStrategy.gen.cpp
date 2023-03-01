// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/HooksWithSurvivorRangeTrackerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHooksWithSurvivorRangeTrackerStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UHooksWithSurvivorRangeTrackerStrategy::StaticRegisterNativesUHooksWithSurvivorRangeTrackerStrategy()
	{
	}
	UClass* Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_NoRegister()
	{
		return UHooksWithSurvivorRangeTrackerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URangeToActorsTrackerStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HooksWithSurvivorRangeTrackerStrategy.h" },
		{ "ModuleRelativePath", "Public/HooksWithSurvivorRangeTrackerStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHooksWithSurvivorRangeTrackerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::ClassParams = {
		&UHooksWithSurvivorRangeTrackerStrategy::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHooksWithSurvivorRangeTrackerStrategy, 1074737620);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UHooksWithSurvivorRangeTrackerStrategy>()
	{
		return UHooksWithSurvivorRangeTrackerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHooksWithSurvivorRangeTrackerStrategy(Z_Construct_UClass_UHooksWithSurvivorRangeTrackerStrategy, &UHooksWithSurvivorRangeTrackerStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UHooksWithSurvivorRangeTrackerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHooksWithSurvivorRangeTrackerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
