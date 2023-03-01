// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PortalPlacerStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalPlacerStateComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPortalRestrictedLocation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPortalPlacerStateComponent::execGetRemainingPortalCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainingPortalCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalPlacerStateComponent::execGetTeleportDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTeleportDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalPlacerStateComponent::execInitializeTunableValues)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTunableValues(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalPlacerStateComponent::execIsUsePortalCooldownDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsePortalCooldownDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalPlacerStateComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalPlacerStateComponent::execUpdateRemainingPortalCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRemainingPortalCount();
		P_NATIVE_END;
	}
	void UPortalPlacerStateComponent::StaticRegisterNativesUPortalPlacerStateComponent()
	{
		UClass* Class = UPortalPlacerStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRemainingPortalCount", &UPortalPlacerStateComponent::execGetRemainingPortalCount },
			{ "GetTeleportDuration", &UPortalPlacerStateComponent::execGetTeleportDuration },
			{ "InitializeTunableValues", &UPortalPlacerStateComponent::execInitializeTunableValues },
			{ "IsUsePortalCooldownDone", &UPortalPlacerStateComponent::execIsUsePortalCooldownDone },
			{ "OnLevelReadyToPlay", &UPortalPlacerStateComponent::execOnLevelReadyToPlay },
			{ "UpdateRemainingPortalCount", &UPortalPlacerStateComponent::execUpdateRemainingPortalCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics
	{
		struct PortalPlacerStateComponent_eventGetRemainingPortalCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPlacerStateComponent_eventGetRemainingPortalCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalPlacerStateComponent, nullptr, "GetRemainingPortalCount", nullptr, nullptr, sizeof(PortalPlacerStateComponent_eventGetRemainingPortalCount_Parms), Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics
	{
		struct PortalPlacerStateComponent_eventGetTeleportDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPlacerStateComponent_eventGetTeleportDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalPlacerStateComponent, nullptr, "GetTeleportDuration", nullptr, nullptr, sizeof(PortalPlacerStateComponent_eventGetTeleportDuration_Parms), Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics
	{
		struct PortalPlacerStateComponent_eventInitializeTunableValues_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalPlacerStateComponent_eventInitializeTunableValues_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalPlacerStateComponent, nullptr, "InitializeTunableValues", nullptr, nullptr, sizeof(PortalPlacerStateComponent_eventInitializeTunableValues_Parms), Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics
	{
		struct PortalPlacerStateComponent_eventIsUsePortalCooldownDone_Parms
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
	void Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PortalPlacerStateComponent_eventIsUsePortalCooldownDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalPlacerStateComponent_eventIsUsePortalCooldownDone_Parms), &Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalPlacerStateComponent, nullptr, "IsUsePortalCooldownDone", nullptr, nullptr, sizeof(PortalPlacerStateComponent_eventIsUsePortalCooldownDone_Parms), Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalPlacerStateComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalPlacerStateComponent, nullptr, "UpdateRemainingPortalCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister()
	{
		return UPortalPlacerStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPortalPlacerStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__restrictedPortalLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__restrictedPortalLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__restrictedPortalLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__placedPortals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__placedPortals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__placedPortals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__remainingPortals_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__remainingPortals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTeleportCooldownComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeleportCooldownComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPortalPlacerStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPortalPlacerStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPortalPlacerStateComponent_GetRemainingPortalCount, "GetRemainingPortalCount" }, // 396375675
		{ &Z_Construct_UFunction_UPortalPlacerStateComponent_GetTeleportDuration, "GetTeleportDuration" }, // 2651236620
		{ &Z_Construct_UFunction_UPortalPlacerStateComponent_InitializeTunableValues, "InitializeTunableValues" }, // 3408402242
		{ &Z_Construct_UFunction_UPortalPlacerStateComponent_IsUsePortalCooldownDone, "IsUsePortalCooldownDone" }, // 641780496
		{ &Z_Construct_UFunction_UPortalPlacerStateComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3073963335
		{ &Z_Construct_UFunction_UPortalPlacerStateComponent_UpdateRemainingPortalCount, "UpdateRemainingPortalCount" }, // 526543684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalPlacerStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PortalPlacerStateComponent.h" },
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations = { "_restrictedPortalLocations", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalPlacerStateComponent, _restrictedPortalLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations_Inner = { "_restrictedPortalLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPortalRestrictedLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals = { "_placedPortals", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalPlacerStateComponent, _placedPortals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals_Inner = { "_placedPortals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__remainingPortals_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__remainingPortals = { "_remainingPortals", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalPlacerStateComponent, _remainingPortals), METADATA_PARAMS(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__remainingPortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__remainingPortals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp_OnTeleportCooldownComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalPlacerStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp_OnTeleportCooldownComplete = { "OnTeleportCooldownComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalPlacerStateComponent, OnTeleportCooldownComplete), Z_Construct_UDelegateFunction_DeadByDaylight_PortalPlacerStateComponentOnTeleportCooldownComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp_OnTeleportCooldownComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp_OnTeleportCooldownComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPortalPlacerStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__restrictedPortalLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__placedPortals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp__remainingPortals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalPlacerStateComponent_Statics::NewProp_OnTeleportCooldownComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPortalPlacerStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortalPlacerStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPortalPlacerStateComponent_Statics::ClassParams = {
		&UPortalPlacerStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPortalPlacerStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalPlacerStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPortalPlacerStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPortalPlacerStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalPlacerStateComponent, 2793154880);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPortalPlacerStateComponent>()
	{
		return UPortalPlacerStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalPlacerStateComponent(Z_Construct_UClass_UPortalPlacerStateComponent, &UPortalPlacerStateComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPortalPlacerStateComponent"), false, nullptr, nullptr, nullptr);

	void UPortalPlacerStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__remainingPortals(TEXT("_remainingPortals"));
		static const FName Name__placedPortals(TEXT("_placedPortals"));
		static const FName Name__restrictedPortalLocations(TEXT("_restrictedPortalLocations"));

		const bool bIsValid = true
			&& Name__remainingPortals == ClassReps[(int32)ENetFields_Private::_remainingPortals].Property->GetFName()
			&& Name__placedPortals == ClassReps[(int32)ENetFields_Private::_placedPortals].Property->GetFName()
			&& Name__restrictedPortalLocations == ClassReps[(int32)ENetFields_Private::_restrictedPortalLocations].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPortalPlacerStateComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalPlacerStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
