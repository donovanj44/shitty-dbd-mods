// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SeasonEndRankRewardsPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeasonEndRankRewardsPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USeasonEndRankRewardsPopupScreen::StaticRegisterNativesUSeasonEndRankRewardsPopupScreen()
	{
	}
	UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_NoRegister()
	{
		return USeasonEndRankRewardsPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SeasonEndRankRewardsPopupScreen.h" },
		{ "ModuleRelativePath", "Public/SeasonEndRankRewardsPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeasonEndRankRewardsPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::ClassParams = {
		&USeasonEndRankRewardsPopupScreen::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeasonEndRankRewardsPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USeasonEndRankRewardsPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeasonEndRankRewardsPopupScreen, 1650574589);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USeasonEndRankRewardsPopupScreen>()
	{
		return USeasonEndRankRewardsPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeasonEndRankRewardsPopupScreen(Z_Construct_UClass_USeasonEndRankRewardsPopupScreen, &USeasonEndRankRewardsPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USeasonEndRankRewardsPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeasonEndRankRewardsPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
