// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NewContentPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewContentPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNewContentPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNewContentPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UNewContentPopupScreen::StaticRegisterNativesUNewContentPopupScreen()
	{
	}
	UClass* Z_Construct_UClass_UNewContentPopupScreen_NoRegister()
	{
		return UNewContentPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UNewContentPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewContentPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewContentPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NewContentPopupScreen.h" },
		{ "ModuleRelativePath", "Public/NewContentPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewContentPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewContentPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewContentPopupScreen_Statics::ClassParams = {
		&UNewContentPopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNewContentPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewContentPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewContentPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewContentPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewContentPopupScreen, 413224028);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNewContentPopupScreen>()
	{
		return UNewContentPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewContentPopupScreen(Z_Construct_UClass_UNewContentPopupScreen, &UNewContentPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNewContentPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewContentPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
