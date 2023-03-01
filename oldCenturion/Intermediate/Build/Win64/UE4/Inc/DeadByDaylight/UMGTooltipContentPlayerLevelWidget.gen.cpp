// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTooltipContentPlayerLevelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTooltipContentPlayerLevelWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLevelBannerWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTooltipContentPlayerLevelWidget::execSetInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerPrestige);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentExperience);
		P_GET_PROPERTY(FIntProperty,Z_Param_nextLevelExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfo(Z_Param_playerLevel,Z_Param_playerPrestige,Z_Param_currentExperience,Z_Param_nextLevelExperience);
		P_NATIVE_END;
	}
	void UUMGTooltipContentPlayerLevelWidget::StaticRegisterNativesUUMGTooltipContentPlayerLevelWidget()
	{
		UClass* Class = UUMGTooltipContentPlayerLevelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInfo", &UUMGTooltipContentPlayerLevelWidget::execSetInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics
	{
		struct UMGTooltipContentPlayerLevelWidget_eventSetInfo_Parms
		{
			int32 playerLevel;
			int32 playerPrestige;
			int32 currentExperience;
			int32 nextLevelExperience;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextLevelExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nextLevelExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPrestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerPrestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_nextLevelExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_nextLevelExperience = { "nextLevelExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTooltipContentPlayerLevelWidget_eventSetInfo_Parms, nextLevelExperience), METADATA_PARAMS(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_nextLevelExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_nextLevelExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_currentExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_currentExperience = { "currentExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTooltipContentPlayerLevelWidget_eventSetInfo_Parms, currentExperience), METADATA_PARAMS(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_currentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_currentExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerPrestige_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerPrestige = { "playerPrestige", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTooltipContentPlayerLevelWidget_eventSetInfo_Parms, playerPrestige), METADATA_PARAMS(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerPrestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerPrestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerLevel = { "playerLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTooltipContentPlayerLevelWidget_eventSetInfo_Parms, playerLevel), METADATA_PARAMS(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_nextLevelExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_currentExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerPrestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::NewProp_playerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTooltipContentPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget, nullptr, "SetInfo", nullptr, nullptr, sizeof(UMGTooltipContentPlayerLevelWidget_eventSetInfo_Parms), Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_NoRegister()
	{
		return UUMGTooltipContentPlayerLevelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceToNextLevelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExperienceToNextLevelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelExperienceRichText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelExperienceRichText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayerLevelText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTooltipContentPlayerLevelWidget_SetInfo, "SetInfo" }, // 1978646357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTooltipContentPlayerLevelWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTooltipContentPlayerLevelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_ExperienceToNextLevelText_MetaData[] = {
		{ "Category", "UMGTooltipContentPlayerLevelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTooltipContentPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_ExperienceToNextLevelText = { "ExperienceToNextLevelText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTooltipContentPlayerLevelWidget, ExperienceToNextLevelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_ExperienceToNextLevelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_ExperienceToNextLevelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelExperienceRichText_MetaData[] = {
		{ "Category", "UMGTooltipContentPlayerLevelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTooltipContentPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelExperienceRichText = { "LevelExperienceRichText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTooltipContentPlayerLevelWidget, LevelExperienceRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelExperienceRichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelExperienceRichText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelBanner_MetaData[] = {
		{ "Category", "UMGTooltipContentPlayerLevelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTooltipContentPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelBanner = { "LevelBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTooltipContentPlayerLevelWidget, LevelBanner), Z_Construct_UClass_UUMGLevelBannerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_PlayerLevelText_MetaData[] = {
		{ "Category", "UMGTooltipContentPlayerLevelWidget" },
		{ "ModuleRelativePath", "Public/UMGTooltipContentPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_PlayerLevelText = { "PlayerLevelText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTooltipContentPlayerLevelWidget, PlayerLevelText), METADATA_PARAMS(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_PlayerLevelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_PlayerLevelText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_ExperienceToNextLevelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelExperienceRichText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_LevelBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::NewProp_PlayerLevelText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTooltipContentPlayerLevelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::ClassParams = {
		&UUMGTooltipContentPlayerLevelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTooltipContentPlayerLevelWidget, 3484931578);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTooltipContentPlayerLevelWidget>()
	{
		return UUMGTooltipContentPlayerLevelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTooltipContentPlayerLevelWidget(Z_Construct_UClass_UUMGTooltipContentPlayerLevelWidget, &UUMGTooltipContentPlayerLevelWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTooltipContentPlayerLevelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTooltipContentPlayerLevelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
