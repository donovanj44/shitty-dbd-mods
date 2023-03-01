// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRoleSelectionScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRoleSelectionScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaRoleSelectionScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaRoleSelectionScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRoleSelectionScreen_NoRegister();
// End Cross Module References
	void UAtlantaRoleSelectionScreen::StaticRegisterNativesUAtlantaRoleSelectionScreen()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaRoleSelectionScreen_NoRegister()
	{
		return UAtlantaRoleSelectionScreen::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__umgScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__umgScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaRoleSelectionScreen.h" },
		{ "ModuleRelativePath", "Public/AtlantaRoleSelectionScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::NewProp__umgScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaRoleSelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::NewProp__umgScreen = { "_umgScreen", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaRoleSelectionScreen, _umgScreen), Z_Construct_UClass_UUMGRoleSelectionScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::NewProp__umgScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::NewProp__umgScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::NewProp__umgScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaRoleSelectionScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::ClassParams = {
		&UAtlantaRoleSelectionScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaRoleSelectionScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaRoleSelectionScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaRoleSelectionScreen, 2955467271);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaRoleSelectionScreen>()
	{
		return UAtlantaRoleSelectionScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaRoleSelectionScreen(Z_Construct_UClass_UAtlantaRoleSelectionScreen, &UAtlantaRoleSelectionScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaRoleSelectionScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaRoleSelectionScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
