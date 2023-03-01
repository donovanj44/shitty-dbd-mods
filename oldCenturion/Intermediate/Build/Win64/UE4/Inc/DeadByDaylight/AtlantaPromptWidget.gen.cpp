// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaPromptWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPromptWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPromptWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPromptWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPromptType();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UAtlantaPromptWidget::StaticRegisterNativesUAtlantaPromptWidget()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaPromptWidget_NoRegister()
	{
		return UAtlantaPromptWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaPromptWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AudioCues;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioCues_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioCues_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioCues_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromptLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PromptLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaPromptWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaPromptWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaPromptWidget.h" },
		{ "ModuleRelativePath", "Public/AtlantaPromptWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_MetaData[] = {
		{ "Category", "AtlantaPromptWidget" },
		{ "ModuleRelativePath", "Public/AtlantaPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues = { "AudioCues", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaPromptWidget, AudioCues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_Key_KeyProp = { "AudioCues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EPromptType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_ValueProp = { "AudioCues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_PromptLabel_MetaData[] = {
		{ "Category", "AtlantaPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_PromptLabel = { "PromptLabel", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaPromptWidget, PromptLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_PromptLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_PromptLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaPromptWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_AudioCues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaPromptWidget_Statics::NewProp_PromptLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaPromptWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaPromptWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaPromptWidget_Statics::ClassParams = {
		&UAtlantaPromptWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaPromptWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPromptWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaPromptWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPromptWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaPromptWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaPromptWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaPromptWidget, 1650106249);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaPromptWidget>()
	{
		return UAtlantaPromptWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaPromptWidget(Z_Construct_UClass_UAtlantaPromptWidget, &UAtlantaPromptWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaPromptWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaPromptWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
