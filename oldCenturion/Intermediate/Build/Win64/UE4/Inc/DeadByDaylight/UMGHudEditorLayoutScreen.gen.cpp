// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGHudEditorLayoutScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGHudEditorLayoutScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHudEditorLayoutScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister();
// End Cross Module References
	void UUMGHudEditorLayoutScreen::StaticRegisterNativesUUMGHudEditorLayoutScreen()
	{
	}
	UClass* Z_Construct_UClass_UUMGHudEditorLayoutScreen_NoRegister()
	{
		return UUMGHudEditorLayoutScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__editableWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__editableWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__editableWidgets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGHudEditorLayoutScreen.h" },
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGHudEditorLayoutScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets = { "_editableWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGHudEditorLayoutScreen, _editableWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets_Inner = { "_editableWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGDragWidget_HudEditor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::NewProp__editableWidgets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGHudEditorLayoutScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::ClassParams = {
		&UUMGHudEditorLayoutScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGHudEditorLayoutScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGHudEditorLayoutScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGHudEditorLayoutScreen, 3490147154);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGHudEditorLayoutScreen>()
	{
		return UUMGHudEditorLayoutScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGHudEditorLayoutScreen(Z_Construct_UClass_UUMGHudEditorLayoutScreen, &UUMGHudEditorLayoutScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGHudEditorLayoutScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGHudEditorLayoutScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
