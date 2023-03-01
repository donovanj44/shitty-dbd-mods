// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPlayerStatusIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPlayerStatusIcon() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerStatusIcon_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerStatusIcon();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLacerationStatusEffectUI_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStalkingStatusEffectUI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPlayerStatusIcon::execOnPlayerStatusButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStatusButtonClicked();
		P_NATIVE_END;
	}
	static FName NAME_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer = FName(TEXT("SetReverseTrapProgressionTimer"));
	void UUMGPlayerStatusIcon::SetReverseTrapProgressionTimer(float seconds)
	{
		UMGPlayerStatusIcon_eventSetReverseTrapProgressionTimer_Parms Parms;
		Parms.seconds=seconds;
		ProcessEvent(FindFunctionChecked(NAME_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer),&Parms);
	}
	static FName NAME_UUMGPlayerStatusIcon_SetSleepingTimer = FName(TEXT("SetSleepingTimer"));
	void UUMGPlayerStatusIcon::SetSleepingTimer(const float progress)
	{
		UMGPlayerStatusIcon_eventSetSleepingTimer_Parms Parms;
		Parms.progress=progress;
		ProcessEvent(FindFunctionChecked(NAME_UUMGPlayerStatusIcon_SetSleepingTimer),&Parms);
	}
	void UUMGPlayerStatusIcon::StaticRegisterNativesUUMGPlayerStatusIcon()
	{
		UClass* Class = UUMGPlayerStatusIcon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerStatusButtonClicked", &UUMGPlayerStatusIcon::execOnPlayerStatusButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayerStatusIcon, nullptr, "OnPlayerStatusButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerStatusIcon_eventSetReverseTrapProgressionTimer_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayerStatusIcon, nullptr, "SetReverseTrapProgressionTimer", nullptr, nullptr, sizeof(UMGPlayerStatusIcon_eventSetReverseTrapProgressionTimer_Parms), Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerStatusIcon_eventSetSleepingTimer_Parms, progress), METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayerStatusIcon, nullptr, "SetSleepingTimer", nullptr, nullptr, sizeof(UMGPlayerStatusIcon_eventSetSleepingTimer_Parms), Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPlayerStatusIcon_NoRegister()
	{
		return UUMGPlayerStatusIcon::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPlayerStatusIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationStatusEffectUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lacerationStatusEffectUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stalkingStatusEffectUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stalkingStatusEffectUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxNumberCharacterInName_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxNumberCharacterInName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMGLacerationStatusEffectUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_UMGLacerationStatusEffectUIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMGStalkingStatusEffectUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_UMGStalkingStatusEffectUIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__defaultTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deathBedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deathBedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disconnectedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__disconnectedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sacrificedBloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sacrificedBloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sacrificedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sacrificedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crawlingBloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crawlingBloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crawlingTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crawlingTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injuredBloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__injuredBloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__injuredTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__injuredTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deadBloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deadBloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deadTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deadTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trappedBloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trappedBloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trappedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trappedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedBloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedBloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessFillMI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SicknessFillMI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectContainerCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusEffectContainerCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessFillLowOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SicknessFillLowOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessFillHighOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SicknessFillHighOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandsGrabbing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandsGrabbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgonyCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgonyCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedSpectatorCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedSpectatorCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectateCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SicknessFill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SicknessCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseBearTrapArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverseBearTrapArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseBearTrapCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverseBearTrapCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepTimerCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleepTimerCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepStatusCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleepStatusCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfflictionIntroCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AfflictionIntroCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfflictionCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AfflictionCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrokenIndicatorCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrokenIndicatorCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObsessionCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObsessionCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIconBloodBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusIconBloodBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIconBloodTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusIconBloodTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerBarContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerBarContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBarContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBarContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPlayerStatusIcon_OnPlayerStatusButtonClicked, "OnPlayerStatusButtonClicked" }, // 2952290978
		{ &Z_Construct_UFunction_UUMGPlayerStatusIcon_SetReverseTrapProgressionTimer, "SetReverseTrapProgressionTimer" }, // 1698025725
		{ &Z_Construct_UFunction_UUMGPlayerStatusIcon_SetSleepingTimer, "SetSleepingTimer" }, // 4020789711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPlayerStatusIcon.h" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__lacerationStatusEffectUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__lacerationStatusEffectUI = { "_lacerationStatusEffectUI", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _lacerationStatusEffectUI), Z_Construct_UClass_UUMGLacerationStatusEffectUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__lacerationStatusEffectUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__lacerationStatusEffectUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__stalkingStatusEffectUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__stalkingStatusEffectUI = { "_stalkingStatusEffectUI", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _stalkingStatusEffectUI), Z_Construct_UClass_UUMGStalkingStatusEffectUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__stalkingStatusEffectUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__stalkingStatusEffectUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__maxNumberCharacterInName_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__maxNumberCharacterInName = { "_maxNumberCharacterInName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _maxNumberCharacterInName), METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__maxNumberCharacterInName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__maxNumberCharacterInName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGLacerationStatusEffectUIClass_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGLacerationStatusEffectUIClass = { "UMGLacerationStatusEffectUIClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, UMGLacerationStatusEffectUIClass), Z_Construct_UClass_UUMGLacerationStatusEffectUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGLacerationStatusEffectUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGLacerationStatusEffectUIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGStalkingStatusEffectUIClass_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGStalkingStatusEffectUIClass = { "UMGStalkingStatusEffectUIClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, UMGStalkingStatusEffectUIClass), Z_Construct_UClass_UUMGStalkingStatusEffectUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGStalkingStatusEffectUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGStalkingStatusEffectUIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__defaultTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__defaultTexture = { "_defaultTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _defaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__defaultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__defaultTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deathBedTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deathBedTexture = { "_deathBedTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _deathBedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deathBedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deathBedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__disconnectedTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__disconnectedTexture = { "_disconnectedTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _disconnectedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__disconnectedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__disconnectedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedBloodTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedBloodTexture = { "_sacrificedBloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _sacrificedBloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedBloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedBloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedTexture = { "_sacrificedTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _sacrificedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingBloodTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingBloodTexture = { "_crawlingBloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _crawlingBloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingBloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingBloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingTexture = { "_crawlingTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _crawlingTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredBloodTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredBloodTexture = { "_injuredBloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _injuredBloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredBloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredBloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredTexture = { "_injuredTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _injuredTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__escapedTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__escapedTexture = { "_escapedTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _escapedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__escapedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__escapedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadBloodTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadBloodTexture = { "_deadBloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _deadBloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadBloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadBloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadTexture = { "_deadTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _deadTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedBloodTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedBloodTexture = { "_trappedBloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _trappedBloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedBloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedBloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedTexture = { "_trappedTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _trappedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedBloodTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedBloodTexture = { "_hookedBloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _hookedBloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedBloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedBloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedTexture_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedTexture = { "_hookedTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, _hookedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillMI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillMI = { "SicknessFillMI", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SicknessFillMI), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillMI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillMI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusEffectContainerCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusEffectContainerCanvas = { "StatusEffectContainerCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, StatusEffectContainerCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusEffectContainerCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusEffectContainerCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillLowOpacity_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillLowOpacity = { "SicknessFillLowOpacity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SicknessFillLowOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillLowOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillLowOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillHighOpacity_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillHighOpacity = { "SicknessFillHighOpacity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SicknessFillHighOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillHighOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillHighOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HandsGrabbing_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HandsGrabbing = { "HandsGrabbing", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, HandsGrabbing), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HandsGrabbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HandsGrabbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AgonyCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AgonyCanvas = { "AgonyCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, AgonyCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AgonyCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AgonyCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SelectedSpectatorCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SelectedSpectatorCanvas = { "SelectedSpectatorCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SelectedSpectatorCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SelectedSpectatorCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SelectedSpectatorCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SpectateCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SpectateCanvas = { "SpectateCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SpectateCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SpectateCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SpectateCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFill_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFill = { "SicknessFill", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SicknessFill), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessCanvas = { "SicknessCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SicknessCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapArrow_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapArrow = { "ReverseBearTrapArrow", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, ReverseBearTrapArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapCanvas = { "ReverseBearTrapCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, ReverseBearTrapCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepTimerCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepTimerCanvas = { "SleepTimerCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SleepTimerCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepTimerCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepTimerCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepStatusCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepStatusCanvas = { "SleepStatusCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, SleepStatusCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepStatusCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepStatusCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionIntroCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionIntroCanvas = { "AfflictionIntroCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, AfflictionIntroCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionIntroCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionIntroCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionCanvas = { "AfflictionCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, AfflictionCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_BrokenIndicatorCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_BrokenIndicatorCanvas = { "BrokenIndicatorCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, BrokenIndicatorCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_BrokenIndicatorCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_BrokenIndicatorCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ObsessionCanvas_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ObsessionCanvas = { "ObsessionCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, ObsessionCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ObsessionCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ObsessionCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIcon_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIcon = { "StatusIcon", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, StatusIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodBottom_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodBottom = { "StatusIconBloodBottom", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, StatusIconBloodBottom), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodTop_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodTop = { "StatusIconBloodTop", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, StatusIconBloodTop), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBarContainer_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBarContainer = { "TimerBarContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, TimerBarContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBarContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBarContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBarContainer_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBarContainer = { "HealthBarContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, HealthBarContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBarContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBarContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBar_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBar = { "TimerBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, TimerBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBar_MetaData[] = {
		{ "Category", "UMGPlayerStatusIcon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerStatusIcon, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__lacerationStatusEffectUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__stalkingStatusEffectUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__maxNumberCharacterInName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGLacerationStatusEffectUIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_UMGStalkingStatusEffectUIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__defaultTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deathBedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__disconnectedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedBloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__sacrificedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingBloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__crawlingTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredBloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__injuredTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__escapedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadBloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__deadTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedBloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__trappedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedBloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp__hookedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillMI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusEffectContainerCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillLowOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFillHighOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HandsGrabbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AgonyCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SelectedSpectatorCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SpectateCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SicknessCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ReverseBearTrapCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepTimerCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_SleepStatusCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionIntroCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_AfflictionCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_BrokenIndicatorCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_ObsessionCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_StatusIconBloodTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBarContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBarContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_TimerBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::NewProp_HealthBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPlayerStatusIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::ClassParams = {
		&UUMGPlayerStatusIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPlayerStatusIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPlayerStatusIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPlayerStatusIcon, 3857143604);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPlayerStatusIcon>()
	{
		return UUMGPlayerStatusIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPlayerStatusIcon(Z_Construct_UClass_UUMGPlayerStatusIcon, &UUMGPlayerStatusIcon::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPlayerStatusIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPlayerStatusIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
