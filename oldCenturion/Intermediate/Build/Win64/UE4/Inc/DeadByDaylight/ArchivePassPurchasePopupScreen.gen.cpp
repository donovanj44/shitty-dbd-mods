// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivePassPurchasePopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivePassPurchasePopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivePassPurchasePopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivePassPurchasePopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UArchivePassPurchasePopupScreen::StaticRegisterNativesUArchivePassPurchasePopupScreen()
	{
	}
	UClass* Z_Construct_UClass_UArchivePassPurchasePopupScreen_NoRegister()
	{
		return UArchivePassPurchasePopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchivePassPurchasePopupScreen.h" },
		{ "ModuleRelativePath", "Public/ArchivePassPurchasePopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivePassPurchasePopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::ClassParams = {
		&UArchivePassPurchasePopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchivePassPurchasePopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchivePassPurchasePopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchivePassPurchasePopupScreen, 304934335);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchivePassPurchasePopupScreen>()
	{
		return UArchivePassPurchasePopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchivePassPurchasePopupScreen(Z_Construct_UClass_UArchivePassPurchasePopupScreen, &UArchivePassPurchasePopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchivePassPurchasePopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivePassPurchasePopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
