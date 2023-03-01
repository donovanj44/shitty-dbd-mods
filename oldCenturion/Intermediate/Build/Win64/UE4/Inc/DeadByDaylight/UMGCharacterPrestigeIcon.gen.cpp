// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterPrestigeIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterPrestigeIcon() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeIcon_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeIcon();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UUMGCharacterPrestigeIcon::StaticRegisterNativesUUMGCharacterPrestigeIcon()
	{
	}
	UClass* Z_Construct_UClass_UUMGCharacterPrestigeIcon_NoRegister()
	{
		return UUMGCharacterPrestigeIcon::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterPrestigeIcon.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeIcon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::NewProp_PrestigeImage_MetaData[] = {
		{ "Category", "UMGCharacterPrestigeIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::NewProp_PrestigeImage = { "PrestigeImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPrestigeIcon, PrestigeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::NewProp_PrestigeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::NewProp_PrestigeImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::NewProp_PrestigeImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterPrestigeIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::ClassParams = {
		&UUMGCharacterPrestigeIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterPrestigeIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterPrestigeIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterPrestigeIcon, 2374494548);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterPrestigeIcon>()
	{
		return UUMGCharacterPrestigeIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterPrestigeIcon(Z_Construct_UClass_UUMGCharacterPrestigeIcon, &UUMGCharacterPrestigeIcon::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterPrestigeIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterPrestigeIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
