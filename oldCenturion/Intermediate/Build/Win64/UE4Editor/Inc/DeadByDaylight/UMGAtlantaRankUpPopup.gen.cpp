// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaRankUpPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaRankUpPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRankUpPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRankUpPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRewardWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankBanner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaRankUpPopup::execPlayRankUpBannerAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRankUpBannerAnimation();
		P_NATIVE_END;
	}
	void UUMGAtlantaRankUpPopup::StaticRegisterNativesUUMGAtlantaRankUpPopup()
	{
		UClass* Class = UUMGAtlantaRankUpPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayRankUpBannerAnimation", &UUMGAtlantaRankUpPopup::execPlayRankUpBannerAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRankUpPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRankUpPopup, nullptr, "PlayRankUpBannerAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaRankUpPopup_NoRegister()
	{
		return UUMGAtlantaRankUpPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_RewardWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankBanner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaRankUpPopup_PlayRankUpBannerAnimation, "PlayRankUpBannerAnimation" }, // 2229977770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaRankUpPopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRankUpPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardWidgetClass_MetaData[] = {
		{ "Category", "UMGAtlantaRankUpPopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRankUpPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardWidgetClass = { "RewardWidgetClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRankUpPopup, RewardWidgetClass), Z_Construct_UClass_UUMGRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsSection_MetaData[] = {
		{ "Category", "UMGAtlantaRankUpPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRankUpPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsSection = { "RewardsSection", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRankUpPopup, RewardsSection), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsContainer_MetaData[] = {
		{ "Category", "UMGAtlantaRankUpPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRankUpPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsContainer = { "RewardsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRankUpPopup, RewardsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RankBanner_MetaData[] = {
		{ "Category", "UMGAtlantaRankUpPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRankUpPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RankBanner = { "RankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRankUpPopup, RankBanner), Z_Construct_UClass_UUMGTallyRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RankBanner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RewardsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::NewProp_RankBanner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaRankUpPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::ClassParams = {
		&UUMGAtlantaRankUpPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaRankUpPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaRankUpPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaRankUpPopup, 457261298);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaRankUpPopup>()
	{
		return UUMGAtlantaRankUpPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaRankUpPopup(Z_Construct_UClass_UUMGAtlantaRankUpPopup, &UUMGAtlantaRankUpPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaRankUpPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaRankUpPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
