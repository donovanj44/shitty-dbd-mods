// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StalkerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStalkerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkedComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStalkerComponent::execCanStalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStalk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execGetMaxStalkingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStalkingPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execGetPercentStalkingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentStalkingPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execGetScoreMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScoreMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execGetTotalStalkingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalStalkingPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execHasMaxStalkPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMaxStalkPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execIsStalkingSomeone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStalkingSomeone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkerComponent::execOnPlayerBeingStalkedChanged)
	{
		P_GET_UBOOL(Z_Param_isBeingStalked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerBeingStalkedChanged(Z_Param_isBeingStalked);
		P_NATIVE_END;
	}
	void UStalkerComponent::StaticRegisterNativesUStalkerComponent()
	{
		UClass* Class = UStalkerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStalk", &UStalkerComponent::execCanStalk },
			{ "GetMaxStalkingPoints", &UStalkerComponent::execGetMaxStalkingPoints },
			{ "GetPercentStalkingPoints", &UStalkerComponent::execGetPercentStalkingPoints },
			{ "GetScoreMultiplier", &UStalkerComponent::execGetScoreMultiplier },
			{ "GetTotalStalkingPoints", &UStalkerComponent::execGetTotalStalkingPoints },
			{ "HasMaxStalkPoints", &UStalkerComponent::execHasMaxStalkPoints },
			{ "IsStalkingSomeone", &UStalkerComponent::execIsStalkingSomeone },
			{ "OnPlayerBeingStalkedChanged", &UStalkerComponent::execOnPlayerBeingStalkedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics
	{
		struct StalkerComponent_eventCanStalk_Parms
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
	void Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StalkerComponent_eventCanStalk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StalkerComponent_eventCanStalk_Parms), &Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "CanStalk", nullptr, nullptr, sizeof(StalkerComponent_eventCanStalk_Parms), Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_CanStalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_CanStalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics
	{
		struct StalkerComponent_eventGetMaxStalkingPoints_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StalkerComponent_eventGetMaxStalkingPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "GetMaxStalkingPoints", nullptr, nullptr, sizeof(StalkerComponent_eventGetMaxStalkingPoints_Parms), Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics
	{
		struct StalkerComponent_eventGetPercentStalkingPoints_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StalkerComponent_eventGetPercentStalkingPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "GetPercentStalkingPoints", nullptr, nullptr, sizeof(StalkerComponent_eventGetPercentStalkingPoints_Parms), Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics
	{
		struct StalkerComponent_eventGetScoreMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StalkerComponent_eventGetScoreMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "GetScoreMultiplier", nullptr, nullptr, sizeof(StalkerComponent_eventGetScoreMultiplier_Parms), Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics
	{
		struct StalkerComponent_eventGetTotalStalkingPoints_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StalkerComponent_eventGetTotalStalkingPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "GetTotalStalkingPoints", nullptr, nullptr, sizeof(StalkerComponent_eventGetTotalStalkingPoints_Parms), Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics
	{
		struct StalkerComponent_eventHasMaxStalkPoints_Parms
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
	void Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StalkerComponent_eventHasMaxStalkPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StalkerComponent_eventHasMaxStalkPoints_Parms), &Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "HasMaxStalkPoints", nullptr, nullptr, sizeof(StalkerComponent_eventHasMaxStalkPoints_Parms), Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics
	{
		struct StalkerComponent_eventIsStalkingSomeone_Parms
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
	void Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StalkerComponent_eventIsStalkingSomeone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StalkerComponent_eventIsStalkingSomeone_Parms), &Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "IsStalkingSomeone", nullptr, nullptr, sizeof(StalkerComponent_eventIsStalkingSomeone_Parms), Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics
	{
		struct StalkerComponent_eventOnPlayerBeingStalkedChanged_Parms
		{
			bool isBeingStalked;
		};
		static void NewProp_isBeingStalked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingStalked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::NewProp_isBeingStalked_SetBit(void* Obj)
	{
		((StalkerComponent_eventOnPlayerBeingStalkedChanged_Parms*)Obj)->isBeingStalked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::NewProp_isBeingStalked = { "isBeingStalked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StalkerComponent_eventOnPlayerBeingStalkedChanged_Parms), &Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::NewProp_isBeingStalked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::NewProp_isBeingStalked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkerComponent, nullptr, "OnPlayerBeingStalkedChanged", nullptr, nullptr, sizeof(StalkerComponent_eventOnPlayerBeingStalkedChanged_Parms), Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStalkerComponent_NoRegister()
	{
		return UStalkerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStalkerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stalkPointsChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stalkPointsChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerStalkedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerStalkedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerStalkedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canStalkWhileInChase_MetaData[];
#endif
		static void NewProp__canStalkWhileInChase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canStalkWhileInChase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distributeStalkRate_MetaData[];
#endif
		static void NewProp__distributeStalkRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__distributeStalkRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStalkerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStalkerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStalkerComponent_CanStalk, "CanStalk" }, // 1892435674
		{ &Z_Construct_UFunction_UStalkerComponent_GetMaxStalkingPoints, "GetMaxStalkingPoints" }, // 2304875294
		{ &Z_Construct_UFunction_UStalkerComponent_GetPercentStalkingPoints, "GetPercentStalkingPoints" }, // 3760961433
		{ &Z_Construct_UFunction_UStalkerComponent_GetScoreMultiplier, "GetScoreMultiplier" }, // 2780603693
		{ &Z_Construct_UFunction_UStalkerComponent_GetTotalStalkingPoints, "GetTotalStalkingPoints" }, // 2303608139
		{ &Z_Construct_UFunction_UStalkerComponent_HasMaxStalkPoints, "HasMaxStalkPoints" }, // 3683225914
		{ &Z_Construct_UFunction_UStalkerComponent_IsStalkingSomeone, "IsStalkingSomeone" }, // 2873527725
		{ &Z_Construct_UFunction_UStalkerComponent_OnPlayerBeingStalkedChanged, "OnPlayerBeingStalkedChanged" }, // 2953751335
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StalkerComponent.h" },
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkerComponent_Statics::NewProp__stalkPointsChargeable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStalkerComponent_Statics::NewProp__stalkPointsChargeable = { "_stalkPointsChargeable", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStalkerComponent, _stalkPointsChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__stalkPointsChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__stalkPointsChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents = { "_playerStalkedComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStalkerComponent, _playerStalkedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents_Inner = { "_playerStalkedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStalkedComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase_MetaData[] = {
		{ "Category", "StalkerComponent" },
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase_SetBit(void* Obj)
	{
		((UStalkerComponent*)Obj)->_canStalkWhileInChase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase = { "_canStalkWhileInChase", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStalkerComponent), &Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate_MetaData[] = {
		{ "Category", "StalkerComponent" },
		{ "ModuleRelativePath", "Public/StalkerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate_SetBit(void* Obj)
	{
		((UStalkerComponent*)Obj)->_distributeStalkRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate = { "_distributeStalkRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStalkerComponent), &Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStalkerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkerComponent_Statics::NewProp__stalkPointsChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkerComponent_Statics::NewProp__playerStalkedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkerComponent_Statics::NewProp__canStalkWhileInChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkerComponent_Statics::NewProp__distributeStalkRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStalkerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStalkerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStalkerComponent_Statics::ClassParams = {
		&UStalkerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStalkerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStalkerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStalkerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStalkerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStalkerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStalkerComponent, 3530603423);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStalkerComponent>()
	{
		return UStalkerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStalkerComponent(Z_Construct_UClass_UStalkerComponent, &UStalkerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStalkerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStalkerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
