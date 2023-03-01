// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AccountLinkPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccountLinkPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAccountLinkPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAccountLinkPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAccountLinkPopupScreen::StaticRegisterNativesUAccountLinkPopupScreen()
	{
	}
	UClass* Z_Construct_UClass_UAccountLinkPopupScreen_NoRegister()
	{
		return UAccountLinkPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UAccountLinkPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccountLinkPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccountLinkPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AccountLinkPopupScreen.h" },
		{ "ModuleRelativePath", "Public/AccountLinkPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccountLinkPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccountLinkPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccountLinkPopupScreen_Statics::ClassParams = {
		&UAccountLinkPopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAccountLinkPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccountLinkPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccountLinkPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccountLinkPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccountLinkPopupScreen, 3256105503);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAccountLinkPopupScreen>()
	{
		return UAccountLinkPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccountLinkPopupScreen(Z_Construct_UClass_UAccountLinkPopupScreen, &UAccountLinkPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAccountLinkPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccountLinkPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
