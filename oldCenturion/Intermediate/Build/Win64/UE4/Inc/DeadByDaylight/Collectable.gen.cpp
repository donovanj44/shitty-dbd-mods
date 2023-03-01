// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Collectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAttachToSocketNameEnum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECollectableState();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemModifier_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECollectableCategory();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EItemHandPosition();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaItemProgressionBarEnum();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventCollectableCallback_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventCollectableCallback_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CollectableCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventCollectableCallback_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventCollectableOnCollectablePickedUpBP_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventCollectableOnCollectablePickedUpBP_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CollectableOnCollectablePickedUpBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventCollectableOnCollectablePickedUpBP_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACollectable::execAuthority_AddItemAddon)
	{
		P_GET_OBJECT(UItemAddon,Z_Param_addon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddItemAddon(Z_Param_addon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execAuthority_Discard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Discard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execAuthority_OnConsumed)
	{
		P_GET_UBOOL(Z_Param_forceDiscard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnConsumed(Z_Param_forceDiscard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execAuthority_RemoveItemAddon)
	{
		P_GET_OBJECT(UItemAddon,Z_Param_addon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveItemAddon(Z_Param_addon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execAuthority_Use)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Use();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execAuthority_UseReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_UseReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execCallOnCollectablePickedUpBP)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnCollectablePickedUpBP(FCollectableCallback(Z_Param_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execCanBeCollected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeCollected_Implementation(Z_Param_collector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execCanBeDropped)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_dropper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeDropped_Implementation(Z_Param_dropper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execCanUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUse_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execDebugPrintStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugPrintStats_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetCollector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetCollector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetDisplayedInputType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputInteractionType*)Z_Param__Result=P_THIS->GetDisplayedInputType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetIconFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIconFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetItemAddons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemAddon*>*)Z_Param__Result=P_THIS->GetItemAddons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetItemIconIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetItemIconIndex_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetItemInteractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractor**)Z_Param__Result=P_THIS->GetItemInteractor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetModifierMax)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_modifierType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_defaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetModifierMax(Z_Param_modifierType,Z_Param_defaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetModifierSum)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_modifierType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_defaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetModifierSum(Z_Param_modifierType,Z_Param_defaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execGetUsePercentLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUsePercentLeft_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execHasGameplayModifierFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_modifierFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGameplayModifierFlag(Z_Param_modifierFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsBeingUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBeingUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCollected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsCountDisplayForced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCountDisplayForced_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsInSearchable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInSearchable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsOnGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnGround();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsPickable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPickable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsRechargeable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRechargeable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execIsStored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStored();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execLocal_Dropped_Location)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_droppedBy);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_Dropped_Location(Z_Param_droppedBy,Z_Param_Out_location,Z_Param_Out_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execMulticast_Collected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_Collected_Validate(Z_Param_collector))
		{
			RPC_ValidateFailed(TEXT("Multicast_Collected_Validate"));
			return;
		}
		P_THIS->Multicast_Collected_Implementation(Z_Param_collector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execMulticast_Dropped)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_droppedBy);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_Dropped_Validate(Z_Param_droppedBy,Z_Param_location,Z_Param_rotation))
		{
			RPC_ValidateFailed(TEXT("Multicast_Dropped_Validate"));
			return;
		}
		P_THIS->Multicast_Dropped_Implementation(Z_Param_droppedBy,Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execMulticast_RemoveAllAddons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveAllAddons_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execMulticast_RemoveItemAddon)
	{
		P_GET_OBJECT(UItemAddon,Z_Param_addon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveItemAddon_Implementation(Z_Param_addon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execMulticast_Use)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_Use_Validate())
		{
			RPC_ValidateFailed(TEXT("Multicast_Use_Validate"));
			return;
		}
		P_THIS->Multicast_Use_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execMulticast_UseReleased)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_UseReleased_Validate(Z_Param_collector))
		{
			RPC_ValidateFailed(TEXT("Multicast_UseReleased_Validate"));
			return;
		}
		P_THIS->Multicast_UseReleased_Implementation(Z_Param_collector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnCollected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollected_Implementation(Z_Param_collector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnCollectorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_endPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectorEndPlay(Z_Param_actor,EEndPlayReason::Type(Z_Param_endPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnDropped)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_droppingPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropped_Implementation(Z_Param_droppingPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnFenceInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFenceInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnRep_BegunPlayFenceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BegunPlayFenceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnRep_Collector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Collector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUse_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execOnUseReleased)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUseReleased_Implementation(Z_Param_collector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execServer_Discard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Discard_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_Discard_Validate"));
			return;
		}
		P_THIS->Server_Discard_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execSetCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCount(Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execSetDisplayedInputType)
	{
		P_GET_ENUM(EInputInteractionType,Z_Param_displayedInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayedInputType(EInputInteractionType(Z_Param_displayedInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execSetItemInteractor)
	{
		P_GET_OBJECT(UInteractor,Z_Param_interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemInteractor(Z_Param_interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollectable::execSetVisibilityEvent)
	{
		P_GET_UBOOL(Z_Param_visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityEvent_Implementation(Z_Param_visibility);
		P_NATIVE_END;
	}
	static FName NAME_ACollectable_BP_OnSurvivorAdded = FName(TEXT("BP_OnSurvivorAdded"));
	void ACollectable::BP_OnSurvivorAdded(ACamperPlayer* survivor)
	{
		Collectable_eventBP_OnSurvivorAdded_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_BP_OnSurvivorAdded),&Parms);
	}
	static FName NAME_ACollectable_CanBeCollected = FName(TEXT("CanBeCollected"));
	bool ACollectable::CanBeCollected(const ADBDPlayer* collector) const
	{
		Collectable_eventCanBeCollected_Parms Parms;
		Parms.collector=collector;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_CanBeCollected),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACollectable_CanBeDropped = FName(TEXT("CanBeDropped"));
	bool ACollectable::CanBeDropped(const ADBDPlayer* dropper) const
	{
		Collectable_eventCanBeDropped_Parms Parms;
		Parms.dropper=dropper;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_CanBeDropped),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACollectable_CanUse = FName(TEXT("CanUse"));
	bool ACollectable::CanUse() const
	{
		Collectable_eventCanUse_Parms Parms;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_CanUse),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACollectable_DebugPrintStats = FName(TEXT("DebugPrintStats"));
	void ACollectable::DebugPrintStats()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_DebugPrintStats),NULL);
	}
	static FName NAME_ACollectable_GetCount = FName(TEXT("GetCount"));
	int32 ACollectable::GetCount() const
	{
		Collectable_eventGetCount_Parms Parms;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_GetCount),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ACollectable_GetItemIconIndex = FName(TEXT("GetItemIconIndex"));
	uint8 ACollectable::GetItemIconIndex() const
	{
		Collectable_eventGetItemIconIndex_Parms Parms;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_GetItemIconIndex),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ACollectable_GetUsePercentLeft = FName(TEXT("GetUsePercentLeft"));
	float ACollectable::GetUsePercentLeft() const
	{
		Collectable_eventGetUsePercentLeft_Parms Parms;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_GetUsePercentLeft),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ACollectable_IsCountDisplayForced = FName(TEXT("IsCountDisplayForced"));
	bool ACollectable::IsCountDisplayForced() const
	{
		Collectable_eventIsCountDisplayForced_Parms Parms;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_IsCountDisplayForced),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACollectable_IsRechargeable = FName(TEXT("IsRechargeable"));
	bool ACollectable::IsRechargeable() const
	{
		Collectable_eventIsRechargeable_Parms Parms;
		const_cast<ACollectable*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACollectable_IsRechargeable),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACollectable_Multicast_Collected = FName(TEXT("Multicast_Collected"));
	void ACollectable::Multicast_Collected(ADBDPlayer* collector)
	{
		Collectable_eventMulticast_Collected_Parms Parms;
		Parms.collector=collector;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Multicast_Collected),&Parms);
	}
	static FName NAME_ACollectable_Multicast_Dropped = FName(TEXT("Multicast_Dropped"));
	void ACollectable::Multicast_Dropped(ADBDPlayer* droppedBy, FVector const& location, FRotator const& rotation)
	{
		Collectable_eventMulticast_Dropped_Parms Parms;
		Parms.droppedBy=droppedBy;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Multicast_Dropped),&Parms);
	}
	static FName NAME_ACollectable_Multicast_RemoveAllAddons = FName(TEXT("Multicast_RemoveAllAddons"));
	void ACollectable::Multicast_RemoveAllAddons()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Multicast_RemoveAllAddons),NULL);
	}
	static FName NAME_ACollectable_Multicast_RemoveItemAddon = FName(TEXT("Multicast_RemoveItemAddon"));
	void ACollectable::Multicast_RemoveItemAddon(UItemAddon* addon)
	{
		Collectable_eventMulticast_RemoveItemAddon_Parms Parms;
		Parms.addon=addon;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Multicast_RemoveItemAddon),&Parms);
	}
	static FName NAME_ACollectable_Multicast_Use = FName(TEXT("Multicast_Use"));
	void ACollectable::Multicast_Use()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Multicast_Use),NULL);
	}
	static FName NAME_ACollectable_Multicast_UseReleased = FName(TEXT("Multicast_UseReleased"));
	void ACollectable::Multicast_UseReleased(ADBDPlayer* collector)
	{
		Collectable_eventMulticast_UseReleased_Parms Parms;
		Parms.collector=collector;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Multicast_UseReleased),&Parms);
	}
	static FName NAME_ACollectable_OnActivateDissolveItem = FName(TEXT("OnActivateDissolveItem"));
	void ACollectable::OnActivateDissolveItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnActivateDissolveItem),NULL);
	}
	static FName NAME_ACollectable_OnAddonsAdded = FName(TEXT("OnAddonsAdded"));
	void ACollectable::OnAddonsAdded(TArray<UItemAddon*> const& addons)
	{
		Collectable_eventOnAddonsAdded_Parms Parms;
		Parms.addons=addons;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnAddonsAdded),&Parms);
	}
	static FName NAME_ACollectable_OnAddonsRemoved = FName(TEXT("OnAddonsRemoved"));
	void ACollectable::OnAddonsRemoved(TArray<UItemAddon*> const& addons)
	{
		Collectable_eventOnAddonsRemoved_Parms Parms;
		Parms.addons=addons;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnAddonsRemoved),&Parms);
	}
	static FName NAME_ACollectable_OnCollected = FName(TEXT("OnCollected"));
	void ACollectable::OnCollected(ADBDPlayer* collector)
	{
		Collectable_eventOnCollected_Parms Parms;
		Parms.collector=collector;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnCollected),&Parms);
	}
	static FName NAME_ACollectable_OnCustomizationChanged = FName(TEXT("OnCustomizationChanged"));
	void ACollectable::OnCustomizationChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnCustomizationChanged),NULL);
	}
	static FName NAME_ACollectable_OnDropped = FName(TEXT("OnDropped"));
	void ACollectable::OnDropped(ADBDPlayer* droppingPlayer)
	{
		Collectable_eventOnDropped_Parms Parms;
		Parms.droppingPlayer=droppingPlayer;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnDropped),&Parms);
	}
	static FName NAME_ACollectable_OnPostItemAddonsCreation = FName(TEXT("OnPostItemAddonsCreation"));
	void ACollectable::OnPostItemAddonsCreation(ADBDPlayer* player)
	{
		Collectable_eventOnPostItemAddonsCreation_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnPostItemAddonsCreation),&Parms);
	}
	static FName NAME_ACollectable_OnUse = FName(TEXT("OnUse"));
	void ACollectable::OnUse()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnUse),NULL);
	}
	static FName NAME_ACollectable_OnUseReleased = FName(TEXT("OnUseReleased"));
	void ACollectable::OnUseReleased(ADBDPlayer* collector)
	{
		Collectable_eventOnUseReleased_Parms Parms;
		Parms.collector=collector;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_OnUseReleased),&Parms);
	}
	static FName NAME_ACollectable_Server_Discard = FName(TEXT("Server_Discard"));
	void ACollectable::Server_Discard()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_Server_Discard),NULL);
	}
	static FName NAME_ACollectable_SetVisibilityEvent = FName(TEXT("SetVisibilityEvent"));
	void ACollectable::SetVisibilityEvent(bool visibility)
	{
		Collectable_eventSetVisibilityEvent_Parms Parms;
		Parms.visibility=visibility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACollectable_SetVisibilityEvent),&Parms);
	}
	void ACollectable::StaticRegisterNativesACollectable()
	{
		UClass* Class = ACollectable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddItemAddon", &ACollectable::execAuthority_AddItemAddon },
			{ "Authority_Discard", &ACollectable::execAuthority_Discard },
			{ "Authority_OnConsumed", &ACollectable::execAuthority_OnConsumed },
			{ "Authority_RemoveItemAddon", &ACollectable::execAuthority_RemoveItemAddon },
			{ "Authority_Use", &ACollectable::execAuthority_Use },
			{ "Authority_UseReleased", &ACollectable::execAuthority_UseReleased },
			{ "CallOnCollectablePickedUpBP", &ACollectable::execCallOnCollectablePickedUpBP },
			{ "CanBeCollected", &ACollectable::execCanBeCollected },
			{ "CanBeDropped", &ACollectable::execCanBeDropped },
			{ "CanUse", &ACollectable::execCanUse },
			{ "DebugPrintStats", &ACollectable::execDebugPrintStats },
			{ "GetCollector", &ACollectable::execGetCollector },
			{ "GetCount", &ACollectable::execGetCount },
			{ "GetDisplayedInputType", &ACollectable::execGetDisplayedInputType },
			{ "GetIconFilePath", &ACollectable::execGetIconFilePath },
			{ "GetItemAddons", &ACollectable::execGetItemAddons },
			{ "GetItemIconIndex", &ACollectable::execGetItemIconIndex },
			{ "GetItemInteractor", &ACollectable::execGetItemInteractor },
			{ "GetModifierMax", &ACollectable::execGetModifierMax },
			{ "GetModifierSum", &ACollectable::execGetModifierSum },
			{ "GetUsePercentLeft", &ACollectable::execGetUsePercentLeft },
			{ "HasGameplayModifierFlag", &ACollectable::execHasGameplayModifierFlag },
			{ "IsBeingUsed", &ACollectable::execIsBeingUsed },
			{ "IsCollected", &ACollectable::execIsCollected },
			{ "IsCountDisplayForced", &ACollectable::execIsCountDisplayForced },
			{ "IsEquipped", &ACollectable::execIsEquipped },
			{ "IsInSearchable", &ACollectable::execIsInSearchable },
			{ "IsLocallyControlled", &ACollectable::execIsLocallyControlled },
			{ "IsOnGround", &ACollectable::execIsOnGround },
			{ "IsPickable", &ACollectable::execIsPickable },
			{ "IsRechargeable", &ACollectable::execIsRechargeable },
			{ "IsStored", &ACollectable::execIsStored },
			{ "Local_Dropped_Location", &ACollectable::execLocal_Dropped_Location },
			{ "Multicast_Collected", &ACollectable::execMulticast_Collected },
			{ "Multicast_Dropped", &ACollectable::execMulticast_Dropped },
			{ "Multicast_RemoveAllAddons", &ACollectable::execMulticast_RemoveAllAddons },
			{ "Multicast_RemoveItemAddon", &ACollectable::execMulticast_RemoveItemAddon },
			{ "Multicast_Use", &ACollectable::execMulticast_Use },
			{ "Multicast_UseReleased", &ACollectable::execMulticast_UseReleased },
			{ "OnCollected", &ACollectable::execOnCollected },
			{ "OnCollectorEndPlay", &ACollectable::execOnCollectorEndPlay },
			{ "OnDropped", &ACollectable::execOnDropped },
			{ "OnFenceInitialized", &ACollectable::execOnFenceInitialized },
			{ "OnRep_BegunPlayFenceName", &ACollectable::execOnRep_BegunPlayFenceName },
			{ "OnRep_Collector", &ACollectable::execOnRep_Collector },
			{ "OnRep_State", &ACollectable::execOnRep_State },
			{ "OnUse", &ACollectable::execOnUse },
			{ "OnUseReleased", &ACollectable::execOnUseReleased },
			{ "Server_Discard", &ACollectable::execServer_Discard },
			{ "SetCount", &ACollectable::execSetCount },
			{ "SetDisplayedInputType", &ACollectable::execSetDisplayedInputType },
			{ "SetItemInteractor", &ACollectable::execSetItemInteractor },
			{ "SetVisibilityEvent", &ACollectable::execSetVisibilityEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics
	{
		struct Collectable_eventAuthority_AddItemAddon_Parms
		{
			UItemAddon* addon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::NewProp_addon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::NewProp_addon = { "addon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventAuthority_AddItemAddon_Parms, addon), Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::NewProp_addon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::NewProp_addon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::NewProp_addon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Authority_AddItemAddon", nullptr, nullptr, sizeof(Collectable_eventAuthority_AddItemAddon_Parms), Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Authority_AddItemAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Authority_AddItemAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Authority_Discard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_Discard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Authority_Discard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Authority_Discard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_Discard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_Discard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Authority_Discard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Authority_Discard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics
	{
		struct Collectable_eventAuthority_OnConsumed_Parms
		{
			bool forceDiscard;
		};
		static void NewProp_forceDiscard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceDiscard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::NewProp_forceDiscard_SetBit(void* Obj)
	{
		((Collectable_eventAuthority_OnConsumed_Parms*)Obj)->forceDiscard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::NewProp_forceDiscard = { "forceDiscard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventAuthority_OnConsumed_Parms), &Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::NewProp_forceDiscard_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::NewProp_forceDiscard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Authority_OnConsumed", nullptr, nullptr, sizeof(Collectable_eventAuthority_OnConsumed_Parms), Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Authority_OnConsumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Authority_OnConsumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics
	{
		struct Collectable_eventAuthority_RemoveItemAddon_Parms
		{
			UItemAddon* addon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::NewProp_addon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::NewProp_addon = { "addon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventAuthority_RemoveItemAddon_Parms, addon), Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::NewProp_addon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::NewProp_addon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::NewProp_addon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Authority_RemoveItemAddon", nullptr, nullptr, sizeof(Collectable_eventAuthority_RemoveItemAddon_Parms), Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Authority_Use_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_Use_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Authority_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Authority_Use", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Authority_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Authority_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Authority_UseReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Authority_UseReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Authority_UseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Authority_UseReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Authority_UseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Authority_UseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Authority_UseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Authority_UseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventBP_OnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "BP_OnSurvivorAdded", nullptr, nullptr, sizeof(Collectable_eventBP_OnSurvivorAdded_Parms), Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics
	{
		struct Collectable_eventCallOnCollectablePickedUpBP_Parms
		{
			FScriptDelegate callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventCallOnCollectablePickedUpBP_Parms, callback), Z_Construct_UDelegateFunction_DeadByDaylight_CollectableCallback__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "CallOnCollectablePickedUpBP", nullptr, nullptr, sizeof(Collectable_eventCallOnCollectablePickedUpBP_Parms), Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_CanBeCollected_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventCanBeCollected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventCanBeCollected_Parms), &Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_collector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventCanBeCollected_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_collector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_collector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "CanBeCollected", nullptr, nullptr, sizeof(Collectable_eventCanBeCollected_Parms), Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_CanBeCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_CanBeCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_CanBeDropped_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dropper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dropper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventCanBeDropped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventCanBeDropped_Parms), &Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_dropper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_dropper = { "dropper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventCanBeDropped_Parms, dropper), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_dropper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_dropper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::NewProp_dropper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "CanBeDropped", nullptr, nullptr, sizeof(Collectable_eventCanBeDropped_Parms), Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_CanBeDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_CanBeDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_CanUse_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_CanUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventCanUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_CanUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventCanUse_Parms), &Z_Construct_UFunction_ACollectable_CanUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_CanUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_CanUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_CanUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_CanUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "CanUse", nullptr, nullptr, sizeof(Collectable_eventCanUse_Parms), Z_Construct_UFunction_ACollectable_CanUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_CanUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_CanUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_CanUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_CanUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_DebugPrintStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_DebugPrintStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_DebugPrintStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "DebugPrintStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_DebugPrintStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_DebugPrintStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_DebugPrintStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_DebugPrintStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetCollector_Statics
	{
		struct Collectable_eventGetCollector_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_GetCollector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetCollector_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetCollector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetCollector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetCollector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetCollector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetCollector", nullptr, nullptr, sizeof(Collectable_eventGetCollector_Parms), Z_Construct_UFunction_ACollectable_GetCollector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetCollector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetCollector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetCollector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetCollector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetCollector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetCount_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollectable_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetCount", nullptr, nullptr, sizeof(Collectable_eventGetCount_Parms), Z_Construct_UFunction_ACollectable_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics
	{
		struct Collectable_eventGetDisplayedInputType_Parms
		{
			EInputInteractionType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetDisplayedInputType_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetDisplayedInputType", nullptr, nullptr, sizeof(Collectable_eventGetDisplayedInputType_Parms), Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetDisplayedInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetDisplayedInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics
	{
		struct Collectable_eventGetIconFilePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetIconFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetIconFilePath", nullptr, nullptr, sizeof(Collectable_eventGetIconFilePath_Parms), Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetIconFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetIconFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetItemAddons_Statics
	{
		struct Collectable_eventGetItemAddons_Parms
		{
			TArray<UItemAddon*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetItemAddons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetItemAddons", nullptr, nullptr, sizeof(Collectable_eventGetItemAddons_Parms), Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetItemAddons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetItemAddons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetItemIconIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetItemIconIndex", nullptr, nullptr, sizeof(Collectable_eventGetItemIconIndex_Parms), Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetItemIconIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetItemIconIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics
	{
		struct Collectable_eventGetItemInteractor_Parms
		{
			UInteractor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetItemInteractor_Parms, ReturnValue), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetItemInteractor", nullptr, nullptr, sizeof(Collectable_eventGetItemInteractor_Parms), Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetItemInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetItemInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetModifierMax_Statics
	{
		struct Collectable_eventGetModifierMax_Parms
		{
			FGameplayTag modifierType;
			float defaultValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defaultValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modifierType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetModifierMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::NewProp_defaultValue = { "defaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetModifierMax_Parms, defaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::NewProp_modifierType = { "modifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetModifierMax_Parms, modifierType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::NewProp_defaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::NewProp_modifierType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetModifierMax", nullptr, nullptr, sizeof(Collectable_eventGetModifierMax_Parms), Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetModifierMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetModifierMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetModifierSum_Statics
	{
		struct Collectable_eventGetModifierSum_Parms
		{
			FGameplayTag modifierType;
			float defaultValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defaultValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modifierType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetModifierSum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::NewProp_defaultValue = { "defaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetModifierSum_Parms, defaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::NewProp_modifierType = { "modifierType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetModifierSum_Parms, modifierType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::NewProp_defaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::NewProp_modifierType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetModifierSum", nullptr, nullptr, sizeof(Collectable_eventGetModifierSum_Parms), Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetModifierSum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetModifierSum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventGetUsePercentLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "GetUsePercentLeft", nullptr, nullptr, sizeof(Collectable_eventGetUsePercentLeft_Parms), Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_GetUsePercentLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_GetUsePercentLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics
	{
		struct Collectable_eventHasGameplayModifierFlag_Parms
		{
			FGameplayTag modifierFlag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modifierFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventHasGameplayModifierFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventHasGameplayModifierFlag_Parms), &Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::NewProp_modifierFlag = { "modifierFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventHasGameplayModifierFlag_Parms, modifierFlag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::NewProp_modifierFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "HasGameplayModifierFlag", nullptr, nullptr, sizeof(Collectable_eventHasGameplayModifierFlag_Parms), Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics
	{
		struct Collectable_eventIsBeingUsed_Parms
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
	void Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsBeingUsed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsBeingUsed_Parms), &Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsBeingUsed", nullptr, nullptr, sizeof(Collectable_eventIsBeingUsed_Parms), Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsBeingUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsBeingUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsCollected_Statics
	{
		struct Collectable_eventIsCollected_Parms
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
	void Z_Construct_UFunction_ACollectable_IsCollected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsCollected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsCollected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsCollected_Parms), &Z_Construct_UFunction_ACollectable_IsCollected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsCollected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsCollected", nullptr, nullptr, sizeof(Collectable_eventIsCollected_Parms), Z_Construct_UFunction_ACollectable_IsCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsCountDisplayForced_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsCountDisplayForced_Parms), &Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsCountDisplayForced", nullptr, nullptr, sizeof(Collectable_eventIsCountDisplayForced_Parms), Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsCountDisplayForced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsCountDisplayForced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsEquipped_Statics
	{
		struct Collectable_eventIsEquipped_Parms
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
	void Z_Construct_UFunction_ACollectable_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsEquipped_Parms), &Z_Construct_UFunction_ACollectable_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsEquipped", nullptr, nullptr, sizeof(Collectable_eventIsEquipped_Parms), Z_Construct_UFunction_ACollectable_IsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsInSearchable_Statics
	{
		struct Collectable_eventIsInSearchable_Parms
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
	void Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsInSearchable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsInSearchable_Parms), &Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsInSearchable", nullptr, nullptr, sizeof(Collectable_eventIsInSearchable_Parms), Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsInSearchable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsInSearchable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics
	{
		struct Collectable_eventIsLocallyControlled_Parms
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
	void Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(Collectable_eventIsLocallyControlled_Parms), Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsOnGround_Statics
	{
		struct Collectable_eventIsOnGround_Parms
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
	void Z_Construct_UFunction_ACollectable_IsOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsOnGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsOnGround_Parms), &Z_Construct_UFunction_ACollectable_IsOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsOnGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsOnGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsOnGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsOnGround", nullptr, nullptr, sizeof(Collectable_eventIsOnGround_Parms), Z_Construct_UFunction_ACollectable_IsOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsOnGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsOnGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsOnGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsOnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsOnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsPickable_Statics
	{
		struct Collectable_eventIsPickable_Parms
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
	void Z_Construct_UFunction_ACollectable_IsPickable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsPickable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsPickable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsPickable_Parms), &Z_Construct_UFunction_ACollectable_IsPickable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsPickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsPickable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsPickable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsPickable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsPickable", nullptr, nullptr, sizeof(Collectable_eventIsPickable_Parms), Z_Construct_UFunction_ACollectable_IsPickable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsPickable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsPickable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsPickable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsPickable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsPickable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsRechargeable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsRechargeable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsRechargeable_Parms), &Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsRechargeable", nullptr, nullptr, sizeof(Collectable_eventIsRechargeable_Parms), Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsRechargeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsRechargeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_IsStored_Statics
	{
		struct Collectable_eventIsStored_Parms
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
	void Z_Construct_UFunction_ACollectable_IsStored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Collectable_eventIsStored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_IsStored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventIsStored_Parms), &Z_Construct_UFunction_ACollectable_IsStored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_IsStored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_IsStored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_IsStored_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_IsStored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "IsStored", nullptr, nullptr, sizeof(Collectable_eventIsStored_Parms), Z_Construct_UFunction_ACollectable_IsStored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsStored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_IsStored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_IsStored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_IsStored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_IsStored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics
	{
		struct Collectable_eventLocal_Dropped_Location_Parms
		{
			ADBDPlayer* droppedBy;
			FVector location;
			FRotator rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_droppedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventLocal_Dropped_Location_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventLocal_Dropped_Location_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_droppedBy = { "droppedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventLocal_Dropped_Location_Parms, droppedBy), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::NewProp_droppedBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Local_Dropped_Location", nullptr, nullptr, sizeof(Collectable_eventLocal_Dropped_Location_Parms), Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Local_Dropped_Location()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Local_Dropped_Location_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventMulticast_Collected_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Multicast_Collected", nullptr, nullptr, sizeof(Collectable_eventMulticast_Collected_Parms), Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Multicast_Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Multicast_Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_droppedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventMulticast_Dropped_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventMulticast_Dropped_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_droppedBy = { "droppedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventMulticast_Dropped_Parms, droppedBy), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::NewProp_droppedBy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Multicast_Dropped", nullptr, nullptr, sizeof(Collectable_eventMulticast_Dropped_Parms), Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Multicast_Dropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Multicast_Dropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Multicast_RemoveAllAddons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::NewProp_addon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::NewProp_addon = { "addon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventMulticast_RemoveItemAddon_Parms, addon), Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::NewProp_addon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::NewProp_addon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::NewProp_addon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Multicast_RemoveItemAddon", nullptr, nullptr, sizeof(Collectable_eventMulticast_RemoveItemAddon_Parms), Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Multicast_Use_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_Use_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Multicast_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Multicast_Use", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Multicast_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Multicast_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventMulticast_UseReleased_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Multicast_UseReleased", nullptr, nullptr, sizeof(Collectable_eventMulticast_UseReleased_Parms), Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Multicast_UseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Multicast_UseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnActivateDissolveItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnActivateDissolveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnActivateDissolveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnActivateDissolveItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnActivateDissolveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnActivateDissolveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnActivateDissolveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnActivateDissolveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_addons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons = { "addons", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnAddonsAdded_Parms, addons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons_Inner = { "addons", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::NewProp_addons_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnAddonsAdded", nullptr, nullptr, sizeof(Collectable_eventOnAddonsAdded_Parms), Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnAddonsAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnAddonsAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_addons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_addons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons = { "addons", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnAddonsRemoved_Parms, addons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons_Inner = { "addons", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::NewProp_addons_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnAddonsRemoved", nullptr, nullptr, sizeof(Collectable_eventOnAddonsRemoved_Parms), Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnAddonsRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnAddonsRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnCollected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnCollected_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnCollected_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnCollected_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnCollected", nullptr, nullptr, sizeof(Collectable_eventOnCollected_Parms), Z_Construct_UFunction_ACollectable_OnCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics
	{
		struct Collectable_eventOnCollectorEndPlay_Parms
		{
			AActor* actor;
			TEnumAsByte<EEndPlayReason::Type> endPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_endPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::NewProp_endPlayReason = { "endPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnCollectorEndPlay_Parms, endPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnCollectorEndPlay_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::NewProp_endPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnCollectorEndPlay", nullptr, nullptr, sizeof(Collectable_eventOnCollectorEndPlay_Parms), Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnCollectorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnCollectorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnCustomizationChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnCustomizationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnCustomizationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnCustomizationChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnCustomizationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnCustomizationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnCustomizationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnCustomizationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnDropped_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_droppingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnDropped_Statics::NewProp_droppingPlayer = { "droppingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnDropped_Parms, droppingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnDropped_Statics::NewProp_droppingPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnDropped", nullptr, nullptr, sizeof(Collectable_eventOnDropped_Parms), Z_Construct_UFunction_ACollectable_OnDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnDropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnFenceInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnFenceInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnFenceInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnFenceInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnFenceInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnFenceInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnFenceInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnFenceInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnPostItemAddonsCreation_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnPostItemAddonsCreation", nullptr, nullptr, sizeof(Collectable_eventOnPostItemAddonsCreation_Parms), Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnRep_BegunPlayFenceName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnRep_Collector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnRep_Collector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnRep_Collector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnRep_Collector", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnRep_Collector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnRep_Collector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnRep_Collector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnRep_Collector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnRep_State_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnRep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_OnUseReleased_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventOnUseReleased_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnUseReleased", nullptr, nullptr, sizeof(Collectable_eventOnUseReleased_Parms), Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_OnUseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_OnUseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_Server_Discard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_Server_Discard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_Server_Discard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "Server_Discard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_Server_Discard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_Server_Discard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_Server_Discard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_Server_Discard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_SetCount_Statics
	{
		struct Collectable_eventSetCount_Parms
		{
			int32 count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollectable_SetCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventSetCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_SetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_SetCount_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_SetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_SetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "SetCount", nullptr, nullptr, sizeof(Collectable_eventSetCount_Parms), Z_Construct_UFunction_ACollectable_SetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_SetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_SetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_SetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics
	{
		struct Collectable_eventSetDisplayedInputType_Parms
		{
			EInputInteractionType displayedInputType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displayedInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_displayedInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_displayedInputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType = { "displayedInputType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventSetDisplayedInputType_Parms, displayedInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::NewProp_displayedInputType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "SetDisplayedInputType", nullptr, nullptr, sizeof(Collectable_eventSetDisplayedInputType_Parms), Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_SetDisplayedInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_SetDisplayedInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics
	{
		struct Collectable_eventSetItemInteractor_Parms
		{
			UInteractor* interactor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::NewProp_interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::NewProp_interactor = { "interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collectable_eventSetItemInteractor_Parms, interactor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::NewProp_interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::NewProp_interactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::NewProp_interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "SetItemInteractor", nullptr, nullptr, sizeof(Collectable_eventSetItemInteractor_Parms), Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_SetItemInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_SetItemInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics
	{
		static void NewProp_visibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::NewProp_visibility_SetBit(void* Obj)
	{
		((Collectable_eventSetVisibilityEvent_Parms*)Obj)->visibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::NewProp_visibility = { "visibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collectable_eventSetVisibilityEvent_Parms), &Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::NewProp_visibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::NewProp_visibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "SetVisibilityEvent", nullptr, nullptr, sizeof(Collectable_eventSetVisibilityEvent_Parms), Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_SetVisibilityEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectable_SetVisibilityEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACollectable_NoRegister()
	{
		return ACollectable::StaticClass();
	}
	struct Z_Construct_UClass_ACollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disableAttachmentReplication_MetaData[];
#endif
		static void NewProp__disableAttachmentReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__disableAttachmentReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__discardWhenConsumed_MetaData[];
#endif
		static void NewProp__discardWhenConsumed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__discardWhenConsumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__itemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__itemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateTagForCollector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stateTagForCollector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectInInventoryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__collectInInventoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__collectInInventoryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachToSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__attachToSocketName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__attachToSocketName_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__begunPlayFenceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__begunPlayFenceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__itemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemAddons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__itemAddons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemAddons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstCollector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__firstCollector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__placementOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__placementOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayedInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__displayedInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__displayedInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beingConsumedByEntity_MetaData[];
#endif
		static void NewProp__beingConsumedByEntity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__beingConsumedByEntity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeingDropped_MetaData[];
#endif
		static void NewProp_BeingDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BeingDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeingCollected_MetaData[];
#endif
		static void NewProp_BeingCollected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BeingCollected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCollectablePickedUpBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollectablePickedUpBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldRegisterToOnSurvivorAdded_MetaData[];
#endif
		static void NewProp_ShouldRegisterToOnSurvivorAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldRegisterToOnSurvivorAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemModifier2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemModifier2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemModifier1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemModifier1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseItemModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseItemModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromPlayerSpawn_MetaData[];
#endif
		static void NewProp_FromPlayerSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromPlayerSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInUse_MetaData[];
#endif
		static void NewProp_IsInUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasUseInteraction_MetaData[];
#endif
		static void NewProp_HasUseInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasUseInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableArmOverrideDuringInteractions_MetaData[];
#endif
		static void NewProp_DisableArmOverrideDuringInteractions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableArmOverrideDuringInteractions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopRunningOnUse_MetaData[];
#endif
		static void NewProp_StopRunningOnUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopRunningOnUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleWhenEquipped_MetaData[];
#endif
		static void NewProp_VisibleWhenEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleWhenEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOnUse_MetaData[];
#endif
		static void NewProp_AimOnUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AimOnUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeOnUse_MetaData[];
#endif
		static void NewProp_StrafeOnUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StrafeOnUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverridenItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideItemIndex_MetaData[];
#endif
		static void NewProp_OverrideItemIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressBar;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressBar_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayUsePercent_MetaData[];
#endif
		static void NewProp_DisplayUsePercent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayUsePercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectable_Authority_AddItemAddon, "Authority_AddItemAddon" }, // 986030242
		{ &Z_Construct_UFunction_ACollectable_Authority_Discard, "Authority_Discard" }, // 85735974
		{ &Z_Construct_UFunction_ACollectable_Authority_OnConsumed, "Authority_OnConsumed" }, // 2044404981
		{ &Z_Construct_UFunction_ACollectable_Authority_RemoveItemAddon, "Authority_RemoveItemAddon" }, // 2688769111
		{ &Z_Construct_UFunction_ACollectable_Authority_Use, "Authority_Use" }, // 2586395637
		{ &Z_Construct_UFunction_ACollectable_Authority_UseReleased, "Authority_UseReleased" }, // 746136171
		{ &Z_Construct_UFunction_ACollectable_BP_OnSurvivorAdded, "BP_OnSurvivorAdded" }, // 1362622927
		{ &Z_Construct_UFunction_ACollectable_CallOnCollectablePickedUpBP, "CallOnCollectablePickedUpBP" }, // 2045328070
		{ &Z_Construct_UFunction_ACollectable_CanBeCollected, "CanBeCollected" }, // 3237844537
		{ &Z_Construct_UFunction_ACollectable_CanBeDropped, "CanBeDropped" }, // 2018995572
		{ &Z_Construct_UFunction_ACollectable_CanUse, "CanUse" }, // 2128593369
		{ &Z_Construct_UFunction_ACollectable_DebugPrintStats, "DebugPrintStats" }, // 288321512
		{ &Z_Construct_UFunction_ACollectable_GetCollector, "GetCollector" }, // 52344447
		{ &Z_Construct_UFunction_ACollectable_GetCount, "GetCount" }, // 156302879
		{ &Z_Construct_UFunction_ACollectable_GetDisplayedInputType, "GetDisplayedInputType" }, // 690446906
		{ &Z_Construct_UFunction_ACollectable_GetIconFilePath, "GetIconFilePath" }, // 3243795581
		{ &Z_Construct_UFunction_ACollectable_GetItemAddons, "GetItemAddons" }, // 2850475608
		{ &Z_Construct_UFunction_ACollectable_GetItemIconIndex, "GetItemIconIndex" }, // 1532482878
		{ &Z_Construct_UFunction_ACollectable_GetItemInteractor, "GetItemInteractor" }, // 89274807
		{ &Z_Construct_UFunction_ACollectable_GetModifierMax, "GetModifierMax" }, // 1593335876
		{ &Z_Construct_UFunction_ACollectable_GetModifierSum, "GetModifierSum" }, // 1945024732
		{ &Z_Construct_UFunction_ACollectable_GetUsePercentLeft, "GetUsePercentLeft" }, // 1338141107
		{ &Z_Construct_UFunction_ACollectable_HasGameplayModifierFlag, "HasGameplayModifierFlag" }, // 2335937510
		{ &Z_Construct_UFunction_ACollectable_IsBeingUsed, "IsBeingUsed" }, // 2547216406
		{ &Z_Construct_UFunction_ACollectable_IsCollected, "IsCollected" }, // 452787128
		{ &Z_Construct_UFunction_ACollectable_IsCountDisplayForced, "IsCountDisplayForced" }, // 290341215
		{ &Z_Construct_UFunction_ACollectable_IsEquipped, "IsEquipped" }, // 512005263
		{ &Z_Construct_UFunction_ACollectable_IsInSearchable, "IsInSearchable" }, // 1603985377
		{ &Z_Construct_UFunction_ACollectable_IsLocallyControlled, "IsLocallyControlled" }, // 2142649798
		{ &Z_Construct_UFunction_ACollectable_IsOnGround, "IsOnGround" }, // 1357526788
		{ &Z_Construct_UFunction_ACollectable_IsPickable, "IsPickable" }, // 1755335706
		{ &Z_Construct_UFunction_ACollectable_IsRechargeable, "IsRechargeable" }, // 2057868979
		{ &Z_Construct_UFunction_ACollectable_IsStored, "IsStored" }, // 2796975274
		{ &Z_Construct_UFunction_ACollectable_Local_Dropped_Location, "Local_Dropped_Location" }, // 1004592011
		{ &Z_Construct_UFunction_ACollectable_Multicast_Collected, "Multicast_Collected" }, // 1007176114
		{ &Z_Construct_UFunction_ACollectable_Multicast_Dropped, "Multicast_Dropped" }, // 1022447488
		{ &Z_Construct_UFunction_ACollectable_Multicast_RemoveAllAddons, "Multicast_RemoveAllAddons" }, // 3896248506
		{ &Z_Construct_UFunction_ACollectable_Multicast_RemoveItemAddon, "Multicast_RemoveItemAddon" }, // 688044808
		{ &Z_Construct_UFunction_ACollectable_Multicast_Use, "Multicast_Use" }, // 2049944413
		{ &Z_Construct_UFunction_ACollectable_Multicast_UseReleased, "Multicast_UseReleased" }, // 3892369967
		{ &Z_Construct_UFunction_ACollectable_OnActivateDissolveItem, "OnActivateDissolveItem" }, // 3583458882
		{ &Z_Construct_UFunction_ACollectable_OnAddonsAdded, "OnAddonsAdded" }, // 4040448988
		{ &Z_Construct_UFunction_ACollectable_OnAddonsRemoved, "OnAddonsRemoved" }, // 1558872392
		{ &Z_Construct_UFunction_ACollectable_OnCollected, "OnCollected" }, // 3680181849
		{ &Z_Construct_UFunction_ACollectable_OnCollectorEndPlay, "OnCollectorEndPlay" }, // 4068468192
		{ &Z_Construct_UFunction_ACollectable_OnCustomizationChanged, "OnCustomizationChanged" }, // 396579494
		{ &Z_Construct_UFunction_ACollectable_OnDropped, "OnDropped" }, // 1692759340
		{ &Z_Construct_UFunction_ACollectable_OnFenceInitialized, "OnFenceInitialized" }, // 2060651464
		{ &Z_Construct_UFunction_ACollectable_OnPostItemAddonsCreation, "OnPostItemAddonsCreation" }, // 2403157881
		{ &Z_Construct_UFunction_ACollectable_OnRep_BegunPlayFenceName, "OnRep_BegunPlayFenceName" }, // 1620590845
		{ &Z_Construct_UFunction_ACollectable_OnRep_Collector, "OnRep_Collector" }, // 1399677149
		{ &Z_Construct_UFunction_ACollectable_OnRep_State, "OnRep_State" }, // 3176971746
		{ &Z_Construct_UFunction_ACollectable_OnUse, "OnUse" }, // 2403162777
		{ &Z_Construct_UFunction_ACollectable_OnUseReleased, "OnUseReleased" }, // 2433356915
		{ &Z_Construct_UFunction_ACollectable_Server_Discard, "Server_Discard" }, // 2371052259
		{ &Z_Construct_UFunction_ACollectable_SetCount, "SetCount" }, // 4035641627
		{ &Z_Construct_UFunction_ACollectable_SetDisplayedInputType, "SetDisplayedInputType" }, // 3000352204
		{ &Z_Construct_UFunction_ACollectable_SetItemInteractor, "SetItemInteractor" }, // 2283742565
		{ &Z_Construct_UFunction_ACollectable_SetVisibilityEvent, "SetVisibilityEvent" }, // 2496510041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collectable.h" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->_disableAttachmentReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication = { "_disableAttachmentReplication", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->_discardWhenConsumed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed = { "_discardWhenConsumed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__itemType_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _itemType), Z_Construct_UEnum_DBDSharedTypes_ELoadoutItemType, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__itemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__itemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__itemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__stateTagForCollector_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__stateTagForCollector = { "_stateTagForCollector", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _stateTagForCollector), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__stateTagForCollector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__stateTagForCollector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType = { "_collectInInventoryType", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _collectInInventoryType), Z_Construct_UEnum_DeadByDaylight_EInventoryType, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName = { "_attachToSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _attachToSocketName), Z_Construct_UEnum_DeadByDaylight_EAttachToSocketNameEnum, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__begunPlayFenceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__begunPlayFenceName = { "_begunPlayFenceName", "OnRep_BegunPlayFenceName", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _begunPlayFenceName), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__begunPlayFenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__begunPlayFenceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__itemCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__itemCount = { "_itemCount", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _itemCount), METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__itemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__itemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons = { "_itemAddons", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _itemAddons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons_Inner = { "_itemAddons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemAddon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__state_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__state = { "_state", "OnRep_State", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _state), Z_Construct_UEnum_DeadByDaylight_ECollectableState, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__firstCollector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__firstCollector = { "_firstCollector", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _firstCollector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__firstCollector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__firstCollector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__collector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__collector = { "_collector", "OnRep_Collector", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__collector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__collector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__placementOrigin_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__placementOrigin = { "_placementOrigin", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _placementOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__placementOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__placementOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__objectState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__objectState = { "_objectState", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _objectState), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__objectState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__objectState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType = { "_displayedInputType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _displayedInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__mesh_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__mesh = { "_mesh", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__itemInteractor_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__itemInteractor = { "_itemInteractor", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, _itemInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__itemInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__itemInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->_beingConsumedByEntity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity = { "_beingConsumedByEntity", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->BeingDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped = { "BeingDropped", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->BeingCollected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected = { "BeingCollected", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollectablePickedUpBP_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollectablePickedUpBP = { "OnCollectablePickedUpBP", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, OnCollectablePickedUpBP), Z_Construct_UDelegateFunction_DeadByDaylight_CollectableOnCollectablePickedUpBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollectablePickedUpBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollectablePickedUpBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->ShouldRegisterToOnSurvivorAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded = { "ShouldRegisterToOnSurvivorAdded", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier2_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier2 = { "ItemModifier2", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, ItemModifier2), Z_Construct_UClass_UItemModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier1_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier1 = { "ItemModifier1", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, ItemModifier1), Z_Construct_UClass_UItemModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_BaseItemModifier_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_BaseItemModifier = { "BaseItemModifier", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, BaseItemModifier), Z_Construct_UClass_UItemModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_BaseItemModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_BaseItemModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->FromPlayerSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn = { "FromPlayerSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, ItemID), METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->IsInUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse = { "IsInUse", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, Category), Z_Construct_UEnum_DeadByDaylight_ECollectableCategory, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->HasUseInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction = { "HasUseInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->DisableArmOverrideDuringInteractions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions = { "DisableArmOverrideDuringInteractions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition = { "HandPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, HandPosition), Z_Construct_UEnum_DeadByDaylight_EItemHandPosition, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->StopRunningOnUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse = { "StopRunningOnUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->VisibleWhenEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped = { "VisibleWhenEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->AimOnUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse = { "AimOnUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->StrafeOnUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse = { "StrafeOnUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_OverridenItemIndex_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_OverridenItemIndex = { "OverridenItemIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, OverridenItemIndex), METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_OverridenItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_OverridenItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->OverrideItemIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex = { "OverrideItemIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, ProgressBar), Z_Construct_UEnum_DeadByDaylight_EAtlantaItemProgressionBarEnum, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Public/Collectable.h" },
	};
#endif
	void Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent_SetBit(void* Obj)
	{
		((ACollectable*)Obj)->DisplayUsePercent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent = { "DisplayUsePercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACollectable), &Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__disableAttachmentReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__discardWhenConsumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__itemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__itemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__stateTagForCollector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__collectInInventoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__attachToSocketName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__begunPlayFenceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__itemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__itemAddons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__firstCollector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__collector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__placementOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__objectState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__displayedInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__itemInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__beingConsumedByEntity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_BeingDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_BeingCollected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollectablePickedUpBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_ShouldRegisterToOnSurvivorAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_ItemModifier1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_BaseItemModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_FromPlayerSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_IsInUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_HasUseInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_DisableArmOverrideDuringInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_HandPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_StopRunningOnUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_VisibleWhenEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_AimOnUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_StrafeOnUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_OverridenItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_OverrideItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_ProgressBar_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_DisplayUsePercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollectable_Statics::ClassParams = {
		&ACollectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectable, 2022588949);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACollectable>()
	{
		return ACollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectable(Z_Construct_UClass_ACollectable, &ACollectable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACollectable"), false, nullptr, nullptr, nullptr);

	void ACollectable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__collector(TEXT("_collector"));
		static const FName Name__state(TEXT("_state"));
		static const FName Name__itemCount(TEXT("_itemCount"));
		static const FName Name__begunPlayFenceName(TEXT("_begunPlayFenceName"));

		const bool bIsValid = true
			&& Name__collector == ClassReps[(int32)ENetFields_Private::_collector].Property->GetFName()
			&& Name__state == ClassReps[(int32)ENetFields_Private::_state].Property->GetFName()
			&& Name__itemCount == ClassReps[(int32)ENetFields_Private::_itemCount].Property->GetFName()
			&& Name__begunPlayFenceName == ClassReps[(int32)ENetFields_Private::_begunPlayFenceName].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACollectable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
