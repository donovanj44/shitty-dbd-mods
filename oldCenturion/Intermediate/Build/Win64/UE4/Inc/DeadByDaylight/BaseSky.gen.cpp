// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseSky.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSky() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFadeable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseSky::execCopyComponentsSettingsFromSource)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_moonMesh);
		P_GET_OBJECT(UDirectionalLightComponent,Z_Param_shadowLight);
		P_GET_OBJECT(UDirectionalLightComponent,Z_Param_godRayLight);
		P_GET_OBJECT(USkyLightComponent,Z_Param_skylight);
		P_GET_OBJECT(UExponentialHeightFogComponent,Z_Param_heightFog);
		P_GET_OBJECT(UPostProcessComponent,Z_Param_postProcess);
		P_GET_OBJECT(UClass,Z_Param_sourceBaseSkyClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyComponentsSettingsFromSource(Z_Param_moonMesh,Z_Param_shadowLight,Z_Param_godRayLight,Z_Param_skylight,Z_Param_heightFog,Z_Param_postProcess,Z_Param_sourceBaseSkyClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseSky::execGetPostprocessComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPostProcessComponent**)Z_Param__Result=P_THIS->GetPostprocessComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseSky::execOnAlphaChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newAlpha);
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAlphaChanged_Implementation(Z_Param_newAlpha,Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseSky::execOnFadeBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeBegin_Implementation(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseSky::execOnFadeEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeEnd_Implementation(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseSky::execSetCullDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newCullDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCullDistance(Z_Param_newCullDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseSky::execSetProbesTint)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_inColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inSaturation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProbesTint(Z_Param_inColor,Z_Param_inSaturation);
		P_NATIVE_END;
	}
	static FName NAME_ABaseSky_GetPostprocessComponent = FName(TEXT("GetPostprocessComponent"));
	UPostProcessComponent* ABaseSky::GetPostprocessComponent()
	{
		BaseSky_eventGetPostprocessComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ABaseSky_GetPostprocessComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseSky_OnAlphaChanged = FName(TEXT("OnAlphaChanged"));
	void ABaseSky::OnAlphaChanged(float newAlpha, AActor* other)
	{
		BaseSky_eventOnAlphaChanged_Parms Parms;
		Parms.newAlpha=newAlpha;
		Parms.other=other;
		ProcessEvent(FindFunctionChecked(NAME_ABaseSky_OnAlphaChanged),&Parms);
	}
	static FName NAME_ABaseSky_OnFadeBegin = FName(TEXT("OnFadeBegin"));
	void ABaseSky::OnFadeBegin(AActor* other)
	{
		BaseSky_eventOnFadeBegin_Parms Parms;
		Parms.other=other;
		ProcessEvent(FindFunctionChecked(NAME_ABaseSky_OnFadeBegin),&Parms);
	}
	static FName NAME_ABaseSky_OnFadeEnd = FName(TEXT("OnFadeEnd"));
	void ABaseSky::OnFadeEnd(AActor* other)
	{
		BaseSky_eventOnFadeEnd_Parms Parms;
		Parms.other=other;
		ProcessEvent(FindFunctionChecked(NAME_ABaseSky_OnFadeEnd),&Parms);
	}
	static FName NAME_ABaseSky_ToggleDreamworldLighting = FName(TEXT("ToggleDreamworldLighting"));
	void ABaseSky::ToggleDreamworldLighting(bool toggleOn)
	{
		BaseSky_eventToggleDreamworldLighting_Parms Parms;
		Parms.toggleOn=toggleOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseSky_ToggleDreamworldLighting),&Parms);
	}
	void ABaseSky::StaticRegisterNativesABaseSky()
	{
		UClass* Class = ABaseSky::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyComponentsSettingsFromSource", &ABaseSky::execCopyComponentsSettingsFromSource },
			{ "GetPostprocessComponent", &ABaseSky::execGetPostprocessComponent },
			{ "OnAlphaChanged", &ABaseSky::execOnAlphaChanged },
			{ "OnFadeBegin", &ABaseSky::execOnFadeBegin },
			{ "OnFadeEnd", &ABaseSky::execOnFadeEnd },
			{ "SetCullDistance", &ABaseSky::execSetCullDistance },
			{ "SetProbesTint", &ABaseSky::execSetProbesTint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics
	{
		struct BaseSky_eventCopyComponentsSettingsFromSource_Parms
		{
			UStaticMeshComponent* moonMesh;
			UDirectionalLightComponent* shadowLight;
			UDirectionalLightComponent* godRayLight;
			USkyLightComponent* skylight;
			UExponentialHeightFogComponent* heightFog;
			UPostProcessComponent* postProcess;
			UClass* sourceBaseSkyClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_sourceBaseSkyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_postProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_postProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_heightFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_heightFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skylight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skylight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_godRayLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_godRayLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shadowLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shadowLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moonMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_sourceBaseSkyClass = { "sourceBaseSkyClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, sourceBaseSkyClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_postProcess_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_postProcess = { "postProcess", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, postProcess), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_postProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_postProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_heightFog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_heightFog = { "heightFog", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, heightFog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_heightFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_heightFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_skylight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_skylight = { "skylight", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, skylight), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_skylight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_skylight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_godRayLight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_godRayLight = { "godRayLight", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, godRayLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_godRayLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_godRayLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_shadowLight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_shadowLight = { "shadowLight", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, shadowLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_shadowLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_shadowLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_moonMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_moonMesh = { "moonMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventCopyComponentsSettingsFromSource_Parms, moonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_moonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_moonMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_sourceBaseSkyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_postProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_heightFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_skylight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_godRayLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_shadowLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::NewProp_moonMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "CopyComponentsSettingsFromSource", nullptr, nullptr, sizeof(BaseSky_eventCopyComponentsSettingsFromSource_Parms), Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventGetPostprocessComponent_Parms, ReturnValue), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "GetPostprocessComponent", nullptr, nullptr, sizeof(BaseSky_eventGetPostprocessComponent_Parms), Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_GetPostprocessComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_GetPostprocessComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventOnAlphaChanged_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::NewProp_newAlpha = { "newAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventOnAlphaChanged_Parms, newAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::NewProp_newAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "OnAlphaChanged", nullptr, nullptr, sizeof(BaseSky_eventOnAlphaChanged_Parms), Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_OnAlphaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_OnAlphaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventOnFadeBegin_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "OnFadeBegin", nullptr, nullptr, sizeof(BaseSky_eventOnFadeBegin_Parms), Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_OnFadeBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_OnFadeBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventOnFadeEnd_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "OnFadeEnd", nullptr, nullptr, sizeof(BaseSky_eventOnFadeEnd_Parms), Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_OnFadeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_OnFadeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics
	{
		struct BaseSky_eventSetCullDistance_Parms
		{
			float newCullDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newCullDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::NewProp_newCullDistance = { "newCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventSetCullDistance_Parms, newCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::NewProp_newCullDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "SetCullDistance", nullptr, nullptr, sizeof(BaseSky_eventSetCullDistance_Parms), Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_SetCullDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_SetCullDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics
	{
		struct BaseSky_eventSetProbesTint_Parms
		{
			FLinearColor inColor;
			float inSaturation;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inSaturation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::NewProp_inSaturation = { "inSaturation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventSetProbesTint_Parms, inSaturation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::NewProp_inColor = { "inColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSky_eventSetProbesTint_Parms, inColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::NewProp_inSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::NewProp_inColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "SetProbesTint", nullptr, nullptr, sizeof(BaseSky_eventSetProbesTint_Parms), Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_SetProbesTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_SetProbesTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics
	{
		static void NewProp_toggleOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toggleOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::NewProp_toggleOn_SetBit(void* Obj)
	{
		((BaseSky_eventToggleDreamworldLighting_Parms*)Obj)->toggleOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::NewProp_toggleOn = { "toggleOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseSky_eventToggleDreamworldLighting_Parms), &Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::NewProp_toggleOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::NewProp_toggleOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSky, nullptr, "ToggleDreamworldLighting", nullptr, nullptr, sizeof(BaseSky_eventToggleDreamworldLighting_Parms), Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseSky_NoRegister()
	{
		return ABaseSky::StaticClass();
	}
	struct Z_Construct_UClass_ABaseSky_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbesSaturationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbesSaturationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbesTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProbesTintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IBLContributionMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IBLContributionMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableIBL_MetaData[];
#endif
		static void NewProp_EnableIBL_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableIBL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustCullDistance_MetaData[];
#endif
		static void NewProp_AdjustCullDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdjustCullDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseSky_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseSky_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseSky_CopyComponentsSettingsFromSource, "CopyComponentsSettingsFromSource" }, // 593951969
		{ &Z_Construct_UFunction_ABaseSky_GetPostprocessComponent, "GetPostprocessComponent" }, // 574840432
		{ &Z_Construct_UFunction_ABaseSky_OnAlphaChanged, "OnAlphaChanged" }, // 4268547309
		{ &Z_Construct_UFunction_ABaseSky_OnFadeBegin, "OnFadeBegin" }, // 295961284
		{ &Z_Construct_UFunction_ABaseSky_OnFadeEnd, "OnFadeEnd" }, // 2591390384
		{ &Z_Construct_UFunction_ABaseSky_SetCullDistance, "SetCullDistance" }, // 2570285145
		{ &Z_Construct_UFunction_ABaseSky_SetProbesTint, "SetProbesTint" }, // 1560083357
		{ &Z_Construct_UFunction_ABaseSky_ToggleDreamworldLighting, "ToggleDreamworldLighting" }, // 254439553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSky_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseSky.h" },
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesSaturationValue_MetaData[] = {
		{ "Category", "BaseSky" },
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesSaturationValue = { "ProbesSaturationValue", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSky, ProbesSaturationValue), METADATA_PARAMS(Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesSaturationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesSaturationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesTintColor_MetaData[] = {
		{ "Category", "BaseSky" },
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesTintColor = { "ProbesTintColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSky, ProbesTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesTintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSky_Statics::NewProp_IBLContributionMultiplier_MetaData[] = {
		{ "Category", "BaseSky" },
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseSky_Statics::NewProp_IBLContributionMultiplier = { "IBLContributionMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSky, IBLContributionMultiplier), METADATA_PARAMS(Z_Construct_UClass_ABaseSky_Statics::NewProp_IBLContributionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::NewProp_IBLContributionMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL_MetaData[] = {
		{ "Category", "BaseSky" },
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	void Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL_SetBit(void* Obj)
	{
		((ABaseSky*)Obj)->EnableIBL = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL = { "EnableIBL", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseSky), &Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance_MetaData[] = {
		{ "Category", "BaseSky" },
		{ "ModuleRelativePath", "Public/BaseSky.h" },
	};
#endif
	void Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance_SetBit(void* Obj)
	{
		((ABaseSky*)Obj)->AdjustCullDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance = { "AdjustCullDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseSky), &Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseSky_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesSaturationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSky_Statics::NewProp_ProbesTintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSky_Statics::NewProp_IBLContributionMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSky_Statics::NewProp_EnableIBL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSky_Statics::NewProp_AdjustCullDistance,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseSky_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFadeable_NoRegister, (int32)VTABLE_OFFSET(ABaseSky, IFadeable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSky_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSky>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseSky_Statics::ClassParams = {
		&ABaseSky::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseSky_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseSky_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSky_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseSky()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseSky_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseSky, 3952195847);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ABaseSky>()
	{
		return ABaseSky::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseSky(Z_Construct_UClass_ABaseSky, &ABaseSky::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ABaseSky"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseSky);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
