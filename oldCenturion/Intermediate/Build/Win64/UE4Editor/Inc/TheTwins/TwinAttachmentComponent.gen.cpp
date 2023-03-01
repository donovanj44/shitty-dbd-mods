// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinAttachmentComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinAttachmentComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperDamageState();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinAttachmentComponent::execAuthority_OnRemoveTwinChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnRemoveTwinChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execIsAttachedToSister)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachedToSister();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execIsAttachedToSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachedToSurvivor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execMulticast_QuickDestroyTwin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_QuickDestroyTwin_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execOnAttachedSurvivorDamageStateChanged)
	{
		P_GET_ENUM(ECamperDamageState,Z_Param_oldState);
		P_GET_ENUM(ECamperDamageState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachedSurvivorDamageStateChanged(ECamperDamageState(Z_Param_oldState),ECamperDamageState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execOnImmobilizedStateChanged)
	{
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_oldImmobilizeState);
		P_GET_ENUM(ECamperImmobilizeState,Z_Param_newImmobilizeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImmobilizedStateChanged(ECamperImmobilizeState(Z_Param_oldImmobilizeState),ECamperImmobilizeState(Z_Param_newImmobilizeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execOnMoriMontageEnd)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoriMontageEnd(Z_Param_montage,Z_Param_interrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinAttachmentComponent::execOnRep_AttachedPlayer)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_oldAttachedPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachedPlayer(Z_Param_oldAttachedPlayer);
		P_NATIVE_END;
	}
	static FName NAME_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister = FName(TEXT("Cosmetic_OnTwinAttachedToSister"));
	void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSister(ADBDPlayer* sister, ADBDPlayer* brother, bool isFirstAttachment)
	{
		TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms Parms;
		Parms.sister=sister;
		Parms.brother=brother;
		Parms.isFirstAttachment=isFirstAttachment ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister),&Parms);
	}
	static FName NAME_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor = FName(TEXT("Cosmetic_OnTwinAttachedToSurvivor"));
	void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother)
	{
		TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSurvivor_Parms Parms;
		Parms.survivor=survivor;
		Parms.brother=brother;
		ProcessEvent(FindFunctionChecked(NAME_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor),&Parms);
	}
	static FName NAME_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister = FName(TEXT("Cosmetic_OnTwinDetachedFromSister"));
	void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSister(ADBDPlayer* sister, ADBDPlayer* brother)
	{
		TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSister_Parms Parms;
		Parms.sister=sister;
		Parms.brother=brother;
		ProcessEvent(FindFunctionChecked(NAME_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister),&Parms);
	}
	static FName NAME_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor = FName(TEXT("Cosmetic_OnTwinDetachedFromSurvivor"));
	void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother)
	{
		TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSurvivor_Parms Parms;
		Parms.survivor=survivor;
		Parms.brother=brother;
		ProcessEvent(FindFunctionChecked(NAME_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor),&Parms);
	}
	static FName NAME_UTwinAttachmentComponent_Multicast_QuickDestroyTwin = FName(TEXT("Multicast_QuickDestroyTwin"));
	void UTwinAttachmentComponent::Multicast_QuickDestroyTwin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTwinAttachmentComponent_Multicast_QuickDestroyTwin),NULL);
	}
	void UTwinAttachmentComponent::StaticRegisterNativesUTwinAttachmentComponent()
	{
		UClass* Class = UTwinAttachmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnRemoveTwinChargePercentChanged", &UTwinAttachmentComponent::execAuthority_OnRemoveTwinChargePercentChanged },
			{ "IsAttachedToSister", &UTwinAttachmentComponent::execIsAttachedToSister },
			{ "IsAttachedToSurvivor", &UTwinAttachmentComponent::execIsAttachedToSurvivor },
			{ "Multicast_QuickDestroyTwin", &UTwinAttachmentComponent::execMulticast_QuickDestroyTwin },
			{ "OnAttachedSurvivorDamageStateChanged", &UTwinAttachmentComponent::execOnAttachedSurvivorDamageStateChanged },
			{ "OnImmobilizedStateChanged", &UTwinAttachmentComponent::execOnImmobilizedStateChanged },
			{ "OnLevelReadyToPlay", &UTwinAttachmentComponent::execOnLevelReadyToPlay },
			{ "OnMoriMontageEnd", &UTwinAttachmentComponent::execOnMoriMontageEnd },
			{ "OnRep_AttachedPlayer", &UTwinAttachmentComponent::execOnRep_AttachedPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics
	{
		struct TwinAttachmentComponent_eventAuthority_OnRemoveTwinChargePercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventAuthority_OnRemoveTwinChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventAuthority_OnRemoveTwinChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventAuthority_OnRemoveTwinChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "Authority_OnRemoveTwinChargePercentChanged", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventAuthority_OnRemoveTwinChargePercentChanged_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics
	{
		static void NewProp_isFirstAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFirstAttachment;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sister;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_isFirstAttachment_SetBit(void* Obj)
	{
		((TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms*)Obj)->isFirstAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_isFirstAttachment = { "isFirstAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms), &Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_isFirstAttachment_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms, brother), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_sister = { "sister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms, sister), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_isFirstAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::NewProp_sister,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "Cosmetic_OnTwinAttachedToSister", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSurvivor_Parms, brother), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSurvivor_Parms, survivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "Cosmetic_OnTwinAttachedToSurvivor", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSurvivor_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sister;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSister_Parms, brother), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::NewProp_sister = { "sister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSister_Parms, sister), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::NewProp_sister,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "Cosmetic_OnTwinDetachedFromSister", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSister_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brother;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::NewProp_brother = { "brother", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSurvivor_Parms, brother), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSurvivor_Parms, survivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::NewProp_brother,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "Cosmetic_OnTwinDetachedFromSurvivor", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSurvivor_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics
	{
		struct TwinAttachmentComponent_eventIsAttachedToSister_Parms
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
	void Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinAttachmentComponent_eventIsAttachedToSister_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinAttachmentComponent_eventIsAttachedToSister_Parms), &Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "IsAttachedToSister", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventIsAttachedToSister_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics
	{
		struct TwinAttachmentComponent_eventIsAttachedToSurvivor_Parms
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
	void Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinAttachmentComponent_eventIsAttachedToSurvivor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinAttachmentComponent_eventIsAttachedToSurvivor_Parms), &Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "IsAttachedToSurvivor", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventIsAttachedToSurvivor_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "Multicast_QuickDestroyTwin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics
	{
		struct TwinAttachmentComponent_eventOnAttachedSurvivorDamageStateChanged_Parms
		{
			ECamperDamageState oldState;
			ECamperDamageState newState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventOnAttachedSurvivorDamageStateChanged_Parms, newState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState = { "oldState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventOnAttachedSurvivorDamageStateChanged_Parms, oldState), Z_Construct_UEnum_DeadByDaylight_ECamperDamageState, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::NewProp_oldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "OnAttachedSurvivorDamageStateChanged", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventOnAttachedSurvivorDamageStateChanged_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics
	{
		struct TwinAttachmentComponent_eventOnImmobilizedStateChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState = { "newImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventOnImmobilizedStateChanged_Parms, newImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState = { "oldImmobilizeState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventOnImmobilizedStateChanged_Parms, oldImmobilizeState), Z_Construct_UEnum_DeadByDaylight_ECamperImmobilizeState, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_newImmobilizeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::NewProp_oldImmobilizeState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "OnImmobilizedStateChanged", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventOnImmobilizedStateChanged_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics
	{
		struct TwinAttachmentComponent_eventOnMoriMontageEnd_Parms
		{
			FAnimationMontageDescriptor montage;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((TwinAttachmentComponent_eventOnMoriMontageEnd_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinAttachmentComponent_eventOnMoriMontageEnd_Parms), &Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventOnMoriMontageEnd_Parms, montage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "OnMoriMontageEnd", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventOnMoriMontageEnd_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics
	{
		struct TwinAttachmentComponent_eventOnRep_AttachedPlayer_Parms
		{
			ADBDPlayer* oldAttachedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldAttachedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::NewProp_oldAttachedPlayer = { "oldAttachedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinAttachmentComponent_eventOnRep_AttachedPlayer_Parms, oldAttachedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::NewProp_oldAttachedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinAttachmentComponent, nullptr, "OnRep_AttachedPlayer", nullptr, nullptr, sizeof(TwinAttachmentComponent_eventOnRep_AttachedPlayer_Parms), Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinAttachmentComponent_NoRegister()
	{
		return UTwinAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapeBlockerLingerTimers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__escapeBlockerLingerTimers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapeBlockerLingerTimers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__escapeBlockerLingerTimers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cantEscapeByGateLingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cantEscapeByGateLingerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBeenDetachedBySurvivorDamageChanged_MetaData[];
#endif
		static void NewProp__hasBeenDetachedBySurvivorDamageChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBeenDetachedBySurvivorDamageChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gateBlockerStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gateBlockerStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__attachedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged, "Authority_OnRemoveTwinChargePercentChanged" }, // 769471802
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister, "Cosmetic_OnTwinAttachedToSister" }, // 1493823908
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor, "Cosmetic_OnTwinAttachedToSurvivor" }, // 3422753001
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister, "Cosmetic_OnTwinDetachedFromSister" }, // 2238656153
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor, "Cosmetic_OnTwinDetachedFromSurvivor" }, // 3965153251
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSister, "IsAttachedToSister" }, // 3539233385
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_IsAttachedToSurvivor, "IsAttachedToSurvivor" }, // 4013098265
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_Multicast_QuickDestroyTwin, "Multicast_QuickDestroyTwin" }, // 2102568819
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged, "OnAttachedSurvivorDamageStateChanged" }, // 356854262
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_OnImmobilizedStateChanged, "OnImmobilizedStateChanged" }, // 1518098215
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3383509273
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_OnMoriMontageEnd, "OnMoriMontageEnd" }, // 2034740219
		{ &Z_Construct_UFunction_UTwinAttachmentComponent_OnRep_AttachedPlayer, "OnRep_AttachedPlayer" }, // 2442016076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinAttachmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers = { "_escapeBlockerLingerTimers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinAttachmentComponent, _escapeBlockerLingerTimers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_Key_KeyProp = { "_escapeBlockerLingerTimers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_ValueProp = { "_escapeBlockerLingerTimers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__cantEscapeByGateLingerDuration_MetaData[] = {
		{ "Category", "TwinAttachmentComponent" },
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__cantEscapeByGateLingerDuration = { "_cantEscapeByGateLingerDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinAttachmentComponent, _cantEscapeByGateLingerDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__cantEscapeByGateLingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__cantEscapeByGateLingerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged_SetBit(void* Obj)
	{
		((UTwinAttachmentComponent*)Obj)->_hasBeenDetachedBySurvivorDamageChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged = { "_hasBeenDetachedBySurvivorDamageChanged", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinAttachmentComponent), &Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__gateBlockerStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__gateBlockerStatusEffect = { "_gateBlockerStatusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinAttachmentComponent, _gateBlockerStatusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__gateBlockerStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__gateBlockerStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__attachedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__attachedPlayer = { "_attachedPlayer", "OnRep_AttachedPlayer", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinAttachmentComponent, _attachedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__attachedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__attachedPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__escapeBlockerLingerTimers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__cantEscapeByGateLingerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__hasBeenDetachedBySurvivorDamageChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__gateBlockerStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinAttachmentComponent_Statics::NewProp__attachedPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinAttachmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinAttachmentComponent_Statics::ClassParams = {
		&UTwinAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinAttachmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinAttachmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinAttachmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinAttachmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinAttachmentComponent, 2329935593);
	template<> THETWINS_API UClass* StaticClass<UTwinAttachmentComponent>()
	{
		return UTwinAttachmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinAttachmentComponent(Z_Construct_UClass_UTwinAttachmentComponent, &UTwinAttachmentComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinAttachmentComponent"), false, nullptr, nullptr, nullptr);

	void UTwinAttachmentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__attachedPlayer(TEXT("_attachedPlayer"));

		const bool bIsValid = true
			&& Name__attachedPlayer == ClassReps[(int32)ENetFields_Private::_attachedPlayer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTwinAttachmentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
