// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGMenuBaseBanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGMenuBaseBanner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMenuBaseBanner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMenuBaseBanner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseSideMainMenuButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UUMGMenuBaseBanner::StaticRegisterNativesUUMGMenuBaseBanner()
	{
	}
	UClass* Z_Construct_UClass_UUMGMenuBaseBanner_NoRegister()
	{
		return UUMGMenuBaseBanner::StaticClass();
	}
	struct Z_Construct_UClass_UUMGMenuBaseBanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_DefaultBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BannerImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGMenuBaseBanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseSideMainMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMenuBaseBanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGMenuBaseBanner.h" },
		{ "ModuleRelativePath", "Public/UMGMenuBaseBanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_DefaultBanner_MetaData[] = {
		{ "Category", "UMGMenuBaseBanner" },
		{ "ModuleRelativePath", "Public/UMGMenuBaseBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_DefaultBanner = { "DefaultBanner", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMenuBaseBanner, DefaultBanner), Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_DefaultBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_DefaultBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "UMGMenuBaseBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMenuBaseBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMenuBaseBanner, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_BannerImage_MetaData[] = {
		{ "Category", "UMGMenuBaseBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGMenuBaseBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_BannerImage = { "BannerImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGMenuBaseBanner, BannerImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_BannerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_BannerImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGMenuBaseBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_DefaultBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGMenuBaseBanner_Statics::NewProp_BannerImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGMenuBaseBanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGMenuBaseBanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGMenuBaseBanner_Statics::ClassParams = {
		&UUMGMenuBaseBanner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGMenuBaseBanner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMenuBaseBanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGMenuBaseBanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGMenuBaseBanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGMenuBaseBanner, 3556972380);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGMenuBaseBanner>()
	{
		return UUMGMenuBaseBanner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGMenuBaseBanner(Z_Construct_UClass_UUMGMenuBaseBanner, &UUMGMenuBaseBanner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGMenuBaseBanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGMenuBaseBanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
