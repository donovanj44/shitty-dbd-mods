// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkSoundHudWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkSoundHudWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	void UPerkSoundHudWidget::StaticRegisterNativesUPerkSoundHudWidget()
	{
	}
	UClass* Z_Construct_UClass_UPerkSoundHudWidget_NoRegister()
	{
		return UPerkSoundHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPerkSoundHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkIcons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkSoundHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkSoundHudWidget.h" },
		{ "ModuleRelativePath", "Public/PerkSoundHudWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudWidget_Statics::NewProp_PerkIcons_MetaData[] = {
		{ "Category", "PerkSoundHudWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSoundHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSoundHudWidget_Statics::NewProp_PerkIcons = { "PerkIcons", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudWidget, PerkIcons), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudWidget_Statics::NewProp_PerkIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudWidget_Statics::NewProp_PerkIcons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkSoundHudWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudWidget_Statics::NewProp_PerkIcons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkSoundHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkSoundHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkSoundHudWidget_Statics::ClassParams = {
		&UPerkSoundHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPerkSoundHudWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkSoundHudWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkSoundHudWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkSoundHudWidget, 1297255789);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkSoundHudWidget>()
	{
		return UPerkSoundHudWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkSoundHudWidget(Z_Construct_UClass_UPerkSoundHudWidget, &UPerkSoundHudWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkSoundHudWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkSoundHudWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
