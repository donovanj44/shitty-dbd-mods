// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaTutorialScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaTutorialScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaTutorialScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaTutorialScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGAtlantaTutorialScreen::StaticRegisterNativesUUMGAtlantaTutorialScreen()
	{
	}
	UClass* Z_Construct_UClass_UUMGAtlantaTutorialScreen_NoRegister()
	{
		return UUMGAtlantaTutorialScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaTutorialScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaTutorialScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaTutorialScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::ClassParams = {
		&UUMGAtlantaTutorialScreen::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaTutorialScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaTutorialScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaTutorialScreen, 4154574976);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaTutorialScreen>()
	{
		return UUMGAtlantaTutorialScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaTutorialScreen(Z_Construct_UClass_UUMGAtlantaTutorialScreen, &UUMGAtlantaTutorialScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaTutorialScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaTutorialScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
