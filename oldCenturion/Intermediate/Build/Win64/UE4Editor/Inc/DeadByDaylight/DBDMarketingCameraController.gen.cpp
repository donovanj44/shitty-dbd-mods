// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDMarketingCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDMarketingCameraController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMarketingCameraController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMarketingCameraController();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ADBDMarketingCameraController::execDBD_MarketingCameraToggleDampening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_MarketingCameraToggleDampening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMarketingCameraController::execDBD_SetMarketingCameraControllerSensitivityModifier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_modifierValue);
		P_GET_UBOOL(Z_Param_isEditingRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetMarketingCameraControllerSensitivityModifier(Z_Param_modifierValue,Z_Param_isEditingRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMarketingCameraController::execDBD_SetMarketingCameraDampeningFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_accelerationFactor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_decelerationFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetMarketingCameraDampeningFactor(Z_Param_accelerationFactor,Z_Param_decelerationFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDMarketingCameraController::execDBD_SetMarketingCameraTriggerSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_triggerSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetMarketingCameraTriggerSensitivity(Z_Param_triggerSensitivity);
		P_NATIVE_END;
	}
	void ADBDMarketingCameraController::StaticRegisterNativesADBDMarketingCameraController()
	{
		UClass* Class = ADBDMarketingCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_MarketingCameraToggleDampening", &ADBDMarketingCameraController::execDBD_MarketingCameraToggleDampening },
			{ "DBD_SetMarketingCameraControllerSensitivityModifier", &ADBDMarketingCameraController::execDBD_SetMarketingCameraControllerSensitivityModifier },
			{ "DBD_SetMarketingCameraDampeningFactor", &ADBDMarketingCameraController::execDBD_SetMarketingCameraDampeningFactor },
			{ "DBD_SetMarketingCameraTriggerSensitivity", &ADBDMarketingCameraController::execDBD_SetMarketingCameraTriggerSensitivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMarketingCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMarketingCameraController, nullptr, "DBD_MarketingCameraToggleDampening", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics
	{
		struct DBDMarketingCameraController_eventDBD_SetMarketingCameraControllerSensitivityModifier_Parms
		{
			float modifierValue;
			bool isEditingRight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEditingRight_MetaData[];
#endif
		static void NewProp_isEditingRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEditingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modifierValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_modifierValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight_SetBit(void* Obj)
	{
		((DBDMarketingCameraController_eventDBD_SetMarketingCameraControllerSensitivityModifier_Parms*)Obj)->isEditingRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight = { "isEditingRight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDMarketingCameraController_eventDBD_SetMarketingCameraControllerSensitivityModifier_Parms), &Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_modifierValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_modifierValue = { "modifierValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMarketingCameraController_eventDBD_SetMarketingCameraControllerSensitivityModifier_Parms, modifierValue), METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_modifierValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_modifierValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_isEditingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::NewProp_modifierValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMarketingCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMarketingCameraController, nullptr, "DBD_SetMarketingCameraControllerSensitivityModifier", nullptr, nullptr, sizeof(DBDMarketingCameraController_eventDBD_SetMarketingCameraControllerSensitivityModifier_Parms), Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics
	{
		struct DBDMarketingCameraController_eventDBD_SetMarketingCameraDampeningFactor_Parms
		{
			float accelerationFactor;
			float decelerationFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_decelerationFactor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_accelerationFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::NewProp_decelerationFactor = { "decelerationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMarketingCameraController_eventDBD_SetMarketingCameraDampeningFactor_Parms, decelerationFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::NewProp_accelerationFactor = { "accelerationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMarketingCameraController_eventDBD_SetMarketingCameraDampeningFactor_Parms, accelerationFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::NewProp_decelerationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::NewProp_accelerationFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMarketingCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMarketingCameraController, nullptr, "DBD_SetMarketingCameraDampeningFactor", nullptr, nullptr, sizeof(DBDMarketingCameraController_eventDBD_SetMarketingCameraDampeningFactor_Parms), Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics
	{
		struct DBDMarketingCameraController_eventDBD_SetMarketingCameraTriggerSensitivity_Parms
		{
			float triggerSensitivity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_triggerSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::NewProp_triggerSensitivity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::NewProp_triggerSensitivity = { "triggerSensitivity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMarketingCameraController_eventDBD_SetMarketingCameraTriggerSensitivity_Parms, triggerSensitivity), METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::NewProp_triggerSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::NewProp_triggerSensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::NewProp_triggerSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMarketingCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDMarketingCameraController, nullptr, "DBD_SetMarketingCameraTriggerSensitivity", nullptr, nullptr, sizeof(DBDMarketingCameraController_eventDBD_SetMarketingCameraTriggerSensitivity_Parms), Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDMarketingCameraController_NoRegister()
	{
		return ADBDMarketingCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ADBDMarketingCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDMarketingCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDMarketingCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDMarketingCameraController_DBD_MarketingCameraToggleDampening, "DBD_MarketingCameraToggleDampening" }, // 1128039590
		{ &Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraControllerSensitivityModifier, "DBD_SetMarketingCameraControllerSensitivityModifier" }, // 438592566
		{ &Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraDampeningFactor, "DBD_SetMarketingCameraDampeningFactor" }, // 2324870411
		{ &Z_Construct_UFunction_ADBDMarketingCameraController_DBD_SetMarketingCameraTriggerSensitivity, "DBD_SetMarketingCameraTriggerSensitivity" }, // 3027974025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDMarketingCameraController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDMarketingCameraController.h" },
		{ "ModuleRelativePath", "Public/DBDMarketingCameraController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDMarketingCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDMarketingCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDMarketingCameraController_Statics::ClassParams = {
		&ADBDMarketingCameraController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDMarketingCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDMarketingCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDMarketingCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDMarketingCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDMarketingCameraController, 3538434768);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDMarketingCameraController>()
	{
		return ADBDMarketingCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDMarketingCameraController(Z_Construct_UClass_ADBDMarketingCameraController, &ADBDMarketingCameraController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDMarketingCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDMarketingCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
