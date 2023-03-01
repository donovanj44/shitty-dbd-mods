// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/BombLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombLauncher() {}
// Cross Module References
	THECLOWN_API UClass* Z_Construct_UClass_UBombLauncher_NoRegister();
	THECLOWN_API UClass* Z_Construct_UClass_UBombLauncher();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileLauncher();
	UPackage* Z_Construct_UPackage__Script_TheClown();
	THECLOWN_API UEnum* Z_Construct_UEnum_TheClown_EBombType();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBombLauncher::execGetCurrentBombType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBombType*)Z_Param__Result=P_THIS->GetCurrentBombType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execGetPercentThrowStrenght)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentThrowStrenght();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execIsBombFullyCharged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBombFullyCharged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execLocalLaunch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentThrowStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalLaunch(Z_Param_percentThrowStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execServer_SwitchBombType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SwitchBombType_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_SwitchBombType_Validate"));
			return;
		}
		P_THIS->Server_SwitchBombType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execSetPercentThrowStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_throwStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPercentThrowStrength(Z_Param_throwStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execSetProjectilePitchCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_newProjectilePitchCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectilePitchCurve(Z_Param_newProjectilePitchCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBombLauncher::execSetProjectileSpeedCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_newProjectileSpeedCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectileSpeedCurve(Z_Param_newProjectileSpeedCurve);
		P_NATIVE_END;
	}
	static FName NAME_UBombLauncher_Local_SwitchBombType = FName(TEXT("Local_SwitchBombType"));
	void UBombLauncher::Local_SwitchBombType()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBombLauncher_Local_SwitchBombType),NULL);
	}
	static FName NAME_UBombLauncher_Server_SwitchBombType = FName(TEXT("Server_SwitchBombType"));
	void UBombLauncher::Server_SwitchBombType()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBombLauncher_Server_SwitchBombType),NULL);
	}
	void UBombLauncher::StaticRegisterNativesUBombLauncher()
	{
		UClass* Class = UBombLauncher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentBombType", &UBombLauncher::execGetCurrentBombType },
			{ "GetPercentThrowStrenght", &UBombLauncher::execGetPercentThrowStrenght },
			{ "IsBombFullyCharged", &UBombLauncher::execIsBombFullyCharged },
			{ "LocalLaunch", &UBombLauncher::execLocalLaunch },
			{ "Server_SwitchBombType", &UBombLauncher::execServer_SwitchBombType },
			{ "SetPercentThrowStrength", &UBombLauncher::execSetPercentThrowStrength },
			{ "SetProjectilePitchCurve", &UBombLauncher::execSetProjectilePitchCurve },
			{ "SetProjectileSpeedCurve", &UBombLauncher::execSetProjectileSpeedCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics
	{
		struct BombLauncher_eventGetCurrentBombType_Parms
		{
			EBombType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombLauncher_eventGetCurrentBombType_Parms, ReturnValue), Z_Construct_UEnum_TheClown_EBombType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "GetCurrentBombType", nullptr, nullptr, sizeof(BombLauncher_eventGetCurrentBombType_Parms), Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_GetCurrentBombType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_GetCurrentBombType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics
	{
		struct BombLauncher_eventGetPercentThrowStrenght_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombLauncher_eventGetPercentThrowStrenght_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "GetPercentThrowStrenght", nullptr, nullptr, sizeof(BombLauncher_eventGetPercentThrowStrenght_Parms), Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics
	{
		struct BombLauncher_eventIsBombFullyCharged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BombLauncher_eventIsBombFullyCharged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BombLauncher_eventIsBombFullyCharged_Parms), &Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "IsBombFullyCharged", nullptr, nullptr, sizeof(BombLauncher_eventIsBombFullyCharged_Parms), Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "Local_SwitchBombType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics
	{
		struct BombLauncher_eventLocalLaunch_Parms
		{
			float percentThrowStrength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentThrowStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::NewProp_percentThrowStrength = { "percentThrowStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombLauncher_eventLocalLaunch_Parms, percentThrowStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::NewProp_percentThrowStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "LocalLaunch", nullptr, nullptr, sizeof(BombLauncher_eventLocalLaunch_Parms), Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_LocalLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_LocalLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "Server_SwitchBombType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics
	{
		struct BombLauncher_eventSetPercentThrowStrength_Parms
		{
			float throwStrength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throwStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::NewProp_throwStrength = { "throwStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombLauncher_eventSetPercentThrowStrength_Parms, throwStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::NewProp_throwStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "SetPercentThrowStrength", nullptr, nullptr, sizeof(BombLauncher_eventSetPercentThrowStrength_Parms), Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics
	{
		struct BombLauncher_eventSetProjectilePitchCurve_Parms
		{
			UCurveFloat* newProjectilePitchCurve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newProjectilePitchCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::NewProp_newProjectilePitchCurve = { "newProjectilePitchCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombLauncher_eventSetProjectilePitchCurve_Parms, newProjectilePitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::NewProp_newProjectilePitchCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "SetProjectilePitchCurve", nullptr, nullptr, sizeof(BombLauncher_eventSetProjectilePitchCurve_Parms), Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics
	{
		struct BombLauncher_eventSetProjectileSpeedCurve_Parms
		{
			UCurveFloat* newProjectileSpeedCurve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newProjectileSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::NewProp_newProjectileSpeedCurve = { "newProjectileSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombLauncher_eventSetProjectileSpeedCurve_Parms, newProjectileSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::NewProp_newProjectileSpeedCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombLauncher, nullptr, "SetProjectileSpeedCurve", nullptr, nullptr, sizeof(BombLauncher_eventSetProjectileSpeedCurve_Parms), Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBombLauncher_NoRegister()
	{
		return UBombLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UBombLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentBombType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentBombType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentBombType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__speedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBombLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerProjectileLauncher,
		(UObject* (*)())Z_Construct_UPackage__Script_TheClown,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBombLauncher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBombLauncher_GetCurrentBombType, "GetCurrentBombType" }, // 312799025
		{ &Z_Construct_UFunction_UBombLauncher_GetPercentThrowStrenght, "GetPercentThrowStrenght" }, // 3131894975
		{ &Z_Construct_UFunction_UBombLauncher_IsBombFullyCharged, "IsBombFullyCharged" }, // 2377328209
		{ &Z_Construct_UFunction_UBombLauncher_Local_SwitchBombType, "Local_SwitchBombType" }, // 673939447
		{ &Z_Construct_UFunction_UBombLauncher_LocalLaunch, "LocalLaunch" }, // 1640637014
		{ &Z_Construct_UFunction_UBombLauncher_Server_SwitchBombType, "Server_SwitchBombType" }, // 3034720532
		{ &Z_Construct_UFunction_UBombLauncher_SetPercentThrowStrength, "SetPercentThrowStrength" }, // 618652658
		{ &Z_Construct_UFunction_UBombLauncher_SetProjectilePitchCurve, "SetProjectilePitchCurve" }, // 96798296
		{ &Z_Construct_UFunction_UBombLauncher_SetProjectileSpeedCurve, "SetProjectileSpeedCurve" }, // 2506256440
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BombLauncher.h" },
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType_MetaData[] = {
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType = { "_currentBombType", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombLauncher, _currentBombType), Z_Construct_UEnum_TheClown_EBombType, METADATA_PARAMS(Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombLauncher_Statics::NewProp__pitchCurve_MetaData[] = {
		{ "Category", "BombLauncher" },
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBombLauncher_Statics::NewProp__pitchCurve = { "_pitchCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombLauncher, _pitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBombLauncher_Statics::NewProp__pitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombLauncher_Statics::NewProp__pitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombLauncher_Statics::NewProp__speedCurve_MetaData[] = {
		{ "Category", "BombLauncher" },
		{ "ModuleRelativePath", "Public/BombLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBombLauncher_Statics::NewProp__speedCurve = { "_speedCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombLauncher, _speedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBombLauncher_Statics::NewProp__speedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombLauncher_Statics::NewProp__speedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBombLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombLauncher_Statics::NewProp__currentBombType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombLauncher_Statics::NewProp__pitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombLauncher_Statics::NewProp__speedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBombLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBombLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBombLauncher_Statics::ClassParams = {
		&UBombLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBombLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBombLauncher_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBombLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBombLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBombLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBombLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBombLauncher, 2750151757);
	template<> THECLOWN_API UClass* StaticClass<UBombLauncher>()
	{
		return UBombLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBombLauncher(Z_Construct_UClass_UBombLauncher, &UBombLauncher::StaticClass, TEXT("/Script/TheClown"), TEXT("UBombLauncher"), false, nullptr, nullptr, nullptr);

	void UBombLauncher::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentBombType(TEXT("_currentBombType"));

		const bool bIsValid = true
			&& Name__currentBombType == ClassReps[(int32)ENetFields_Private::_currentBombType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBombLauncher"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
