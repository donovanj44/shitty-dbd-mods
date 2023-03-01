// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EndGameStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameStateComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger();
// End Cross Module References
	DEFINE_FUNCTION(UEndGameStateComponent::execGetElapsedTimePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetElapsedTimePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execHasEndGameBegun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEndGameBegun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execIsEndGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEndGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execIsTimerSlowedDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTimerSlowedDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execMulticast_SetIsInEndGameSimulation)
	{
		P_GET_UBOOL(Z_Param_endGameSimulation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetIsInEndGameSimulation_Validate(Z_Param_endGameSimulation))
		{
			RPC_ValidateFailed(TEXT("Multicast_SetIsInEndGameSimulation_Validate"));
			return;
		}
		P_THIS->Multicast_SetIsInEndGameSimulation_Implementation(Z_Param_endGameSimulation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execOnRep_IsEndGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsEndGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execOnRep_IsTimerPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsTimerPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execOnRep_TimeDilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TimeDilation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEndGameStateComponent::execOnRep_WorldTimeAtLastDilationModification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WorldTimeAtLastDilationModification();
		P_NATIVE_END;
	}
	static FName NAME_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation = FName(TEXT("Multicast_SetIsInEndGameSimulation"));
	void UEndGameStateComponent::Multicast_SetIsInEndGameSimulation(bool endGameSimulation)
	{
		EndGameStateComponent_eventMulticast_SetIsInEndGameSimulation_Parms Parms;
		Parms.endGameSimulation=endGameSimulation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation),&Parms);
	}
	void UEndGameStateComponent::StaticRegisterNativesUEndGameStateComponent()
	{
		UClass* Class = UEndGameStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElapsedTimePercent", &UEndGameStateComponent::execGetElapsedTimePercent },
			{ "HasEndGameBegun", &UEndGameStateComponent::execHasEndGameBegun },
			{ "IsEndGameOver", &UEndGameStateComponent::execIsEndGameOver },
			{ "IsTimerSlowedDown", &UEndGameStateComponent::execIsTimerSlowedDown },
			{ "Multicast_SetIsInEndGameSimulation", &UEndGameStateComponent::execMulticast_SetIsInEndGameSimulation },
			{ "OnRep_IsEndGameOver", &UEndGameStateComponent::execOnRep_IsEndGameOver },
			{ "OnRep_IsTimerPaused", &UEndGameStateComponent::execOnRep_IsTimerPaused },
			{ "OnRep_TimeDilation", &UEndGameStateComponent::execOnRep_TimeDilation },
			{ "OnRep_WorldTimeAtLastDilationModification", &UEndGameStateComponent::execOnRep_WorldTimeAtLastDilationModification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics
	{
		struct EndGameStateComponent_eventGetElapsedTimePercent_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndGameStateComponent_eventGetElapsedTimePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "GetElapsedTimePercent", nullptr, nullptr, sizeof(EndGameStateComponent_eventGetElapsedTimePercent_Parms), Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics
	{
		struct EndGameStateComponent_eventHasEndGameBegun_Parms
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
	void Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EndGameStateComponent_eventHasEndGameBegun_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndGameStateComponent_eventHasEndGameBegun_Parms), &Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "HasEndGameBegun", nullptr, nullptr, sizeof(EndGameStateComponent_eventHasEndGameBegun_Parms), Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics
	{
		struct EndGameStateComponent_eventIsEndGameOver_Parms
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
	void Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EndGameStateComponent_eventIsEndGameOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndGameStateComponent_eventIsEndGameOver_Parms), &Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "IsEndGameOver", nullptr, nullptr, sizeof(EndGameStateComponent_eventIsEndGameOver_Parms), Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics
	{
		struct EndGameStateComponent_eventIsTimerSlowedDown_Parms
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
	void Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EndGameStateComponent_eventIsTimerSlowedDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndGameStateComponent_eventIsTimerSlowedDown_Parms), &Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "IsTimerSlowedDown", nullptr, nullptr, sizeof(EndGameStateComponent_eventIsTimerSlowedDown_Parms), Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics
	{
		static void NewProp_endGameSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_endGameSimulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::NewProp_endGameSimulation_SetBit(void* Obj)
	{
		((EndGameStateComponent_eventMulticast_SetIsInEndGameSimulation_Parms*)Obj)->endGameSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::NewProp_endGameSimulation = { "endGameSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndGameStateComponent_eventMulticast_SetIsInEndGameSimulation_Parms), &Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::NewProp_endGameSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::NewProp_endGameSimulation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "Multicast_SetIsInEndGameSimulation", nullptr, nullptr, sizeof(EndGameStateComponent_eventMulticast_SetIsInEndGameSimulation_Parms), Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "OnRep_IsEndGameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "OnRep_IsTimerPaused", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "OnRep_TimeDilation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameStateComponent, nullptr, "OnRep_WorldTimeAtLastDilationModification", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGameStateComponent_NoRegister()
	{
		return UEndGameStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__endGameScenarioTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__endGameScenarioTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__endGameScenarioTrigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normalTotalTimeElapsedAtLastTimeModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__normalTotalTimeElapsedAtLastTimeModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTimerPaused_MetaData[];
#endif
		static void NewProp__isTimerPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTimerPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__worldTimeAtLastModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__worldTimeAtLastModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEndGameOver_MetaData[];
#endif
		static void NewProp__isEndGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEndGameOver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameStateComponent_GetElapsedTimePercent, "GetElapsedTimePercent" }, // 2018424781
		{ &Z_Construct_UFunction_UEndGameStateComponent_HasEndGameBegun, "HasEndGameBegun" }, // 1984033389
		{ &Z_Construct_UFunction_UEndGameStateComponent_IsEndGameOver, "IsEndGameOver" }, // 381727687
		{ &Z_Construct_UFunction_UEndGameStateComponent_IsTimerSlowedDown, "IsTimerSlowedDown" }, // 45583862
		{ &Z_Construct_UFunction_UEndGameStateComponent_Multicast_SetIsInEndGameSimulation, "Multicast_SetIsInEndGameSimulation" }, // 1020541556
		{ &Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsEndGameOver, "OnRep_IsEndGameOver" }, // 2174728355
		{ &Z_Construct_UFunction_UEndGameStateComponent_OnRep_IsTimerPaused, "OnRep_IsTimerPaused" }, // 2106305334
		{ &Z_Construct_UFunction_UEndGameStateComponent_OnRep_TimeDilation, "OnRep_TimeDilation" }, // 1719185124
		{ &Z_Construct_UFunction_UEndGameStateComponent_OnRep_WorldTimeAtLastDilationModification, "OnRep_WorldTimeAtLastDilationModification" }, // 3274187731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EndGameStateComponent.h" },
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger = { "_endGameScenarioTrigger", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameStateComponent, _endGameScenarioTrigger), Z_Construct_UEnum_DeadByDaylight_EEndGameScenarioTrigger, METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__normalTotalTimeElapsedAtLastTimeModification_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__normalTotalTimeElapsedAtLastTimeModification = { "_normalTotalTimeElapsedAtLastTimeModification", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameStateComponent, _normalTotalTimeElapsedAtLastTimeModification), METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__normalTotalTimeElapsedAtLastTimeModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__normalTotalTimeElapsedAtLastTimeModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused_SetBit(void* Obj)
	{
		((UEndGameStateComponent*)Obj)->_isTimerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused = { "_isTimerPaused", "OnRep_IsTimerPaused", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEndGameStateComponent), &Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__timeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__timeDilation = { "_timeDilation", "OnRep_TimeDilation", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameStateComponent, _timeDilation), METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__timeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__timeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__worldTimeAtLastModification_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__worldTimeAtLastModification = { "_worldTimeAtLastModification", "OnRep_WorldTimeAtLastDilationModification", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameStateComponent, _worldTimeAtLastModification), METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__worldTimeAtLastModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__worldTimeAtLastModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver_MetaData[] = {
		{ "ModuleRelativePath", "Public/EndGameStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver_SetBit(void* Obj)
	{
		((UEndGameStateComponent*)Obj)->_isEndGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver = { "_isEndGameOver", "OnRep_IsEndGameOver", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEndGameStateComponent), &Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__endGameScenarioTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__normalTotalTimeElapsedAtLastTimeModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isTimerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__timeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__worldTimeAtLastModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameStateComponent_Statics::NewProp__isEndGameOver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameStateComponent_Statics::ClassParams = {
		&UEndGameStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEndGameStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGameStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameStateComponent, 1658318785);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEndGameStateComponent>()
	{
		return UEndGameStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameStateComponent(Z_Construct_UClass_UEndGameStateComponent, &UEndGameStateComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEndGameStateComponent"), false, nullptr, nullptr, nullptr);

	void UEndGameStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isEndGameOver(TEXT("_isEndGameOver"));
		static const FName Name__worldTimeAtLastModification(TEXT("_worldTimeAtLastModification"));
		static const FName Name__timeDilation(TEXT("_timeDilation"));
		static const FName Name__isTimerPaused(TEXT("_isTimerPaused"));
		static const FName Name__normalTotalTimeElapsedAtLastTimeModification(TEXT("_normalTotalTimeElapsedAtLastTimeModification"));
		static const FName Name__endGameScenarioTrigger(TEXT("_endGameScenarioTrigger"));

		const bool bIsValid = true
			&& Name__isEndGameOver == ClassReps[(int32)ENetFields_Private::_isEndGameOver].Property->GetFName()
			&& Name__worldTimeAtLastModification == ClassReps[(int32)ENetFields_Private::_worldTimeAtLastModification].Property->GetFName()
			&& Name__timeDilation == ClassReps[(int32)ENetFields_Private::_timeDilation].Property->GetFName()
			&& Name__isTimerPaused == ClassReps[(int32)ENetFields_Private::_isTimerPaused].Property->GetFName()
			&& Name__normalTotalTimeElapsedAtLastTimeModification == ClassReps[(int32)ENetFields_Private::_normalTotalTimeElapsedAtLastTimeModification].Property->GetFName()
			&& Name__endGameScenarioTrigger == ClassReps[(int32)ENetFields_Private::_endGameScenarioTrigger].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEndGameStateComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
