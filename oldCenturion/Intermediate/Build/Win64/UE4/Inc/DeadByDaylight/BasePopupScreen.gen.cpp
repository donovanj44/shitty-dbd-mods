// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BasePopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBasePopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBasePopupScreen::StaticRegisterNativesUBasePopupScreen()
	{
	}
	UClass* Z_Construct_UClass_UBasePopupScreen_NoRegister()
	{
		return UBasePopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UBasePopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePopupScreen.h" },
		{ "ModuleRelativePath", "Public/BasePopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasePopupScreen_Statics::ClassParams = {
		&UBasePopupScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasePopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasePopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasePopupScreen, 518127046);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBasePopupScreen>()
	{
		return UBasePopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasePopupScreen(Z_Construct_UClass_UBasePopupScreen, &UBasePopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBasePopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
