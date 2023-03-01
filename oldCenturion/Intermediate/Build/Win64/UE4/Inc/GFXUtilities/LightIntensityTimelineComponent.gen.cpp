// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/LightIntensityTimelineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightIntensityTimelineComponent() {}
// Cross Module References
	GFXUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	GFXUTILITIES_API UClass* Z_Construct_UClass_ULightIntensityTimelineComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_ULightIntensityTimelineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FLightMaterialUpdate();
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FLightUpdate();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GFXUtilities, nullptr, "LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execAddLight)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_light);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLight(Z_Param_light,Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execAddMaterialHelper)
	{
		P_GET_OBJECT(UMaterialHelper,Z_Param_matHelper);
		P_GET_PROPERTY(FNameProperty,Z_Param_propName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaterialHelper(Z_Param_matHelper,Z_Param_propName,Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execDeactivateTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execRegisterForTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterForTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execSetLightCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_lightcurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightCurve(Z_Param_lightcurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execSetLightToMaxValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightToMaxValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execSetMaxLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newMaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLength(Z_Param_newMaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execSetMinLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newMinValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLength(Z_Param_newMinValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightIntensityTimelineComponent::execSetRandomizeLength)
	{
		P_GET_UBOOL(Z_Param_isRandom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRandomizeLength(Z_Param_isRandom);
		P_NATIVE_END;
	}
	void ULightIntensityTimelineComponent::StaticRegisterNativesULightIntensityTimelineComponent()
	{
		UClass* Class = ULightIntensityTimelineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLight", &ULightIntensityTimelineComponent::execAddLight },
			{ "AddMaterialHelper", &ULightIntensityTimelineComponent::execAddMaterialHelper },
			{ "DeactivateTick", &ULightIntensityTimelineComponent::execDeactivateTick },
			{ "RegisterForTick", &ULightIntensityTimelineComponent::execRegisterForTick },
			{ "Reset", &ULightIntensityTimelineComponent::execReset },
			{ "SetLightCurve", &ULightIntensityTimelineComponent::execSetLightCurve },
			{ "SetLightToMaxValue", &ULightIntensityTimelineComponent::execSetLightToMaxValue },
			{ "SetMaxLength", &ULightIntensityTimelineComponent::execSetMaxLength },
			{ "SetMinLength", &ULightIntensityTimelineComponent::execSetMinLength },
			{ "SetRandomizeLength", &ULightIntensityTimelineComponent::execSetRandomizeLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics
	{
		struct LightIntensityTimelineComponent_eventAddLight_Parms
		{
			ULightComponent* light;
			float multiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_light;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventAddLight_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_light_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventAddLight_Parms, light), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_light_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::NewProp_light,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "AddLight", nullptr, nullptr, sizeof(LightIntensityTimelineComponent_eventAddLight_Parms), Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics
	{
		struct LightIntensityTimelineComponent_eventAddMaterialHelper_Parms
		{
			UMaterialHelper* matHelper;
			FName propName;
			float multiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_propName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_matHelper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventAddMaterialHelper_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_propName = { "propName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventAddMaterialHelper_Parms, propName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_matHelper_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_matHelper = { "matHelper", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventAddMaterialHelper_Parms, matHelper), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_matHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_matHelper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_propName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::NewProp_matHelper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "AddMaterialHelper", nullptr, nullptr, sizeof(LightIntensityTimelineComponent_eventAddMaterialHelper_Parms), Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "DeactivateTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "RegisterForTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics
	{
		struct LightIntensityTimelineComponent_eventSetLightCurve_Parms
		{
			UCurveFloat* lightcurve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lightcurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::NewProp_lightcurve = { "lightcurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventSetLightCurve_Parms, lightcurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::NewProp_lightcurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "SetLightCurve", nullptr, nullptr, sizeof(LightIntensityTimelineComponent_eventSetLightCurve_Parms), Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "SetLightToMaxValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics
	{
		struct LightIntensityTimelineComponent_eventSetMaxLength_Parms
		{
			float newMaxValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newMaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::NewProp_newMaxValue = { "newMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventSetMaxLength_Parms, newMaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::NewProp_newMaxValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "SetMaxLength", nullptr, nullptr, sizeof(LightIntensityTimelineComponent_eventSetMaxLength_Parms), Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics
	{
		struct LightIntensityTimelineComponent_eventSetMinLength_Parms
		{
			float newMinValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newMinValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::NewProp_newMinValue = { "newMinValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightIntensityTimelineComponent_eventSetMinLength_Parms, newMinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::NewProp_newMinValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "SetMinLength", nullptr, nullptr, sizeof(LightIntensityTimelineComponent_eventSetMinLength_Parms), Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics
	{
		struct LightIntensityTimelineComponent_eventSetRandomizeLength_Parms
		{
			bool isRandom;
		};
		static void NewProp_isRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRandom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::NewProp_isRandom_SetBit(void* Obj)
	{
		((LightIntensityTimelineComponent_eventSetRandomizeLength_Parms*)Obj)->isRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::NewProp_isRandom = { "isRandom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightIntensityTimelineComponent_eventSetRandomizeLength_Parms), &Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::NewProp_isRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::NewProp_isRandom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightIntensityTimelineComponent, nullptr, "SetRandomizeLength", nullptr, nullptr, sizeof(LightIntensityTimelineComponent_eventSetRandomizeLength_Parms), Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightIntensityTimelineComponent_NoRegister()
	{
		return ULightIntensityTimelineComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULightIntensityTimelineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputLightUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inputLightUnit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inputLightUnit_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startTicking_MetaData[];
#endif
		static void NewProp_startTicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startTicking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normalizeCurve_MetaData[];
#endif
		static void NewProp_normalizeCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_normalizeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomizeLength_MetaData[];
#endif
		static void NewProp_randomizeLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_randomizeLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomizeStart_MetaData[];
#endif
		static void NewProp_randomizeStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_randomizeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_intensityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_intensityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialHelpers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materialHelpers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_materialHelpers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lights_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_AddLight, "AddLight" }, // 3040620360
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_AddMaterialHelper, "AddMaterialHelper" }, // 2628231959
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_DeactivateTick, "DeactivateTick" }, // 209500257
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_RegisterForTick, "RegisterForTick" }, // 3530098812
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_Reset, "Reset" }, // 426843663
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightCurve, "SetLightCurve" }, // 2914390316
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_SetLightToMaxValue, "SetLightToMaxValue" }, // 3082702581
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMaxLength, "SetMaxLength" }, // 2429193448
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_SetMinLength, "SetMinLength" }, // 3482125333
		{ &Z_Construct_UFunction_ULightIntensityTimelineComponent_SetRandomizeLength, "SetRandomizeLength" }, // 2680504933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightIntensityTimelineComponent.h" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_OnTimelineFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_OnTimelineFinished = { "OnTimelineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, OnTimelineFinished), Z_Construct_UDelegateFunction_GFXUtilities_LightIntensityTimelineComponentOnTimelineFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_OnTimelineFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_OnTimelineFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit = { "inputLightUnit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, inputLightUnit), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking_SetBit(void* Obj)
	{
		((ULightIntensityTimelineComponent*)Obj)->startTicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking = { "startTicking", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULightIntensityTimelineComponent), &Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve_SetBit(void* Obj)
	{
		((ULightIntensityTimelineComponent*)Obj)->normalizeCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve = { "normalizeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULightIntensityTimelineComponent), &Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_maxLength_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, maxLength), METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_maxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_maxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_minLength_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_minLength = { "minLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, minLength), METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_minLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_minLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength_SetBit(void* Obj)
	{
		((ULightIntensityTimelineComponent*)Obj)->randomizeLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength = { "randomizeLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULightIntensityTimelineComponent), &Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart_SetBit(void* Obj)
	{
		((ULightIntensityTimelineComponent*)Obj)->randomizeStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart = { "randomizeStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULightIntensityTimelineComponent), &Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_intensityCurve_MetaData[] = {
		{ "Category", "LightIntensityTimelineComponent" },
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_intensityCurve = { "intensityCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, intensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_intensityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_intensityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers = { "materialHelpers", nullptr, (EPropertyFlags)0x0010008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, materialHelpers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers_Inner = { "materialHelpers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLightMaterialUpdate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightIntensityTimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights = { "lights", nullptr, (EPropertyFlags)0x0010008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightIntensityTimelineComponent, lights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights_Inner = { "lights", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLightUpdate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_OnTimelineFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_inputLightUnit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_startTicking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_normalizeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_minLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_randomizeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_intensityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_materialHelpers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::NewProp_lights_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightIntensityTimelineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::ClassParams = {
		&ULightIntensityTimelineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightIntensityTimelineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightIntensityTimelineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightIntensityTimelineComponent, 253203366);
	template<> GFXUTILITIES_API UClass* StaticClass<ULightIntensityTimelineComponent>()
	{
		return ULightIntensityTimelineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightIntensityTimelineComponent(Z_Construct_UClass_ULightIntensityTimelineComponent, &ULightIntensityTimelineComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("ULightIntensityTimelineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightIntensityTimelineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
