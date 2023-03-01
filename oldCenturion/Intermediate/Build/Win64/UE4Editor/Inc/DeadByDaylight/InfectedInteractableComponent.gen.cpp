// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InfectedInteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfectedInteractableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInfectedInteractableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInfectedInteractableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInfectedInteractableComponent::execAuthority_GetEquippingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->Authority_GetEquippingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execAuthority_IsAMaxSicknessSurvivorInteracting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Authority_IsAMaxSicknessSurvivorInteracting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execAuthority_OnHitWithVomit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnHitWithVomit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execAuthority_OnOwningInteractableBeginOrEndUse)
	{
		P_GET_UBOOL(Z_Param_inUse);
		P_GET_OBJECT(ADBDPlayer,Z_Param_interactingPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwningInteractableBeginOrEndUse(Z_Param_inUse,Z_Param_interactingPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execGetOwningInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AInteractable**)Z_Param__Result=P_THIS->GetOwningInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execMulticast_DebugDisplayLifetime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_remainingLifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DebugDisplayLifetime_Implementation(Z_Param_remainingLifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execMulticast_DestroyComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DestroyComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execMulticast_FadeInVomit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FadeInVomit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execMulticast_FadeOutVomit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FadeOutVomit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInfectedInteractableComponent::execSetInteractableMeshAlpha)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractableMeshAlpha(Z_Param_alpha);
		P_NATIVE_END;
	}
	static FName NAME_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime = FName(TEXT("Multicast_DebugDisplayLifetime"));
	void UInfectedInteractableComponent::Multicast_DebugDisplayLifetime(float remainingLifetime)
	{
		InfectedInteractableComponent_eventMulticast_DebugDisplayLifetime_Parms Parms;
		Parms.remainingLifetime=remainingLifetime;
		ProcessEvent(FindFunctionChecked(NAME_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime),&Parms);
	}
	static FName NAME_UInfectedInteractableComponent_Multicast_DestroyComponent = FName(TEXT("Multicast_DestroyComponent"));
	void UInfectedInteractableComponent::Multicast_DestroyComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInfectedInteractableComponent_Multicast_DestroyComponent),NULL);
	}
	static FName NAME_UInfectedInteractableComponent_Multicast_FadeInVomit = FName(TEXT("Multicast_FadeInVomit"));
	void UInfectedInteractableComponent::Multicast_FadeInVomit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInfectedInteractableComponent_Multicast_FadeInVomit),NULL);
	}
	static FName NAME_UInfectedInteractableComponent_Multicast_FadeOutVomit = FName(TEXT("Multicast_FadeOutVomit"));
	void UInfectedInteractableComponent::Multicast_FadeOutVomit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInfectedInteractableComponent_Multicast_FadeOutVomit),NULL);
	}
	static FName NAME_UInfectedInteractableComponent_OnVomitAlphaUpdate = FName(TEXT("OnVomitAlphaUpdate"));
	void UInfectedInteractableComponent::OnVomitAlphaUpdate(float alpha)
	{
		InfectedInteractableComponent_eventOnVomitAlphaUpdate_Parms Parms;
		Parms.alpha=alpha;
		ProcessEvent(FindFunctionChecked(NAME_UInfectedInteractableComponent_OnVomitAlphaUpdate),&Parms);
	}
	void UInfectedInteractableComponent::StaticRegisterNativesUInfectedInteractableComponent()
	{
		UClass* Class = UInfectedInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_GetEquippingPlayer", &UInfectedInteractableComponent::execAuthority_GetEquippingPlayer },
			{ "Authority_IsAMaxSicknessSurvivorInteracting", &UInfectedInteractableComponent::execAuthority_IsAMaxSicknessSurvivorInteracting },
			{ "Authority_OnHitWithVomit", &UInfectedInteractableComponent::execAuthority_OnHitWithVomit },
			{ "Authority_OnOwningInteractableBeginOrEndUse", &UInfectedInteractableComponent::execAuthority_OnOwningInteractableBeginOrEndUse },
			{ "GetOwningInteractable", &UInfectedInteractableComponent::execGetOwningInteractable },
			{ "Multicast_DebugDisplayLifetime", &UInfectedInteractableComponent::execMulticast_DebugDisplayLifetime },
			{ "Multicast_DestroyComponent", &UInfectedInteractableComponent::execMulticast_DestroyComponent },
			{ "Multicast_FadeInVomit", &UInfectedInteractableComponent::execMulticast_FadeInVomit },
			{ "Multicast_FadeOutVomit", &UInfectedInteractableComponent::execMulticast_FadeOutVomit },
			{ "SetInteractableMeshAlpha", &UInfectedInteractableComponent::execSetInteractableMeshAlpha },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics
	{
		struct InfectedInteractableComponent_eventAuthority_GetEquippingPlayer_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectedInteractableComponent_eventAuthority_GetEquippingPlayer_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Authority_GetEquippingPlayer", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventAuthority_GetEquippingPlayer_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics
	{
		struct InfectedInteractableComponent_eventAuthority_IsAMaxSicknessSurvivorInteracting_Parms
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
	void Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InfectedInteractableComponent_eventAuthority_IsAMaxSicknessSurvivorInteracting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InfectedInteractableComponent_eventAuthority_IsAMaxSicknessSurvivorInteracting_Parms), &Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Authority_IsAMaxSicknessSurvivorInteracting", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventAuthority_IsAMaxSicknessSurvivorInteracting_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Authority_OnHitWithVomit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics
	{
		struct InfectedInteractableComponent_eventAuthority_OnOwningInteractableBeginOrEndUse_Parms
		{
			bool inUse;
			ADBDPlayer* interactingPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactingPlayer;
		static void NewProp_inUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::NewProp_interactingPlayer = { "interactingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectedInteractableComponent_eventAuthority_OnOwningInteractableBeginOrEndUse_Parms, interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::NewProp_inUse_SetBit(void* Obj)
	{
		((InfectedInteractableComponent_eventAuthority_OnOwningInteractableBeginOrEndUse_Parms*)Obj)->inUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::NewProp_inUse = { "inUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InfectedInteractableComponent_eventAuthority_OnOwningInteractableBeginOrEndUse_Parms), &Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::NewProp_inUse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::NewProp_interactingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::NewProp_inUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Authority_OnOwningInteractableBeginOrEndUse", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventAuthority_OnOwningInteractableBeginOrEndUse_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics
	{
		struct InfectedInteractableComponent_eventGetOwningInteractable_Parms
		{
			AInteractable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectedInteractableComponent_eventGetOwningInteractable_Parms, ReturnValue), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "GetOwningInteractable", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventGetOwningInteractable_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_remainingLifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::NewProp_remainingLifetime = { "remainingLifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectedInteractableComponent_eventMulticast_DebugDisplayLifetime_Parms, remainingLifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::NewProp_remainingLifetime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Multicast_DebugDisplayLifetime", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventMulticast_DebugDisplayLifetime_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Multicast_DestroyComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Multicast_FadeInVomit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "Multicast_FadeOutVomit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectedInteractableComponent_eventOnVomitAlphaUpdate_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "OnVomitAlphaUpdate", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventOnVomitAlphaUpdate_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics
	{
		struct InfectedInteractableComponent_eventSetInteractableMeshAlpha_Parms
		{
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectedInteractableComponent_eventSetInteractableMeshAlpha_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectedInteractableComponent, nullptr, "SetInteractableMeshAlpha", nullptr, nullptr, sizeof(InfectedInteractableComponent_eventSetInteractableMeshAlpha_Parms), Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInfectedInteractableComponent_NoRegister()
	{
		return UInfectedInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInfectedInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vomitAlphaTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vomitAlphaTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VomitAlphaParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VomitAlphaParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VomitAlphaCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VomitAlphaCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInfectedInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInfectedInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Authority_GetEquippingPlayer, "Authority_GetEquippingPlayer" }, // 3287546472
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Authority_IsAMaxSicknessSurvivorInteracting, "Authority_IsAMaxSicknessSurvivorInteracting" }, // 2791045839
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnHitWithVomit, "Authority_OnHitWithVomit" }, // 2415119810
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Authority_OnOwningInteractableBeginOrEndUse, "Authority_OnOwningInteractableBeginOrEndUse" }, // 1186788778
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_GetOwningInteractable, "GetOwningInteractable" }, // 1119878572
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DebugDisplayLifetime, "Multicast_DebugDisplayLifetime" }, // 1674772044
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_DestroyComponent, "Multicast_DestroyComponent" }, // 32443379
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeInVomit, "Multicast_FadeInVomit" }, // 1492144365
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_Multicast_FadeOutVomit, "Multicast_FadeOutVomit" }, // 603083496
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_OnVomitAlphaUpdate, "OnVomitAlphaUpdate" }, // 1412916927
		{ &Z_Construct_UFunction_UInfectedInteractableComponent_SetInteractableMeshAlpha, "SetInteractableMeshAlpha" }, // 464556791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectedInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InfectedInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp__vomitAlphaTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp__vomitAlphaTimeline = { "_vomitAlphaTimeline", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInfectedInteractableComponent, _vomitAlphaTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp__vomitAlphaTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp__vomitAlphaTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaParameterName_MetaData[] = {
		{ "Category", "InfectedInteractableComponent" },
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaParameterName = { "VomitAlphaParameterName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInfectedInteractableComponent, VomitAlphaParameterName), METADATA_PARAMS(Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaCurve_MetaData[] = {
		{ "Category", "InfectedInteractableComponent" },
		{ "ModuleRelativePath", "Public/InfectedInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaCurve = { "VomitAlphaCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInfectedInteractableComponent, VomitAlphaCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfectedInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp__vomitAlphaTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectedInteractableComponent_Statics::NewProp_VomitAlphaCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInfectedInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfectedInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInfectedInteractableComponent_Statics::ClassParams = {
		&UInfectedInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInfectedInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInfectedInteractableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInfectedInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectedInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInfectedInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInfectedInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInfectedInteractableComponent, 2680827697);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInfectedInteractableComponent>()
	{
		return UInfectedInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInfectedInteractableComponent(Z_Construct_UClass_UInfectedInteractableComponent, &UInfectedInteractableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInfectedInteractableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInfectedInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
