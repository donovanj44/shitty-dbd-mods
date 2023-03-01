// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaTutorialLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaTutorialLevel();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execGetTutorialElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_elementKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTutorialElement(Z_Param_elementKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execHandleCanStartTutorialChanged)
	{
		P_GET_UBOOL(Z_Param_canStartTutorial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCanStartTutorialChanged(Z_Param_canStartTutorial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execIsActorInLineOfSight)
	{
		P_GET_OBJECT(ADBDAIPlayerController,Z_Param_aiPlayerController);
		P_GET_OBJECT(APlayerController,Z_Param_playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorInLineOfSight(Z_Param_aiPlayerController,Z_Param_playerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execOnTriggerBeginOverlapActor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_triggerID);
		P_GET_OBJECT(AActor,Z_Param_overlappingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerBeginOverlapActor(Z_Param_triggerID,Z_Param_overlappingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execSetAIEscapePoints)
	{
		P_GET_TARRAY(AActor*,Z_Param_escapePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIEscapePoints(Z_Param_escapePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execSetLocallyControlledPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_locallyControllerPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocallyControlledPlayer(Z_Param_locallyControllerPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execSetTutorialElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_elementKey);
		P_GET_OBJECT(AActor,Z_Param_elementToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTutorialElement(Z_Param_elementKey,Z_Param_elementToSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtlantaTutorialLevel::execStartCameraFadeIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCameraFadeIn();
		P_NATIVE_END;
	}
	static FName NAME_AAtlantaTutorialLevel_OnTutorialStarted = FName(TEXT("OnTutorialStarted"));
	void AAtlantaTutorialLevel::OnTutorialStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaTutorialLevel_OnTutorialStarted),NULL);
	}
	static FName NAME_AAtlantaTutorialLevel_SetTutorialElements = FName(TEXT("SetTutorialElements"));
	void AAtlantaTutorialLevel::SetTutorialElements()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaTutorialLevel_SetTutorialElements),NULL);
	}
	void AAtlantaTutorialLevel::StaticRegisterNativesAAtlantaTutorialLevel()
	{
		UClass* Class = AAtlantaTutorialLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTutorialElement", &AAtlantaTutorialLevel::execGetTutorialElement },
			{ "HandleCanStartTutorialChanged", &AAtlantaTutorialLevel::execHandleCanStartTutorialChanged },
			{ "IsActorInLineOfSight", &AAtlantaTutorialLevel::execIsActorInLineOfSight },
			{ "OnTriggerBeginOverlapActor", &AAtlantaTutorialLevel::execOnTriggerBeginOverlapActor },
			{ "SetAIEscapePoints", &AAtlantaTutorialLevel::execSetAIEscapePoints },
			{ "SetLocallyControlledPlayer", &AAtlantaTutorialLevel::execSetLocallyControlledPlayer },
			{ "SetTutorialElement", &AAtlantaTutorialLevel::execSetTutorialElement },
			{ "StartCameraFadeIn", &AAtlantaTutorialLevel::execStartCameraFadeIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics
	{
		struct AtlantaTutorialLevel_eventGetTutorialElement_Parms
		{
			FString elementKey;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_elementKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_elementKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventGetTutorialElement_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_elementKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_elementKey = { "elementKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventGetTutorialElement_Parms, elementKey), METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_elementKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_elementKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::NewProp_elementKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "GetTutorialElement", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventGetTutorialElement_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics
	{
		struct AtlantaTutorialLevel_eventHandleCanStartTutorialChanged_Parms
		{
			bool canStartTutorial;
		};
		static void NewProp_canStartTutorial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canStartTutorial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::NewProp_canStartTutorial_SetBit(void* Obj)
	{
		((AtlantaTutorialLevel_eventHandleCanStartTutorialChanged_Parms*)Obj)->canStartTutorial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::NewProp_canStartTutorial = { "canStartTutorial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaTutorialLevel_eventHandleCanStartTutorialChanged_Parms), &Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::NewProp_canStartTutorial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::NewProp_canStartTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "HandleCanStartTutorialChanged", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventHandleCanStartTutorialChanged_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics
	{
		struct AtlantaTutorialLevel_eventIsActorInLineOfSight_Parms
		{
			ADBDAIPlayerController* aiPlayerController;
			APlayerController* playerController;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aiPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaTutorialLevel_eventIsActorInLineOfSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaTutorialLevel_eventIsActorInLineOfSight_Parms), &Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventIsActorInLineOfSight_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_aiPlayerController = { "aiPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventIsActorInLineOfSight_Parms, aiPlayerController), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::NewProp_aiPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "IsActorInLineOfSight", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventIsActorInLineOfSight_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics
	{
		struct AtlantaTutorialLevel_eventOnTriggerBeginOverlapActor_Parms
		{
			FString triggerID;
			AActor* overlappingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_triggerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_overlappingActor = { "overlappingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventOnTriggerBeginOverlapActor_Parms, overlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_triggerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_triggerID = { "triggerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventOnTriggerBeginOverlapActor_Parms, triggerID), METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_triggerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_triggerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_overlappingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::NewProp_triggerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "OnTriggerBeginOverlapActor", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventOnTriggerBeginOverlapActor_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "OnTutorialStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics
	{
		struct AtlantaTutorialLevel_eventSetAIEscapePoints_Parms
		{
			TArray<AActor*> escapePoints;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_escapePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_escapePoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::NewProp_escapePoints = { "escapePoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventSetAIEscapePoints_Parms, escapePoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::NewProp_escapePoints_Inner = { "escapePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::NewProp_escapePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::NewProp_escapePoints_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "SetAIEscapePoints", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventSetAIEscapePoints_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics
	{
		struct AtlantaTutorialLevel_eventSetLocallyControlledPlayer_Parms
		{
			ADBDPlayer* locallyControllerPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_locallyControllerPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::NewProp_locallyControllerPlayer = { "locallyControllerPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventSetLocallyControlledPlayer_Parms, locallyControllerPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::NewProp_locallyControllerPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "SetLocallyControlledPlayer", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventSetLocallyControlledPlayer_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics
	{
		struct AtlantaTutorialLevel_eventSetTutorialElement_Parms
		{
			FString elementKey;
			AActor* elementToSet;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_elementToSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_elementKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_elementKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementToSet = { "elementToSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventSetTutorialElement_Parms, elementToSet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementKey = { "elementKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialLevel_eventSetTutorialElement_Parms, elementKey), METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementToSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::NewProp_elementKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "SetTutorialElement", nullptr, nullptr, sizeof(AtlantaTutorialLevel_eventSetTutorialElement_Parms), Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "SetTutorialElements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaTutorialLevel, nullptr, "StartCameraFadeIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtlantaTutorialLevel_NoRegister()
	{
		return AAtlantaTutorialLevel::StaticClass();
	}
	struct Z_Construct_UClass_AAtlantaTutorialLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtlantaTutorialLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATutorialLevel,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtlantaTutorialLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_GetTutorialElement, "GetTutorialElement" }, // 3697869798
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_HandleCanStartTutorialChanged, "HandleCanStartTutorialChanged" }, // 2880543387
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_IsActorInLineOfSight, "IsActorInLineOfSight" }, // 3244891424
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_OnTriggerBeginOverlapActor, "OnTriggerBeginOverlapActor" }, // 1811646064
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_OnTutorialStarted, "OnTutorialStarted" }, // 117947840
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_SetAIEscapePoints, "SetAIEscapePoints" }, // 1472756747
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_SetLocallyControlledPlayer, "SetLocallyControlledPlayer" }, // 3762870931
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElement, "SetTutorialElement" }, // 2689214285
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_SetTutorialElements, "SetTutorialElements" }, // 2986702168
		{ &Z_Construct_UFunction_AAtlantaTutorialLevel_StartCameraFadeIn, "StartCameraFadeIn" }, // 2013777759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaTutorialLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AtlantaTutorialLevel.h" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialLevel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtlantaTutorialLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtlantaTutorialLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtlantaTutorialLevel_Statics::ClassParams = {
		&AAtlantaTutorialLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtlantaTutorialLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaTutorialLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtlantaTutorialLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtlantaTutorialLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtlantaTutorialLevel, 339370666);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AAtlantaTutorialLevel>()
	{
		return AAtlantaTutorialLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtlantaTutorialLevel(Z_Construct_UClass_AAtlantaTutorialLevel, &AAtlantaTutorialLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AAtlantaTutorialLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtlantaTutorialLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
