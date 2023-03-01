// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/AgonyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgonyComponent() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonyComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAgonyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FAgonyDisplayFxEvent();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorStatusInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTormentAttackDamageCooldownInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAgonyComponent::execAuthority_OnAttackTrailDamageCooldownTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnAttackTrailDamageCooldownTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgonyComponent::execAuthority_OnDrainStageChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_drainStage);
		P_GET_OBJECT(ADBDPlayer,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnDrainStageChanged(Z_Param_drainStage,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgonyComponent::execIsAgonyMoriable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAgonyMoriable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgonyComponent::execIsInAgony)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInAgony();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgonyComponent::execOnHideBarbWireFXOnGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideBarbWireFXOnGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgonyComponent::execOnRep_IsInAgony)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsInAgony();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgonyComponent::execOnShowBarbWireFXOnGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowBarbWireFXOnGameEvent(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	static FName NAME_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic = FName(TEXT("HideAgonyBarbWireFX_Cosmetic"));
	void UAgonyComponent::HideAgonyBarbWireFX_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic),NULL);
	}
	static FName NAME_UAgonyComponent_OnAgonyChanged_Cosmetic = FName(TEXT("OnAgonyChanged_Cosmetic"));
	void UAgonyComponent::OnAgonyChanged_Cosmetic(bool NewIsInAgony)
	{
		AgonyComponent_eventOnAgonyChanged_Cosmetic_Parms Parms;
		Parms.NewIsInAgony=NewIsInAgony ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_OnAgonyChanged_Cosmetic),&Parms);
	}
	static FName NAME_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic = FName(TEXT("OnHitByTormentAttackTrail_Cosmetic"));
	void UAgonyComponent::OnHitByTormentAttackTrail_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic),NULL);
	}
	static FName NAME_UAgonyComponent_OnHitInAgony_Cosmetic = FName(TEXT("OnHitInAgony_Cosmetic"));
	void UAgonyComponent::OnHitInAgony_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_OnHitInAgony_Cosmetic),NULL);
	}
	static FName NAME_UAgonyComponent_OnLocallyObservedChanged = FName(TEXT("OnLocallyObservedChanged"));
	void UAgonyComponent::OnLocallyObservedChanged(bool isLocallyObserved)
	{
		AgonyComponent_eventOnLocallyObservedChanged_Parms Parms;
		Parms.isLocallyObserved=isLocallyObserved ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_OnLocallyObservedChanged),&Parms);
	}
	static FName NAME_UAgonyComponent_OnTrailEffectStart_Cosmetic = FName(TEXT("OnTrailEffectStart_Cosmetic"));
	void UAgonyComponent::OnTrailEffectStart_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_OnTrailEffectStart_Cosmetic),NULL);
	}
	static FName NAME_UAgonyComponent_OnTrailEffectStop_Cosmetic = FName(TEXT("OnTrailEffectStop_Cosmetic"));
	void UAgonyComponent::OnTrailEffectStop_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_OnTrailEffectStop_Cosmetic),NULL);
	}
	static FName NAME_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic = FName(TEXT("ShowAgonyBarbWireFX_Cosmetic"));
	void UAgonyComponent::ShowAgonyBarbWireFX_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic),NULL);
	}
	void UAgonyComponent::StaticRegisterNativesUAgonyComponent()
	{
		UClass* Class = UAgonyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnAttackTrailDamageCooldownTimerDone", &UAgonyComponent::execAuthority_OnAttackTrailDamageCooldownTimerDone },
			{ "Authority_OnDrainStageChanged", &UAgonyComponent::execAuthority_OnDrainStageChanged },
			{ "IsAgonyMoriable", &UAgonyComponent::execIsAgonyMoriable },
			{ "IsInAgony", &UAgonyComponent::execIsInAgony },
			{ "OnHideBarbWireFXOnGameEvent", &UAgonyComponent::execOnHideBarbWireFXOnGameEvent },
			{ "OnRep_IsInAgony", &UAgonyComponent::execOnRep_IsInAgony },
			{ "OnShowBarbWireFXOnGameEvent", &UAgonyComponent::execOnShowBarbWireFXOnGameEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "Authority_OnAttackTrailDamageCooldownTimerDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics
	{
		struct AgonyComponent_eventAuthority_OnDrainStageChanged_Parms
		{
			int32 drainStage;
			ADBDPlayer* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drainStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_drainStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgonyComponent_eventAuthority_OnDrainStageChanged_Parms, target), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_drainStage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_drainStage = { "drainStage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgonyComponent_eventAuthority_OnDrainStageChanged_Parms, drainStage), METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_drainStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_drainStage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::NewProp_drainStage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "Authority_OnDrainStageChanged", nullptr, nullptr, sizeof(AgonyComponent_eventAuthority_OnDrainStageChanged_Parms), Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "HideAgonyBarbWireFX_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics
	{
		struct AgonyComponent_eventIsAgonyMoriable_Parms
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
	void Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AgonyComponent_eventIsAgonyMoriable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AgonyComponent_eventIsAgonyMoriable_Parms), &Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "IsAgonyMoriable", nullptr, nullptr, sizeof(AgonyComponent_eventIsAgonyMoriable_Parms), Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics
	{
		struct AgonyComponent_eventIsInAgony_Parms
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
	void Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AgonyComponent_eventIsInAgony_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AgonyComponent_eventIsInAgony_Parms), &Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "IsInAgony", nullptr, nullptr, sizeof(AgonyComponent_eventIsInAgony_Parms), Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_IsInAgony()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_IsInAgony_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewIsInAgony_MetaData[];
#endif
		static void NewProp_NewIsInAgony_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsInAgony;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony_SetBit(void* Obj)
	{
		((AgonyComponent_eventOnAgonyChanged_Cosmetic_Parms*)Obj)->NewIsInAgony = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony = { "NewIsInAgony", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AgonyComponent_eventOnAgonyChanged_Cosmetic_Parms), &Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::NewProp_NewIsInAgony,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnAgonyChanged_Cosmetic", nullptr, nullptr, sizeof(AgonyComponent_eventOnAgonyChanged_Cosmetic_Parms), Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics
	{
		struct AgonyComponent_eventOnHideBarbWireFXOnGameEvent_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgonyComponent_eventOnHideBarbWireFXOnGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgonyComponent_eventOnHideBarbWireFXOnGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnHideBarbWireFXOnGameEvent", nullptr, nullptr, sizeof(AgonyComponent_eventOnHideBarbWireFXOnGameEvent_Parms), Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnHitByTormentAttackTrail_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnHitInAgony_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics
	{
		static void NewProp_isLocallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocallyObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved_SetBit(void* Obj)
	{
		((AgonyComponent_eventOnLocallyObservedChanged_Parms*)Obj)->isLocallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved = { "isLocallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AgonyComponent_eventOnLocallyObservedChanged_Parms), &Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::NewProp_isLocallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, sizeof(AgonyComponent_eventOnLocallyObservedChanged_Parms), Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnRep_IsInAgony", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics
	{
		struct AgonyComponent_eventOnShowBarbWireFXOnGameEvent_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgonyComponent_eventOnShowBarbWireFXOnGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgonyComponent_eventOnShowBarbWireFXOnGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnShowBarbWireFXOnGameEvent", nullptr, nullptr, sizeof(AgonyComponent_eventOnShowBarbWireFXOnGameEvent_Parms), Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnTrailEffectStart_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "OnTrailEffectStop_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgonyComponent, nullptr, "ShowAgonyBarbWireFX_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAgonyComponent_NoRegister()
	{
		return UAgonyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAgonyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideAgonyFXEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hideAgonyFXEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hideAgonyFXEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showAgonyFXEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__showAgonyFXEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__showAgonyFXEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attackTrailDamageCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attackTrailDamageCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inAttackTrailDamageCooldown_MetaData[];
#endif
		static void NewProp__inAttackTrailDamageCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inAttackTrailDamageCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__agonyNumberOfHookForMiniMori_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__agonyNumberOfHookForMiniMori;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAgonyMoriable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isAgonyMoriable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInAgony_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isInAgony;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgonyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAgonyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone, "Authority_OnAttackTrailDamageCooldownTimerDone" }, // 3127023233
		{ &Z_Construct_UFunction_UAgonyComponent_Authority_OnDrainStageChanged, "Authority_OnDrainStageChanged" }, // 3058406306
		{ &Z_Construct_UFunction_UAgonyComponent_HideAgonyBarbWireFX_Cosmetic, "HideAgonyBarbWireFX_Cosmetic" }, // 1352509919
		{ &Z_Construct_UFunction_UAgonyComponent_IsAgonyMoriable, "IsAgonyMoriable" }, // 2793834437
		{ &Z_Construct_UFunction_UAgonyComponent_IsInAgony, "IsInAgony" }, // 1082303592
		{ &Z_Construct_UFunction_UAgonyComponent_OnAgonyChanged_Cosmetic, "OnAgonyChanged_Cosmetic" }, // 131042083
		{ &Z_Construct_UFunction_UAgonyComponent_OnHideBarbWireFXOnGameEvent, "OnHideBarbWireFXOnGameEvent" }, // 1354062463
		{ &Z_Construct_UFunction_UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic, "OnHitByTormentAttackTrail_Cosmetic" }, // 1462938104
		{ &Z_Construct_UFunction_UAgonyComponent_OnHitInAgony_Cosmetic, "OnHitInAgony_Cosmetic" }, // 4115058254
		{ &Z_Construct_UFunction_UAgonyComponent_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 257389385
		{ &Z_Construct_UFunction_UAgonyComponent_OnRep_IsInAgony, "OnRep_IsInAgony" }, // 2110855047
		{ &Z_Construct_UFunction_UAgonyComponent_OnShowBarbWireFXOnGameEvent, "OnShowBarbWireFXOnGameEvent" }, // 1514270782
		{ &Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStart_Cosmetic, "OnTrailEffectStart_Cosmetic" }, // 2552839194
		{ &Z_Construct_UFunction_UAgonyComponent_OnTrailEffectStop_Cosmetic, "OnTrailEffectStop_Cosmetic" }, // 3340641196
		{ &Z_Construct_UFunction_UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic, "ShowAgonyBarbWireFX_Cosmetic" }, // 540769302
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgonyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents_MetaData[] = {
		{ "Category", "AgonyComponent" },
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents = { "_hideAgonyFXEvents", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAgonyComponent, _hideAgonyFXEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents_Inner = { "_hideAgonyFXEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgonyDisplayFxEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents_MetaData[] = {
		{ "Category", "AgonyComponent" },
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents = { "_showAgonyFXEvents", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAgonyComponent, _showAgonyFXEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents_Inner = { "_showAgonyFXEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgonyDisplayFxEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__attackTrailDamageCooldownTime_MetaData[] = {
		{ "Category", "AgonyComponent" },
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__attackTrailDamageCooldownTime = { "_attackTrailDamageCooldownTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAgonyComponent, _attackTrailDamageCooldownTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__attackTrailDamageCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__attackTrailDamageCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown_SetBit(void* Obj)
	{
		((UAgonyComponent*)Obj)->_inAttackTrailDamageCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown = { "_inAttackTrailDamageCooldown", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAgonyComponent), &Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__agonyNumberOfHookForMiniMori_MetaData[] = {
		{ "Category", "AgonyComponent" },
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__agonyNumberOfHookForMiniMori = { "_agonyNumberOfHookForMiniMori", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAgonyComponent, _agonyNumberOfHookForMiniMori), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__agonyNumberOfHookForMiniMori_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__agonyNumberOfHookForMiniMori_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isAgonyMoriable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isAgonyMoriable = { "_isAgonyMoriable", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAgonyComponent, _isAgonyMoriable), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isAgonyMoriable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isAgonyMoriable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isInAgony_MetaData[] = {
		{ "ModuleRelativePath", "Public/AgonyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isInAgony = { "_isInAgony", "OnRep_IsInAgony", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAgonyComponent, _isInAgony), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isInAgony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isInAgony_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgonyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__hideAgonyFXEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__showAgonyFXEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__attackTrailDamageCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__inAttackTrailDamageCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__agonyNumberOfHookForMiniMori,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isAgonyMoriable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgonyComponent_Statics::NewProp__isInAgony,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAgonyComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USurvivorStatusInterface_NoRegister, (int32)VTABLE_OFFSET(UAgonyComponent, ISurvivorStatusInterface), false },
			{ Z_Construct_UClass_UTormentAttackDamageCooldownInterface_NoRegister, (int32)VTABLE_OFFSET(UAgonyComponent, ITormentAttackDamageCooldownInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgonyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgonyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgonyComponent_Statics::ClassParams = {
		&UAgonyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAgonyComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAgonyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgonyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgonyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgonyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgonyComponent, 2079112742);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAgonyComponent>()
	{
		return UAgonyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgonyComponent(Z_Construct_UClass_UAgonyComponent, &UAgonyComponent::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAgonyComponent"), false, nullptr, nullptr, nullptr);

	void UAgonyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInAgony(TEXT("_isInAgony"));
		static const FName Name__isAgonyMoriable(TEXT("_isAgonyMoriable"));
		static const FName Name__inAttackTrailDamageCooldown(TEXT("_inAttackTrailDamageCooldown"));

		const bool bIsValid = true
			&& Name__isInAgony == ClassReps[(int32)ENetFields_Private::_isInAgony].Property->GetFName()
			&& Name__isAgonyMoriable == ClassReps[(int32)ENetFields_Private::_isAgonyMoriable].Property->GetFName()
			&& Name__inAttackTrailDamageCooldown == ClassReps[(int32)ENetFields_Private::_inAttackTrailDamageCooldown].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAgonyComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgonyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
