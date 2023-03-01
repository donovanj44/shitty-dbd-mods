// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/ExitGateSwitchesRangeTrackerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExitGateSwitchesRangeTrackerStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UExitGateSwitchesRangeTrackerStrategy::StaticRegisterNativesUExitGateSwitchesRangeTrackerStrategy()
	{
	}
	UClass* Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_NoRegister()
	{
		return UExitGateSwitchesRangeTrackerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URangeToActorsTrackerStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExitGateSwitchesRangeTrackerStrategy.h" },
		{ "ModuleRelativePath", "Public/ExitGateSwitchesRangeTrackerStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExitGateSwitchesRangeTrackerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::ClassParams = {
		&UExitGateSwitchesRangeTrackerStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExitGateSwitchesRangeTrackerStrategy, 3173106018);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UExitGateSwitchesRangeTrackerStrategy>()
	{
		return UExitGateSwitchesRangeTrackerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExitGateSwitchesRangeTrackerStrategy(Z_Construct_UClass_UExitGateSwitchesRangeTrackerStrategy, &UExitGateSwitchesRangeTrackerStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UExitGateSwitchesRangeTrackerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExitGateSwitchesRangeTrackerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
