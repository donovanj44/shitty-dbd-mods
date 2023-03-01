// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaDailyRewardsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaDailyRewardsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPopupButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaDailyRewardsScreen::execHandleContinueButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleContinueButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaDailyRewardsScreen::execHandleCurrentActiveDailyRewardStateChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dailyRewardIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_dailyRewardNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCurrentActiveDailyRewardStateChanged(Z_Param_dailyRewardIndex,Z_Param_dailyRewardNewState);
		P_NATIVE_END;
	}
	void UUMGAtlantaDailyRewardsScreen::StaticRegisterNativesUUMGAtlantaDailyRewardsScreen()
	{
		UClass* Class = UUMGAtlantaDailyRewardsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleContinueButtonClick", &UUMGAtlantaDailyRewardsScreen::execHandleContinueButtonClick },
			{ "HandleCurrentActiveDailyRewardStateChanged", &UUMGAtlantaDailyRewardsScreen::execHandleCurrentActiveDailyRewardStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen, nullptr, "HandleContinueButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics
	{
		struct UMGAtlantaDailyRewardsScreen_eventHandleCurrentActiveDailyRewardStateChanged_Parms
		{
			int32 dailyRewardIndex;
			int32 dailyRewardNewState;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dailyRewardNewState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dailyRewardIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::NewProp_dailyRewardNewState = { "dailyRewardNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaDailyRewardsScreen_eventHandleCurrentActiveDailyRewardStateChanged_Parms, dailyRewardNewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::NewProp_dailyRewardIndex = { "dailyRewardIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaDailyRewardsScreen_eventHandleCurrentActiveDailyRewardStateChanged_Parms, dailyRewardIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::NewProp_dailyRewardNewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::NewProp_dailyRewardIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen, nullptr, "HandleCurrentActiveDailyRewardStateChanged", nullptr, nullptr, sizeof(UMGAtlantaDailyRewardsScreen_eventHandleCurrentActiveDailyRewardStateChanged_Parms), Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_NoRegister()
	{
		return UUMGAtlantaDailyRewardsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WarningColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTimeTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemainingTimeTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinueButtonPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContinueButtonPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRewardWidgetsGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRewardWidgetsGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleContinueButtonClick, "HandleContinueButtonClick" }, // 88552785
		{ &Z_Construct_UFunction_UUMGAtlantaDailyRewardsScreen_HandleCurrentActiveDailyRewardStateChanged, "HandleCurrentActiveDailyRewardStateChanged" }, // 4132929915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaDailyRewardsScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_WarningColor_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_WarningColor = { "WarningColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsScreen, WarningColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_WarningColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_WarningColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_NormalColor_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_NormalColor = { "NormalColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsScreen, NormalColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_NormalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_NormalColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_RemainingTimeTextBlock_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_RemainingTimeTextBlock = { "RemainingTimeTextBlock", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsScreen, RemainingTimeTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_RemainingTimeTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_RemainingTimeTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButton_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsScreen, ContinueButton), Z_Construct_UClass_UUMGPopupButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButtonPanel_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButtonPanel = { "ContinueButtonPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsScreen, ContinueButtonPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButtonPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButtonPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_DailyRewardWidgetsGrid_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_DailyRewardWidgetsGrid = { "DailyRewardWidgetsGrid", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsScreen, DailyRewardWidgetsGrid), Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_DailyRewardWidgetsGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_DailyRewardWidgetsGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_WarningColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_NormalColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_RemainingTimeTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_ContinueButtonPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::NewProp_DailyRewardWidgetsGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaDailyRewardsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::ClassParams = {
		&UUMGAtlantaDailyRewardsScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaDailyRewardsScreen, 4243168491);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaDailyRewardsScreen>()
	{
		return UUMGAtlantaDailyRewardsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaDailyRewardsScreen(Z_Construct_UClass_UUMGAtlantaDailyRewardsScreen, &UUMGAtlantaDailyRewardsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaDailyRewardsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaDailyRewardsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
