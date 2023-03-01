// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ProcessingPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessingPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UProcessingPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UProcessingPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UProcessingPopupScreen::StaticRegisterNativesUProcessingPopupScreen()
	{
	}
	UClass* Z_Construct_UClass_UProcessingPopupScreen_NoRegister()
	{
		return UProcessingPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UProcessingPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessingPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessingPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProcessingPopupScreen.h" },
		{ "ModuleRelativePath", "Public/ProcessingPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessingPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessingPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProcessingPopupScreen_Statics::ClassParams = {
		&UProcessingPopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProcessingPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessingPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessingPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProcessingPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcessingPopupScreen, 225912554);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UProcessingPopupScreen>()
	{
		return UProcessingPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcessingPopupScreen(Z_Construct_UClass_UProcessingPopupScreen, &UProcessingPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UProcessingPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessingPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
