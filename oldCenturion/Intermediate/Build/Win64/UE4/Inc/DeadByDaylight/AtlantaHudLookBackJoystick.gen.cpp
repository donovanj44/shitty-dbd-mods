// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaHudLookBackJoystick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaHudLookBackJoystick() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudLookBackJoystick_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudLookBackJoystick();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
// End Cross Module References
	void UAtlantaHudLookBackJoystick::StaticRegisterNativesUAtlantaHudLookBackJoystick()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaHudLookBackJoystick_NoRegister()
	{
		return UAtlantaHudLookBackJoystick::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialAnimContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialAnimContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaHudLookBackJoystick.h" },
		{ "ModuleRelativePath", "Public/AtlantaHudLookBackJoystick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::NewProp_TutorialAnimContainer_MetaData[] = {
		{ "Category", "AtlantaHudLookBackJoystick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudLookBackJoystick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::NewProp_TutorialAnimContainer = { "TutorialAnimContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudLookBackJoystick, TutorialAnimContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::NewProp_TutorialAnimContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::NewProp_TutorialAnimContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::NewProp_TutorialAnimContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaHudLookBackJoystick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::ClassParams = {
		&UAtlantaHudLookBackJoystick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaHudLookBackJoystick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaHudLookBackJoystick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaHudLookBackJoystick, 89713141);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaHudLookBackJoystick>()
	{
		return UAtlantaHudLookBackJoystick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaHudLookBackJoystick(Z_Construct_UClass_UAtlantaHudLookBackJoystick, &UAtlantaHudLookBackJoystick::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaHudLookBackJoystick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaHudLookBackJoystick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
