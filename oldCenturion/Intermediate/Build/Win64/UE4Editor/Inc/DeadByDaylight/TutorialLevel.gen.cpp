// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialLevel();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETutorialStep();
// End Cross Module References
	DEFINE_FUNCTION(ATutorialLevel::execAddObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_objectiveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjective(Z_Param_objectiveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execCompleteObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_objectiveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteObjective(Z_Param_objectiveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execDisplayBlockingNotification)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayBlockingNotification(Z_Param_notificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execDisplayNotification)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_notificationId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayNotification(Z_Param_notificationId,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execOnNotificationDismissed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_notificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotificationDismissed(Z_Param_notificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execOnTutorialStepUpdated)
	{
		P_GET_ENUM(ETutorialStep,Z_Param_tutorialStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialStepUpdated(ETutorialStep(Z_Param_tutorialStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execRemoveObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_objectiveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjective(Z_Param_objectiveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execSetHandledTutorialStep)
	{
		P_GET_ENUM(ETutorialStep,Z_Param_tutorialStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandledTutorialStep(ETutorialStep(Z_Param_tutorialStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialLevel::execStartTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTutorial();
		P_NATIVE_END;
	}
	static FName NAME_ATutorialLevel_HandleNotificationDismissed = FName(TEXT("HandleNotificationDismissed"));
	void ATutorialLevel::HandleNotificationDismissed(FName notificationId)
	{
		TutorialLevel_eventHandleNotificationDismissed_Parms Parms;
		Parms.notificationId=notificationId;
		ProcessEvent(FindFunctionChecked(NAME_ATutorialLevel_HandleNotificationDismissed),&Parms);
	}
	static FName NAME_ATutorialLevel_HandleTutorialStepReached = FName(TEXT("HandleTutorialStepReached"));
	void ATutorialLevel::HandleTutorialStepReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATutorialLevel_HandleTutorialStepReached),NULL);
	}
	void ATutorialLevel::StaticRegisterNativesATutorialLevel()
	{
		UClass* Class = ATutorialLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjective", &ATutorialLevel::execAddObjective },
			{ "CompleteObjective", &ATutorialLevel::execCompleteObjective },
			{ "DisplayBlockingNotification", &ATutorialLevel::execDisplayBlockingNotification },
			{ "DisplayNotification", &ATutorialLevel::execDisplayNotification },
			{ "OnNotificationDismissed", &ATutorialLevel::execOnNotificationDismissed },
			{ "OnTutorialStepUpdated", &ATutorialLevel::execOnTutorialStepUpdated },
			{ "RemoveObjective", &ATutorialLevel::execRemoveObjective },
			{ "SetHandledTutorialStep", &ATutorialLevel::execSetHandledTutorialStep },
			{ "StartTutorial", &ATutorialLevel::execStartTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics
	{
		struct TutorialLevel_eventAddObjective_Parms
		{
			FName objectiveId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_objectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::NewProp_objectiveId = { "objectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventAddObjective_Parms, objectiveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::NewProp_objectiveId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "AddObjective", nullptr, nullptr, sizeof(TutorialLevel_eventAddObjective_Parms), Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_AddObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_AddObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics
	{
		struct TutorialLevel_eventCompleteObjective_Parms
		{
			FName objectiveId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_objectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::NewProp_objectiveId = { "objectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventCompleteObjective_Parms, objectiveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::NewProp_objectiveId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "CompleteObjective", nullptr, nullptr, sizeof(TutorialLevel_eventCompleteObjective_Parms), Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_CompleteObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_CompleteObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics
	{
		struct TutorialLevel_eventDisplayBlockingNotification_Parms
		{
			FName notificationId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventDisplayBlockingNotification_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "DisplayBlockingNotification", nullptr, nullptr, sizeof(TutorialLevel_eventDisplayBlockingNotification_Parms), Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics
	{
		struct TutorialLevel_eventDisplayNotification_Parms
		{
			FName notificationId;
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventDisplayNotification_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventDisplayNotification_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "DisplayNotification", nullptr, nullptr, sizeof(TutorialLevel_eventDisplayNotification_Parms), Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_DisplayNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_DisplayNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventHandleNotificationDismissed_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "HandleNotificationDismissed", nullptr, nullptr, sizeof(TutorialLevel_eventHandleNotificationDismissed_Parms), Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "HandleTutorialStepReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics
	{
		struct TutorialLevel_eventOnNotificationDismissed_Parms
		{
			FName notificationId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_notificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::NewProp_notificationId = { "notificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventOnNotificationDismissed_Parms, notificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::NewProp_notificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "OnNotificationDismissed", nullptr, nullptr, sizeof(TutorialLevel_eventOnNotificationDismissed_Parms), Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics
	{
		struct TutorialLevel_eventOnTutorialStepUpdated_Parms
		{
			ETutorialStep tutorialStep;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tutorialStep;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tutorialStep_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::NewProp_tutorialStep = { "tutorialStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventOnTutorialStepUpdated_Parms, tutorialStep), Z_Construct_UEnum_DeadByDaylight_ETutorialStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::NewProp_tutorialStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::NewProp_tutorialStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::NewProp_tutorialStep_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "OnTutorialStepUpdated", nullptr, nullptr, sizeof(TutorialLevel_eventOnTutorialStepUpdated_Parms), Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics
	{
		struct TutorialLevel_eventRemoveObjective_Parms
		{
			FName objectiveId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_objectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::NewProp_objectiveId = { "objectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventRemoveObjective_Parms, objectiveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::NewProp_objectiveId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "RemoveObjective", nullptr, nullptr, sizeof(TutorialLevel_eventRemoveObjective_Parms), Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_RemoveObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_RemoveObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics
	{
		struct TutorialLevel_eventSetHandledTutorialStep_Parms
		{
			ETutorialStep tutorialStep;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tutorialStep;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tutorialStep_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::NewProp_tutorialStep = { "tutorialStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialLevel_eventSetHandledTutorialStep_Parms, tutorialStep), Z_Construct_UEnum_DeadByDaylight_ETutorialStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::NewProp_tutorialStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::NewProp_tutorialStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::NewProp_tutorialStep_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "SetHandledTutorialStep", nullptr, nullptr, sizeof(TutorialLevel_eventSetHandledTutorialStep_Parms), Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialLevel_StartTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialLevel_StartTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialLevel_StartTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialLevel, nullptr, "StartTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialLevel_StartTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialLevel_StartTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialLevel_StartTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialLevel_StartTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATutorialLevel_NoRegister()
	{
		return ATutorialLevel::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialStarted_MetaData[];
#endif
		static void NewProp__tutorialStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__tutorialStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATutorialLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialLevel_AddObjective, "AddObjective" }, // 3061799706
		{ &Z_Construct_UFunction_ATutorialLevel_CompleteObjective, "CompleteObjective" }, // 1498277067
		{ &Z_Construct_UFunction_ATutorialLevel_DisplayBlockingNotification, "DisplayBlockingNotification" }, // 3636709806
		{ &Z_Construct_UFunction_ATutorialLevel_DisplayNotification, "DisplayNotification" }, // 3652149069
		{ &Z_Construct_UFunction_ATutorialLevel_HandleNotificationDismissed, "HandleNotificationDismissed" }, // 1416169036
		{ &Z_Construct_UFunction_ATutorialLevel_HandleTutorialStepReached, "HandleTutorialStepReached" }, // 3359169572
		{ &Z_Construct_UFunction_ATutorialLevel_OnNotificationDismissed, "OnNotificationDismissed" }, // 2661745949
		{ &Z_Construct_UFunction_ATutorialLevel_OnTutorialStepUpdated, "OnTutorialStepUpdated" }, // 1886648767
		{ &Z_Construct_UFunction_ATutorialLevel_RemoveObjective, "RemoveObjective" }, // 1798787030
		{ &Z_Construct_UFunction_ATutorialLevel_SetHandledTutorialStep, "SetHandledTutorialStep" }, // 3502154692
		{ &Z_Construct_UFunction_ATutorialLevel_StartTutorial, "StartTutorial" }, // 1167974510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TutorialLevel.h" },
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialLevel" },
		{ "ModuleRelativePath", "Public/TutorialLevel.h" },
	};
#endif
	void Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted_SetBit(void* Obj)
	{
		((ATutorialLevel*)Obj)->_tutorialStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted = { "_tutorialStarted", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATutorialLevel), &Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialLevel_Statics::NewProp__tutorialStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATutorialLevel_Statics::ClassParams = {
		&ATutorialLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATutorialLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialLevel_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATutorialLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorialLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATutorialLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutorialLevel, 1397760502);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATutorialLevel>()
	{
		return ATutorialLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutorialLevel(Z_Construct_UClass_ATutorialLevel, &ATutorialLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATutorialLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
