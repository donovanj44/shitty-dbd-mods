// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CrowdChoiceTugOfWarPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdChoiceTugOfWarPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCrowdChoiceTugOfWarPopupScreen::StaticRegisterNativesUCrowdChoiceTugOfWarPopupScreen()
	{
	}
	UClass* Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_NoRegister()
	{
		return UCrowdChoiceTugOfWarPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrowdChoiceTugOfWarPopupScreen.h" },
		{ "ModuleRelativePath", "Public/CrowdChoiceTugOfWarPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdChoiceTugOfWarPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::ClassParams = {
		&UCrowdChoiceTugOfWarPopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdChoiceTugOfWarPopupScreen, 2162801764);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCrowdChoiceTugOfWarPopupScreen>()
	{
		return UCrowdChoiceTugOfWarPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdChoiceTugOfWarPopupScreen(Z_Construct_UClass_UCrowdChoiceTugOfWarPopupScreen, &UCrowdChoiceTugOfWarPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCrowdChoiceTugOfWarPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdChoiceTugOfWarPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
