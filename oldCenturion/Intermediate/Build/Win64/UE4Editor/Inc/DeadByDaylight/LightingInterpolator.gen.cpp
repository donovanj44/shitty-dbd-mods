// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightingInterpolator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingInterpolator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingInterpolator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightingInterpolator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABaseSky_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "LightingInterpolatorOnInterpolationDone__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULightingInterpolator::execLerpHeightFog)
	{
		P_GET_OBJECT(UExponentialHeightFogComponent,Z_Param_Target);
		P_GET_OBJECT(UExponentialHeightFogComponent,Z_Param_A);
		P_GET_OBJECT(UExponentialHeightFogComponent,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULightingInterpolator::LerpHeightFog(Z_Param_Target,Z_Param_A,Z_Param_B,Z_Param_alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightingInterpolator::execLerpLight)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_Target);
		P_GET_OBJECT(ULightComponent,Z_Param_A);
		P_GET_OBJECT(ULightComponent,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULightingInterpolator::LerpLight(Z_Param_Target,Z_Param_A,Z_Param_B,Z_Param_alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightingInterpolator::execLerpSkylight)
	{
		P_GET_OBJECT(USkyLightComponent,Z_Param_Target);
		P_GET_OBJECT(USkyLightComponent,Z_Param_A);
		P_GET_OBJECT(USkyLightComponent,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULightingInterpolator::LerpSkylight(Z_Param_Target,Z_Param_A,Z_Param_B,Z_Param_alpha);
		P_NATIVE_END;
	}
	void ULightingInterpolator::StaticRegisterNativesULightingInterpolator()
	{
		UClass* Class = ULightingInterpolator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LerpHeightFog", &ULightingInterpolator::execLerpHeightFog },
			{ "LerpLight", &ULightingInterpolator::execLerpLight },
			{ "LerpSkylight", &ULightingInterpolator::execLerpSkylight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics
	{
		struct LightingInterpolator_eventLerpHeightFog_Parms
		{
			UExponentialHeightFogComponent* Target;
			UExponentialHeightFogComponent* A;
			UExponentialHeightFogComponent* B;
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpHeightFog_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_B_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpHeightFog_Parms, B), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_A_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpHeightFog_Parms, A), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpHeightFog_Parms, Target), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingInterpolator, nullptr, "LerpHeightFog", nullptr, nullptr, sizeof(LightingInterpolator_eventLerpHeightFog_Parms), Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics
	{
		struct LightingInterpolator_eventLerpLight_Parms
		{
			ULightComponent* Target;
			ULightComponent* A;
			ULightComponent* B;
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpLight_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_B_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpLight_Parms, B), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_A_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpLight_Parms, A), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpLight_Parms, Target), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingInterpolator, nullptr, "LerpLight", nullptr, nullptr, sizeof(LightingInterpolator_eventLerpLight_Parms), Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingInterpolator_LerpLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingInterpolator_LerpLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics
	{
		struct LightingInterpolator_eventLerpSkylight_Parms
		{
			USkyLightComponent* Target;
			USkyLightComponent* A;
			USkyLightComponent* B;
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpSkylight_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_B_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpSkylight_Parms, B), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_A_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpSkylight_Parms, A), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightingInterpolator_eventLerpSkylight_Parms, Target), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightingInterpolator, nullptr, "LerpSkylight", nullptr, nullptr, sizeof(LightingInterpolator_eventLerpSkylight_Parms), Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightingInterpolator_LerpSkylight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightingInterpolator_LerpSkylight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightingInterpolator_NoRegister()
	{
		return ULightingInterpolator::StaticClass();
	}
	struct Z_Construct_UClass_ULightingInterpolator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetLighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterpolationDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpolationDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightingInterpolator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightingInterpolator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightingInterpolator_LerpHeightFog, "LerpHeightFog" }, // 3736370081
		{ &Z_Construct_UFunction_ULightingInterpolator_LerpLight, "LerpLight" }, // 3336222729
		{ &Z_Construct_UFunction_ULightingInterpolator_LerpSkylight, "LerpSkylight" }, // 844615584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingInterpolator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightingInterpolator.h" },
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingInterpolator_Statics::NewProp__targetLighting_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightingInterpolator_Statics::NewProp__targetLighting = { "_targetLighting", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingInterpolator, _targetLighting), Z_Construct_UClass_ABaseSky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingInterpolator_Statics::NewProp__targetLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingInterpolator_Statics::NewProp__targetLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingInterpolator_Statics::NewProp_OnInterpolationDone_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightingInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULightingInterpolator_Statics::NewProp_OnInterpolationDone = { "OnInterpolationDone", nullptr, (EPropertyFlags)0x0010000000082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingInterpolator, OnInterpolationDone), Z_Construct_UDelegateFunction_DeadByDaylight_LightingInterpolatorOnInterpolationDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULightingInterpolator_Statics::NewProp_OnInterpolationDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingInterpolator_Statics::NewProp_OnInterpolationDone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightingInterpolator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingInterpolator_Statics::NewProp__targetLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingInterpolator_Statics::NewProp_OnInterpolationDone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightingInterpolator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightingInterpolator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightingInterpolator_Statics::ClassParams = {
		&ULightingInterpolator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightingInterpolator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightingInterpolator_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightingInterpolator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingInterpolator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightingInterpolator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightingInterpolator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightingInterpolator, 2083388382);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULightingInterpolator>()
	{
		return ULightingInterpolator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightingInterpolator(Z_Construct_UClass_ULightingInterpolator, &ULightingInterpolator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULightingInterpolator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightingInterpolator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
