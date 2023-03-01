// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightingHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingHelper() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingHelper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingFactory_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingInterpolator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULightingHelper::execDBD_ModifyExposure)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ModifyExposure(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightingHelper::execGetSourceLevelLightingClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetSourceLevelLightingClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightingHelper::execGetTextureCube)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_mapTheme);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureCube**)Z_Param__Result=P_THIS->GetTextureCube(Z_Param_mapTheme);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightingHelper::execToggleDreamworldLighting)
	{
		P_GET_UBOOL(Z_Param_bActivateDreamworld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDreamworldLighting(Z_Param_bActivateDreamworld);
		P_NATIVE_END;
	}
	void ULightingHelper::StaticRegisterNativesULightingHelper()
	{
		UClass* Class = ULightingHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_ModifyExposure", &ULightingHelper::execDBD_ModifyExposure },
			{ "GetSourceLevelLightingClass", &ULightingHelper::execGetSourceLevelLightingClass },
			{ "GetTextureCube", &ULightingHelper::execGetTextureCube },
			{ "ToggleDreamworldLighting", &ULightingHelper::execToggleDreamworldLighting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics
	{
		struct LightingHelper_eventDBD_ModifyExposure_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingHelper_eventDBD_ModifyExposure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingHelper, nullptr, "DBD_ModifyExposure", nullptr, nullptr, sizeof(LightingHelper_eventDBD_ModifyExposure_Parms), Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics
	{
		struct LightingHelper_eventGetSourceLevelLightingClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingHelper_eventGetSourceLevelLightingClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingHelper, nullptr, "GetSourceLevelLightingClass", nullptr, nullptr, sizeof(LightingHelper_eventGetSourceLevelLightingClass_Parms), Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics
	{
		struct LightingHelper_eventGetTextureCube_Parms
		{
			FName mapTheme;
			UTextureCube* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mapTheme;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingHelper_eventGetTextureCube_Parms, ReturnValue), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::NewProp_mapTheme = { "mapTheme", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingHelper_eventGetTextureCube_Parms, mapTheme), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::NewProp_mapTheme,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingHelper, nullptr, "GetTextureCube", nullptr, nullptr, sizeof(LightingHelper_eventGetTextureCube_Parms), Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingHelper_GetTextureCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingHelper_GetTextureCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics
	{
		struct LightingHelper_eventToggleDreamworldLighting_Parms
		{
			bool bActivateDreamworld;
		};
		static void NewProp_bActivateDreamworld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateDreamworld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::NewProp_bActivateDreamworld_SetBit(void* Obj)
	{
		((LightingHelper_eventToggleDreamworldLighting_Parms*)Obj)->bActivateDreamworld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::NewProp_bActivateDreamworld = { "bActivateDreamworld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightingHelper_eventToggleDreamworldLighting_Parms), &Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::NewProp_bActivateDreamworld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::NewProp_bActivateDreamworld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingHelper, nullptr, "ToggleDreamworldLighting", nullptr, nullptr, sizeof(LightingHelper_eventToggleDreamworldLighting_Parms), Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightingHelper_NoRegister()
	{
		return ULightingHelper::StaticClass();
	}
	struct Z_Construct_UClass_ULightingHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bIsDreamworldActive_MetaData[];
#endif
		static void NewProp__bIsDreamworldActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIsDreamworldActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__postProcessCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__postProcessCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightingFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightingFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lightingInterpolator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lightingInterpolator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__adaptiveShadowMapControllersActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__adaptiveShadowMapControllersActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelLightingWithoutExposure_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__levelLightingWithoutExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelLightingSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__levelLightingSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelLightingFixed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__levelLightingFixed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelLighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__levelLighting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightingHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightingHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightingHelper_DBD_ModifyExposure, "DBD_ModifyExposure" }, // 1605300823
		{ &Z_Construct_UFunction_ULightingHelper_GetSourceLevelLightingClass, "GetSourceLevelLightingClass" }, // 1950141111
		{ &Z_Construct_UFunction_ULightingHelper_GetTextureCube, "GetTextureCube" }, // 3295253024
		{ &Z_Construct_UFunction_ULightingHelper_ToggleDreamworldLighting, "ToggleDreamworldLighting" }, // 2763333010
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightingHelper.h" },
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	void Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive_SetBit(void* Obj)
	{
		((ULightingHelper*)Obj)->_bIsDreamworldActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive = { "_bIsDreamworldActive", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULightingHelper), &Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__postProcessCache_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__postProcessCache = { "_postProcessCache", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _postProcessCache), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__postProcessCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__postProcessCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingFactory = { "_lightingFactory", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _lightingFactory), Z_Construct_UClass_ULightingFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingInterpolator_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingInterpolator = { "_lightingInterpolator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _lightingInterpolator), Z_Construct_UClass_ULightingInterpolator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingInterpolator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__adaptiveShadowMapControllersActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__adaptiveShadowMapControllersActor = { "_adaptiveShadowMapControllersActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _adaptiveShadowMapControllersActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__adaptiveShadowMapControllersActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__adaptiveShadowMapControllersActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingWithoutExposure_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingWithoutExposure = { "_levelLightingWithoutExposure", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _levelLightingWithoutExposure), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingWithoutExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingWithoutExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingSpawned = { "_levelLightingSpawned", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _levelLightingSpawned), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingFixed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingFixed = { "_levelLightingFixed", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _levelLightingFixed), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingFixed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingFixed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLighting_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLighting = { "_levelLighting", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingHelper, _levelLighting), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLighting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightingHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__bIsDreamworldActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__postProcessCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__lightingInterpolator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__adaptiveShadowMapControllersActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingWithoutExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLightingFixed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingHelper_Statics::NewProp__levelLighting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightingHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightingHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightingHelper_Statics::ClassParams = {
		&ULightingHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightingHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightingHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightingHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightingHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightingHelper, 2340027439);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULightingHelper>()
	{
		return ULightingHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightingHelper(Z_Construct_UClass_ULightingHelper, &ULightingHelper::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULightingHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightingHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
