// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBankAndPlayerInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBankAndPlayerInfoWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRankBanner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLevelBannerWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSelectedCharacterWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnCancelPartyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelPartyButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnMainMenuSubscriptionClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuSubscriptionClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnPrestigeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrestigeButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnPurchaseAuricCellsButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchaseAuricCellsButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnTooltipTriggeredByCurrency)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTooltipTriggeredByCurrency(Z_Param_Out_tooltipPressedData,ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnTooltipTriggeredByLevelBannerWidget)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTooltipTriggeredByLevelBannerWidget(Z_Param_Out_tooltipPressedData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankAndPlayerInfoWidget::execOnTooltipTriggeredByRankBanner)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTooltipTriggeredByRankBanner(Z_Param_Out_tooltipPressedData);
		P_NATIVE_END;
	}
	static FName NAME_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP = FName(TEXT("SetPlayerLevelBP"));
	void UUMGBankAndPlayerInfoWidget::SetPlayerLevelBP(int32 level, int32 devotion, int32 currentLevelXp, int32 totalLevelXp, bool isSlasher, bool playUpdateAnim)
	{
		UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms Parms;
		Parms.level=level;
		Parms.devotion=devotion;
		Parms.currentLevelXp=currentLevelXp;
		Parms.totalLevelXp=totalLevelXp;
		Parms.isSlasher=isSlasher ? true : false;
		Parms.playUpdateAnim=playUpdateAnim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP),&Parms);
	}
	void UUMGBankAndPlayerInfoWidget::StaticRegisterNativesUUMGBankAndPlayerInfoWidget()
	{
		UClass* Class = UUMGBankAndPlayerInfoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelPartyButtonClicked", &UUMGBankAndPlayerInfoWidget::execOnCancelPartyButtonClicked },
			{ "OnMainMenuSubscriptionClicked", &UUMGBankAndPlayerInfoWidget::execOnMainMenuSubscriptionClicked },
			{ "OnPrestigeButtonClicked", &UUMGBankAndPlayerInfoWidget::execOnPrestigeButtonClicked },
			{ "OnPurchaseAuricCellsButtonClicked", &UUMGBankAndPlayerInfoWidget::execOnPurchaseAuricCellsButtonClicked },
			{ "OnTooltipTriggeredByCurrency", &UUMGBankAndPlayerInfoWidget::execOnTooltipTriggeredByCurrency },
			{ "OnTooltipTriggeredByLevelBannerWidget", &UUMGBankAndPlayerInfoWidget::execOnTooltipTriggeredByLevelBannerWidget },
			{ "OnTooltipTriggeredByRankBanner", &UUMGBankAndPlayerInfoWidget::execOnTooltipTriggeredByRankBanner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnCancelPartyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnMainMenuSubscriptionClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnPrestigeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnPurchaseAuricCellsButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics
	{
		struct UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByCurrency_Parms
		{
			FTooltipPressedData tooltipPressedData;
			ECurrencyType currencyType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipPressedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipPressedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByCurrency_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByCurrency_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnTooltipTriggeredByCurrency", nullptr, nullptr, sizeof(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByCurrency_Parms), Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics
	{
		struct UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByLevelBannerWidget_Parms
		{
			FTooltipPressedData tooltipPressedData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipPressedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipPressedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByLevelBannerWidget_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnTooltipTriggeredByLevelBannerWidget", nullptr, nullptr, sizeof(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByLevelBannerWidget_Parms), Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics
	{
		struct UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByRankBanner_Parms
		{
			FTooltipPressedData tooltipPressedData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipPressedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipPressedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByRankBanner_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "OnTooltipTriggeredByRankBanner", nullptr, nullptr, sizeof(UMGBankAndPlayerInfoWidget_eventOnTooltipTriggeredByRankBanner_Parms), Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics
	{
		static void NewProp_playUpdateAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playUpdateAnim;
		static void NewProp_isSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSlasher;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalLevelXp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentLevelXp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_devotion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_playUpdateAnim_SetBit(void* Obj)
	{
		((UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms*)Obj)->playUpdateAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_playUpdateAnim = { "playUpdateAnim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms), &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_playUpdateAnim_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_isSlasher_SetBit(void* Obj)
	{
		((UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms*)Obj)->isSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_isSlasher = { "isSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms), &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_isSlasher_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_totalLevelXp = { "totalLevelXp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms, totalLevelXp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_currentLevelXp = { "currentLevelXp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms, currentLevelXp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_devotion = { "devotion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms, devotion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_playUpdateAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_isSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_totalLevelXp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_currentLevelXp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_devotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, nullptr, "SetPlayerLevelBP", nullptr, nullptr, sizeof(UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms), Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister()
	{
		return UUMGBankAndPlayerInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onCancelPartyButtonClickedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onCancelPartyButtonClickedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonthlyPassButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonthlyPassButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankWidgetVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RankWidgetVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RankWidgetVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedCharacterWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BankWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnCancelPartyButtonClicked, "OnCancelPartyButtonClicked" }, // 2335646334
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnMainMenuSubscriptionClicked, "OnMainMenuSubscriptionClicked" }, // 2661049779
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPrestigeButtonClicked, "OnPrestigeButtonClicked" }, // 3892071919
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnPurchaseAuricCellsButtonClicked, "OnPurchaseAuricCellsButtonClicked" }, // 137373802
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByCurrency, "OnTooltipTriggeredByCurrency" }, // 2913307956
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByLevelBannerWidget, "OnTooltipTriggeredByLevelBannerWidget" }, // 3589881408
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_OnTooltipTriggeredByRankBanner, "OnTooltipTriggeredByRankBanner" }, // 151827931
		{ &Z_Construct_UFunction_UUMGBankAndPlayerInfoWidget_SetPlayerLevelBP, "SetPlayerLevelBP" }, // 4219009266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBankAndPlayerInfoWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp__onCancelPartyButtonClickedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp__onCancelPartyButtonClickedEvent = { "_onCancelPartyButtonClickedEvent", nullptr, (EPropertyFlags)0x0020180010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, _onCancelPartyButtonClickedEvent), Z_Construct_UDelegateFunction_DeadByDaylight_UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp__onCancelPartyButtonClickedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp__onCancelPartyButtonClickedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_MonthlyPassButton_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_MonthlyPassButton = { "MonthlyPassButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, MonthlyPassButton), Z_Construct_UClass_UUMGMainMenuMonthlyPassButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_MonthlyPassButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_MonthlyPassButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankBanner_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankBanner = { "RankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, RankBanner), Z_Construct_UClass_UUMGRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_LevelBanner_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_LevelBanner = { "LevelBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, LevelBanner), Z_Construct_UClass_UUMGLevelBannerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_LevelBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_LevelBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility = { "RankWidgetVisibility", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, RankWidgetVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_SelectedCharacterWidget_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_SelectedCharacterWidget = { "SelectedCharacterWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, SelectedCharacterWidget), Z_Construct_UClass_UUMGSelectedCharacterWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_SelectedCharacterWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_SelectedCharacterWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_PlayerNameText_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_PlayerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_PlayerNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_BankWidget_MetaData[] = {
		{ "Category", "UMGBankAndPlayerInfoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankAndPlayerInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_BankWidget = { "BankWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, BankWidget), Z_Construct_UClass_UUMGBankWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_BankWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_BankWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp__onCancelPartyButtonClickedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_MonthlyPassButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_LevelBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_RankWidgetVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_SelectedCharacterWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_PlayerNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::NewProp_BankWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBankAndPlayerInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::ClassParams = {
		&UUMGBankAndPlayerInfoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBankAndPlayerInfoWidget, 1385035653);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBankAndPlayerInfoWidget>()
	{
		return UUMGBankAndPlayerInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBankAndPlayerInfoWidget(Z_Construct_UClass_UUMGBankAndPlayerInfoWidget, &UUMGBankAndPlayerInfoWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBankAndPlayerInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBankAndPlayerInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
