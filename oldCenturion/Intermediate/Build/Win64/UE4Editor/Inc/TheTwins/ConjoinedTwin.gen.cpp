// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/ConjoinedTwin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConjoinedTwin() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFirecrackerEffectData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	THETWINS_API UClass* Z_Construct_UClass_UTwinPossessNegationEffectComponent_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFirecrackerEffectHandlerComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UBlindFlashlightTargetFXComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinFirstPersonViewComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorConfigurator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAttackerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedAudioComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerBlindingFXComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinOutlineUpdateStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AConjoinedTwin::execAuthority_OnFirecrackerInRangeBegin)
	{
		P_GET_STRUCT_REF(FFirecrackerEffectData,Z_Param_Out_effectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnFirecrackerInRangeBegin(Z_Param_Out_effectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConjoinedTwin::execOnFinishedPlayingEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlayingEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConjoinedTwin::execServer_SendAttackInput)
	{
		P_GET_UBOOL(Z_Param_pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendAttackInput_Validate(Z_Param_pressed))
		{
			RPC_ValidateFailed(TEXT("Server_SendAttackInput_Validate"));
			return;
		}
		P_THIS->Server_SendAttackInput_Implementation(Z_Param_pressed);
		P_NATIVE_END;
	}
	static FName NAME_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged = FName(TEXT("Cosmetic_OnOnGroundUncontrolledChanged"));
	void AConjoinedTwin::Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled)
	{
		ConjoinedTwin_eventCosmetic_OnOnGroundUncontrolledChanged_Parms Parms;
		Parms.onGroundAndUncontrolled=onGroundAndUncontrolled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged),&Parms);
	}
	static FName NAME_AConjoinedTwin_Server_SendAttackInput = FName(TEXT("Server_SendAttackInput"));
	void AConjoinedTwin::Server_SendAttackInput(bool pressed)
	{
		ConjoinedTwin_eventServer_SendAttackInput_Parms Parms;
		Parms.pressed=pressed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AConjoinedTwin_Server_SendAttackInput),&Parms);
	}
	void AConjoinedTwin::StaticRegisterNativesAConjoinedTwin()
	{
		UClass* Class = AConjoinedTwin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnFirecrackerInRangeBegin", &AConjoinedTwin::execAuthority_OnFirecrackerInRangeBegin },
			{ "OnFinishedPlayingEvent", &AConjoinedTwin::execOnFinishedPlayingEvent },
			{ "Server_SendAttackInput", &AConjoinedTwin::execServer_SendAttackInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics
	{
		struct ConjoinedTwin_eventAuthority_OnFirecrackerInRangeBegin_Parms
		{
			FFirecrackerEffectData effectData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_effectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData = { "effectData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConjoinedTwin_eventAuthority_OnFirecrackerInRangeBegin_Parms, effectData), Z_Construct_UScriptStruct_FFirecrackerEffectData, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::NewProp_effectData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConjoinedTwin, nullptr, "Authority_OnFirecrackerInRangeBegin", nullptr, nullptr, sizeof(ConjoinedTwin_eventAuthority_OnFirecrackerInRangeBegin_Parms), Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics
	{
		static void NewProp_onGroundAndUncontrolled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onGroundAndUncontrolled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::NewProp_onGroundAndUncontrolled_SetBit(void* Obj)
	{
		((ConjoinedTwin_eventCosmetic_OnOnGroundUncontrolledChanged_Parms*)Obj)->onGroundAndUncontrolled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::NewProp_onGroundAndUncontrolled = { "onGroundAndUncontrolled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConjoinedTwin_eventCosmetic_OnOnGroundUncontrolledChanged_Parms), &Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::NewProp_onGroundAndUncontrolled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::NewProp_onGroundAndUncontrolled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConjoinedTwin, nullptr, "Cosmetic_OnOnGroundUncontrolledChanged", nullptr, nullptr, sizeof(ConjoinedTwin_eventCosmetic_OnOnGroundUncontrolledChanged_Parms), Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics
	{
		struct ConjoinedTwin_eventOnFinishedPlayingEvent_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConjoinedTwin_eventOnFinishedPlayingEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConjoinedTwin_eventOnFinishedPlayingEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConjoinedTwin, nullptr, "OnFinishedPlayingEvent", nullptr, nullptr, sizeof(ConjoinedTwin_eventOnFinishedPlayingEvent_Parms), Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics
	{
		static void NewProp_pressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::NewProp_pressed_SetBit(void* Obj)
	{
		((ConjoinedTwin_eventServer_SendAttackInput_Parms*)Obj)->pressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::NewProp_pressed = { "pressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConjoinedTwin_eventServer_SendAttackInput_Parms), &Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::NewProp_pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::NewProp_pressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConjoinedTwin, nullptr, "Server_SendAttackInput", nullptr, nullptr, sizeof(ConjoinedTwin_eventServer_SendAttackInput_Parms), Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister()
	{
		return AConjoinedTwin::StaticClass();
	}
	struct Z_Construct_UClass_AConjoinedTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinPossessNegationEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinPossessNegationEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightEvasionScoreCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__flashlightEvasionScoreCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightBlindEvasionScoreTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__flashlightBlindEvasionScoreTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firecrackerEffectHandlerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__firecrackerEffectHandlerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindFlashlightTargetFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blindFlashlightTargetFXComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eyesFlashlightable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__eyesFlashlightable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonViewComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__firstPersonViewComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealDurationOnAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__revealDurationOnAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animationFollower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animationFollower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidationConfigurator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hitValidationConfigurator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hitValidator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attackerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customizedAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__customizedAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinBlindingFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinBlindingFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinLullabyAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinLullabyAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinOutlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinOutlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedPossessionAreaTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__restrictedPossessionAreaTracker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConjoinedTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConjoinedTwin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConjoinedTwin_Authority_OnFirecrackerInRangeBegin, "Authority_OnFirecrackerInRangeBegin" }, // 3188562924
		{ &Z_Construct_UFunction_AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged, "Cosmetic_OnOnGroundUncontrolledChanged" }, // 2294138130
		{ &Z_Construct_UFunction_AConjoinedTwin_OnFinishedPlayingEvent, "OnFinishedPlayingEvent" }, // 848413163
		{ &Z_Construct_UFunction_AConjoinedTwin_Server_SendAttackInput, "Server_SendAttackInput" }, // 1669639772
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ConjoinedTwin.h" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinPossessNegationEffectComponent_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinPossessNegationEffectComponent = { "_twinPossessNegationEffectComponent", nullptr, (EPropertyFlags)0x00400000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _twinPossessNegationEffectComponent), Z_Construct_UClass_UTwinPossessNegationEffectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinPossessNegationEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinPossessNegationEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightEvasionScoreCooldown_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightEvasionScoreCooldown = { "_flashlightEvasionScoreCooldown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _flashlightEvasionScoreCooldown), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightEvasionScoreCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightEvasionScoreCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightBlindEvasionScoreTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightBlindEvasionScoreTimer = { "_flashlightBlindEvasionScoreTimer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _flashlightBlindEvasionScoreTimer), Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightBlindEvasionScoreTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightBlindEvasionScoreTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firecrackerEffectHandlerComponent = { "_firecrackerEffectHandlerComponent", nullptr, (EPropertyFlags)0x00400000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _firecrackerEffectHandlerComponent), Z_Construct_UClass_UFirecrackerEffectHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firecrackerEffectHandlerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__blindFlashlightTargetFXComponent_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__blindFlashlightTargetFXComponent = { "_blindFlashlightTargetFXComponent", nullptr, (EPropertyFlags)0x00400000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _blindFlashlightTargetFXComponent), Z_Construct_UClass_UBlindFlashlightTargetFXComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__blindFlashlightTargetFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__blindFlashlightTargetFXComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__eyesFlashlightable_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__eyesFlashlightable = { "_eyesFlashlightable", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _eyesFlashlightable), Z_Construct_UClass_UFlashlightableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__eyesFlashlightable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__eyesFlashlightable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firstPersonViewComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firstPersonViewComponent = { "_firstPersonViewComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _firstPersonViewComponent), Z_Construct_UClass_UTwinFirstPersonViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firstPersonViewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firstPersonViewComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__revealDurationOnAttached_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__revealDurationOnAttached = { "_revealDurationOnAttached", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _revealDurationOnAttached), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__revealDurationOnAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__revealDurationOnAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__animationFollower_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__animationFollower = { "_animationFollower", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _animationFollower), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__animationFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__animationFollower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__gravityScale_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__gravityScale = { "_gravityScale", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _gravityScale), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__gravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__gravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidationConfigurator_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidationConfigurator = { "_hitValidationConfigurator", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _hitValidationConfigurator), Z_Construct_UClass_UHitValidatorConfigurator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidationConfigurator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidationConfigurator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidator_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidator = { "_hitValidator", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _hitValidator), Z_Construct_UClass_UHitValidatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__maxWalkSpeed_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__maxWalkSpeed = { "_maxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _maxWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__maxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__maxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__attackerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__attackerComponent = { "_attackerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _attackerComponent), Z_Construct_UClass_UDBDAttackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__attackerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__attackerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__customizedAudio_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__customizedAudio = { "_customizedAudio", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _customizedAudio), Z_Construct_UClass_UCustomizedAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__customizedAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__customizedAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinBlindingFX_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinBlindingFX = { "_twinBlindingFX", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _twinBlindingFX), Z_Construct_UClass_UKillerBlindingFXComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinBlindingFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinBlindingFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinLullabyAudioComponent_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinLullabyAudioComponent = { "_twinLullabyAudioComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _twinLullabyAudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinLullabyAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinLullabyAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinOutlineUpdateStrategy_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinOutlineUpdateStrategy = { "_twinOutlineUpdateStrategy", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _twinOutlineUpdateStrategy), Z_Construct_UClass_UTwinOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinOutlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinOutlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__restrictedPossessionAreaTracker_MetaData[] = {
		{ "Category", "ConjoinedTwin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConjoinedTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__restrictedPossessionAreaTracker = { "_restrictedPossessionAreaTracker", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConjoinedTwin, _restrictedPossessionAreaTracker), Z_Construct_UClass_URangeToActorsTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__restrictedPossessionAreaTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__restrictedPossessionAreaTracker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConjoinedTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinPossessNegationEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightEvasionScoreCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__flashlightBlindEvasionScoreTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firecrackerEffectHandlerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__blindFlashlightTargetFXComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__eyesFlashlightable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__firstPersonViewComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__revealDurationOnAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__animationFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__gravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidationConfigurator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__hitValidator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__maxWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__attackerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__customizedAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinBlindingFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinLullabyAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__twinOutlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConjoinedTwin_Statics::NewProp__restrictedPossessionAreaTracker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConjoinedTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConjoinedTwin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConjoinedTwin_Statics::ClassParams = {
		&AConjoinedTwin::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConjoinedTwin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConjoinedTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConjoinedTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConjoinedTwin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConjoinedTwin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConjoinedTwin, 520360145);
	template<> THETWINS_API UClass* StaticClass<AConjoinedTwin>()
	{
		return AConjoinedTwin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConjoinedTwin(Z_Construct_UClass_AConjoinedTwin, &AConjoinedTwin::StaticClass, TEXT("/Script/TheTwins"), TEXT("AConjoinedTwin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConjoinedTwin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
