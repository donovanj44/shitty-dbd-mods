// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/AimPointPerlinNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimPointPerlinNoise() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimPointPerlinNoise_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimPointPerlinNoise();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAimPointProcessor();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UAimPointPerlinNoise::execSetBaseInaccuracyNoiseAmplitude)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseInaccuracyNoiseAmplitude(Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimPointPerlinNoise::execSetBaseInaccuracyNoiseFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseInaccuracyNoiseFrequency(Z_Param_frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimPointPerlinNoise::execSetBaseInaccuracyNoiseOctaveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_octaveCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseInaccuracyNoiseOctaveCount(Z_Param_octaveCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimPointPerlinNoise::execSetBaseInaccuracyNoisePersistence)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_noisePersistence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseInaccuracyNoisePersistence(Z_Param_noisePersistence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimPointPerlinNoise::execSetNoiseAmplitudeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoiseAmplitudeMultiplier(Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAimPointPerlinNoise::execSetNoiseFrequencyMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoiseFrequencyMultiplier(Z_Param_multiplier);
		P_NATIVE_END;
	}
	void UAimPointPerlinNoise::StaticRegisterNativesUAimPointPerlinNoise()
	{
		UClass* Class = UAimPointPerlinNoise::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBaseInaccuracyNoiseAmplitude", &UAimPointPerlinNoise::execSetBaseInaccuracyNoiseAmplitude },
			{ "SetBaseInaccuracyNoiseFrequency", &UAimPointPerlinNoise::execSetBaseInaccuracyNoiseFrequency },
			{ "SetBaseInaccuracyNoiseOctaveCount", &UAimPointPerlinNoise::execSetBaseInaccuracyNoiseOctaveCount },
			{ "SetBaseInaccuracyNoisePersistence", &UAimPointPerlinNoise::execSetBaseInaccuracyNoisePersistence },
			{ "SetNoiseAmplitudeMultiplier", &UAimPointPerlinNoise::execSetNoiseAmplitudeMultiplier },
			{ "SetNoiseFrequencyMultiplier", &UAimPointPerlinNoise::execSetNoiseFrequencyMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics
	{
		struct AimPointPerlinNoise_eventSetBaseInaccuracyNoiseAmplitude_Parms
		{
			float amplitude;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimPointPerlinNoise_eventSetBaseInaccuracyNoiseAmplitude_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::NewProp_amplitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::NewProp_amplitude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimPointPerlinNoise, nullptr, "SetBaseInaccuracyNoiseAmplitude", nullptr, nullptr, sizeof(AimPointPerlinNoise_eventSetBaseInaccuracyNoiseAmplitude_Parms), Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics
	{
		struct AimPointPerlinNoise_eventSetBaseInaccuracyNoiseFrequency_Parms
		{
			float frequency;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimPointPerlinNoise_eventSetBaseInaccuracyNoiseFrequency_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::NewProp_frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::NewProp_frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimPointPerlinNoise, nullptr, "SetBaseInaccuracyNoiseFrequency", nullptr, nullptr, sizeof(AimPointPerlinNoise_eventSetBaseInaccuracyNoiseFrequency_Parms), Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics
	{
		struct AimPointPerlinNoise_eventSetBaseInaccuracyNoiseOctaveCount_Parms
		{
			int32 octaveCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_octaveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_octaveCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::NewProp_octaveCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::NewProp_octaveCount = { "octaveCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimPointPerlinNoise_eventSetBaseInaccuracyNoiseOctaveCount_Parms, octaveCount), METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::NewProp_octaveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::NewProp_octaveCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::NewProp_octaveCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimPointPerlinNoise, nullptr, "SetBaseInaccuracyNoiseOctaveCount", nullptr, nullptr, sizeof(AimPointPerlinNoise_eventSetBaseInaccuracyNoiseOctaveCount_Parms), Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics
	{
		struct AimPointPerlinNoise_eventSetBaseInaccuracyNoisePersistence_Parms
		{
			float noisePersistence;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noisePersistence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_noisePersistence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::NewProp_noisePersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::NewProp_noisePersistence = { "noisePersistence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimPointPerlinNoise_eventSetBaseInaccuracyNoisePersistence_Parms, noisePersistence), METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::NewProp_noisePersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::NewProp_noisePersistence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::NewProp_noisePersistence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimPointPerlinNoise, nullptr, "SetBaseInaccuracyNoisePersistence", nullptr, nullptr, sizeof(AimPointPerlinNoise_eventSetBaseInaccuracyNoisePersistence_Parms), Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics
	{
		struct AimPointPerlinNoise_eventSetNoiseAmplitudeMultiplier_Parms
		{
			float multiplier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimPointPerlinNoise_eventSetNoiseAmplitudeMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimPointPerlinNoise, nullptr, "SetNoiseAmplitudeMultiplier", nullptr, nullptr, sizeof(AimPointPerlinNoise_eventSetNoiseAmplitudeMultiplier_Parms), Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics
	{
		struct AimPointPerlinNoise_eventSetNoiseFrequencyMultiplier_Parms
		{
			float multiplier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AimPointPerlinNoise_eventSetNoiseFrequencyMultiplier_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimPointPerlinNoise, nullptr, "SetNoiseFrequencyMultiplier", nullptr, nullptr, sizeof(AimPointPerlinNoise_eventSetNoiseFrequencyMultiplier_Parms), Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAimPointPerlinNoise_NoRegister()
	{
		return UAimPointPerlinNoise::StaticClass();
	}
	struct Z_Construct_UClass_UAimPointPerlinNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseInaccuracyNoiseFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__baseInaccuracyNoiseFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseInaccuracyNoiseAmplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__baseInaccuracyNoiseAmplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseInaccuracyNoiseOctaveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__baseInaccuracyNoiseOctaveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseInaccuracyNoisePersistence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__baseInaccuracyNoisePersistence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimPointPerlinNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAimPointProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAimPointPerlinNoise_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude, "SetBaseInaccuracyNoiseAmplitude" }, // 436940337
		{ &Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency, "SetBaseInaccuracyNoiseFrequency" }, // 2483341861
		{ &Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount, "SetBaseInaccuracyNoiseOctaveCount" }, // 2282262545
		{ &Z_Construct_UFunction_UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence, "SetBaseInaccuracyNoisePersistence" }, // 424040303
		{ &Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier, "SetNoiseAmplitudeMultiplier" }, // 2351098759
		{ &Z_Construct_UFunction_UAimPointPerlinNoise_SetNoiseFrequencyMultiplier, "SetNoiseFrequencyMultiplier" }, // 3598838336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointPerlinNoise_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AimPointPerlinNoise.h" },
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__timeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__timeOffset = { "_timeOffset", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimPointPerlinNoise, _timeOffset), METADATA_PARAMS(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__timeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__timeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimPointPerlinNoise" },
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseFrequency = { "_baseInaccuracyNoiseFrequency", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoiseFrequency), METADATA_PARAMS(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseAmplitude_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimPointPerlinNoise" },
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseAmplitude = { "_baseInaccuracyNoiseAmplitude", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoiseAmplitude), METADATA_PARAMS(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseAmplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseOctaveCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimPointPerlinNoise" },
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseOctaveCount = { "_baseInaccuracyNoiseOctaveCount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoiseOctaveCount), METADATA_PARAMS(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseOctaveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseOctaveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoisePersistence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AimPointPerlinNoise" },
		{ "ModuleRelativePath", "Public/AimPointPerlinNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoisePersistence = { "_baseInaccuracyNoisePersistence", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimPointPerlinNoise, _baseInaccuracyNoisePersistence), METADATA_PARAMS(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoisePersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoisePersistence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimPointPerlinNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__timeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseAmplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoiseOctaveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimPointPerlinNoise_Statics::NewProp__baseInaccuracyNoisePersistence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimPointPerlinNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimPointPerlinNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimPointPerlinNoise_Statics::ClassParams = {
		&UAimPointPerlinNoise::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAimPointPerlinNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAimPointPerlinNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimPointPerlinNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimPointPerlinNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimPointPerlinNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimPointPerlinNoise, 289562255);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UAimPointPerlinNoise>()
	{
		return UAimPointPerlinNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimPointPerlinNoise(Z_Construct_UClass_UAimPointPerlinNoise, &UAimPointPerlinNoise::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UAimPointPerlinNoise"), false, nullptr, nullptr, nullptr);

	void UAimPointPerlinNoise::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__timeOffset(TEXT("_timeOffset"));

		const bool bIsValid = true
			&& Name__timeOffset == ClassReps[(int32)ENetFields_Private::_timeOffset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAimPointPerlinNoise"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimPointPerlinNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
