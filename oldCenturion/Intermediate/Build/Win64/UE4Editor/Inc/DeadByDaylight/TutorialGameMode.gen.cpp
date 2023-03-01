// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialGameMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialGameMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseMatchGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialPlayerHudController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialHighlightController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialNotificationController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialObjectiveController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATutorialGameMode::execGetAtlantaTutorialPlayerHudController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtlantaTutorialPlayerHudController**)Z_Param__Result=P_THIS->GetAtlantaTutorialPlayerHudController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameMode::execGetTutorialHighlightController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTutorialHighlightController**)Z_Param__Result=P_THIS->GetTutorialHighlightController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameMode::execGetTutorialNotificationController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTutorialNotificationController**)Z_Param__Result=P_THIS->GetTutorialNotificationController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameMode::execGetTutorialObjectiveController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTutorialObjectiveController**)Z_Param__Result=P_THIS->GetTutorialObjectiveController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameMode::execSetEscapeActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscapeActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialGameMode::execSetEscapeGenerators)
	{
		P_GET_TARRAY_REF(AGenerator*,Z_Param_Out_escapeGenerators);
		P_GET_PROPERTY(FIntProperty,Z_Param_requiredActivationCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscapeGenerators(Z_Param_Out_escapeGenerators,Z_Param_requiredActivationCount);
		P_NATIVE_END;
	}
	void ATutorialGameMode::StaticRegisterNativesATutorialGameMode()
	{
		UClass* Class = ATutorialGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtlantaTutorialPlayerHudController", &ATutorialGameMode::execGetAtlantaTutorialPlayerHudController },
			{ "GetTutorialHighlightController", &ATutorialGameMode::execGetTutorialHighlightController },
			{ "GetTutorialNotificationController", &ATutorialGameMode::execGetTutorialNotificationController },
			{ "GetTutorialObjectiveController", &ATutorialGameMode::execGetTutorialObjectiveController },
			{ "SetEscapeActivated", &ATutorialGameMode::execSetEscapeActivated },
			{ "SetEscapeGenerators", &ATutorialGameMode::execSetEscapeGenerators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics
	{
		struct TutorialGameMode_eventGetAtlantaTutorialPlayerHudController_Parms
		{
			UAtlantaTutorialPlayerHudController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameMode_eventGetAtlantaTutorialPlayerHudController_Parms, ReturnValue), Z_Construct_UClass_UAtlantaTutorialPlayerHudController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "GetAtlantaTutorialPlayerHudController", nullptr, nullptr, sizeof(TutorialGameMode_eventGetAtlantaTutorialPlayerHudController_Parms), Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics
	{
		struct TutorialGameMode_eventGetTutorialHighlightController_Parms
		{
			UTutorialHighlightController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameMode_eventGetTutorialHighlightController_Parms, ReturnValue), Z_Construct_UClass_UTutorialHighlightController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "GetTutorialHighlightController", nullptr, nullptr, sizeof(TutorialGameMode_eventGetTutorialHighlightController_Parms), Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics
	{
		struct TutorialGameMode_eventGetTutorialNotificationController_Parms
		{
			UTutorialNotificationController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameMode_eventGetTutorialNotificationController_Parms, ReturnValue), Z_Construct_UClass_UTutorialNotificationController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "GetTutorialNotificationController", nullptr, nullptr, sizeof(TutorialGameMode_eventGetTutorialNotificationController_Parms), Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics
	{
		struct TutorialGameMode_eventGetTutorialObjectiveController_Parms
		{
			UTutorialObjectiveController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameMode_eventGetTutorialObjectiveController_Parms, ReturnValue), Z_Construct_UClass_UTutorialObjectiveController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "GetTutorialObjectiveController", nullptr, nullptr, sizeof(TutorialGameMode_eventGetTutorialObjectiveController_Parms), Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "SetEscapeActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics
	{
		struct TutorialGameMode_eventSetEscapeGenerators_Parms
		{
			TArray<AGenerator*> escapeGenerators;
			int32 requiredActivationCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_requiredActivationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_escapeGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_escapeGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_escapeGenerators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_requiredActivationCount = { "requiredActivationCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameMode_eventSetEscapeGenerators_Parms, requiredActivationCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators = { "escapeGenerators", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialGameMode_eventSetEscapeGenerators_Parms, escapeGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators_Inner = { "escapeGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_requiredActivationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::NewProp_escapeGenerators_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "SetEscapeGenerators", nullptr, nullptr, sizeof(TutorialGameMode_eventSetEscapeGenerators_Parms), Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATutorialGameMode_NoRegister()
	{
		return ATutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlantaTutorialPlayerHudController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlantaTutorialPlayerHudController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialHighlightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tutorialHighlightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialNotificationController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tutorialNotificationController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialObjectiveController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tutorialObjectiveController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseMatchGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATutorialGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialGameMode_GetAtlantaTutorialPlayerHudController, "GetAtlantaTutorialPlayerHudController" }, // 1669891657
		{ &Z_Construct_UFunction_ATutorialGameMode_GetTutorialHighlightController, "GetTutorialHighlightController" }, // 1692351945
		{ &Z_Construct_UFunction_ATutorialGameMode_GetTutorialNotificationController, "GetTutorialNotificationController" }, // 3026180236
		{ &Z_Construct_UFunction_ATutorialGameMode_GetTutorialObjectiveController, "GetTutorialObjectiveController" }, // 286320097
		{ &Z_Construct_UFunction_ATutorialGameMode_SetEscapeActivated, "SetEscapeActivated" }, // 426387074
		{ &Z_Construct_UFunction_ATutorialGameMode_SetEscapeGenerators, "SetEscapeGenerators" }, // 3399393965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TutorialGameMode.h" },
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__atlantaTutorialPlayerHudController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__atlantaTutorialPlayerHudController = { "_atlantaTutorialPlayerHudController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATutorialGameMode, _atlantaTutorialPlayerHudController), Z_Construct_UClass_UAtlantaTutorialPlayerHudController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__atlantaTutorialPlayerHudController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__atlantaTutorialPlayerHudController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialHighlightController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialHighlightController = { "_tutorialHighlightController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATutorialGameMode, _tutorialHighlightController), Z_Construct_UClass_UTutorialHighlightController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialHighlightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialHighlightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialNotificationController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialNotificationController = { "_tutorialNotificationController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATutorialGameMode, _tutorialNotificationController), Z_Construct_UClass_UTutorialNotificationController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialNotificationController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialNotificationController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialObjectiveController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialObjectiveController = { "_tutorialObjectiveController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATutorialGameMode, _tutorialObjectiveController), Z_Construct_UClass_UTutorialObjectiveController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialObjectiveController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialObjectiveController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__atlantaTutorialPlayerHudController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialHighlightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialNotificationController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialGameMode_Statics::NewProp__tutorialObjectiveController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATutorialGameMode_Statics::ClassParams = {
		&ATutorialGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATutorialGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATutorialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATutorialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutorialGameMode, 1236127478);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATutorialGameMode>()
	{
		return ATutorialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutorialGameMode(Z_Construct_UClass_ATutorialGameMode, &ATutorialGameMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATutorialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
