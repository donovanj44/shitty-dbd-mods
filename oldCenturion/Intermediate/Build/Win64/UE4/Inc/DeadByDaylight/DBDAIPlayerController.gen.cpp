// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIPlayerController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIController();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviour_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDAIPlayerController::execMovePlayerToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_goal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_acceptanceRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePlayerToActor(Z_Param_goal,Z_Param_acceptanceRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIPlayerController::execOnBehaviourEndedHandler)
	{
		P_GET_OBJECT(UAICharacterBehaviour,Z_Param_behaviourEnded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBehaviourEndedHandler(Z_Param_behaviourEnded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIPlayerController::execPauseCharacterBehaviour)
	{
		P_GET_OBJECT(UClass,Z_Param_behaviourClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseCharacterBehaviour(Z_Param_behaviourClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIPlayerController::execResumeCharacterBehaviour)
	{
		P_GET_OBJECT(UClass,Z_Param_behaviourClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeCharacterBehaviour(Z_Param_behaviourClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIPlayerController::execStartCharacterBehaviour)
	{
		P_GET_OBJECT(UClass,Z_Param_behaviourClass);
		P_GET_OBJECT(UAICharacterBehaviourData,Z_Param_characterBehaviourData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCharacterBehaviour(Z_Param_behaviourClass,Z_Param_characterBehaviourData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIPlayerController::execStopAllCharacterBehaviours)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCharacterBehaviours();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDAIPlayerController::execStopCharacterBehaviour)
	{
		P_GET_OBJECT(UClass,Z_Param_behaviourClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCharacterBehaviour(Z_Param_behaviourClass);
		P_NATIVE_END;
	}
	void ADBDAIPlayerController::StaticRegisterNativesADBDAIPlayerController()
	{
		UClass* Class = ADBDAIPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovePlayerToActor", &ADBDAIPlayerController::execMovePlayerToActor },
			{ "OnBehaviourEndedHandler", &ADBDAIPlayerController::execOnBehaviourEndedHandler },
			{ "PauseCharacterBehaviour", &ADBDAIPlayerController::execPauseCharacterBehaviour },
			{ "ResumeCharacterBehaviour", &ADBDAIPlayerController::execResumeCharacterBehaviour },
			{ "StartCharacterBehaviour", &ADBDAIPlayerController::execStartCharacterBehaviour },
			{ "StopAllCharacterBehaviours", &ADBDAIPlayerController::execStopAllCharacterBehaviours },
			{ "StopCharacterBehaviour", &ADBDAIPlayerController::execStopCharacterBehaviour },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics
	{
		struct DBDAIPlayerController_eventMovePlayerToActor_Parms
		{
			AActor* goal;
			float acceptanceRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_acceptanceRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_goal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::NewProp_acceptanceRadius = { "acceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventMovePlayerToActor_Parms, acceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::NewProp_goal = { "goal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventMovePlayerToActor_Parms, goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::NewProp_acceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::NewProp_goal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "MovePlayerToActor", nullptr, nullptr, sizeof(DBDAIPlayerController_eventMovePlayerToActor_Parms), Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics
	{
		struct DBDAIPlayerController_eventOnBehaviourEndedHandler_Parms
		{
			UAICharacterBehaviour* behaviourEnded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_behaviourEnded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::NewProp_behaviourEnded = { "behaviourEnded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventOnBehaviourEndedHandler_Parms, behaviourEnded), Z_Construct_UClass_UAICharacterBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::NewProp_behaviourEnded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "OnBehaviourEndedHandler", nullptr, nullptr, sizeof(DBDAIPlayerController_eventOnBehaviourEndedHandler_Parms), Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics
	{
		struct DBDAIPlayerController_eventPauseCharacterBehaviour_Parms
		{
			const UClass* behaviourClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_behaviourClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_behaviourClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::NewProp_behaviourClass = { "behaviourClass", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventPauseCharacterBehaviour_Parms, behaviourClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::NewProp_behaviourClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "PauseCharacterBehaviour", nullptr, nullptr, sizeof(DBDAIPlayerController_eventPauseCharacterBehaviour_Parms), Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics
	{
		struct DBDAIPlayerController_eventResumeCharacterBehaviour_Parms
		{
			const UClass* behaviourClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_behaviourClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_behaviourClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::NewProp_behaviourClass = { "behaviourClass", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventResumeCharacterBehaviour_Parms, behaviourClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::NewProp_behaviourClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "ResumeCharacterBehaviour", nullptr, nullptr, sizeof(DBDAIPlayerController_eventResumeCharacterBehaviour_Parms), Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics
	{
		struct DBDAIPlayerController_eventStartCharacterBehaviour_Parms
		{
			UClass* behaviourClass;
			UAICharacterBehaviourData* characterBehaviourData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterBehaviourData;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_behaviourClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::NewProp_characterBehaviourData = { "characterBehaviourData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventStartCharacterBehaviour_Parms, characterBehaviourData), Z_Construct_UClass_UAICharacterBehaviourData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::NewProp_behaviourClass = { "behaviourClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventStartCharacterBehaviour_Parms, behaviourClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::NewProp_characterBehaviourData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::NewProp_behaviourClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "StartCharacterBehaviour", nullptr, nullptr, sizeof(DBDAIPlayerController_eventStartCharacterBehaviour_Parms), Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "StopAllCharacterBehaviours", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics
	{
		struct DBDAIPlayerController_eventStopCharacterBehaviour_Parms
		{
			const UClass* behaviourClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_behaviourClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_behaviourClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::NewProp_behaviourClass = { "behaviourClass", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIPlayerController_eventStopCharacterBehaviour_Parms, behaviourClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::NewProp_behaviourClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::NewProp_behaviourClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAIPlayerController, nullptr, "StopCharacterBehaviour", nullptr, nullptr, sizeof(DBDAIPlayerController_eventStopCharacterBehaviour_Parms), Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister()
	{
		return ADBDAIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADBDAIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentBehaviours_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__currentBehaviours;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentBehaviours_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDAIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDAIPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDAIPlayerController_MovePlayerToActor, "MovePlayerToActor" }, // 1137799642
		{ &Z_Construct_UFunction_ADBDAIPlayerController_OnBehaviourEndedHandler, "OnBehaviourEndedHandler" }, // 3552783163
		{ &Z_Construct_UFunction_ADBDAIPlayerController_PauseCharacterBehaviour, "PauseCharacterBehaviour" }, // 2600020775
		{ &Z_Construct_UFunction_ADBDAIPlayerController_ResumeCharacterBehaviour, "ResumeCharacterBehaviour" }, // 739131413
		{ &Z_Construct_UFunction_ADBDAIPlayerController_StartCharacterBehaviour, "StartCharacterBehaviour" }, // 3124259307
		{ &Z_Construct_UFunction_ADBDAIPlayerController_StopAllCharacterBehaviours, "StopAllCharacterBehaviours" }, // 2657510501
		{ &Z_Construct_UFunction_ADBDAIPlayerController_StopCharacterBehaviour, "StopCharacterBehaviour" }, // 1373134017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDAIPlayerController.h" },
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours = { "_currentBehaviours", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDAIPlayerController, _currentBehaviours), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours_Inner = { "_currentBehaviours", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAICharacterBehaviour_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDAIPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDAIPlayerController_Statics::NewProp__currentBehaviours_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDAIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDAIPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDAIPlayerController_Statics::ClassParams = {
		&ADBDAIPlayerController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDAIPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDAIPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDAIPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDAIPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDAIPlayerController, 3663676280);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDAIPlayerController>()
	{
		return ADBDAIPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDAIPlayerController(Z_Construct_UClass_ADBDAIPlayerController, &ADBDAIPlayerController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDAIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDAIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
