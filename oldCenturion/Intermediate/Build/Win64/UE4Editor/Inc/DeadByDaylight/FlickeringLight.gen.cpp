// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FlickeringLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlickeringLight() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFlickeringLight_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFlickeringLight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorDrivenActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_ULightIntensityTimelineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_FlickeringLightType();
// End Cross Module References
	DEFINE_FUNCTION(AFlickeringLight::execGetActiveLightComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalLightComponent**)Z_Param__Result=P_THIS->GetActiveLightComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlickeringLight::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlickeringLight::execStartFlickering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFlickering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlickeringLight::execStopFlickering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFlickering();
		P_NATIVE_END;
	}
	void AFlickeringLight::StaticRegisterNativesAFlickeringLight()
	{
		UClass* Class = AFlickeringLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveLightComponent", &AFlickeringLight::execGetActiveLightComponent },
			{ "Init", &AFlickeringLight::execInit },
			{ "StartFlickering", &AFlickeringLight::execStartFlickering },
			{ "StopFlickering", &AFlickeringLight::execStopFlickering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics
	{
		struct FlickeringLight_eventGetActiveLightComponent_Parms
		{
			ULocalLightComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlickeringLight_eventGetActiveLightComponent_Parms, ReturnValue), Z_Construct_UClass_ULocalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlickeringLight, nullptr, "GetActiveLightComponent", nullptr, nullptr, sizeof(FlickeringLight_eventGetActiveLightComponent_Parms), Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlickeringLight_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlickeringLight_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlickeringLight_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlickeringLight, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlickeringLight_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlickeringLight_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlickeringLight_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlickeringLight_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlickeringLight_StartFlickering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlickeringLight_StartFlickering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlickeringLight_StartFlickering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlickeringLight, nullptr, "StartFlickering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlickeringLight_StartFlickering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlickeringLight_StartFlickering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlickeringLight_StartFlickering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlickeringLight_StartFlickering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlickeringLight_StopFlickering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlickeringLight_StopFlickering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlickeringLight_StopFlickering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlickeringLight, nullptr, "StopFlickering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlickeringLight_StopFlickering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlickeringLight_StopFlickering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlickeringLight_StopFlickering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlickeringLight_StopFlickering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlickeringLight_NoRegister()
	{
		return AFlickeringLight::StaticClass();
	}
	struct Z_Construct_UClass_AFlickeringLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spotLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spotLightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rectLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rectLightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryPointLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__secondaryPointLightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pointLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pointLightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightIntensityTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightIntensityTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryLightSpecularScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondaryLightSpecularScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryLightAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondaryLightAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryLightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryLightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryLightTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__secondaryLightTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondaryLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumTimelimeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumTimelimeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maximumTimelimeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maximumTimelimeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTimelineSpeedRandom_MetaData[];
#endif
		static void NewProp__isTimelineSpeedRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTimelineSpeedRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorActivated_MetaData[];
#endif
		static void NewProp__generatorActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__generatorActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sourceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sourceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outerConneAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__outerConneAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__innerConneAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__innerConneAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__castShadow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__castShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detailLevelBeforeCastShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__detailLevelBeforeCastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightComponentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__lightComponentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__lightComponentType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlickeringLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneratorDrivenActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlickeringLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlickeringLight_GetActiveLightComponent, "GetActiveLightComponent" }, // 656469091
		{ &Z_Construct_UFunction_AFlickeringLight_Init, "Init" }, // 1153779855
		{ &Z_Construct_UFunction_AFlickeringLight_StartFlickering, "StartFlickering" }, // 2504360759
		{ &Z_Construct_UFunction_AFlickeringLight_StopFlickering, "StopFlickering" }, // 795630125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlickeringLight.h" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__spotLightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__spotLightComponent = { "_spotLightComponent", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _spotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__spotLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__spotLightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__rectLightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__rectLightComponent = { "_rectLightComponent", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _rectLightComponent), Z_Construct_UClass_URectLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__rectLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__rectLightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryPointLightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryPointLightComponent = { "_secondaryPointLightComponent", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryPointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryPointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryPointLightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__pointLightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__pointLightComponent = { "_pointLightComponent", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _pointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__pointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__pointLightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightIntensityTimeline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightIntensityTimeline = { "_lightIntensityTimeline", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _lightIntensityTimeline), Z_Construct_UClass_ULightIntensityTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightIntensityTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightIntensityTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightSpecularScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightSpecularScale = { "_secondaryLightSpecularScale", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryLightSpecularScale), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightSpecularScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightSpecularScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightColor = { "_secondaryLightColor", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightAttenuationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightAttenuationRadius = { "_secondaryLightAttenuationRadius", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryLightAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightRotation = { "_secondaryLightRotation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryLightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightTransform = { "_secondaryLightTransform", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryLightTransform), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FBHVRPerDetailModeBool _secondaryLightVisibility;\n" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFBHVRPerDetailModeBool _secondaryLightVisibility;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightIntensity = { "_secondaryLightIntensity", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _secondaryLightIntensity), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__minimumTimelimeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__minimumTimelimeSpeed = { "_minimumTimelimeSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _minimumTimelimeSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__minimumTimelimeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__minimumTimelimeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__maximumTimelimeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__maximumTimelimeSpeed = { "_maximumTimelimeSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _maximumTimelimeSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__maximumTimelimeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__maximumTimelimeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	void Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom_SetBit(void* Obj)
	{
		((AFlickeringLight*)Obj)->_isTimelineSpeedRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom = { "_isTimelineSpeedRandom", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlickeringLight), &Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	void Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated_SetBit(void* Obj)
	{
		((AFlickeringLight*)Obj)->_generatorActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated = { "_generatorActivated", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlickeringLight), &Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__intensity = { "_intensity", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _intensity), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceRadius = { "_sourceRadius", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _sourceRadius), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceLength = { "_sourceLength", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _sourceLength), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__outerConneAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__outerConneAngle = { "_outerConneAngle", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _outerConneAngle), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__outerConneAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__outerConneAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__innerConneAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FBHVRPerDetailModeBool _castCinematicShadowsOnly;\n" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFBHVRPerDetailModeBool _castCinematicShadowsOnly;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__innerConneAngle = { "_innerConneAngle", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _innerConneAngle), METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__innerConneAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__innerConneAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__castShadow_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__castShadow = { "_castShadow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _castShadow), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__castShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__castShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__detailLevelBeforeCastShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__detailLevelBeforeCastShadows = { "_detailLevelBeforeCastShadows", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _detailLevelBeforeCastShadows), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__detailLevelBeforeCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__detailLevelBeforeCastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlickeringLight" },
		{ "ModuleRelativePath", "Public/FlickeringLight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType = { "_lightComponentType", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlickeringLight, _lightComponentType), Z_Construct_UEnum_DeadByDaylight_FlickeringLightType, METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlickeringLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__spotLightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__rectLightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryPointLightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__pointLightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightIntensityTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightSpecularScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__secondaryLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__minimumTimelimeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__maximumTimelimeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__isTimelineSpeedRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__generatorActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__sourceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__outerConneAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__innerConneAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__castShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__detailLevelBeforeCastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlickeringLight_Statics::NewProp__lightComponentType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlickeringLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlickeringLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlickeringLight_Statics::ClassParams = {
		&AFlickeringLight::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlickeringLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlickeringLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlickeringLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlickeringLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlickeringLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlickeringLight, 3899519638);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AFlickeringLight>()
	{
		return AFlickeringLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlickeringLight(Z_Construct_UClass_AFlickeringLight, &AFlickeringLight::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AFlickeringLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlickeringLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
