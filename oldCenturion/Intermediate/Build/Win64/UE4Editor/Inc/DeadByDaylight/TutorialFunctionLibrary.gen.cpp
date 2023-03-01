// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialFunctionLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialFunctionLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialGameMode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialGameState_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialHighlightController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialNotificationController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialObjectiveController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTutorialFunctionLibrary::execGetTutorialGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATutorialGameMode**)Z_Param__Result=UTutorialFunctionLibrary::GetTutorialGameMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialFunctionLibrary::execGetTutorialGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATutorialGameState**)Z_Param__Result=UTutorialFunctionLibrary::GetTutorialGameState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialFunctionLibrary::execGetTutorialHighlightController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTutorialHighlightController**)Z_Param__Result=UTutorialFunctionLibrary::GetTutorialHighlightController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialFunctionLibrary::execGetTutorialNotificationController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTutorialNotificationController**)Z_Param__Result=UTutorialFunctionLibrary::GetTutorialNotificationController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialFunctionLibrary::execGetTutorialObjectiveController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTutorialObjectiveController**)Z_Param__Result=UTutorialFunctionLibrary::GetTutorialObjectiveController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialFunctionLibrary::execIsInTutorial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTutorialFunctionLibrary::IsInTutorial(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UTutorialFunctionLibrary::StaticRegisterNativesUTutorialFunctionLibrary()
	{
		UClass* Class = UTutorialFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTutorialGameMode", &UTutorialFunctionLibrary::execGetTutorialGameMode },
			{ "GetTutorialGameState", &UTutorialFunctionLibrary::execGetTutorialGameState },
			{ "GetTutorialHighlightController", &UTutorialFunctionLibrary::execGetTutorialHighlightController },
			{ "GetTutorialNotificationController", &UTutorialFunctionLibrary::execGetTutorialNotificationController },
			{ "GetTutorialObjectiveController", &UTutorialFunctionLibrary::execGetTutorialObjectiveController },
			{ "IsInTutorial", &UTutorialFunctionLibrary::execIsInTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics
	{
		struct TutorialFunctionLibrary_eventGetTutorialGameMode_Parms
		{
			UObject* WorldContextObject;
			ATutorialGameMode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialGameMode_Parms, ReturnValue), Z_Construct_UClass_ATutorialGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialFunctionLibrary, nullptr, "GetTutorialGameMode", nullptr, nullptr, sizeof(TutorialFunctionLibrary_eventGetTutorialGameMode_Parms), Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics
	{
		struct TutorialFunctionLibrary_eventGetTutorialGameState_Parms
		{
			UObject* WorldContextObject;
			ATutorialGameState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialGameState_Parms, ReturnValue), Z_Construct_UClass_ATutorialGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialFunctionLibrary, nullptr, "GetTutorialGameState", nullptr, nullptr, sizeof(TutorialFunctionLibrary_eventGetTutorialGameState_Parms), Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics
	{
		struct TutorialFunctionLibrary_eventGetTutorialHighlightController_Parms
		{
			UObject* WorldContextObject;
			UTutorialHighlightController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialHighlightController_Parms, ReturnValue), Z_Construct_UClass_UTutorialHighlightController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialHighlightController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialFunctionLibrary, nullptr, "GetTutorialHighlightController", nullptr, nullptr, sizeof(TutorialFunctionLibrary_eventGetTutorialHighlightController_Parms), Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics
	{
		struct TutorialFunctionLibrary_eventGetTutorialNotificationController_Parms
		{
			UObject* WorldContextObject;
			UTutorialNotificationController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialNotificationController_Parms, ReturnValue), Z_Construct_UClass_UTutorialNotificationController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialNotificationController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialFunctionLibrary, nullptr, "GetTutorialNotificationController", nullptr, nullptr, sizeof(TutorialFunctionLibrary_eventGetTutorialNotificationController_Parms), Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics
	{
		struct TutorialFunctionLibrary_eventGetTutorialObjectiveController_Parms
		{
			UObject* WorldContextObject;
			UTutorialObjectiveController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialObjectiveController_Parms, ReturnValue), Z_Construct_UClass_UTutorialObjectiveController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventGetTutorialObjectiveController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialFunctionLibrary, nullptr, "GetTutorialObjectiveController", nullptr, nullptr, sizeof(TutorialFunctionLibrary_eventGetTutorialObjectiveController_Parms), Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics
	{
		struct TutorialFunctionLibrary_eventIsInTutorial_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TutorialFunctionLibrary_eventIsInTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialFunctionLibrary_eventIsInTutorial_Parms), &Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialFunctionLibrary_eventIsInTutorial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialFunctionLibrary, nullptr, "IsInTutorial", nullptr, nullptr, sizeof(TutorialFunctionLibrary_eventIsInTutorial_Parms), Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialFunctionLibrary_NoRegister()
	{
		return UTutorialFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameMode, "GetTutorialGameMode" }, // 176114793
		{ &Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialGameState, "GetTutorialGameState" }, // 2250482703
		{ &Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialHighlightController, "GetTutorialHighlightController" }, // 390734924
		{ &Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialNotificationController, "GetTutorialNotificationController" }, // 1182078107
		{ &Z_Construct_UFunction_UTutorialFunctionLibrary_GetTutorialObjectiveController, "GetTutorialObjectiveController" }, // 219822419
		{ &Z_Construct_UFunction_UTutorialFunctionLibrary_IsInTutorial, "IsInTutorial" }, // 2762634565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TutorialFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TutorialFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialFunctionLibrary_Statics::ClassParams = {
		&UTutorialFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialFunctionLibrary, 1352839472);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTutorialFunctionLibrary>()
	{
		return UTutorialFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialFunctionLibrary(Z_Construct_UClass_UTutorialFunctionLibrary, &UTutorialFunctionLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTutorialFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
