// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplayPresenter/Public/SurvivorStatusComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorStatusComponent() {}
// Cross Module References
	DBDGAMEPLAYPRESENTER_API UClass* Z_Construct_UClass_USurvivorStatusComponent_NoRegister();
	DBDGAMEPLAYPRESENTER_API UClass* Z_Construct_UClass_USurvivorStatusComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplayPresenter();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorStatusComponent::execGetMovementSpeed)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_currentMovementSpeed);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_percentMovementSpeed);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_maximumMovementSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMovementSpeed(Z_Param_Out_currentMovementSpeed,Z_Param_Out_percentMovementSpeed,Z_Param_Out_maximumMovementSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsCaptured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCaptured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrouching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsDying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsGettingSacrificed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGettingSacrificed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsGettingStrangled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGettingStrangled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsHarpooned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHarpooned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsHealing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHealing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsHiding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHiding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsHooked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHooked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsInjured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInjured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execIsSleeping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSleeping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnCrouchChanged)
	{
		P_GET_UBOOL(Z_Param_isCrouched);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrouchChanged(Z_Param_isCrouched);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnGuidedStateChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGuidedStateChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnHookedStateChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHookedStateChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnPlayerImmobilizeStateChanged)
	{
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_oldImmobilizeState);
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_newImmobilizeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerImmobilizeStateChanged(ECamperImmobilizeState(Z_Param_oldImmobilizeState),ECamperImmobilizeState(Z_Param_newImmobilizeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnRunningAndMovementChanged)
	{
		P_GET_UBOOL(Z_Param_isRunningAndMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRunningAndMovementChanged(Z_Param_isRunningAndMoving);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnSuvivorDamaged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldDamageState);
		P_GET_ENUM(ECamperDamageState,Z_Param_newDamageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSuvivorDamaged(ECamperDamageState(Z_Param_oldDamageState),ECamperDamageState(Z_Param_newDamageState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnValidatedInteractionEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnValidatedInteractionEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USurvivorStatusComponent::execOnValidatedInteractionStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnValidatedInteractionStarted();
		P_NATIVE_END;
	}
	static FName NAME_USurvivorStatusComponent_OnSurivorStatusChange = FName(TEXT("OnSurivorStatusChange"));
	void USurvivorStatusComponent::OnSurivorStatusChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_USurvivorStatusComponent_OnSurivorStatusChange),NULL);
	}
	void USurvivorStatusComponent::StaticRegisterNativesUSurvivorStatusComponent()
	{
		UClass* Class = USurvivorStatusComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovementSpeed", &USurvivorStatusComponent::execGetMovementSpeed },
			{ "IsCaptured", &USurvivorStatusComponent::execIsCaptured },
			{ "IsCrouching", &USurvivorStatusComponent::execIsCrouching },
			{ "IsDead", &USurvivorStatusComponent::execIsDead },
			{ "IsDying", &USurvivorStatusComponent::execIsDying },
			{ "IsGettingSacrificed", &USurvivorStatusComponent::execIsGettingSacrificed },
			{ "IsGettingStrangled", &USurvivorStatusComponent::execIsGettingStrangled },
			{ "IsHarpooned", &USurvivorStatusComponent::execIsHarpooned },
			{ "IsHealing", &USurvivorStatusComponent::execIsHealing },
			{ "IsHiding", &USurvivorStatusComponent::execIsHiding },
			{ "IsHooked", &USurvivorStatusComponent::execIsHooked },
			{ "IsInjured", &USurvivorStatusComponent::execIsInjured },
			{ "IsRunning", &USurvivorStatusComponent::execIsRunning },
			{ "IsSleeping", &USurvivorStatusComponent::execIsSleeping },
			{ "OnCrouchChanged", &USurvivorStatusComponent::execOnCrouchChanged },
			{ "OnGuidedStateChanged", &USurvivorStatusComponent::execOnGuidedStateChanged },
			{ "OnHookedStateChanged", &USurvivorStatusComponent::execOnHookedStateChanged },
			{ "OnPlayerImmobilizeStateChanged", &USurvivorStatusComponent::execOnPlayerImmobilizeStateChanged },
			{ "OnRunningAndMovementChanged", &USurvivorStatusComponent::execOnRunningAndMovementChanged },
			{ "OnSuvivorDamaged", &USurvivorStatusComponent::execOnSuvivorDamaged },
			{ "OnValidatedInteractionEnded", &USurvivorStatusComponent::execOnValidatedInteractionEnded },
			{ "OnValidatedInteractionStarted", &USurvivorStatusComponent::execOnValidatedInteractionStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics
	{
		struct SurvivorStatusComponent_eventGetMovementSpeed_Parms
		{
			float currentMovementSpeed;
			float percentMovementSpeed;
			float maximumMovementSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maximumMovementSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentMovementSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentMovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::NewProp_maximumMovementSpeed = { "maximumMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventGetMovementSpeed_Parms, maximumMovementSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::NewProp_percentMovementSpeed = { "percentMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventGetMovementSpeed_Parms, percentMovementSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::NewProp_currentMovementSpeed = { "currentMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventGetMovementSpeed_Parms, currentMovementSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::NewProp_maximumMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::NewProp_percentMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::NewProp_currentMovementSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventGetMovementSpeed_Parms), Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics
	{
		struct SurvivorStatusComponent_eventIsCaptured_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsCaptured_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsCaptured_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsCaptured", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsCaptured_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics
	{
		struct SurvivorStatusComponent_eventIsCrouching_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsCrouching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsCrouching_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsCrouching", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsCrouching_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics
	{
		struct SurvivorStatusComponent_eventIsDead_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsDead_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsDead", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsDead_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics
	{
		struct SurvivorStatusComponent_eventIsDying_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsDying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsDying_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsDying", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsDying_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsDying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsDying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics
	{
		struct SurvivorStatusComponent_eventIsGettingSacrificed_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsGettingSacrificed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsGettingSacrificed_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsGettingSacrificed", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsGettingSacrificed_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics
	{
		struct SurvivorStatusComponent_eventIsGettingStrangled_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsGettingStrangled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsGettingStrangled_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsGettingStrangled", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsGettingStrangled_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics
	{
		struct SurvivorStatusComponent_eventIsHarpooned_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsHarpooned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsHarpooned_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsHarpooned", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsHarpooned_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics
	{
		struct SurvivorStatusComponent_eventIsHealing_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsHealing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsHealing_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsHealing", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsHealing_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsHealing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsHealing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics
	{
		struct SurvivorStatusComponent_eventIsHiding_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsHiding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsHiding_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsHiding", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsHiding_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsHiding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsHiding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics
	{
		struct SurvivorStatusComponent_eventIsHooked_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsHooked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsHooked_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsHooked", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsHooked_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics
	{
		struct SurvivorStatusComponent_eventIsInjured_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsInjured_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsInjured_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsInjured", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsInjured_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsInjured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsInjured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics
	{
		struct SurvivorStatusComponent_eventIsRunning_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsRunning_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsRunning", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsRunning_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics
	{
		struct SurvivorStatusComponent_eventIsSleeping_Parms
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
	void Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventIsSleeping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventIsSleeping_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "IsSleeping", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventIsSleeping_Parms), Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics
	{
		struct SurvivorStatusComponent_eventOnCrouchChanged_Parms
		{
			bool isCrouched;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCrouched_MetaData[];
#endif
		static void NewProp_isCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCrouched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventOnCrouchChanged_Parms*)Obj)->isCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched = { "isCrouched", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventOnCrouchChanged_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::NewProp_isCrouched,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnCrouchChanged", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventOnCrouchChanged_Parms), Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnGuidedStateChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnHookedStateChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics
	{
		struct SurvivorStatusComponent_eventOnPlayerImmobilizeStateChanged_Parms
		{
			ECamperImmobilizeState oldImmobilizeState;
			ECamperImmobilizeState newImmobilizeState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newImmobilizeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newImmobilizeState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newImmobilizeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldImmobilizeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldImmobilizeState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldImmobilizeState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState = { "newImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventOnPlayerImmobilizeStateChanged_Parms, newImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState = { "oldImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventOnPlayerImmobilizeStateChanged_Parms, oldImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_newImmobilizeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::NewProp_oldImmobilizeState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnPlayerImmobilizeStateChanged", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventOnPlayerImmobilizeStateChanged_Parms), Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics
	{
		struct SurvivorStatusComponent_eventOnRunningAndMovementChanged_Parms
		{
			bool isRunningAndMoving;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRunningAndMoving_MetaData[];
#endif
		static void NewProp_isRunningAndMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRunningAndMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving_SetBit(void* Obj)
	{
		((SurvivorStatusComponent_eventOnRunningAndMovementChanged_Parms*)Obj)->isRunningAndMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving = { "isRunningAndMoving", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivorStatusComponent_eventOnRunningAndMovementChanged_Parms), &Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::NewProp_isRunningAndMoving,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnRunningAndMovementChanged", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventOnRunningAndMovementChanged_Parms), Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnSurivorStatusChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics
	{
		struct SurvivorStatusComponent_eventOnSuvivorDamaged_Parms
		{
			ECamperDamageState oldDamageState;
			ECamperDamageState newDamageState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newDamageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newDamageState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldDamageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldDamageState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldDamageState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState = { "newDamageState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventOnSuvivorDamaged_Parms, newDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState = { "oldDamageState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorStatusComponent_eventOnSuvivorDamaged_Parms, oldDamageState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_newDamageState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::NewProp_oldDamageState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnSuvivorDamaged", nullptr, nullptr, sizeof(SurvivorStatusComponent_eventOnSuvivorDamaged_Parms), Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnValidatedInteractionEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorStatusComponent, nullptr, "OnValidatedInteractionStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorStatusComponent_NoRegister()
	{
		return USurvivorStatusComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorStatusComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorStatusComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplayPresenter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorStatusComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorStatusComponent_GetMovementSpeed, "GetMovementSpeed" }, // 1899649053
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsCaptured, "IsCaptured" }, // 2444664261
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsCrouching, "IsCrouching" }, // 2223724989
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsDead, "IsDead" }, // 66047466
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsDying, "IsDying" }, // 601544962
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsGettingSacrificed, "IsGettingSacrificed" }, // 1836693071
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsGettingStrangled, "IsGettingStrangled" }, // 86556093
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsHarpooned, "IsHarpooned" }, // 1725529495
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsHealing, "IsHealing" }, // 2499983057
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsHiding, "IsHiding" }, // 420064443
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsHooked, "IsHooked" }, // 75246700
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsInjured, "IsInjured" }, // 2085164073
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsRunning, "IsRunning" }, // 823102467
		{ &Z_Construct_UFunction_USurvivorStatusComponent_IsSleeping, "IsSleeping" }, // 2342992532
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnCrouchChanged, "OnCrouchChanged" }, // 867070330
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnGuidedStateChanged, "OnGuidedStateChanged" }, // 172777765
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnHookedStateChanged, "OnHookedStateChanged" }, // 1521978926
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnPlayerImmobilizeStateChanged, "OnPlayerImmobilizeStateChanged" }, // 2270999874
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnRunningAndMovementChanged, "OnRunningAndMovementChanged" }, // 1796722940
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnSurivorStatusChange, "OnSurivorStatusChange" }, // 3571693954
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnSuvivorDamaged, "OnSuvivorDamaged" }, // 2122031849
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionEnded, "OnValidatedInteractionEnded" }, // 3217280721
		{ &Z_Construct_UFunction_USurvivorStatusComponent_OnValidatedInteractionStarted, "OnValidatedInteractionStarted" }, // 4017855867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorStatusComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SurvivorStatusComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorStatusComponent_Statics::NewProp__survivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SurvivorStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USurvivorStatusComponent_Statics::NewProp__survivor = { "_survivor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurvivorStatusComponent, _survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USurvivorStatusComponent_Statics::NewProp__survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorStatusComponent_Statics::NewProp__survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorStatusComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorStatusComponent_Statics::NewProp__survivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorStatusComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorStatusComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorStatusComponent_Statics::ClassParams = {
		&USurvivorStatusComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurvivorStatusComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorStatusComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorStatusComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorStatusComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorStatusComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorStatusComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorStatusComponent, 3021471353);
	template<> DBDGAMEPLAYPRESENTER_API UClass* StaticClass<USurvivorStatusComponent>()
	{
		return USurvivorStatusComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorStatusComponent(Z_Construct_UClass_USurvivorStatusComponent, &USurvivorStatusComponent::StaticClass, TEXT("/Script/DBDGameplayPresenter"), TEXT("USurvivorStatusComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorStatusComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
